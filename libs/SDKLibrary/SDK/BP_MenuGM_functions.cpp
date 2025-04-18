#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuGM

#include "Basic.hpp"

#include "BP_MenuGM_classes.hpp"
#include "BP_MenuGM_parameters.hpp"


namespace SDK
{

// Function BP_MenuGM.BP_MenuGM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuGM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGM_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuGM.BP_MenuGM_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      ExitingController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuGM_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGM_C", "K2_OnLogout");

	Params::BP_MenuGM_C_K2_OnLogout Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuGM.BP_MenuGM_C.ExecuteUbergraph_BP_MenuGM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuGM_C::ExecuteUbergraph_BP_MenuGM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGM_C", "ExecuteUbergraph_BP_MenuGM");

	Params::BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

