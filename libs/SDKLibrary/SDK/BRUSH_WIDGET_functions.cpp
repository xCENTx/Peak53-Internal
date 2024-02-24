#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BRUSH_WIDGET.BRUSH_WIDGET_C
// (None)

class UClass* UBRUSH_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BRUSH_WIDGET_C");

	return Clss;
}


// BRUSH_WIDGET_C BRUSH_WIDGET.Default__BRUSH_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBRUSH_WIDGET_C* UBRUSH_WIDGET_C::GetDefaultObj()
{
	static class UBRUSH_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBRUSH_WIDGET_C*>(UBRUSH_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BRUSH_WIDGET.BRUSH_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBRUSH_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BRUSH_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BRUSH_WIDGET.BRUSH_WIDGET_C.ExecuteUbergraph_BRUSH_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBRUSH_WIDGET_C::ExecuteUbergraph_BRUSH_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BRUSH_WIDGET_C", "ExecuteUbergraph_BRUSH_WIDGET");

	Params::UBRUSH_WIDGET_C_ExecuteUbergraph_BRUSH_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


