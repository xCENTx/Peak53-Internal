#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AREA_5280_WIDGET.AREA_5280_WIDGET_C
// (None)

class UClass* UAREA_5280_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AREA_5280_WIDGET_C");

	return Clss;
}


// AREA_5280_WIDGET_C AREA_5280_WIDGET.Default__AREA_5280_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAREA_5280_WIDGET_C* UAREA_5280_WIDGET_C::GetDefaultObj()
{
	static class UAREA_5280_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAREA_5280_WIDGET_C*>(UAREA_5280_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AREA_5280_WIDGET.AREA_5280_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAREA_5280_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREA_5280_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AREA_5280_WIDGET.AREA_5280_WIDGET_C.ExecuteUbergraph_AREA_5280_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAREA_5280_WIDGET_C::ExecuteUbergraph_AREA_5280_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREA_5280_WIDGET_C", "ExecuteUbergraph_AREA_5280_WIDGET");

	Params::UAREA_5280_WIDGET_C_ExecuteUbergraph_AREA_5280_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


