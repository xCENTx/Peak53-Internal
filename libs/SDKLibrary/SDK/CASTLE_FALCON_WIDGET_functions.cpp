#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CASTLE_FALCON_WIDGET.CASTLE_FALCON_WIDGET_C
// (None)

class UClass* UCASTLE_FALCON_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CASTLE_FALCON_WIDGET_C");

	return Clss;
}


// CASTLE_FALCON_WIDGET_C CASTLE_FALCON_WIDGET.Default__CASTLE_FALCON_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCASTLE_FALCON_WIDGET_C* UCASTLE_FALCON_WIDGET_C::GetDefaultObj()
{
	static class UCASTLE_FALCON_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCASTLE_FALCON_WIDGET_C*>(UCASTLE_FALCON_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CASTLE_FALCON_WIDGET.CASTLE_FALCON_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCASTLE_FALCON_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CASTLE_FALCON_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CASTLE_FALCON_WIDGET.CASTLE_FALCON_WIDGET_C.ExecuteUbergraph_CASTLE_FALCON_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCASTLE_FALCON_WIDGET_C::ExecuteUbergraph_CASTLE_FALCON_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CASTLE_FALCON_WIDGET_C", "ExecuteUbergraph_CASTLE_FALCON_WIDGET");

	Params::UCASTLE_FALCON_WIDGET_C_ExecuteUbergraph_CASTLE_FALCON_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


