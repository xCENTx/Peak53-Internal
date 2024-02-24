#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x330 - 0x278)
// WidgetBlueprintGeneratedClass BP_QuickSlot.BP_QuickSlot_C
class UBP_QuickSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Background;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_QuickSlotKey_C*                    BP_QuickSlotNumber;                                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_65;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemIcon;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Number;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              QuickSlotSizeBox;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Tint;                                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       WeaponSlot;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        QuickSlotIndex;                                    // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         InUse;                                             // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ItemMoveType                    QuickSlotItemType;                                 // 0x2CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F6F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MoveIcon_C*                        MoveWidgetL;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  SlotKey;                                           // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_InvSlotID                          ItemSlot;                                          // 0x2F0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_F70[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SlotSize;                                          // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  In_Text;                                           // 0x318(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_QuickSlot_C* GetDefaultObj();

	void ShowTint();
	void ClearSlot();
	void HideTint();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, enum class E_ItemMoveType Temp_byte_Variable, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UBP_MoveIcon_C* MoveIconL, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_SlotItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_SlotItemDetails_ItemDetails, bool CallFunc_IsValid_ReturnValue_1, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_MoveIcon_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
	void UpdateItemIcon(const struct FS_ItemDetails& ItemDetailsL);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_SlotItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_SlotItemDetails_ItemDetails, bool CallFunc_IsValid_ReturnValue_1, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, class UBP_QuickSlot_C* CallFunc_FindQuickSlot_OutputSlot, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UBP_QuickSlot_C* CallFunc_FindQuickSlot_OutputSlot_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_SGK_SlotItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_SlotItemDetails_ItemDetails_1, bool CallFunc_IsValid_ReturnValue_7, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_2, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_2, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_3, bool CallFunc_SGK_GetInvSlot_SlotFound_1, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot_1, bool CallFunc_HoldingItemCheck_ReturnValue, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_3, bool CallFunc_HoldingWeaponCheck_ReturnValue, bool CallFunc_IsInventoryEquipped_IsEquipped, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SGK_GetInvSlot_SlotFound_2, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot_2, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound_2, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_2, bool CallFunc_IsInventoryEquipped_IsEquipped_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_QuickSlot(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


