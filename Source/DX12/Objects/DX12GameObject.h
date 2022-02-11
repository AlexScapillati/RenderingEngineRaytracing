//--------------------------------------------------------------------------------------
// Class encapsulating a model
//--------------------------------------------------------------------------------------
// Holds a pointer to a mesh as well as position, rotation and scaling, which are converted to a world matrix when required
// This is more of a convenience class, the Mesh class does most of the difficult work.

#pragma once

#include "../DX12Engine.h"
#include "../DX12Mesh.h"
#include "../CDX12Material.h"

enum KeyCode;

class CDX12GameObject
{
	public:
		//-------------------------------------
		// Construction / Usage
		//-------------------------------------

		// Copy constructor
		// Deep copy
		CDX12GameObject(CDX12GameObject&);

		// Simple object constructor
		// A mesh and a diffuse map are compulsory to render a model
		CDX12GameObject(CDX12Engine*       engine,
		                const std::string& mesh,
		                const std::string& name,
		                const std::string& diffuseMap,
		                CVector3           position = { 0,0,0 },
		                CVector3           rotation = { 0,0,0 },
		                float              scale    = 1);


		// "Smart" Constructor
		// Given an ID (That could be a file or a directory) this constructor will import all the files in that folder or the files that will contain that id
		// A GameObject to be rendered needs at least a mesh and a texture
		// Formats:
		// Folders: NAME_ID_TYPE
		// Meshes:	NAME_LOD_VARIATION.EXTENTION
		// Textures: ID_RESOLUTION_TYPE.EXTENTION
		CDX12GameObject(CDX12Engine*       engine,
		                std::string        id,
		                const std::string& name,
		                CVector3           position = { 0,0,0 },
		                CVector3           rotation = { 0,0,0 },
		                float              scale    = 1);

		virtual ~CDX12GameObject() = default;

		void Release();

		void Control(int     node,
		             float   frameTime,
		             KeyCode turnUp,
		             KeyCode turnDown,
		             KeyCode turnLeft,
		             KeyCode turnRight,
		             KeyCode turnCW,
		             KeyCode turnCCW,
		             KeyCode moveForward,
		             KeyCode moveBackward);


		void GetFilesInFolder(std::string&              dirPath,
		                      std::vector<std::string>& fileNames) const;

		//-------------------------------------
		// Data access
		//-------------------------------------

		//********************************
		// All functions now accept a "node" parameter which specifies which node in the hierarchy to use. Defaults to 0, the root.
		// The hierarchy is stored in depth-first order

		// Getters - model only stores matrices. Position, rotation and scale are extracted if requested.
		CVector3    Position(int node = 0); // Position is on bottom row of matrix
		CVector3    Rotation(int node = 0); // Getting angles from a matrix is complex - see .cpp file
		CVector3    Scale(int node = 0);    // Scale is length of rows 0-2 in matrix
		CMatrix4x4& WorldMatrix(int node = 0);

		CDX12Mesh* Mesh() const;

		std::string Name() const;

		void SetName(std::string n);

		float& ParallaxDepth();

		void SetParallaxDepth(float p);

		float* DirectPosition();

		bool* Enabled();

		std::string TextureFileName() const;

		CDX12Material* Material() const;

		float& Roughness();

		float& Metalness();

		void SetRoughness(float r);


		// Setters - model only stores matricies , so if user sets position, rotation or scale, just update those aspects of the matrix
		void SetPosition(CVector3 position,
		                 int      node = 0);

		virtual void SetRotation(CVector3 rotation,
		                         int      node = 0);

		// Two ways to set scale: x,y,z separately, or all to the same value
		// To set scale without affecting rotation, normalize each row, then multiply it by the scale value.
		void SetScale(CVector3 scale,
		              int      node = 0);

		// Similar function to the one above, Thiss will set the same scale to all three axis
		void SetScale(float scale);

		// This function will set the model world matrix
		void SetWorldMatrix(CMatrix4x4 matrix,
		                    int        node = 0);

		virtual void Render();

		// WIP, This will handle all the scripts and update the model's behaviour (similar to unity)
		bool Update(float updateTime);

		// Return the vector holding the meshes filenames
		std::vector<std::string>& GetMeshes();

		// Delete the current mesh and load the given one. It will not delete the current if the filename is wrong
		void LoadNewMesh(const std::string& newMesh);

		//-------------------------------------
		// Level of Detail and Mesh Variations
		//-------------------------------------

		// The functions below are for the the management of the various LODs and mesh variations that a model can have
		// It assumes that the number of variations for each model are the same E.g. 3 LODs with 3 variations each LOD (9 meshes)
		// For performance reason is better to load one mesh initially than load every lod and variations at startup.
		// So when the user wants it it can change the lod or variation in runtime loading the corrected mesh.
		// This however will freeze the current frame because assimp will need to load the mesh.

		// This function will return all the mesh variations filenames for the current LOD (Level of Detail)
		std::vector<std::string>& GetVariations();

		// Set the given mesh variation
		// It will check if the variation is valid
		// Not performance friendly, it will delete the current mesh and load a new one
		void SetVariation(int variation);

		// Return the current LOD
		int CurrentLOD() const;

		std::vector<std::vector<std::string>> LODs() const;


		int CurrentVariation() const;

		void SetLOD(int i);


	protected:
		//-------------------------------------
		// Private data / members
		//-------------------------------------
		CDX12Engine* mEngine;

		//the meshes that a model has (all the LODS that a model has)
		std::vector<std::string> mMeshFiles{};

		std::vector<std::string> mTextureFiles{};

		// All the lods that a mesh has, every lod will have multiple variations if any
		std::vector<std::vector<std::string>> mLODs{};

		// Store the current LOD and mesh variation rendered
		int mCurrentLOD = 0;
		int mCurrentVar = 0;

		// The acutual mesh class
		std::unique_ptr<CDX12Mesh> mMesh;

		// Each model has a parallax depth value 
		// For the models that have a displacement and a normal map this will modify the bumpyness of those textures
		float mParallaxDepth;

		// Each model has a roughness value. This because not every model will have a roguhness map. So we can change its roughness manually.
		// If a model has a roughness map. This will not make any changes.
		float mRoughness;
		float mMetalness;

		std::string mName;

		// This value controls the model visibility. If it is false the model will not be rendered (not cast/make shadows)
		bool mEnabled;


		// World matrices for the model
		// Now that meshes have multiple parts, we need multiple matrices. The root matrix (the first one) is the world matrix
		// for the entire model. The remaining matrices are relative to their parent part. The hierarchy is defined in the mesh (nodes)
		std::vector<CMatrix4x4> mWorldMatrices{};
};
