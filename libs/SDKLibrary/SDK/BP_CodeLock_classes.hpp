#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x400 - 0x3D2)
// BlueprintGeneratedClass BP_CodeLock.BP_CodeLock_C
class ABP_CodeLock_C : public ABP_MasterLock_C
{
public:
	uint8                                        Pad_4E05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SupportComponent_C*                BP_SupportComponent;                               // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SecondKeypad;                                      // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          LocationTimer;                                     // 0x3F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CodeLock_C* GetDefaultObj();

	void LockEffects(bool Locked);
	void LocationAttacher();
	void LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index);
	void ExecuteUbergraph_BP_CodeLock(int32 EntryPoint, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, const struct FVector& CallFunc_LoadLockData_OwnerLocation, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_Locked, float CallFunc_Conv_BoolToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, TArray<class AActor*>& K2Node_MakeArray_Array_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_2, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_Array_Get_Item, TArray<class UPrimitiveComponent*>& CallFunc_SphereOverlapComponents_OutComponents, bool CallFunc_SphereOverlapComponents_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UBP_GridComponent_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_GridComponent_C* CallFunc_Array_Get_Item_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_SupportCheck_SupportFound, enum class E_BuildType CallFunc_SupportCheck_BuildType, class AActor* CallFunc_SupportCheck_HitActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


