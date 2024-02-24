#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass XROADS_WIDGET.XROADS_WIDGET_C
// (None)

class UClass* UXROADS_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XROADS_WIDGET_C");

	return Clss;
}


// XROADS_WIDGET_C XROADS_WIDGET.Default__XROADS_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UXROADS_WIDGET_C* UXROADS_WIDGET_C::GetDefaultObj()
{
	static class UXROADS_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UXROADS_WIDGET_C*>(UXROADS_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function XROADS_WIDGET.XROADS_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXROADS_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XROADS_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function XROADS_WIDGET.XROADS_WIDGET_C.ExecuteUbergraph_XROADS_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXROADS_WIDGET_C::ExecuteUbergraph_XROADS_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XROADS_WIDGET_C", "ExecuteUbergraph_XROADS_WIDGET");

	Params::UXROADS_WIDGET_C_ExecuteUbergraph_XROADS_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


