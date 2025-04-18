#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponInventory

#include "Basic.hpp"

#include "E_AttachmentType_structs.hpp"
#include "Engine_structs.hpp"
#include "S_AttachmentSlot_structs.hpp"
#include "E_FireModes_structs.hpp"
#include "BP_MasterItemInventory_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponInventory.BP_WeaponInventory_C
// 0x0258 (0x0500 - 0x02A8)
class UBP_WeaponInventory_C final : public UBP_MasterItemInventory_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_WeaponInventory_C;               // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_AttachmentSlot                      MagazineItem;                                      // 0x02B0(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                      SightItem;                                         // 0x02F8(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                      UnderbarrelItem;                                   // 0x0340(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                      StockItem;                                         // 0x0388(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                      MuzzleItem;                                        // 0x03D0(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                      HandguardItem;                                     // 0x0418(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                      TriggerItem;                                       // 0x0460(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                      FrontGripItem;                                     // 0x04A8(0x0048)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	E_FireModes                                   WeaponFireMode;                                    // 0x04F0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_580D[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MasterWeapon_C*                     Weapon;                                            // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddAttachmentUsingPlayers();
	void AddDefaultAttachments();
	void AddWeaponAttachment(const struct FS_InvItem& InvItem, bool PlayAnim);
	bool AmmoTypeCheck(const struct FS_InvItem& Item);
	void ChamberRoundFromMag();
	void CreateAllAttachments();
	void ExecuteUbergraph_BP_WeaponInventory(int32 EntryPoint);
	void LoadSavedAttachments(TArray<struct FS_AttachmentSaveSlot>& Attachments, TArray<struct FS_OtherInvSaves>& OtherInventorys);
	void MulticastUpdateAttachmentItem(E_AttachmentType Attachment, const struct FS_InvItem& Item, class ABP_MasterAttachment_C* Actor);
	bool NextRound(struct FS_InvSlot* Item);
	void ReceiveBeginPlay();
	void RemoveAttachment(E_AttachmentType Attachment);
	void ReplicateContainingInventories(bool Replicate);
	struct FS_AttachmentSlot SelectAttachmentItem(E_AttachmentType Attachment, bool* IsValid);
	void ServerAddWeaponAttachment(const struct FS_InvItem& AttachmentItem, bool AnimationSocket);
	void SGK_DestroyWeaponAttachments();
	void SGK_LoadWeaponAttachments(bool Visible);
	void SGK_RemoveAttachment(E_AttachmentType Attachment);
	void SGK_ShowAttachments();
	void SGK_UpdateAllAttachments();
	int32 TotalAmmo();
	void TotalMaxAmmo(int32* MaxAmmo);
	void UpdateAllAttachments(TArray<struct FS_AttachmentSlot>& Attachments);
	void UpdateAllClientAttachments();
	void UpdateAttachmentItem(E_AttachmentType AttachmentType, const struct FS_InvItem& AttachmentItem, class ABP_MasterAttachment_C* Attachment);
	void UpdateAttachmentUsingPlayers();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponInventory_C">();
	}
	static class UBP_WeaponInventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WeaponInventory_C>();
	}
};
static_assert(alignof(UBP_WeaponInventory_C) == 0x000008, "Wrong alignment on UBP_WeaponInventory_C");
static_assert(sizeof(UBP_WeaponInventory_C) == 0x000500, "Wrong size on UBP_WeaponInventory_C");
static_assert(offsetof(UBP_WeaponInventory_C, UberGraphFrame_BP_WeaponInventory_C) == 0x0002A8, "Member 'UBP_WeaponInventory_C::UberGraphFrame_BP_WeaponInventory_C' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, MagazineItem) == 0x0002B0, "Member 'UBP_WeaponInventory_C::MagazineItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, SightItem) == 0x0002F8, "Member 'UBP_WeaponInventory_C::SightItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, UnderbarrelItem) == 0x000340, "Member 'UBP_WeaponInventory_C::UnderbarrelItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, StockItem) == 0x000388, "Member 'UBP_WeaponInventory_C::StockItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, MuzzleItem) == 0x0003D0, "Member 'UBP_WeaponInventory_C::MuzzleItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, HandguardItem) == 0x000418, "Member 'UBP_WeaponInventory_C::HandguardItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, TriggerItem) == 0x000460, "Member 'UBP_WeaponInventory_C::TriggerItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, FrontGripItem) == 0x0004A8, "Member 'UBP_WeaponInventory_C::FrontGripItem' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, WeaponFireMode) == 0x0004F0, "Member 'UBP_WeaponInventory_C::WeaponFireMode' has a wrong offset!");
static_assert(offsetof(UBP_WeaponInventory_C, Weapon) == 0x0004F8, "Member 'UBP_WeaponInventory_C::Weapon' has a wrong offset!");

}

