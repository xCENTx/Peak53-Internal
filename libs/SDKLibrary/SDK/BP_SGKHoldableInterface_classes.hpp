#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKHoldableInterface.BP_SGKHoldableInterface_C
class IBP_SGKHoldableInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKHoldableInterface_C* GetDefaultObj();

	void SGK_Aimed(bool* Aimed);
	void SGK_NewHeld(bool Held);
	void SGK_ClientToggleBuildMenu(bool Open);
	void SGK_HoldableRemoved();
	void SGK_Character();
	void SGK_MeleeCollisionToggle(bool TraceOn);
	void SGK_ResetHoldable();
	void SGK_ToggleFireMode();
	void SGK_ChamberWeaponAmmo();
	void SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, enum class E_AttachmentType AttachmentType);
	void SGK_ShowNewAttachment();
	void SGK_ClientReloadChecks();
	void SGK_ClientSecondaryAction(bool KeyDown);
	void SGK_ClientPrimaryAction(bool KeyDown);
	void SGK_SpawnAttachment(class UClass* Attachment);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void SGK_HoldableSkeletalMesh(class USkeletalMeshComponent** SkelMeshComp);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ServerPrimaryAction(bool KeyDown);
};

}


