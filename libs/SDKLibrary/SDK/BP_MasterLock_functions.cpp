#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterLock

#include "Basic.hpp"

#include "BP_MasterLock_classes.hpp"
#include "BP_MasterLock_parameters.hpp"


namespace SDK
{

// Function BP_MasterLock.BP_MasterLock_C.CanOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    AllowOpen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::CanOpen(const class FText& Param_Name, bool* AllowOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "CanOpen");

	Params::BP_MasterLock_C_CanOpen Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	if (AllowOpen != nullptr)
		*AllowOpen = Parms.AllowOpen;
}


// Function BP_MasterLock.BP_MasterLock_C.ExecuteUbergraph_BP_MasterLock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::ExecuteUbergraph_BP_MasterLock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "ExecuteUbergraph_BP_MasterLock");

	Params::BP_MasterLock_C_ExecuteUbergraph_BP_MasterLock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterLock.BP_MasterLock_C.IsVerifiedPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsVerified                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::IsVerifiedPlayer(const class FText& PlayerName, bool* IsVerified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "IsVerifiedPlayer");

	Params::BP_MasterLock_C_IsVerifiedPlayer Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);

	if (IsVerified != nullptr)
		*IsVerified = Parms.IsVerified;
}


// Function BP_MasterLock.BP_MasterLock_C.LoadExtraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*                SaveGame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "LoadExtraData");

	Params::BP_MasterLock_C_LoadExtraData Parms{};

	Parms.SaveGame = SaveGame;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterLock.BP_MasterLock_C.LoadLockData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*                SaveGame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OwnerLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::LoadLockData(class UBP_SGKSaveGame_C* SaveGame, int32 Param_Index, struct FVector* OwnerLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "LoadLockData");

	Params::BP_MasterLock_C_LoadLockData Parms{};

	Parms.SaveGame = SaveGame;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerLocation != nullptr)
		*OwnerLocation = std::move(Parms.OwnerLocation);
}


// Function BP_MasterLock.BP_MasterLock_C.LockEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Locked                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::LockEffects(bool Param_Locked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "LockEffects");

	Params::BP_MasterLock_C_LockEffects Parms{};

	Parms.Param_Locked = Param_Locked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterLock.BP_MasterLock_C.OnRep_Locked
// (BlueprintCallable, BlueprintEvent)

void ABP_MasterLock_C::OnRep_Locked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "OnRep_Locked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterLock.BP_MasterLock_C.RandomCode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MasterLock_C::RandomCode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "RandomCode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterLock.BP_MasterLock_C.SaveExtraData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*                SaveGame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData                 LevelSaveData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                                   ExtraDataIndex                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData                 NewLevelSaveData                                       (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_MasterLock_C::SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SaveExtraData");

	Params::BP_MasterLock_C_SaveExtraData Parms{};

	Parms.SaveGame = SaveGame;
	Parms.LevelSaveData = std::move(LevelSaveData);

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);
}


// Function BP_MasterLock.BP_MasterLock_C.SaveLockData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*                SaveGame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData                 LevelSaveData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData                 NewLevelSaveData                                       (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

int32 ABP_MasterLock_C::SaveLockData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, struct FS_LevelSaveData* NewLevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SaveLockData");

	Params::BP_MasterLock_C_SaveLockData Parms{};

	Parms.SaveGame = SaveGame;
	Parms.LevelSaveData = std::move(LevelSaveData);

	UObject::ProcessEvent(Func, &Parms);

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

	return Parms.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK AddMultipleOwners
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                     Param_Owners                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_AddMultipleOwners(TArray<class FText>& Param_Owners)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK AddMultipleOwners");

	Params::BP_MasterLock_C_SGK_AddMultipleOwners Parms{};

	Parms.Param_Owners = std::move(Param_Owners);

	UObject::ProcessEvent(Func, &Parms);

	Param_Owners = std::move(Parms.Param_Owners);

	return Parms.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK AddOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_AddOwner(const class FText& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK AddOwner");

	Params::BP_MasterLock_C_SGK_AddOwner Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK AllowInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AllowInteraction                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK AllowInteraction");

	Params::BP_MasterLock_C_SGK_AllowInteraction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AllowInteraction != nullptr)
		*AllowInteraction = Parms.AllowInteraction;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK BuildPartPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*            PlayerInventory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    FromSaveGame                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK BuildPartPlaced");

	Params::BP_MasterLock_C_SGK_BuildPartPlaced Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.FromSaveGame = FromSaveGame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterLock.BP_MasterLock_C.SGK CodeCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Code                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    CodeAccepted                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::SGK_CodeCheck(const class FText& Param_Code, bool* CodeAccepted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK CodeCheck");

	Params::BP_MasterLock_C_SGK_CodeCheck Parms{};

	Parms.Param_Code = std::move(Param_Code);

	UObject::ProcessEvent(Func, &Parms);

	if (CodeAccepted != nullptr)
		*CodeAccepted = Parms.CodeAccepted;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK Interact
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*            PlayerInventory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_WorldActions                          Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, E_WorldActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK Interact");

	Params::BP_MasterLock_C_SGK_Interact Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK PossibleActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*            PlayerInventory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ActionsFound                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>           PossibleActions                                        (Parm, OutParm)

void ABP_MasterLock_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK PossibleActions");

	Params::BP_MasterLock_C_SGK_PossibleActions Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionsFound != nullptr)
		*ActionsFound = Parms.ActionsFound;

	if (PossibleActions != nullptr)
		*PossibleActions = std::move(Parms.PossibleActions);
}


// Function BP_MasterLock.BP_MasterLock_C.SGK UpdateCode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Code                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_UpdateCode(const class FText& Param_Code)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK UpdateCode");

	Params::BP_MasterLock_C_SGK_UpdateCode Parms{};

	Parms.Param_Code = std::move(Param_Code);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MasterLock.BP_MasterLock_C.SGK VerifyPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_VerifyPlayer(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK VerifyPlayer");

	Params::BP_MasterLock_C_SGK_VerifyPlayer Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

