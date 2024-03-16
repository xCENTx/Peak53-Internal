#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_SettingsMenu.BP_SettingsMenu_C
// (None)

class UClass* UBP_SettingsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SettingsMenu_C");

	return Clss;
}


// BP_SettingsMenu_C BP_SettingsMenu.Default__BP_SettingsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SettingsMenu_C* UBP_SettingsMenu_C::GetDefaultObj()
{
	static class UBP_SettingsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SettingsMenu_C*>(UBP_SettingsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SettingsMenu.BP_SettingsMenu_C.BindOnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsMenu_C::BindOnClicked(enum class E_WidgetToggleType WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettingsMenu_C", "BindOnClicked");

	Params::UBP_SettingsMenu_C_BindOnClicked_Params Parms{};

	Parms.WidgetToggleType = WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SettingsMenu.BP_SettingsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_SettingsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettingsMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SettingsMenu.BP_SettingsMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettingsMenu_C", "PreConstruct");

	Params::UBP_SettingsMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SettingsMenu.BP_SettingsMenu_C.ExecuteUbergraph_BP_SettingsMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetToggleType      K2Node_CustomEvent_WidgetToggleType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SettingsMenu_C::ExecuteUbergraph_BP_SettingsMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_WidgetToggleType K2Node_CustomEvent_WidgetToggleType, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettingsMenu_C", "ExecuteUbergraph_BP_SettingsMenu");

	Params::UBP_SettingsMenu_C_ExecuteUbergraph_BP_SettingsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_WidgetToggleType = K2Node_CustomEvent_WidgetToggleType;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


