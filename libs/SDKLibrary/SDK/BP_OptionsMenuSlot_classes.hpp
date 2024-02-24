#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x418 - 0x278)
// WidgetBlueprintGeneratedClass BP_OptionsMenuSlot.BP_OptionsMenuSlot_C
class UBP_OptionsMenuSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMenuAnchor*                           AttachmentOptionsMenuAnchor;                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           CraftingMenuAnchor;                                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           GearOptionsMenuAnchor;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           ItemMenuAnchor;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           WeaponOptionsMenuAnchor;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      EquipmentSlot;                                     // 0x2B0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class FName                                  CraftingRecipe;                                    // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ItemOptionsMenu_C*                 ItemOptionsMenu;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingOptionsMenu_C*             CraftingOptionMenu;                                // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_GearOptionsMenu_C*                 GearOptionsMenu;                                   // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_AttachmentSlot                     AttachmentItem;                                    // 0x318(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_AttachmentOptions_C*               AttachmentOptionsMenu;                             // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlot                         WeaponSlot;                                        // 0x368(0x4C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_55CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponOptionsMenu_C*               WeaponOptionsMenu;                                 // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            ItemSlot;                                          // 0x3C0(0x4D)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_55CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_OptionsMenuSlot_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ToggleWeaponOptionsMenu(bool Open, const struct FS_WeaponSlot& WeaponSlot, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue);
	class UUserWidget* OnGetMenuContentWeaponOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_WeaponOptionsMenu_C* CallFunc_Create_ReturnValue);
	class UUserWidget* OnGetMenuContentItemOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_ItemOptionsMenu_C* CallFunc_Create_ReturnValue);
	void ToggleAttachmentOptionsMenu(const struct FS_AttachmentSlot& AttachmentSlot, bool Open, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue);
	void ToggleGearOptionsMenu(bool Open, const struct FS_EquipmentSlot& EquipmentSlot, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue);
	void ToggleCraftingOptionMenu(bool Open, class FName CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void ToggleOptionsMenu(bool Open, const struct FS_InvSlot& Item, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	class UUserWidget* OnGetMenuContentAttachmentOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_AttachmentOptions_C* CallFunc_Create_ReturnValue);
	class UUserWidget* OnGetMenuContentGearOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_GearOptionsMenu_C* CallFunc_Create_ReturnValue);
	class UUserWidget* OnGetMenuContentCraftingOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_CraftingOptionsMenu_C* CallFunc_Create_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void InventoryToggled(bool Open);
	void Construct();
	void ExecuteUbergraph_BP_OptionsMenuSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Open, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


