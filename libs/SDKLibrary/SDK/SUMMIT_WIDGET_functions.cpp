#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SUMMIT_WIDGET.SUMMIT_WIDGET_C
// (None)

class UClass* USUMMIT_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SUMMIT_WIDGET_C");

	return Clss;
}


// SUMMIT_WIDGET_C SUMMIT_WIDGET.Default__SUMMIT_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USUMMIT_WIDGET_C* USUMMIT_WIDGET_C::GetDefaultObj()
{
	static class USUMMIT_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USUMMIT_WIDGET_C*>(USUMMIT_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SUMMIT_WIDGET.SUMMIT_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USUMMIT_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SUMMIT_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SUMMIT_WIDGET.SUMMIT_WIDGET_C.ExecuteUbergraph_SUMMIT_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USUMMIT_WIDGET_C::ExecuteUbergraph_SUMMIT_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SUMMIT_WIDGET_C", "ExecuteUbergraph_SUMMIT_WIDGET");

	Params::USUMMIT_WIDGET_C_ExecuteUbergraph_SUMMIT_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


