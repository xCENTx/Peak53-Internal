#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass JERICHO_WIDGET.JERICHO_WIDGET_C
// (None)

class UClass* UJERICHO_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JERICHO_WIDGET_C");

	return Clss;
}


// JERICHO_WIDGET_C JERICHO_WIDGET.Default__JERICHO_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJERICHO_WIDGET_C* UJERICHO_WIDGET_C::GetDefaultObj()
{
	static class UJERICHO_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJERICHO_WIDGET_C*>(UJERICHO_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JERICHO_WIDGET.JERICHO_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJERICHO_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JERICHO_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JERICHO_WIDGET.JERICHO_WIDGET_C.ExecuteUbergraph_JERICHO_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJERICHO_WIDGET_C::ExecuteUbergraph_JERICHO_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JERICHO_WIDGET_C", "ExecuteUbergraph_JERICHO_WIDGET");

	Params::UJERICHO_WIDGET_C_ExecuteUbergraph_JERICHO_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


