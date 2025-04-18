#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Input_Gamepad_Entry

#include "Basic.hpp"

#include "WB_Input_Gamepad_Entry_classes.hpp"
#include "WB_Input_Gamepad_Entry_parameters.hpp"


namespace SDK
{

// Function WB_Input_Gamepad_Entry.WB_Input_Gamepad_Entry_C.ExecuteUbergraph_WB_Input_Gamepad_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Input_Gamepad_Entry_C::ExecuteUbergraph_WB_Input_Gamepad_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Input_Gamepad_Entry_C", "ExecuteUbergraph_WB_Input_Gamepad_Entry");

	Params::WB_Input_Gamepad_Entry_C_ExecuteUbergraph_WB_Input_Gamepad_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Input_Gamepad_Entry.WB_Input_Gamepad_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Input_Gamepad_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Input_Gamepad_Entry_C", "PreConstruct");

	Params::WB_Input_Gamepad_Entry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

