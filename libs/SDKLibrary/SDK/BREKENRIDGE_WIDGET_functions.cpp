#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BREKENRIDGE_WIDGET.BREKENRIDGE_WIDGET_C
// (None)

class UClass* UBREKENRIDGE_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BREKENRIDGE_WIDGET_C");

	return Clss;
}


// BREKENRIDGE_WIDGET_C BREKENRIDGE_WIDGET.Default__BREKENRIDGE_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBREKENRIDGE_WIDGET_C* UBREKENRIDGE_WIDGET_C::GetDefaultObj()
{
	static class UBREKENRIDGE_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBREKENRIDGE_WIDGET_C*>(UBREKENRIDGE_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BREKENRIDGE_WIDGET.BREKENRIDGE_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBREKENRIDGE_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BREKENRIDGE_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BREKENRIDGE_WIDGET.BREKENRIDGE_WIDGET_C.ExecuteUbergraph_BREKENRIDGE_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBREKENRIDGE_WIDGET_C::ExecuteUbergraph_BREKENRIDGE_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BREKENRIDGE_WIDGET_C", "ExecuteUbergraph_BREKENRIDGE_WIDGET");

	Params::UBREKENRIDGE_WIDGET_C_ExecuteUbergraph_BREKENRIDGE_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


