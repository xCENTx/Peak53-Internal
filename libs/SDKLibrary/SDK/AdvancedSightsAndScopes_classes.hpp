#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0xC80 - 0xB50)
// Class AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D
class USKG_SceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	struct FSKGSightOptimization                 ScopeOptimization;                                 // 0xB50(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSKGSightMagnification                MagnificationSettings;                             // 0xB88(0x38)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSKGReticleSettings                   ReticleSettings;                                   // 0xBC0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class ESKGScopeAdjustment               TurretAdjustmentType;                              // 0xBD8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRenderTargetSize                     RenderTargetSize;                                  // 0xBDC(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  RenderTargetMaterialVarName;                       // 0xBE4(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ScopeComponentTag;                                 // 0xBEC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C0[0x30];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MilliradianAdjustment;                             // 0xC24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MOAAdjustment;                                     // 0xC28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C3[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnElevationChanged;                                // 0xC38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnWindageChanged;                                  // 0xC48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C4[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USKG_SceneCaptureComponent2D* GetDefaultObj();

	void ZoomOut();
	void ZoomIn();
	void StopCapture();
	void StartCapture();
	void SetReticle(uint8 Index);
	void SetOwningMesh(class UMeshComponent* Mesh);
	void SetNewZeroWindage();
	void SetNewZeroElevation();
	void ReturnToZeroWindage();
	void ReturnToZeroElevation();
	struct FVector2D PointOfImpactUp(uint8 Clicks);
	struct FVector2D PointOfImpactRight(uint8 Clicks);
	struct FVector2D PointOfImpactLeft(uint8 Clicks);
	struct FVector2D PointOfImpactDown(uint8 Clicks);
	struct FSKGSightZero GetSightZero();
	float GetMagnificationSensitivity();
	float GetMagnification();
	void CycleReticle();
};

}


