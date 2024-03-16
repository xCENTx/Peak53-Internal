#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SALT_MINE_WIDGET.SALT_MINE_WIDGET_C
// (None)

class UClass* USALT_MINE_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SALT_MINE_WIDGET_C");

	return Clss;
}


// SALT_MINE_WIDGET_C SALT_MINE_WIDGET.Default__SALT_MINE_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USALT_MINE_WIDGET_C* USALT_MINE_WIDGET_C::GetDefaultObj()
{
	static class USALT_MINE_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USALT_MINE_WIDGET_C*>(USALT_MINE_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SALT_MINE_WIDGET.SALT_MINE_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USALT_MINE_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SALT_MINE_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SALT_MINE_WIDGET.SALT_MINE_WIDGET_C.ExecuteUbergraph_SALT_MINE_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USALT_MINE_WIDGET_C::ExecuteUbergraph_SALT_MINE_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SALT_MINE_WIDGET_C", "ExecuteUbergraph_SALT_MINE_WIDGET");

	Params::USALT_MINE_WIDGET_C_ExecuteUbergraph_SALT_MINE_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


