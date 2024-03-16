#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x930 (0xBA8 - 0x278)
// WidgetBlueprintGeneratedClass BP_MoveIcon.BP_MoveIcon_C
class UBP_MoveIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                MoveIcon;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MoveIconSize;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentSlot_C*                   EquipmentSlot;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_QuickSlot_C*                       QuickSlot;                                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponSlot_C*                      WeaponSlot;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_InventoryItemIcon_C*               InventoryItem;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlotID                          ItemSlotID;                                        // 0x2D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2395[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_SpecialSlotType                 SpecialType;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachmentWeaponSlotID;                            // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2396[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlotID                   AttachmentSlotID;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Rotate;                                            // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2397[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_InventoryCell_C*                   HoverOverCell;                                     // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2398[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CurrentItemDetails;                                // 0x310(0x878)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2399[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         PendingKill;                                       // 0xB90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ItemMoveType                    ItemMoveType;                                      // 0xB91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_239A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ImageScale;                                        // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MoveIcon_C* GetDefaultObj();

	void InitilalizeMoveQuickSlot(struct FS_InvSlotID& ItemSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, bool CallFunc_SGK_SlotItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_SlotItemDetails_ItemDetails);
	void SetMoveIcon(const struct FS_ItemDetails& ItemDetails, bool Rotated, class UMaterialInstanceDynamic* DynamicMaterialL, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void InitializeMoveAttachmentItem(const struct FS_AttachmentSlotID& AttachmentID, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails);
	void InitilalizeMoveWeaponItem(struct FS_WeaponSlotID& WeaponSlotID, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails);
	void InitializeMoveItem(const struct FS_InvSlotID& ItemSlotID, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails);
	void InitilalizeMoveEquipmentItem(struct FS_EquipmentSlotID& EquipmentSlotID, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails);
	void Construct();
	void Destruct();
	void RotateWidget();
	void ExecuteUbergraph_BP_MoveIcon(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, TArray<class UBP_InventoryCell_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UBP_InventoryCell_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class UBP_InventoryItemIcon_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsItemValid_IsItemValid, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default);
};

}


