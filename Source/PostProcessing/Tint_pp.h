#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc Source\DX11\PostProcessing\Tint_pp.hlsl /nologo /O3
//    /FhD:\OneDrive - UCLan\UNI\3rd Year\GameEngineProject\Source\DX11\PostProcessing\Tint_pp.h
//    /Vng_Tint_pp /Tps_4_1
//
//
// Buffer Definitions: 
//
// cbuffer PostProcessingConstants
// {
//
//   float2 gArea2DTopLeft;             // Offset:    0 Size:     8 [unused]
//   float2 gArea2DSize;                // Offset:    8 Size:     8 [unused]
//   float gArea2DDepth;                // Offset:   16 Size:     4 [unused]
//   float3 paddingA;                   // Offset:   20 Size:    12 [unused]
//   float4 gPolygon2DPoints[4];        // Offset:   32 Size:    64 [unused]
//   float3 gTintColour;                // Offset:   96 Size:    12
//   float gNoiseStrength;              // Offset:  108 Size:     4 [unused]
//   float2 gNoiseScale;                // Offset:  112 Size:     8 [unused]
//   float2 gNoiseOffset;               // Offset:  120 Size:     8 [unused]
//   float gNoiseEdge;                  // Offset:  128 Size:     4 [unused]
//   float3 paddingB;                   // Offset:  132 Size:    12 [unused]
//   float gBurnHeight;                 // Offset:  144 Size:     4 [unused]
//   float3 paddingC;                   // Offset:  148 Size:    12 [unused]
//   float gDistortLevel;               // Offset:  160 Size:     4 [unused]
//   float3 paddingD;                   // Offset:  164 Size:    12 [unused]
//   float gSpiralLevel;                // Offset:  176 Size:     4 [unused]
//   float3 paddingE;                   // Offset:  180 Size:    12 [unused]
//   float gHeatHazeTimer;              // Offset:  192 Size:     4 [unused]
//   float heatEffectStrength;          // Offset:  196 Size:     4 [unused]
//   float heatSoftEdge;                // Offset:  200 Size:     4 [unused]
//   float paddingF;                    // Offset:  204 Size:     4 [unused]
//   float gCAAmount;                   // Offset:  208 Size:     4 [unused]
//   float gCAEdge;                     // Offset:  212 Size:     4 [unused]
//   float gCAFalloff;                  // Offset:  216 Size:     4 [unused]
//   float paddingG;                    // Offset:  220 Size:     4 [unused]
//   float gBlurDirections;             // Offset:  224 Size:     4 [unused]
//      = 0x41800000 
//   float gBlurQuality;                // Offset:  228 Size:     4 [unused]
//      = 0x40400000 
//   float gBlurSize;                   // Offset:  232 Size:     4 [unused]
//      = 0x41000000 
//   float paddingH;                    // Offset:  236 Size:     4 [unused]
//   float gBloomThreshold;             // Offset:  240 Size:     4 [unused]
//      = 0x3f000000 
//   float3 paddingI;                   // Offset:  244 Size:    12 [unused]
//   float gSsaoStrenght;               // Offset:  256 Size:     4 [unused]
//      = 0x3f800000 
//   float gSsaoArea;                   // Offset:  260 Size:     4 [unused]
//      = 0x3e4ccccd 
//   float gSsaoFalloff;                // Offset:  264 Size:     4 [unused]
//      = 0x358637bd 
//   float gSsaoRadius;                 // Offset:  268 Size:     4 [unused]
//      = 0x3951b717 
//   float2 gLightScreenPos;            // Offset:  272 Size:     8 [unused]
//   float gWeight;                     // Offset:  280 Size:     4 [unused]
//   float gDecay;                      // Offset:  284 Size:     4 [unused]
//   float gExposure;                   // Offset:  288 Size:     4 [unused]
//   float gDensity;                    // Offset:  292 Size:     4 [unused]
//   int gNumSamples;                   // Offset:  296 Size:     4 [unused]
//   float paddingJ;                    // Offset:  300 Size:     4 [unused]
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// PointSample                       sampler      NA          NA    0        1
// SceneTexture                      texture  float4          2d    0        1
// PostProcessingConstants           cbuffer      NA          NA    1        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Position              0   xyzw        0      POS  float       
// sceneUV                  0   xy          1     NONE  float   xy  
// areaUV                   0   xy          2     NONE  float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Target                0   xyzw        0   TARGET  float   xyzw
//
ps_4_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb1[7], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear noperspective v1.xy
dcl_output o0.xyzw
dcl_temps 1
sample r0.xyz, v1.xyxx, t0.xyzw, s0
mul o0.xyz, r0.xyzx, cb1[6].xyzx
mov o0.w, l(1.000000)
ret 
// Approximately 4 instruction slots used
#endif

const BYTE g_Tint_pp[] =
{
     68,  88,  66,  67,  51, 143, 
     13, 149,  61, 236,  64, 235, 
     29,  99, 205,   0,  84, 125, 
    143,  88,   1,   0,   0,   0, 
    124,   9,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    156,   7,   0,   0,  16,   8, 
      0,   0,  68,   8,   0,   0, 
      0,   9,   0,   0,  82,  68, 
     69,  70,  96,   7,   0,   0, 
      1,   0,   0,   0, 176,   0, 
      0,   0,   3,   0,   0,   0, 
     28,   0,   0,   0,   1,   4, 
    255, 255,   0, 129,   0,   0, 
     45,   7,   0,   0, 124,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    136,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 149,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  80, 111, 
    105, 110, 116,  83,  97, 109, 
    112, 108, 101,   0,  83,  99, 
    101, 110, 101,  84, 101, 120, 
    116, 117, 114, 101,   0,  80, 
    111, 115, 116,  80, 114, 111, 
     99, 101, 115, 115, 105, 110, 
    103,  67, 111, 110, 115, 116, 
     97, 110, 116, 115,   0, 171, 
    171, 171, 149,   0,   0,   0, 
     42,   0,   0,   0, 200,   0, 
      0,   0,  48,   1,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 184,   4,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
    200,   4,   0,   0,   0,   0, 
      0,   0, 216,   4,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
    200,   4,   0,   0,   0,   0, 
      0,   0, 228,   4,   0,   0, 
     16,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,   4,   5,   0,   0, 
     20,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   5,   0,   0,   0,   0, 
      0,   0,  32,   5,   0,   0, 
     32,   0,   0,   0,  64,   0, 
      0,   0,   0,   0,   0,   0, 
     52,   5,   0,   0,   0,   0, 
      0,   0,  68,   5,   0,   0, 
     96,   0,   0,   0,  12,   0, 
      0,   0,   2,   0,   0,   0, 
     16,   5,   0,   0,   0,   0, 
      0,   0,  80,   5,   0,   0, 
    108,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,  95,   5,   0,   0, 
    112,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
    200,   4,   0,   0,   0,   0, 
      0,   0, 107,   5,   0,   0, 
    120,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
    200,   4,   0,   0,   0,   0, 
      0,   0, 120,   5,   0,   0, 
    128,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 131,   5,   0,   0, 
    132,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   5,   0,   0,   0,   0, 
      0,   0, 140,   5,   0,   0, 
    144,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 152,   5,   0,   0, 
    148,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   5,   0,   0,   0,   0, 
      0,   0, 161,   5,   0,   0, 
    160,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 175,   5,   0,   0, 
    164,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   5,   0,   0,   0,   0, 
      0,   0, 184,   5,   0,   0, 
    176,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 197,   5,   0,   0, 
    180,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   5,   0,   0,   0,   0, 
      0,   0, 206,   5,   0,   0, 
    192,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 221,   5,   0,   0, 
    196,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 240,   5,   0,   0, 
    200,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 253,   5,   0,   0, 
    204,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,   6,   6,   0,   0, 
    208,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,  16,   6,   0,   0, 
    212,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,  24,   6,   0,   0, 
    216,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,  35,   6,   0,   0, 
    220,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,  44,   6,   0,   0, 
    224,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,  60,   6, 
      0,   0,  64,   6,   0,   0, 
    228,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,  80,   6, 
      0,   0,  84,   6,   0,   0, 
    232,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,  96,   6, 
      0,   0, 100,   6,   0,   0, 
    236,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 109,   6,   0,   0, 
    240,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0, 128,   6, 
      0,   0, 132,   6,   0,   0, 
    244,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   5,   0,   0,   0,   0, 
      0,   0, 141,   6,   0,   0, 
      0,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0, 156,   6, 
      0,   0, 160,   6,   0,   0, 
      4,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0, 172,   6, 
      0,   0, 176,   6,   0,   0, 
      8,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0, 192,   6, 
      0,   0, 196,   6,   0,   0, 
     12,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0, 208,   6, 
      0,   0, 212,   6,   0,   0, 
     16,   1,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
    200,   4,   0,   0,   0,   0, 
      0,   0, 228,   6,   0,   0, 
     24,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 236,   6,   0,   0, 
     28,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 243,   6,   0,   0, 
     32,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 253,   6,   0,   0, 
     36,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0,   6,   7,   0,   0, 
     40,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
     20,   7,   0,   0,   0,   0, 
      0,   0,  36,   7,   0,   0, 
     44,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   4,   0,   0,   0,   0, 
      0,   0, 103,  65, 114, 101, 
     97,  50,  68,  84, 111, 112, 
     76, 101, 102, 116,   0, 171, 
      1,   0,   3,   0,   1,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 103,  65, 
    114, 101,  97,  50,  68,  83, 
    105, 122, 101,   0, 103,  65, 
    114, 101,  97,  50,  68,  68, 
    101, 112, 116, 104,   0, 171, 
    171, 171,   0,   0,   3,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    112,  97, 100, 100, 105, 110, 
    103,  65,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 103,  80, 
    111, 108, 121, 103, 111, 110, 
     50,  68,  80, 111, 105, 110, 
    116, 115,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 103,  84, 
    105, 110, 116,  67, 111, 108, 
    111, 117, 114,   0, 103,  78, 
    111, 105, 115, 101,  83, 116, 
    114, 101, 110, 103, 116, 104, 
      0, 103,  78, 111, 105, 115, 
    101,  83,  99,  97, 108, 101, 
      0, 103,  78, 111, 105, 115, 
    101,  79, 102, 102, 115, 101, 
    116,   0, 103,  78, 111, 105, 
    115, 101,  69, 100, 103, 101, 
      0, 112,  97, 100, 100, 105, 
    110, 103,  66,   0, 103,  66, 
    117, 114, 110,  72, 101, 105, 
    103, 104, 116,   0, 112,  97, 
    100, 100, 105, 110, 103,  67, 
      0, 103,  68, 105, 115, 116, 
    111, 114, 116,  76, 101, 118, 
    101, 108,   0, 112,  97, 100, 
    100, 105, 110, 103,  68,   0, 
    103,  83, 112, 105, 114,  97, 
    108,  76, 101, 118, 101, 108, 
      0, 112,  97, 100, 100, 105, 
    110, 103,  69,   0, 103,  72, 
    101,  97, 116,  72,  97, 122, 
    101,  84, 105, 109, 101, 114, 
      0, 104, 101,  97, 116,  69, 
    102, 102, 101,  99, 116,  83, 
    116, 114, 101, 110, 103, 116, 
    104,   0, 104, 101,  97, 116, 
     83, 111, 102, 116,  69, 100, 
    103, 101,   0, 112,  97, 100, 
    100, 105, 110, 103,  70,   0, 
    103,  67,  65,  65, 109, 111, 
    117, 110, 116,   0, 103,  67, 
     65,  69, 100, 103, 101,   0, 
    103,  67,  65,  70,  97, 108, 
    108, 111, 102, 102,   0, 112, 
     97, 100, 100, 105, 110, 103, 
     71,   0, 103,  66, 108, 117, 
    114,  68, 105, 114, 101,  99, 
    116, 105, 111, 110, 115,   0, 
      0,   0, 128,  65, 103,  66, 
    108, 117, 114,  81, 117,  97, 
    108, 105, 116, 121,   0, 171, 
    171, 171,   0,   0,  64,  64, 
    103,  66, 108, 117, 114,  83, 
    105, 122, 101,   0, 171, 171, 
      0,   0,   0,  65, 112,  97, 
    100, 100, 105, 110, 103,  72, 
      0, 103,  66, 108, 111, 111, 
    109,  84, 104, 114, 101, 115, 
    104, 111, 108, 100,   0, 171, 
    171, 171,   0,   0,   0,  63, 
    112,  97, 100, 100, 105, 110, 
    103,  73,   0, 103,  83, 115, 
     97, 111,  83, 116, 114, 101, 
    110, 103, 104, 116,   0, 171, 
      0,   0, 128,  63, 103,  83, 
    115,  97, 111,  65, 114, 101, 
     97,   0, 171, 171, 205, 204, 
     76,  62, 103,  83, 115,  97, 
    111,  70,  97, 108, 108, 111, 
    102, 102,   0, 171, 171, 171, 
    189,  55, 134,  53, 103,  83, 
    115,  97, 111,  82,  97, 100, 
    105, 117, 115,   0,  23, 183, 
     81,  57, 103,  76, 105, 103, 
    104, 116,  83,  99, 114, 101, 
    101, 110,  80, 111, 115,   0, 
    103,  87, 101, 105, 103, 104, 
    116,   0, 103,  68, 101,  99, 
     97, 121,   0, 103,  69, 120, 
    112, 111, 115, 117, 114, 101, 
      0, 103,  68, 101, 110, 115, 
    105, 116, 121,   0, 103,  78, 
    117, 109,  83,  97, 109, 112, 
    108, 101, 115,   0, 171, 171, 
      0,   0,   2,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 112,  97, 
    100, 100, 105, 110, 103,  74, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     57,  46,  50,  57,  46,  57, 
     53,  50,  46,  51,  49,  49, 
     49,   0, 171, 171,  73,  83, 
     71,  78, 108,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  92,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0, 100,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   0, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0, 115,  99, 101, 110, 
    101,  85,  86,   0,  97, 114, 
    101,  97,  85,  86,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     68,  82, 180,   0,   0,   0, 
     65,   0,   0,   0,  45,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   1,   0,   0,   0, 
      7,   0,   0,   0,  90,   0, 
      0,   3,   0,  96,  16,   0, 
      0,   0,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0,  98,  32,   0,   3, 
     50,  16,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 104,   0,   0,   2, 
      1,   0,   0,   0,  69,   0, 
      0,   9, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,  32,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,   6,   0,   0,   0, 
     54,   0,   0,   5, 130,  32, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,   4,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0
};
