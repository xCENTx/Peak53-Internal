#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SGKInventoryInterface

#include "Basic.hpp"

#include "BP_SGKInventoryInterface_classes.hpp"
#include "BP_SGKInventoryInterface_parameters.hpp"


namespace SDK
{

// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK AllowStartingItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AllowStartingItems                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK AllowStartingItems");

	Params::BP_SGKInventoryInterface_C_SGK_AllowStartingItems Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = Parms.AllowStartingItems;
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK DestroyWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_SGKInventoryInterface_C::SGK_DestroyWeaponAttachments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK DestroyWeaponAttachments");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemMovedInInventory
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_SGKInventoryInterface_C::SGK_ItemMovedInInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ItemMovedInInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Sounds                                SoundType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_ItemSound(class FName ItemId, E_Sounds SoundType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ItemSound");

	Params::BP_SGKInventoryInterface_C_SGK_ItemSound Parms{};

	Parms.ItemId = ItemId;
	Parms.SoundType = SoundType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK LoadWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK LoadWeaponAttachments");

	Params::BP_SGKInventoryInterface_C_SGK_LoadWeaponAttachments Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAdditionalChecks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                       InvSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK RemoveAdditionalChecks");

	Params::BP_SGKInventoryInterface_C_SGK_RemoveAdditionalChecks Parms{};

	Parms.InvSlot = std::move(InvSlot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_AttachmentType                        Attachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_RemoveAttachment(E_AttachmentType Attachment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK RemoveAttachment");

	Params::BP_SGKInventoryInterface_C_SGK_RemoveAttachment Parms{};

	Parms.Attachment = Attachment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SelfItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                       SelfItem                                               (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK SelfItem");

	Params::BP_SGKInventoryInterface_C_SGK_SelfItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelfItem != nullptr)
		*SelfItem = std::move(Parms.SelfItem);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ShowAttachments
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_SGKInventoryInterface_C::SGK_ShowAttachments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ShowAttachments");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SpawnOverflowItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                       InvItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK SpawnOverflowItems");

	Params::BP_SGKInventoryInterface_C_SGK_SpawnOverflowItems Parms{};

	Parms.InvItem = std::move(InvItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ToggleComponent
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_SGKInventoryInterface_C::SGK_ToggleComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ToggleComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateAllAttachments
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_SGKInventoryInterface_C::SGK_UpdateAllAttachments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK UpdateAllAttachments");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateCharacterYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_UpdateCharacterYaw(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK UpdateCharacterYaw");

	Params::BP_SGKInventoryInterface_C_SGK_UpdateCharacterYaw Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateSpecialSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                       InvSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK UpdateSpecialSlot");

	Params::BP_SGKInventoryInterface_C_SGK_UpdateSpecialSlot Parms{};

	Parms.InvSlot = std::move(InvSlot);

	UObject::ProcessEvent(Func, &Parms);
}

}

