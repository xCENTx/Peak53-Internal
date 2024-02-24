#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKInventoryInterface.BP_SGKInventoryInterface_C
// (None)

class UClass* IBP_SGKInventoryInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKInventoryInterface_C");

	return Clss;
}


// BP_SGKInventoryInterface_C BP_SGKInventoryInterface.Default__BP_SGKInventoryInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKInventoryInterface_C* IBP_SGKInventoryInterface_C::GetDefaultObj()
{
	static class IBP_SGKInventoryInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKInventoryInterface_C*>(IBP_SGKInventoryInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateCharacterYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_UpdateCharacterYaw(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK UpdateCharacterYaw");

	Params::IBP_SGKInventoryInterface_C_SGK_UpdateCharacterYaw_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK DestroyWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKInventoryInterface_C::SGK_DestroyWeaponAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK DestroyWeaponAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK AllowStartingItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowStartingItems                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK AllowStartingItems");

	Params::IBP_SGKInventoryInterface_C_SGK_AllowStartingItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = Parms.AllowStartingItems;

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SelfItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  SelfItem                                                         (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK SelfItem");

	Params::IBP_SGKInventoryInterface_C_SGK_SelfItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelfItem != nullptr)
		*SelfItem = std::move(Parms.SelfItem);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateAllAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKInventoryInterface_C::SGK_UpdateAllAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK UpdateAllAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Sounds                SoundType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_ItemSound(class FName ItemId, enum class E_Sounds SoundType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ItemSound");

	Params::IBP_SGKInventoryInterface_C_SGK_ItemSound_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.SoundType = SoundType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAdditionalChecks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK RemoveAdditionalChecks");

	Params::IBP_SGKInventoryInterface_C_SGK_RemoveAdditionalChecks_Params Parms{};

	Parms.InvSlot = InvSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ToggleComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKInventoryInterface_C::SGK_ToggleComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ToggleComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateSpecialSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK UpdateSpecialSlot");

	Params::IBP_SGKInventoryInterface_C_SGK_UpdateSpecialSlot_Params Parms{};

	Parms.InvSlot = InvSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemMovedInInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKInventoryInterface_C::SGK_ItemMovedInInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ItemMovedInInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SpawnOverflowItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK SpawnOverflowItems");

	Params::IBP_SGKInventoryInterface_C_SGK_SpawnOverflowItems_Params Parms{};

	Parms.InvItem = InvItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AttachmentType        Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_RemoveAttachment(enum class E_AttachmentType Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK RemoveAttachment");

	Params::IBP_SGKInventoryInterface_C_SGK_RemoveAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ShowAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKInventoryInterface_C::SGK_ShowAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK ShowAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK LoadWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInventoryInterface_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInventoryInterface_C", "SGK LoadWeaponAttachments");

	Params::IBP_SGKInventoryInterface_C_SGK_LoadWeaponAttachments_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}

}


