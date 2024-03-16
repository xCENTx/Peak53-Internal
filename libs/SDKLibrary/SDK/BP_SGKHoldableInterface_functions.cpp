#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKHoldableInterface.BP_SGKHoldableInterface_C
// (None)

class UClass* IBP_SGKHoldableInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKHoldableInterface_C");

	return Clss;
}


// BP_SGKHoldableInterface_C BP_SGKHoldableInterface.Default__BP_SGKHoldableInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKHoldableInterface_C* IBP_SGKHoldableInterface_C::GetDefaultObj()
{
	static class IBP_SGKHoldableInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKHoldableInterface_C*>(IBP_SGKHoldableInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK Aimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Aimed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_Aimed(bool* Aimed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK Aimed");

	Params::IBP_SGKHoldableInterface_C_SGK_Aimed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Aimed != nullptr)
		*Aimed = Parms.Aimed;

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK NewHeld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Held                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_NewHeld(bool Held)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK NewHeld");

	Params::IBP_SGKHoldableInterface_C_SGK_NewHeld_Params Parms{};

	Parms.Held = Held;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientToggleBuildMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_ClientToggleBuildMenu(bool Open)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ClientToggleBuildMenu");

	Params::IBP_SGKHoldableInterface_C_SGK_ClientToggleBuildMenu_Params Parms{};

	Parms.Open = Open;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKHoldableInterface_C::SGK_HoldableRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK HoldableRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKHoldableInterface_C::SGK_Character()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK Character");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK MeleeCollisionToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TraceOn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_MeleeCollisionToggle(bool TraceOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK MeleeCollisionToggle");

	Params::IBP_SGKHoldableInterface_C_SGK_MeleeCollisionToggle_Params Parms{};

	Parms.TraceOn = TraceOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ResetHoldable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKHoldableInterface_C::SGK_ResetHoldable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ResetHoldable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ToggleFireMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKHoldableInterface_C::SGK_ToggleFireMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ToggleFireMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ChamberWeaponAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKHoldableInterface_C::SGK_ChamberWeaponAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ChamberWeaponAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK AttachNewAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class E_AttachmentType        AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, enum class E_AttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK AttachNewAttachment");

	Params::IBP_SGKHoldableInterface_C_SGK_AttachNewAttachment_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.InvItem = InvItem;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ShowNewAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKHoldableInterface_C::SGK_ShowNewAttachment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ShowNewAttachment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientReloadChecks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKHoldableInterface_C::SGK_ClientReloadChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ClientReloadChecks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ClientSecondaryAction");

	Params::IBP_SGKHoldableInterface_C_SGK_ClientSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_ClientPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ClientPrimaryAction");

	Params::IBP_SGKHoldableInterface_C_SGK_ClientPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK SpawnAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_SpawnAttachment(class UClass* Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK SpawnAttachment");

	Params::IBP_SGKHoldableInterface_C_SGK_SpawnAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK HoldableMesh");

	Params::IBP_SGKHoldableInterface_C_SGK_HoldableMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableSkeletalMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_HoldableSkeletalMesh(class USkeletalMeshComponent** SkelMeshComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK HoldableSkeletalMesh");

	Params::IBP_SGKHoldableInterface_C_SGK_HoldableSkeletalMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SkelMeshComp != nullptr)
		*SkelMeshComp = Parms.SkelMeshComp;

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_ServerSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ServerSecondaryAction");

	Params::IBP_SGKHoldableInterface_C_SGK_ServerSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKHoldableInterface_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKHoldableInterface_C", "SGK ServerPrimaryAction");

	Params::IBP_SGKHoldableInterface_C_SGK_ServerPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}

}


