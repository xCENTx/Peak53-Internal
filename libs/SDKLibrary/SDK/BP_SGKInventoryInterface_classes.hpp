#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKInventoryInterface.BP_SGKInventoryInterface_C
class IBP_SGKInventoryInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKInventoryInterface_C* GetDefaultObj();

	void SGK_UpdateCharacterYaw(class APawn* Pawn);
	void SGK_DestroyWeaponAttachments();
	void SGK_AllowStartingItems(bool* AllowStartingItems);
	void SGK_SelfItem(struct FS_InvItem* SelfItem);
	void SGK_UpdateAllAttachments();
	void SGK_ItemSound(class FName ItemId, enum class E_Sounds SoundType);
	void SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot);
	void SGK_ToggleComponent();
	void SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot);
	void SGK_ItemMovedInInventory();
	void SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem);
	void SGK_RemoveAttachment(enum class E_AttachmentType Attachment);
	void SGK_ShowAttachments();
	void SGK_LoadWeaponAttachments(bool Visible);
};

}


