#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UiPlayground

#include "Basic.hpp"

#include "UiPlayground_classes.hpp"
#include "UiPlayground_parameters.hpp"


namespace SDK
{

// Function UiPlayground.UiPlayground_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUiPlayground_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiPlayground_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UiPlayground.UiPlayground_C.ExecuteUbergraph_UiPlayground
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUiPlayground_C::ExecuteUbergraph_UiPlayground(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UiPlayground_C", "ExecuteUbergraph_UiPlayground");

	Params::UiPlayground_C_ExecuteUbergraph_UiPlayground Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

