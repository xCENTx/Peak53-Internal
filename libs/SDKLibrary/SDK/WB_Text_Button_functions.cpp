#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Text_Button

#include "Basic.hpp"

#include "WB_Text_Button_classes.hpp"
#include "WB_Text_Button_parameters.hpp"


namespace SDK
{

// Function WB_Text_Button.WB_Text_Button_C.BndEvt__Text_Button_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Text_Button_C::BndEvt__Text_Button_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "BndEvt__Text_Button_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::WB_Text_Button_C_BndEvt__Text_Button_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Text_Button.WB_Text_Button_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UWB_Text_Button_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Text_Button.WB_Text_Button_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UWB_Text_Button_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Text_Button.WB_Text_Button_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UWB_Text_Button_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Text_Button.WB_Text_Button_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UWB_Text_Button_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Text_Button.WB_Text_Button_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UWB_Text_Button_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Text_Button.WB_Text_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Text_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Text_Button.WB_Text_Button_C.DisplayInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Text_Button_C::DisplayInputAction(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "DisplayInputAction");

	Params::WB_Text_Button_C_DisplayInputAction Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Text_Button.WB_Text_Button_C.DisplayNewsIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDisplayNewsIndicator                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Text_Button_C::DisplayNewsIndicator(bool bDisplayNewsIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "DisplayNewsIndicator");

	Params::WB_Text_Button_C_DisplayNewsIndicator Parms{};

	Parms.bDisplayNewsIndicator = bDisplayNewsIndicator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Text_Button.WB_Text_Button_C.ExecuteUbergraph_WB_Text_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Text_Button_C::ExecuteUbergraph_WB_Text_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "ExecuteUbergraph_WB_Text_Button");

	Params::WB_Text_Button_C_ExecuteUbergraph_WB_Text_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Text_Button.WB_Text_Button_C.GetButtonText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_Text_Button_C::GetButtonText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "GetButtonText");

	Params::WB_Text_Button_C_GetButtonText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Text_Button.WB_Text_Button_C.GetHasTextOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Text_Button_C::GetHasTextOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "GetHasTextOverride");

	Params::WB_Text_Button_C_GetHasTextOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Text_Button.WB_Text_Button_C.GetHasTriggeringInputAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Text_Button_C::GetHasTriggeringInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "GetHasTriggeringInputAction");

	Params::WB_Text_Button_C_GetHasTriggeringInputAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Text_Button.WB_Text_Button_C.GetInputAction_DisplayName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             DisplayName                                            (Parm, OutParm)

void UWB_Text_Button_C::GetInputAction_DisplayName(class FText* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "GetInputAction_DisplayName");

	Params::WB_Text_Button_C_GetInputAction_DisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = std::move(Parms.DisplayName);
}


// Function WB_Text_Button.WB_Text_Button_C.GetInputActionWidgetHasInput
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Text_Button_C::GetInputActionWidgetHasInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "GetInputActionWidgetHasInput");

	Params::WB_Text_Button_C_GetInputActionWidgetHasInput Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Text_Button.WB_Text_Button_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UWB_Text_Button_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Text_Button.WB_Text_Button_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_Text_Button_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "OnFocusReceived");

	Params::WB_Text_Button_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Text_Button.WB_Text_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Text_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "PreConstruct");

	Params::WB_Text_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Text_Button.WB_Text_Button_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonButtonState                      State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Text_Button_C::SetButtonState(ECommonButtonState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Text_Button_C", "SetButtonState");

	Params::WB_Text_Button_C_SetButtonState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}

}

