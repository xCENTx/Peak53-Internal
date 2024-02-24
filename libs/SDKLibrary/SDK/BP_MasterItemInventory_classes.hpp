#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x2A1 - 0x28C)
// BlueprintGeneratedClass BP_MasterItemInventory.BP_MasterItemInventory_C
class UBP_MasterItemInventory_C : public UBP_MasterInventory_C
{
public:
	uint8                                        Pad_4677[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  SelfItem;                                          // 0x298(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AllowStartingItems;                                // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MasterItemInventory_C* GetDefaultObj();

	void SGK_AllowStartingItems(bool* AllowStartingItems);
	void SGK_SelfItem(struct FS_InvItem* SelfItem, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem);
	void RetrieveItemContainerDetails(bool Temp_bool_Variable, TArray<struct FDataTableRowHandle>& Temp_struct_Variable, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_SGK_InventoryGridDetails_FoundGrid, const struct FS_CustomGridLayoutData& CallFunc_SGK_InventoryGridDetails_InventoryGridData, bool CallFunc_SGK_GetItemRangeClass_ReturnValue, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_2, bool CallFunc_SGK_GetItemRangeClass_ReturnValue_1, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterItemInventory(int32 EntryPoint);
};

}


