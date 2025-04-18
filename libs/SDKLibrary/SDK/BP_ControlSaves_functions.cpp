#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ControlSaves

#include "Basic.hpp"

#include "BP_ControlSaves_classes.hpp"
#include "BP_ControlSaves_parameters.hpp"


namespace SDK
{

// Function BP_ControlSaves.BP_ControlSaves_C.AddControlToSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputMappingContext*             MappingContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping        Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_ControlSaves_C::AddControlToSave(class UInputMappingContext* MappingContext, const struct FEnhancedActionKeyMapping& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ControlSaves_C", "AddControlToSave");

	Params::BP_ControlSaves_C_AddControlToSave Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

}

