#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SHICHIGOSAN_WIDGET.SHICHIGOSAN_WIDGET_C
// (None)

class UClass* USHICHIGOSAN_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SHICHIGOSAN_WIDGET_C");

	return Clss;
}


// SHICHIGOSAN_WIDGET_C SHICHIGOSAN_WIDGET.Default__SHICHIGOSAN_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USHICHIGOSAN_WIDGET_C* USHICHIGOSAN_WIDGET_C::GetDefaultObj()
{
	static class USHICHIGOSAN_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USHICHIGOSAN_WIDGET_C*>(USHICHIGOSAN_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SHICHIGOSAN_WIDGET.SHICHIGOSAN_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USHICHIGOSAN_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SHICHIGOSAN_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SHICHIGOSAN_WIDGET.SHICHIGOSAN_WIDGET_C.ExecuteUbergraph_SHICHIGOSAN_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USHICHIGOSAN_WIDGET_C::ExecuteUbergraph_SHICHIGOSAN_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SHICHIGOSAN_WIDGET_C", "ExecuteUbergraph_SHICHIGOSAN_WIDGET");

	Params::USHICHIGOSAN_WIDGET_C_ExecuteUbergraph_SHICHIGOSAN_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


