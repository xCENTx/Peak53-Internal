#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AURORA_SUMMER_WIDGET.AURORA_SUMMER_WIDGET_C
// (None)

class UClass* UAURORA_SUMMER_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AURORA_SUMMER_WIDGET_C");

	return Clss;
}


// AURORA_SUMMER_WIDGET_C AURORA_SUMMER_WIDGET.Default__AURORA_SUMMER_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAURORA_SUMMER_WIDGET_C* UAURORA_SUMMER_WIDGET_C::GetDefaultObj()
{
	static class UAURORA_SUMMER_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAURORA_SUMMER_WIDGET_C*>(UAURORA_SUMMER_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AURORA_SUMMER_WIDGET.AURORA_SUMMER_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAURORA_SUMMER_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AURORA_SUMMER_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AURORA_SUMMER_WIDGET.AURORA_SUMMER_WIDGET_C.ExecuteUbergraph_AURORA_SUMMER_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAURORA_SUMMER_WIDGET_C::ExecuteUbergraph_AURORA_SUMMER_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AURORA_SUMMER_WIDGET_C", "ExecuteUbergraph_AURORA_SUMMER_WIDGET");

	Params::UAURORA_SUMMER_WIDGET_C_ExecuteUbergraph_AURORA_SUMMER_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


