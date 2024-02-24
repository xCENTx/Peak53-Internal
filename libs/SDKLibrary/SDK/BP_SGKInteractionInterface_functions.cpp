#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKInteractionInterface.BP_SGKInteractionInterface_C
// (None)

class UClass* IBP_SGKInteractionInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKInteractionInterface_C");

	return Clss;
}


// BP_SGKInteractionInterface_C BP_SGKInteractionInterface.Default__BP_SGKInteractionInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKInteractionInterface_C* IBP_SGKInteractionInterface_C::GetDefaultObj()
{
	static class IBP_SGKInteractionInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKInteractionInterface_C*>(IBP_SGKInteractionInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK PlayerInProximity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKInteractionInterface_C::SGK_PlayerInProximity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK PlayerInProximity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK PlayerOutProximity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKInteractionInterface_C::SGK_PlayerOutProximity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK PlayerOutProximity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK TurnedOnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnedOn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInteractionInterface_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK TurnedOnEffect");

	Params::IBP_SGKInteractionInterface_C_SGK_TurnedOnEffect_Params Parms{};

	Parms.TurnedOn = TurnedOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK CodeCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CodeAccepted                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInteractionInterface_C::SGK_CodeCheck(class FText Code, bool* CodeAccepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK CodeCheck");

	Params::IBP_SGKInteractionInterface_C_SGK_CodeCheck_Params Parms{};

	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

	if (CodeAccepted != nullptr)
		*CodeAccepted = Parms.CodeAccepted;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK SetVerifiedPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                VerifiedPlayers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBP_SGKInteractionInterface_C::SGK_SetVerifiedPlayers(TArray<class FText>& VerifiedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK SetVerifiedPlayers");

	Params::IBP_SGKInteractionInterface_C_SGK_SetVerifiedPlayers_Params Parms{};

	Parms.VerifiedPlayers = VerifiedPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK GetVerifiedPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                VerifiedPlayers                                                  (Parm, OutParm)

void IBP_SGKInteractionInterface_C::SGK_GetVerifiedPlayers(TArray<class FText>* VerifiedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK GetVerifiedPlayers");

	Params::IBP_SGKInteractionInterface_C_SGK_GetVerifiedPlayers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VerifiedPlayers != nullptr)
		*VerifiedPlayers = std::move(Parms.VerifiedPlayers);

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK UpdateCode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKInteractionInterface_C::SGK_UpdateCode(class FText Code)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK UpdateCode");

	Params::IBP_SGKInteractionInterface_C_SGK_UpdateCode_Params Parms{};

	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK VerifyPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKInteractionInterface_C::SGK_VerifyPlayer(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK VerifyPlayer");

	Params::IBP_SGKInteractionInterface_C_SGK_VerifyPlayer_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK DropItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Dropped                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Spawned                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SaveLoaded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKInteractionInterface_C::SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK DropItem");

	Params::IBP_SGKInteractionInterface_C_SGK_DropItem_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.Dropped = Dropped;
	Parms.Spawned = Spawned;
	Parms.SaveLoaded = SaveLoaded;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK Mesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInteractionInterface_C::SGK_Mesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK Mesh");

	Params::IBP_SGKInteractionInterface_C_SGK_Mesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK ItemAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInteractionInterface_C::SGK_ItemAmount(int32* Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK ItemAmount");

	Params::IBP_SGKInteractionInterface_C_SGK_ItemAmount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK InvItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsItem                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  InvItem                                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void IBP_SGKInteractionInterface_C::SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK InvItem");

	Params::IBP_SGKInteractionInterface_C_SGK_InvItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsItem != nullptr)
		*IsItem = Parms.IsItem;

	if (InvItem != nullptr)
		*InvItem = std::move(Parms.InvItem);

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK EndInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKInteractionInterface_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK EndInteraction");

	Params::IBP_SGKInteractionInterface_C_SGK_EndInteraction_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK Interact
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldActions          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKInteractionInterface_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK Interact");

	Params::IBP_SGKInteractionInterface_C_SGK_Interact_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK InteractName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InteractName                                                     (Parm, OutParm)

void IBP_SGKInteractionInterface_C::SGK_InteractName(class FText* InteractName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK InteractName");

	Params::IBP_SGKInteractionInterface_C_SGK_InteractName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractName != nullptr)
		*InteractName = Parms.InteractName;

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK PossibleActions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ActionsFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      PossibleActions                                                  (Parm, OutParm)

void IBP_SGKInteractionInterface_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK PossibleActions");

	Params::IBP_SGKInteractionInterface_C_SGK_PossibleActions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionsFound != nullptr)
		*ActionsFound = Parms.ActionsFound;

	if (PossibleActions != nullptr)
		*PossibleActions = std::move(Parms.PossibleActions);

}


// Function BP_SGKInteractionInterface.BP_SGKInteractionInterface_C.SGK AllowInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowInteraction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKInteractionInterface_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKInteractionInterface_C", "SGK AllowInteraction");

	Params::IBP_SGKInteractionInterface_C_SGK_AllowInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowInteraction != nullptr)
		*AllowInteraction = Parms.AllowInteraction;

}

}


