#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainMenuSeason2Intro_WIDGET.MainMenuSeason2Intro_WIDGET_C
// (None)

class UClass* UMainMenuSeason2Intro_WIDGET_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuSeason2Intro_WIDGET_C");

	return Clss;
}


// MainMenuSeason2Intro_WIDGET_C MainMenuSeason2Intro_WIDGET.Default__MainMenuSeason2Intro_WIDGET_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuSeason2Intro_WIDGET_C* UMainMenuSeason2Intro_WIDGET_C::GetDefaultObj()
{
	static class UMainMenuSeason2Intro_WIDGET_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuSeason2Intro_WIDGET_C*>(UMainMenuSeason2Intro_WIDGET_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuSeason2Intro_WIDGET.MainMenuSeason2Intro_WIDGET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuSeason2Intro_WIDGET_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuSeason2Intro_WIDGET_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuSeason2Intro_WIDGET.MainMenuSeason2Intro_WIDGET_C.ExecuteUbergraph_MainMenuSeason2Intro_WIDGET
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuSeason2Intro_WIDGET_C::ExecuteUbergraph_MainMenuSeason2Intro_WIDGET(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuSeason2Intro_WIDGET_C", "ExecuteUbergraph_MainMenuSeason2Intro_WIDGET");

	Params::UMainMenuSeason2Intro_WIDGET_C_ExecuteUbergraph_MainMenuSeason2Intro_WIDGET_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


