#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CW_MenuButton.CW_MenuButton_C
// (None)

class UClass* UCW_MenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CW_MenuButton_C");

	return Clss;
}


// CW_MenuButton_C CW_MenuButton.Default__CW_MenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCW_MenuButton_C* UCW_MenuButton_C::GetDefaultObj()
{
	static class UCW_MenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCW_MenuButton_C*>(UCW_MenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CW_MenuButton.CW_MenuButton_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UCW_MenuButton_C::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "GetText");

	Params::UCW_MenuButton_C_GetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CW_MenuButton.CW_MenuButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCW_MenuButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "PreConstruct");

	Params::UCW_MenuButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CW_MenuButton.CW_MenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCW_MenuButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CW_MenuButton.CW_MenuButton_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCW_MenuButton_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CW_MenuButton.CW_MenuButton_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCW_MenuButton_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CW_MenuButton.CW_MenuButton_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCW_MenuButton_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CW_MenuButton.CW_MenuButton_C.ExecuteUbergraph_CW_MenuButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCW_MenuButton_C::ExecuteUbergraph_CW_MenuButton(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "ExecuteUbergraph_CW_MenuButton");

	Params::UCW_MenuButton_C_ExecuteUbergraph_CW_MenuButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CW_MenuButton.CW_MenuButton_C.Buttonunhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCW_MenuButton_C::Buttonunhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "Buttonunhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CW_MenuButton.CW_MenuButton_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCW_MenuButton_C::ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CW_MenuButton.CW_MenuButton_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCW_MenuButton_C::ButtonHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CW_MenuButton_C", "ButtonHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


