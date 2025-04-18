#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuickSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ItemMoveType_structs.hpp"
#include "InputCore_structs.hpp"
#include "S_WeaponSlotID_structs.hpp"
#include "UMG_classes.hpp"
#include "S_InvSlotID_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_QuickSlot.BP_QuickSlot_C
// 0x00B8 (0x0330 - 0x0278)
class UBP_QuickSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_QuickSlotKey_C*                     BP_QuickSlotNumber;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Number;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               QuickSlotSizeBox;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Tint;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_WeaponSlotID                        WeaponSlot;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         QuickSlotIndex;                                    // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          InUse;                                             // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ItemMoveType                                QuickSlotItemType;                                 // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3880[0x2];                                     // 0x02CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MoveIcon_C*                         MoveWidgetL;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   SlotKey;                                           // 0x02D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_InvSlotID                           ItemSlot;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SlotSize;                                          // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   In_Text;                                           // 0x0318(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ClearSlot();
	void Construct();
	void ExecuteUbergraph_BP_QuickSlot(int32 EntryPoint);
	void HideTint();
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void ShowTint();
	void UpdateItemIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuickSlot_C">();
	}
	static class UBP_QuickSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuickSlot_C>();
	}
};
static_assert(alignof(UBP_QuickSlot_C) == 0x000008, "Wrong alignment on UBP_QuickSlot_C");
static_assert(sizeof(UBP_QuickSlot_C) == 0x000330, "Wrong size on UBP_QuickSlot_C");
static_assert(offsetof(UBP_QuickSlot_C, UberGraphFrame) == 0x000278, "Member 'UBP_QuickSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, BP_QuickSlotNumber) == 0x000280, "Member 'UBP_QuickSlot_C::BP_QuickSlotNumber' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, Image_65) == 0x000288, "Member 'UBP_QuickSlot_C::Image_65' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, ItemIcon) == 0x000290, "Member 'UBP_QuickSlot_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, Number) == 0x000298, "Member 'UBP_QuickSlot_C::Number' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, QuickSlotSizeBox) == 0x0002A0, "Member 'UBP_QuickSlot_C::QuickSlotSizeBox' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, RetainerBox_0) == 0x0002A8, "Member 'UBP_QuickSlot_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, Tint) == 0x0002B0, "Member 'UBP_QuickSlot_C::Tint' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, WeaponSlot) == 0x0002B8, "Member 'UBP_QuickSlot_C::WeaponSlot' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, QuickSlotIndex) == 0x0002C8, "Member 'UBP_QuickSlot_C::QuickSlotIndex' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, InUse) == 0x0002CC, "Member 'UBP_QuickSlot_C::InUse' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, QuickSlotItemType) == 0x0002CD, "Member 'UBP_QuickSlot_C::QuickSlotItemType' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, MoveWidgetL) == 0x0002D0, "Member 'UBP_QuickSlot_C::MoveWidgetL' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, SlotKey) == 0x0002D8, "Member 'UBP_QuickSlot_C::SlotKey' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, ItemSlot) == 0x0002F0, "Member 'UBP_QuickSlot_C::ItemSlot' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, PlayerInventory) == 0x000300, "Member 'UBP_QuickSlot_C::PlayerInventory' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, SlotSize) == 0x000308, "Member 'UBP_QuickSlot_C::SlotSize' has a wrong offset!");
static_assert(offsetof(UBP_QuickSlot_C, In_Text) == 0x000318, "Member 'UBP_QuickSlot_C::In_Text' has a wrong offset!");

}

