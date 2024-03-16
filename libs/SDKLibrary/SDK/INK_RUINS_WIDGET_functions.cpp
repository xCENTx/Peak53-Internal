#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass INK_RUINS_WIDGET.INK_RUINS_WIDGET_C
// (None)

class UClass* UINK_RUINS_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("INK_RUINS_WIDGET_C");

	return Clss;
}


// INK_RUINS_WIDGET_C INK_RUINS_WIDGET.Default__INK_RUINS_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UINK_RUINS_WIDGET_C* UINK_RUINS_WIDGET_C::GetDefaultObj()
{
	static class UINK_RUINS_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UINK_RUINS_WIDGET_C*>(UINK_RUINS_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function INK_RUINS_WIDGET.INK_RUINS_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UINK_RUINS_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INK_RUINS_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function INK_RUINS_WIDGET.INK_RUINS_WIDGET_C.ExecuteUbergraph_INK_RUINS_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UINK_RUINS_WIDGET_C::ExecuteUbergraph_INK_RUINS_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INK_RUINS_WIDGET_C", "ExecuteUbergraph_INK_RUINS_WIDGET");

	Params::UINK_RUINS_WIDGET_C_ExecuteUbergraph_INK_RUINS_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


