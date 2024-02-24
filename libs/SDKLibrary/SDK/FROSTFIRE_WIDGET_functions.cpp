#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FROSTFIRE_WIDGET.FROSTFIRE_WIDGET_C
// (None)

class UClass* UFROSTFIRE_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FROSTFIRE_WIDGET_C");

	return Clss;
}


// FROSTFIRE_WIDGET_C FROSTFIRE_WIDGET.Default__FROSTFIRE_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFROSTFIRE_WIDGET_C* UFROSTFIRE_WIDGET_C::GetDefaultObj()
{
	static class UFROSTFIRE_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFROSTFIRE_WIDGET_C*>(UFROSTFIRE_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FROSTFIRE_WIDGET.FROSTFIRE_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFROSTFIRE_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FROSTFIRE_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FROSTFIRE_WIDGET.FROSTFIRE_WIDGET_C.ExecuteUbergraph_FROSTFIRE_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFROSTFIRE_WIDGET_C::ExecuteUbergraph_FROSTFIRE_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FROSTFIRE_WIDGET_C", "ExecuteUbergraph_FROSTFIRE_WIDGET");

	Params::UFROSTFIRE_WIDGET_C_ExecuteUbergraph_FROSTFIRE_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


