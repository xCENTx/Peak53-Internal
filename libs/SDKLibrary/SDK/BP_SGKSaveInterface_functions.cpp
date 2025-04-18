#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SGKSaveInterface

#include "Basic.hpp"

#include "BP_SGKSaveInterface_classes.hpp"
#include "BP_SGKSaveInterface_parameters.hpp"


namespace SDK
{

// Function BP_SGKSaveInterface.BP_SGKSaveInterface_C.SGKSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*                Save                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKSaveInterface_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SGKSaveInterface_C", "SGKSave");

	Params::BP_SGKSaveInterface_C_SGKSave Parms{};

	Parms.Save = Save;

	UObject::ProcessEvent(Func, &Parms);
}

}

