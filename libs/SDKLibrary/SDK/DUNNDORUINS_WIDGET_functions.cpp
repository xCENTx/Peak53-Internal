#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DUNNDORUINS_WIDGET.DUNNDORUINS_WIDGET_C
// (None)

class UClass* UDUNNDORUINS_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DUNNDORUINS_WIDGET_C");

	return Clss;
}


// DUNNDORUINS_WIDGET_C DUNNDORUINS_WIDGET.Default__DUNNDORUINS_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDUNNDORUINS_WIDGET_C* UDUNNDORUINS_WIDGET_C::GetDefaultObj()
{
	static class UDUNNDORUINS_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDUNNDORUINS_WIDGET_C*>(UDUNNDORUINS_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DUNNDORUINS_WIDGET.DUNNDORUINS_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDUNNDORUINS_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DUNNDORUINS_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DUNNDORUINS_WIDGET.DUNNDORUINS_WIDGET_C.ExecuteUbergraph_DUNNDORUINS_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDUNNDORUINS_WIDGET_C::ExecuteUbergraph_DUNNDORUINS_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DUNNDORUINS_WIDGET_C", "ExecuteUbergraph_DUNNDORUINS_WIDGET");

	Params::UDUNNDORUINS_WIDGET_C_ExecuteUbergraph_DUNNDORUINS_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


