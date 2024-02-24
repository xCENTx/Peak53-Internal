#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RATTLESNAKE_WIDGET.RATTLESNAKE_WIDGET_C
// (None)

class UClass* URATTLESNAKE_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RATTLESNAKE_WIDGET_C");

	return Clss;
}


// RATTLESNAKE_WIDGET_C RATTLESNAKE_WIDGET.Default__RATTLESNAKE_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URATTLESNAKE_WIDGET_C* URATTLESNAKE_WIDGET_C::GetDefaultObj()
{
	static class URATTLESNAKE_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URATTLESNAKE_WIDGET_C*>(URATTLESNAKE_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RATTLESNAKE_WIDGET.RATTLESNAKE_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URATTLESNAKE_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RATTLESNAKE_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RATTLESNAKE_WIDGET.RATTLESNAKE_WIDGET_C.ExecuteUbergraph_RATTLESNAKE_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URATTLESNAKE_WIDGET_C::ExecuteUbergraph_RATTLESNAKE_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RATTLESNAKE_WIDGET_C", "ExecuteUbergraph_RATTLESNAKE_WIDGET");

	Params::URATTLESNAKE_WIDGET_C_ExecuteUbergraph_RATTLESNAKE_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


