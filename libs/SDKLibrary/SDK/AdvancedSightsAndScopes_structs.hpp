#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESKGScopeAdjustment : uint8
{
	MRAD                           = 0,
	MOA                            = 1,
	ESKGScopeAdjustment_MAX        = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.SKGSightZoomSettings
struct FSKGSightZoomSettings
{
public:
	bool                                         bSmoothZoom;                                       // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothZoomSmoothness;                              // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothZoomSpeed;                                   // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreeZoom;                                         // 0xC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ZoomIncrementAmount;                               // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.SKGSightMagnification
struct FSKGSightMagnification
{
public:
	TArray<float>                                Magnifications;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsFirstFocalPlane;                                // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EyeboxShrinkOnZoomAmount;                          // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecreaseReticleScaleAmount;                        // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSKGSightZoomSettings                 ZoomSettings;                                      // 0x1C(0x14)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.SKGSightOptimization
struct FSKGSightOptimization
{
public:
	bool                                         bOverrideCaptureEveryFrame;                        // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RefreshRate;                                       // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableWhenNotAiming;                             // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NotAimingRefreshRate;                              // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearScopeWithColor;                              // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ClearedColor;                                      // 0x14(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearScopeWithMaterial;                           // 0x24(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ClearedScopeMaterial;                              // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.SKGReticleMaterial
struct FSKGReticleMaterial
{
public:
	class UMaterialInstance*                     ReticleMaterial;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              DynamicReticleMaterial;                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReticleSize;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingEyeboxRange;                               // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.SKGReticleBrightness
struct FSKGReticleBrightness
{
public:
	TArray<float>                                ReticleBrightnessSettings;                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        ReticleDefaultBrightnessIndex;                     // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.SKGReticleSettings
struct FSKGReticleSettings
{
public:
	int32                                        ReticleMaterialIndex;                              // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSKGReticleMaterial>           ReticleMaterials;                                  // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.SKGSightZero
struct FSKGSightZero
{
public:
	float                                        Elevation;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Windage;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AdvancedSightsAndScopes.RenderTargetSize
struct FRenderTargetSize
{
public:
	int32                                        Width;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


