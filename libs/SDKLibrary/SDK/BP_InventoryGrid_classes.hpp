#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7C (0x2F4 - 0x278)
// WidgetBlueprintGeneratedClass BP_InventoryGrid.BP_InventoryGrid_C
class UBP_InventoryGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                     CellGrid;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            ItemGrid;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 GridInventory;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryCell_C*                   NewCell;                                           // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryItemIcon_C*               NewItemIcon;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        BlockIndex;                                        // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_InventoryHUD_C*                    PlayerHUD;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Resuffle;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CustomLayout;                                      // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_InventoryCell_C*>           InvCells;                                          // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_InventoryItemIcon_C*>       InvItemIcons;                                      // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        ArrayIndex;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InventoryGrid_C* GetDefaultObj();

	void SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets);
	void SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells);
	void ConstructInvGrid(bool Preview, int32 ColumnsL, class UBP_InventoryItemIcon_C* NewItemIconL, class UBP_InventoryCell_C* NewCellL, int32 ArrayIndexL, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetInvColumns_Columns, class UBP_InventoryCell_C* CallFunc_GetCellFromPool_Cell, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_InventoryItemIcon_C* CallFunc_Create_ReturnValue, class UBP_InventoryCell_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_GetCellCount_InventoryCells, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void GetInvColumns(int32* Columns, bool CallFunc_IsValid_ReturnValue);
	void GetCellCount(int32* InventoryCells, bool CallFunc_IsValid_ReturnValue);
	void ClearInvGrid();
	void SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_BP_InventoryGrid(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_MasterInventory_C* K2Node_Event_GridInventory, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


