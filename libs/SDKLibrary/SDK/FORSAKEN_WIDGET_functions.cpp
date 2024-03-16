#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FORSAKEN_WIDGET.FORSAKEN_WIDGET_C
// (None)

class UClass* UFORSAKEN_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FORSAKEN_WIDGET_C");

	return Clss;
}


// FORSAKEN_WIDGET_C FORSAKEN_WIDGET.Default__FORSAKEN_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFORSAKEN_WIDGET_C* UFORSAKEN_WIDGET_C::GetDefaultObj()
{
	static class UFORSAKEN_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFORSAKEN_WIDGET_C*>(UFORSAKEN_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FORSAKEN_WIDGET.FORSAKEN_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFORSAKEN_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FORSAKEN_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FORSAKEN_WIDGET.FORSAKEN_WIDGET_C.ExecuteUbergraph_FORSAKEN_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFORSAKEN_WIDGET_C::ExecuteUbergraph_FORSAKEN_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FORSAKEN_WIDGET_C", "ExecuteUbergraph_FORSAKEN_WIDGET");

	Params::UFORSAKEN_WIDGET_C_ExecuteUbergraph_FORSAKEN_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


