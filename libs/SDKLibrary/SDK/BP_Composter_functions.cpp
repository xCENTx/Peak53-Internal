#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Composter

#include "Basic.hpp"

#include "BP_Composter_classes.hpp"
#include "BP_Composter_parameters.hpp"


namespace SDK
{

// Function BP_Composter.BP_Composter_C.SGK EndInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*            PlayerInventory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Composter_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Composter_C", "SGK EndInteraction");

	Params::BP_Composter_C_SGK_EndInteraction Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

