#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterGrid

#include "Basic.hpp"

#include "BP_MasterGrid_classes.hpp"
#include "BP_MasterGrid_parameters.hpp"


namespace SDK
{

// Function BP_MasterGrid.BP_MasterGrid_C.AddBuildPartReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*                  GridComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_MasterGrid_C::AddBuildPartReference(class UActorComponent* GridComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterGrid_C", "AddBuildPartReference");

	Params::BP_MasterGrid_C_AddBuildPartReference Parms{};

	Parms.GridComponent = GridComponent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MasterGrid.BP_MasterGrid_C.CreateGrid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GridComponent_C*              GridComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBoxComponent*                    Grid                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MasterGrid_C::CreateGrid(class UBP_GridComponent_C* GridComponent, class UBoxComponent** Grid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterGrid_C", "CreateGrid");

	Params::BP_MasterGrid_C_CreateGrid Parms{};

	Parms.GridComponent = GridComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Grid != nullptr)
		*Grid = Parms.Grid;
}


// Function BP_MasterGrid.BP_MasterGrid_C.DeleteGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBoxComponent*                    Grid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MasterGrid_C::DeleteGrid(class UBoxComponent* Grid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterGrid_C", "DeleteGrid");

	Params::BP_MasterGrid_C_DeleteGrid Parms{};

	Parms.Grid = Grid;

	UObject::ProcessEvent(Func, &Parms);
}

}

