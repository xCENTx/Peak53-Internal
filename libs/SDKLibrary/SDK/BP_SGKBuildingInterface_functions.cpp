#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKBuildingInterface.BP_SGKBuildingInterface_C
// (None)

class UClass* IBP_SGKBuildingInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKBuildingInterface_C");

	return Clss;
}


// BP_SGKBuildingInterface_C BP_SGKBuildingInterface.Default__BP_SGKBuildingInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKBuildingInterface_C* IBP_SGKBuildingInterface_C::GetDefaultObj()
{
	static class IBP_SGKBuildingInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKBuildingInterface_C*>(IBP_SGKBuildingInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPBuildCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Collision                                                        (Parm, OutParm, ContainsInstancedReference)

void IBP_SGKBuildingInterface_C::SGK_BPBuildCollision(TArray<class UPrimitiveComponent*>* Collision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK BPBuildCollision");

	Params::IBP_SGKBuildingInterface_C_SGK_BPBuildCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Collision != nullptr)
		*Collision = std::move(Parms.Collision);

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPGrids
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_GridComponent_C*> Grids                                                            (Parm, OutParm, ContainsInstancedReference)

void IBP_SGKBuildingInterface_C::SGK_BPGrids(TArray<class UBP_GridComponent_C*>* Grids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK BPGrids");

	Params::IBP_SGKBuildingInterface_C_SGK_BPGrids_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Grids != nullptr)
		*Grids = std::move(Parms.Grids);

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK LoadExtraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK LoadExtraData");

	Params::IBP_SGKBuildingInterface_C_SGK_LoadExtraData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK Preview
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Preview                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKBuildingInterface_C::SGK_Preview(bool Preview)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK Preview");

	Params::IBP_SGKBuildingInterface_C_SGK_Preview_Params Parms{};

	Parms.Preview = Preview;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddMultipleOwners
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Owners                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKBuildingInterface_C::SGK_AddMultipleOwners(TArray<class FText>& Owners)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK AddMultipleOwners");

	Params::IBP_SGKBuildingInterface_C_SGK_AddMultipleOwners_Params Parms{};

	Parms.Owners = Owners;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK ClearOwners
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKBuildingInterface_C::SGK_ClearOwners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK ClearOwners");

	Params::IBP_SGKBuildingInterface_C_SGK_ClearOwners_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKBuildingInterface_C::SGK_AddOwner(class FText PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK AddOwner");

	Params::IBP_SGKBuildingInterface_C_SGK_AddOwner_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK Upgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKBuildingInterface_C::SGK_Upgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK Upgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               FromSaveGame                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK BuildPartPlaced");

	Params::IBP_SGKBuildingInterface_C_SGK_BuildPartPlaced_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.FromSaveGame = FromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsOwner                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_IsOwner(class FText PlayerName, bool* IsOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK IsOwner");

	Params::IBP_SGKBuildingInterface_C_SGK_IsOwner_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOwner != nullptr)
		*IsOwner = Parms.IsOwner;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         BuildPart                                                        (Parm, OutParm, NoDestructor)

void IBP_SGKBuildingInterface_C::SGK_BuildPart(struct FDataTableRowHandle* BuildPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK BuildPart");

	Params::IBP_SGKBuildingInterface_C_SGK_BuildPart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BuildPart != nullptr)
		*BuildPart = std::move(Parms.BuildPart);

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildingOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_BuildingOptions(class UBP_PlayerInventory_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK BuildingOptions");

	Params::IBP_SGKBuildingInterface_C_SGK_BuildingOptions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPlaced
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaced                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_IsPlaced(bool* IsPlaced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK IsPlaced");

	Params::IBP_SGKBuildingInterface_C_SGK_IsPlaced_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaced != nullptr)
		*IsPlaced = Parms.IsPlaced;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK SupportCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DestroyOnFail                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DirectSupportOnly                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Supported                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IndirectSupportOnly                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_SupportCheck(bool DestroyOnFail, bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK SupportCheck");

	Params::IBP_SGKBuildingInterface_C_SGK_SupportCheck_Params Parms{};

	Parms.DestroyOnFail = DestroyOnFail;
	Parms.DirectSupportOnly = DirectSupportOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (Supported != nullptr)
		*Supported = Parms.Supported;

	if (IndirectSupportOnly != nullptr)
		*IndirectSupportOnly = Parms.IndirectSupportOnly;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPendingDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPendingDestroy                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_IsPendingDestroy(bool* IsPendingDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK IsPendingDestroy");

	Params::IBP_SGKBuildingInterface_C_SGK_IsPendingDestroy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPendingDestroy != nullptr)
		*IsPendingDestroy = Parms.IsPendingDestroy;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BuildType             Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_BuildPartType(enum class E_BuildType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK BuildPartType");

	Params::IBP_SGKBuildingInterface_C_SGK_BuildPartType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK DeleteBuildPart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerBuildingComponent_C*PlayerBuildingComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ForceDestroy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKBuildingInterface_C::SGK_DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKBuildingInterface_C", "SGK DeleteBuildPart");

	Params::IBP_SGKBuildingInterface_C_SGK_DeleteBuildPart_Params Parms{};

	Parms.PlayerBuildingComponent = PlayerBuildingComponent;
	Parms.ForceDestroy = ForceDestroy;

	UObject::ProcessEvent(Func, &Parms);

}

}


