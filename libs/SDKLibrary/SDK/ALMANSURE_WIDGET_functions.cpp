#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ALMANSURE_WIDGET.ALMANSURE_WIDGET_C
// (None)

class UClass* UALMANSURE_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALMANSURE_WIDGET_C");

	return Clss;
}


// ALMANSURE_WIDGET_C ALMANSURE_WIDGET.Default__ALMANSURE_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALMANSURE_WIDGET_C* UALMANSURE_WIDGET_C::GetDefaultObj()
{
	static class UALMANSURE_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALMANSURE_WIDGET_C*>(UALMANSURE_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALMANSURE_WIDGET.ALMANSURE_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UALMANSURE_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALMANSURE_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALMANSURE_WIDGET.ALMANSURE_WIDGET_C.ExecuteUbergraph_ALMANSURE_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALMANSURE_WIDGET_C::ExecuteUbergraph_ALMANSURE_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALMANSURE_WIDGET_C", "ExecuteUbergraph_ALMANSURE_WIDGET");

	Params::UALMANSURE_WIDGET_C_ExecuteUbergraph_ALMANSURE_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


