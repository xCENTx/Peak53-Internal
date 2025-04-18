#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Container_Default

#include "Basic.hpp"

#include "WB_Container_Default_classes.hpp"
#include "WB_Container_Default_parameters.hpp"


namespace SDK
{

// Function WB_Container_Default.WB_Container_Default_C.BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Default_C::BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WB_Container_Default_C_BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Container_Default.WB_Container_Default_C.BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Param_bUsingGamepad                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Default_C::BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool Param_bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::WB_Container_Default_C_BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.Param_bUsingGamepad = Param_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Container_Default.WB_Container_Default_C.Click_Back
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Default_C::Click_Back()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "Click_Back");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Container_Default.WB_Container_Default_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Container_Default_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Container_Default.WB_Container_Default_C.CreateChild
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Default_C::CreateChild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "CreateChild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Container_Default.WB_Container_Default_C.CreateChildWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Child_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Default_C::CreateChildWidget(class UClass* Child_Class)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "CreateChildWidget");

	Params::WB_Container_Default_C_CreateChildWidget Parms{};

	Parms.Child_Class = Child_Class;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Container_Default.WB_Container_Default_C.ExecuteUbergraph_WB_Container_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Default_C::ExecuteUbergraph_WB_Container_Default(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "ExecuteUbergraph_WB_Container_Default");

	Params::WB_Container_Default_C_ExecuteUbergraph_WB_Container_Default Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Container_Default.WB_Container_Default_C.IsChildVideoSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*        AsWB_Child_Video_Settings                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UWB_Container_Default_C::IsChildVideoSettings(class UWB_Child_VideoSettings_C** AsWB_Child_Video_Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "IsChildVideoSettings");

	Params::WB_Container_Default_C_IsChildVideoSettings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsWB_Child_Video_Settings != nullptr)
		*AsWB_Child_Video_Settings = Parms.AsWB_Child_Video_Settings;

	return Parms.ReturnValue;
}


// Function WB_Container_Default.WB_Container_Default_C.OnFadeOutCompleted
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Default_C::OnFadeOutCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "OnFadeOutCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Container_Default.WB_Container_Default_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_Container_Default_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "OnKeyDown");

	Params::WB_Container_Default_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Container_Default.WB_Container_Default_C.SetInputMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bUsingGamepad                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Default_C::SetInputMethod(bool Param_bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Container_Default_C", "SetInputMethod");

	Params::WB_Container_Default_C_SetInputMethod Parms{};

	Parms.Param_bUsingGamepad = Param_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

}

