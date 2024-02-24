#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Select-Scenario.Select-Scenario_C
// (None)

class UClass* USelectMinusScenario_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Select-Scenario_C");

	return Clss;
}


// Select-Scenario_C Select-Scenario.Default__Select-Scenario_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USelectMinusScenario_C* USelectMinusScenario_C::GetDefaultObj()
{
	static class USelectMinusScenario_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectMinusScenario_C*>(USelectMinusScenario_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Select-Scenario.Select-Scenario_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USelectMinusScenario_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Select-Scenario.Select-Scenario_C.BndEvt__Options-Legal_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USelectMinusScenario_C::BndEvt__OptionsMinusLegal_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "BndEvt__Options-Legal_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Select-Scenario.Select-Scenario_C.BndEvt__Select-Scenario_Button_171_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USelectMinusScenario_C::BndEvt__SelectMinusScenario_Button_171_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "BndEvt__Select-Scenario_Button_171_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Select-Scenario.Select-Scenario_C.BndEvt__Select-Scenario_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USelectMinusScenario_C::BndEvt__SelectMinusScenario_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "BndEvt__Select-Scenario_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Select-Scenario.Select-Scenario_C.ExecuteUbergraph_Select-Scenario
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMinusScenario_C::ExecuteUbergraph_SelectMinusScenario(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "ExecuteUbergraph_Select-Scenario");

	Params::USelectMinusScenario_C_ExecuteUbergraph_SelectMinusScenario_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Select-Scenario.Select-Scenario_C.OnClickedNight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USelectMinusScenario_C::OnClickedNight__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "OnClickedNight__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Select-Scenario.Select-Scenario_C.OnClickedDay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USelectMinusScenario_C::OnClickedDay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "OnClickedDay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Select-Scenario.Select-Scenario_C.OnBackRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USelectMinusScenario_C::OnBackRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Select-Scenario_C", "OnBackRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


