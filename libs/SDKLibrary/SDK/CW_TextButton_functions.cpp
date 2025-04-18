#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CW_TextButton

#include "Basic.hpp"

#include "CW_TextButton_classes.hpp"
#include "CW_TextButton_parameters.hpp"


namespace SDK
{

// Function CW_TextButton.CW_TextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCW_TextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "PreConstruct");

	Params::CW_TextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CW_TextButton.CW_TextButton_C.GetToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UCW_TextButton_C::GetToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "GetToolTipWidget");

	Params::CW_TextButton_C_GetToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CW_TextButton.CW_TextButton_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCW_TextButton_C::GetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "GetText");

	Params::CW_TextButton_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CW_TextButton.CW_TextButton_C.ExecuteUbergraph_CW_TextButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCW_TextButton_C::ExecuteUbergraph_CW_TextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "ExecuteUbergraph_CW_TextButton");

	Params::CW_TextButton_C_ExecuteUbergraph_CW_TextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CW_TextButton.CW_TextButton_C.Buttonunhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCW_TextButton_C::Buttonunhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "Buttonunhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CW_TextButton.CW_TextButton_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCW_TextButton_C::ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CW_TextButton.CW_TextButton_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCW_TextButton_C::ButtonHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "ButtonHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CW_TextButton.CW_TextButton_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCW_TextButton_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CW_TextButton.CW_TextButton_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCW_TextButton_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CW_TextButton.CW_TextButton_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCW_TextButton_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CW_TextButton_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

