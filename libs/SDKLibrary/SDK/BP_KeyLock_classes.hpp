#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x400 - 0x3D2)
// BlueprintGeneratedClass BP_KeyLock.BP_KeyLock_C
class ABP_KeyLock_C : public ABP_MasterLock_C
{
public:
	uint8                                        Pad_4E18[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent;                               // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          LocationTimer;                                     // 0x3F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_KeyLock_C* GetDefaultObj();

	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, bool CallFunc_AttemptToAddItem_RemainingItem, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot, bool CallFunc_IsOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_PlayerFindKeyItem_Found, class USoundBase* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsOwner_ReturnValue_1);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsOwner_ReturnValue, class FText Temp_text_Variable_1, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, class FText K2Node_Select_Default, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_1, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array_1);
	void LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index);
	void LocationAttacher();
	void ExecuteUbergraph_BP_KeyLock(int32 EntryPoint, bool CallFunc_SupportCheck_SupportFound, enum class E_BuildType CallFunc_SupportCheck_BuildType, class AActor* CallFunc_SupportCheck_HitActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, const struct FVector& CallFunc_LoadLockData_OwnerLocation, TArray<class AActor*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<class AActor*>& K2Node_MakeArray_Array_2, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_SphereOverlapComponents_OutComponents, bool CallFunc_SphereOverlapComponents_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UBP_GridComponent_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UBP_GridComponent_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}


