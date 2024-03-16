#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x358 - 0x2A0)
// BlueprintGeneratedClass BP_GridComponent.BP_GridComponent_C
class UBP_GridComponent_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_BuildType                       GridType;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CheckRadius;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Grid;                                              // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SnapRotationOffset;                                // 0x2C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseCustomSize;                                     // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomSize;                                        // 0x2E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class E_BuildType, struct FVector> PresetGridSizes;                                   // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AttachBuildPart;                                   // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   AttachToComponent;                                 // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_GridComponent_C* GetDefaultObj();

	void SelectGridSize(struct FVector* Value, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AttachedActorCheck(bool* ActorFound, class AActor** FoundActor, class AActor* HitActorL, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_IsPendingDestroy_IsPendingDestroy, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast);
	void SpawnGrid();
	void ExecuteUbergraph_BP_GridComponent(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PlayerBuildingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_MasterGrid_C* CallFunc_SelectGridActor_Grid, bool CallFunc_IsValid_ReturnValue_2, class UBoxComponent* CallFunc_CreateGrid_Grid);
};

}


