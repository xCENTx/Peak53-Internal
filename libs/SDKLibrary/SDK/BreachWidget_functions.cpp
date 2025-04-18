#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BreachWidget

#include "Basic.hpp"

#include "BreachWidget_classes.hpp"
#include "BreachWidget_parameters.hpp"


namespace SDK
{

// Function BreachWidget.BreachWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBreachWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreachWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BreachWidget.BreachWidget_C.ExecuteUbergraph_BreachWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBreachWidget_C::ExecuteUbergraph_BreachWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreachWidget_C", "ExecuteUbergraph_BreachWidget");

	Params::BreachWidget_C_ExecuteUbergraph_BreachWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BreachWidget.BreachWidget_C.WidgetAutoRemove
// (BlueprintCallable, BlueprintEvent)

void UBreachWidget_C::WidgetAutoRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BreachWidget_C", "WidgetAutoRemove");

	UObject::ProcessEvent(Func, nullptr);
}

}

