#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Options-Controls.Options-Controls_C
// (None)

class UClass* UOptionsMinusControls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Options-Controls_C");

	return Clss;
}


// Options-Controls_C Options-Controls.Default__Options-Controls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsMinusControls_C* UOptionsMinusControls_C::GetDefaultObj()
{
	static class UOptionsMinusControls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsMinusControls_C*>(UOptionsMinusControls_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Options-Controls.Options-Controls_C.BndEvt__Options-Controls_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMinusControls_C::BndEvt__OptionsMinusControls_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Controls_C", "BndEvt__Options-Controls_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Controls.Options-Controls_C.ExecuteUbergraph_Options-Controls
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusControls_C::ExecuteUbergraph_OptionsMinusControls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Controls_C", "ExecuteUbergraph_Options-Controls");

	Params::UOptionsMinusControls_C_ExecuteUbergraph_OptionsMinusControls_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Controls.Options-Controls_C.OnBackRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusControls_C::OnBackRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Controls_C", "OnBackRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


