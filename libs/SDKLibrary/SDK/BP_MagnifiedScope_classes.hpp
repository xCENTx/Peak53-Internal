#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2C0 - 0x290)
// BlueprintGeneratedClass BP_MagnifiedScope.BP_MagnifiedScope_C
class ABP_MagnifiedScope_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USKG_SceneCaptureComponent2D*          SKG_SceneCaptureComponent2D;                       // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SightMesh;                                         // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       ZAttachOffset;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ElevationTurret;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WindageTurret;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MagnifiedScope_C* GetDefaultObj();

	void GetSceneCapture(class USKG_SceneCaptureComponent2D** SceneCapture);
	void OnElevationChanged(float OldAdjustment, float NewAdjustment);
	void ReceiveBeginPlay();
	void OnWindageChanged(float OldAdjustment, float NewAdjustment);
	void ExecuteUbergraph_BP_MagnifiedScope(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float K2Node_CustomEvent_OldAdjustment_1, float K2Node_CustomEvent_NewAdjustment_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_CustomEvent_OldAdjustment, float K2Node_CustomEvent_NewAdjustment, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast_1);
};

}


