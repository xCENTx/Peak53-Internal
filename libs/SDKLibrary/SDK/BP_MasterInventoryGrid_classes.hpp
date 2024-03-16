#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2B0 - 0x278)
// WidgetBlueprintGeneratedClass BP_MasterInventoryGrid.BP_MasterInventoryGrid_C
class UBP_MasterInventoryGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UBP_InventoryItemIcon_C*>       InvItemIcons;                                      // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_InventoryCell_C*>           InvCells;                                          // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UBP_MasterInventory_C*                 GridInventory;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MasterInventoryGrid_C* GetDefaultObj();

	void SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets);
	void SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells);
	void ConstructInvGrid(class UBP_InventoryItemIcon_C* NewItemIconL, class UBP_InventoryCell_C* NewCellL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_InventoryCell_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetInvColumnsCount(int32* Columns, bool CallFunc_IsValid_ReturnValue);
	void GetCellCount(int32* InventoryCells, bool CallFunc_IsValid_ReturnValue);
	void ConstructInventoryItemIconArray(TArray<class UBP_InventoryItemIcon_C*>& Array, class UBP_InventoryItemIcon_C* InvIconL, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ConstructInventoryCellArray(TArray<class UBP_InventoryCell_C*>& Array, class UBP_InventoryCell_C* InvCellL, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_InventoryCell_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class UBP_InventoryCell_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ClearInvGrid();
	void SetCustomSlots();
	void SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory);
	void Construct();
	void ExecuteUbergraph_BP_MasterInventoryGrid(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsStandalone_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_MasterInventory_C* K2Node_Event_GridInventory, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


