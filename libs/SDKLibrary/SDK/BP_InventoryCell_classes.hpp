#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2F8 - 0x278)
// WidgetBlueprintGeneratedClass BP_InventoryCell.BP_InventoryCell_C
class UBP_InventoryCell_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              CellSizeBox;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CellTint;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DebugText;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CellIndex;                                         // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CellChunk;                                         // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDebugText;                                     // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ParentInvGrid;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CellsOccupied;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    FoundSlots;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CreateDone;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_MasterInventory_C*                 GridInv;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CellSize;                                          // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InventoryCell_C* GetDefaultObj();

	void CellDebugText(bool CallFunc_IsValid_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Deactivate();
	void ItemDragOver(class UDragDropOperation* DragOperation, const struct FVector2D& NewLocalVar_0, class UBP_MoveIcon_C* MoveWidgetL, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess);
	void FuelItemChecks(class FName ID, bool* Allow, class UBP_CraftingComponent_C* CraftingInvL, class UBP_CookingComponent_C* CookingInvL, bool CallFunc_IsFuelItem_IsFuelItem, bool CallFunc_IsIndexFuelSlot_IsFuelSlot, class UBP_CraftingComponent_C* K2Node_DynamicCast_AsBP_Crafting_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFuelItem_IsFuelItem_1, bool CallFunc_IsIndexFuelSlot_IsFuelSlot_1, class UBP_CookingComponent_C* K2Node_DynamicCast_AsBP_Cooking_Component, bool K2Node_DynamicCast_bSuccess_1);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UBP_MoveIcon_C* MoveWidgetL, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, bool CallFunc_FuelItemChecks_Allow, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_2, bool CallFunc_FuelItemChecks_Allow_1, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_3, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, bool CallFunc_FuelItemChecks_Allow_2, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, bool CallFunc_FuelItemChecks_Allow_3, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_4, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_5, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_1, bool CallFunc_HoldingWeaponCheck_ReturnValue, bool CallFunc_SGK_GetInvSlot_SlotFound_1, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot_1, bool CallFunc_HoldingItemCheck_ReturnValue, const struct FS_EquipmentSlotID& K2Node_MakeStruct_S_EquipmentSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_2, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_3, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess);
	void HideOverlay();
	void DragOverLayCheck(class UBP_MoveIcon_C* Move_Widget, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_2, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, int32 CallFunc_SGK_ItemSize_Height, int32 CallFunc_SGK_ItemSize_Width, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, const struct FS_InvSlotID& Temp_struct_Variable, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, int32 CallFunc_SGK_ItemSize_Height_1, int32 CallFunc_SGK_ItemSize_Width_1, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots_1, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_3, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, int32 CallFunc_SGK_ItemSize_Height_2, int32 CallFunc_SGK_ItemSize_Width_2, int32 CallFunc_SGK_ItemSize_Height_3, int32 CallFunc_SGK_ItemSize_Width_3, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_InvSlotID& K2Node_Select_Default, const struct FS_InvSlot& CallFunc_Array_Get_Item_2, const struct FS_InvSlot& CallFunc_Array_Get_Item_3, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked_2, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots_2, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked_3, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots_3);
	void UpdateOverLay(class UBP_MoveIcon_C* Move_Widget);
	void ShowCheckCellsOverlay(TArray<struct FS_InvSlot>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_SGKGridInterface_C> K2Node_DynamicCast_AsBP_SGKGrid_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UBP_InventoryCell_C*>& CallFunc_SGK_CellSlots_Cells, class UBP_InventoryCell_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue);
	void HideCheckCellsOverlay(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IBP_SGKGridInterface_C> K2Node_DynamicCast_AsBP_SGKGrid_Interface, bool K2Node_DynamicCast_bSuccess, const struct FS_InvSlot& CallFunc_Array_Get_Item, TArray<class UBP_InventoryCell_C*>& CallFunc_SGK_CellSlots_Cells, class UBP_InventoryCell_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ShowGreenOverlay();
	void ShowRedOverlay();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void ParentGridCreated();
	void Construct();
	void ExecuteUbergraph_BP_InventoryCell(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_PointerEvent_2, class UDragDropOperation* K2Node_Event_Operation_2, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void CreateDone__DelegateSignature();
};

}


