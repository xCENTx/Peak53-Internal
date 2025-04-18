#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteHolder

#include "Basic.hpp"

#include "EmoteHolder_classes.hpp"
#include "EmoteHolder_parameters.hpp"


namespace SDK
{

// Function EmoteHolder.EmoteHolder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmoteHolder_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmoteHolder_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmoteHolder.EmoteHolder_C.ExecuteUbergraph_EmoteHolder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmoteHolder_C::ExecuteUbergraph_EmoteHolder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmoteHolder_C", "ExecuteUbergraph_EmoteHolder");

	Params::EmoteHolder_C_ExecuteUbergraph_EmoteHolder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmoteHolder.EmoteHolder_C.HandleNuke
// (BlueprintCallable, BlueprintEvent)

void UEmoteHolder_C::HandleNuke()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmoteHolder_C", "HandleNuke");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmoteHolder.EmoteHolder_C.OnVisibilityChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmoteHolder_C::OnVisibilityChanged_Event(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmoteHolder_C", "OnVisibilityChanged_Event");

	Params::EmoteHolder_C_OnVisibilityChanged_Event Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmoteHolder.EmoteHolder_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmoteHolder_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmoteHolder_C", "PreConstruct");

	Params::EmoteHolder_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

