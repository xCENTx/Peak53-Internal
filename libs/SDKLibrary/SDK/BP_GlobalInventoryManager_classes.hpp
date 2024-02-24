#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B0 - 0x290)
// BlueprintGeneratedClass BP_GlobalInventoryManager.BP_GlobalInventoryManager_C
class ABP_GlobalInventoryManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_MasterInventory_C*>         ContainerInventories;                              // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_GlobalInventoryManager_C* GetDefaultObj();

	void DestroyItemInventory(class UBP_MasterInventory_C* MasterInventory, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ClearContainerInventories(int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UBP_MasterInventory_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_MasterInventory_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void CreateNewItem(class FName ItemId, int32 Amount, bool AddDefaults, bool AddStartingItems, bool Rotated, bool Replicated, struct FS_InvItem* NewItem, const struct FS_InvItem& CreatedItemL, const struct FS_ItemDetails& ItemDetailsL, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool Temp_bool_Variable, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, class UBP_MasterInventory_C* CallFunc_CreateNewInventory_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_ItemConsumableDetails_ItemFound, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails, bool CallFunc_SGK_ItemContainerDetails_ItemFound, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails, class UBP_MasterInventory_C* CallFunc_CreateNewInventory_Inventory_1, bool CallFunc_IsValid_ReturnValue_1, class UBP_WeaponInventory_C* CallFunc_CreateNewWeaponInventory_WeaponInventory, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 K2Node_Select_Default);
	void CreateNewWeaponInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_WeaponInventory_C** WeaponInventory, const struct FS_ContainerDetails& WeaponInvDetailsL, class UBP_WeaponInventory_C* NewWeaponInventoryL, const struct FTransform& Temp_struct_Variable, class UBP_WeaponInventory_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 CallFunc_Array_Add_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon, bool K2Node_ClassDynamicCast_bSuccess);
	void CreateNewInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_MasterInventory_C** Inventory, const struct FS_ContainerDetails& ContainerDetailsL, class UBP_MasterInventory_C* NewInvL, const struct FTransform& Temp_struct_Variable, class UBP_MasterItemInventory_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void InitializeGlobalInventory();
	void LoadSave(class UBP_SGKSaveGame_C* SaveGame);
	void ExecuteUbergraph_BP_GlobalInventoryManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class UBP_SGKSaveGame_C* K2Node_CustomEvent_SaveGame, class ABP_SaveSystem_C* CallFunc_SGK_GetSaveGame_SaveGame, bool CallFunc_IsValid_ReturnValue);
};

}


