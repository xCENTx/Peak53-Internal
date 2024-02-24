#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_score_display.w_score_display_C
// (None)

class UClass* UW_score_display_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_score_display_C");

	return Clss;
}


// w_score_display_C w_score_display.Default__w_score_display_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_score_display_C* UW_score_display_C::GetDefaultObj()
{
	static class UW_score_display_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_score_display_C*>(UW_score_display_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_score_display.w_score_display_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_score_display_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_score_display_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_score_display.w_score_display_C.ExecuteUbergraph_w_score_display
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_score_display_C::ExecuteUbergraph_w_score_display(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_score_display_C", "ExecuteUbergraph_w_score_display");

	Params::UW_score_display_C_ExecuteUbergraph_w_score_display_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


