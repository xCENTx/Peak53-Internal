#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Container_Settings.WB_Container_Settings_C
// (None)

class UClass* UWB_Container_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Container_Settings_C");

	return Clss;
}


// WB_Container_Settings_C WB_Container_Settings.Default__WB_Container_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Container_Settings_C* UWB_Container_Settings_C::GetDefaultObj()
{
	static class UWB_Container_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Container_Settings_C*>(UWB_Container_Settings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Container_Settings.WB_Container_Settings_C.IsChildVideoSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   AsWB_Child_Video_Settings                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   K2Node_DynamicCast_AsWB_Child_Video_Settings                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Container_Settings_C::IsChildVideoSettings(class UWB_Child_VideoSettings_C** AsWB_Child_Video_Settings, class UWB_Child_VideoSettings_C* K2Node_DynamicCast_AsWB_Child_Video_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "IsChildVideoSettings");

	Params::UWB_Container_Settings_C_IsChildVideoSettings_Params Parms{};

	Parms.K2Node_DynamicCast_AsWB_Child_Video_Settings = K2Node_DynamicCast_AsWB_Child_Video_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsWB_Child_Video_Settings != nullptr)
		*AsWB_Child_Video_Settings = Parms.AsWB_Child_Video_Settings;

	return Parms.ReturnValue;

}


// Function WB_Container_Settings.WB_Container_Settings_C.CreateChildWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Child_Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 OnSettingsChanged                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 OnSettingsUnchanged                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_Base_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_Base_C*            K2Node_DynamicCast_AsWB_Child_Base                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::CreateChildWidget(class UClass* Child_Class, FDelegateProperty_& OnSettingsChanged, FDelegateProperty_& OnSettingsUnchanged, class UWB_Child_Base_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UWB_Child_Base_C* K2Node_DynamicCast_AsWB_Child_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "CreateChildWidget");

	Params::UWB_Container_Settings_C_CreateChildWidget_Params Parms{};

	Parms.Child_Class = Child_Class;
	Parms.OnSettingsChanged = OnSettingsChanged;
	Parms.OnSettingsUnchanged = OnSettingsUnchanged;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Child_Base = K2Node_DynamicCast_AsWB_Child_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        InKey                                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)
// struct FEventReply                 CallFunc_ClearUserFocus_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWB_Container_Settings_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& InKey, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FEventReply& CallFunc_ClearUserFocus_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnKeyDown");

	Params::UWB_Container_Settings_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.InKey = InKey;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;
	Parms.CallFunc_ClearUserFocus_ReturnValue = CallFunc_ClearUserFocus_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Settings.WB_Container_Settings_C.SetInputMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::SetInputMethod(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "SetInputMethod");

	Params::UWB_Container_Settings_C_SetInputMethod_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnSettingsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::OnSettingsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnSettingsChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnConfirmSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::OnConfirmSettings(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnConfirmSettings");

	Params::UWB_Container_Settings_C_OnConfirmSettings_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnSettingsUnchanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::OnSettingsUnchanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnSettingsUnchanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.Click_Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::Click_Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "Click_Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_Container_Settings_C_BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.Click_ResetDefaults
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::Click_ResetDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "Click_ResetDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.BndEvt__WB_Settings_General_Button_ResetDefaults_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::BndEvt__WB_Settings_General_Button_ResetDefaults_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "BndEvt__WB_Settings_General_Button_ResetDefaults_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_Container_Settings_C_BndEvt__WB_Settings_General_Button_ResetDefaults_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnBackRequestVidSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::OnBackRequestVidSettings(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnBackRequestVidSettings");

	Params::UWB_Container_Settings_C_OnBackRequestVidSettings_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnRequestBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::OnRequestBack(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnRequestBack");

	Params::UWB_Container_Settings_C_OnRequestBack_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.CreateChild
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::CreateChild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "CreateChild");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnSettingsApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::OnSettingsApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnSettingsApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UWB_Container_Settings_C_BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnFadeOutCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Settings_C::OnFadeOutCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnFadeOutCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Settings.WB_Container_Settings_C.OnResetReactionDefaults
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::OnResetReactionDefaults(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "OnResetReactionDefaults");

	Params::UWB_Container_Settings_C_OnResetReactionDefaults_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Settings.WB_Container_Settings_C.ExecuteUbergraph_WB_Container_Settings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Request_C*               CallFunc_CreateRequest_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_PMM_Interface_C>K2Node_DynamicCast_AsBPi_PMM_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildVideoSettings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnySettingDirty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsScreenResolutionDirty_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsFullscreenModeDirty_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildVideoSettings_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_1        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// TScriptInterface<class IBPi_PMM_Interface_C>K2Node_DynamicCast_AsBPi_PMM_Interface_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildVideoSettings_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_2        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetVideoChangesRequestText_Result                       (None)
// class UWB_Request_Timer_C*         CallFunc_CreateRequestWithTimer_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildVideoSettings_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_3        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class UWB_Request_C*               CallFunc_CreateRequest_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildVideoSettings_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_4        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildVideoSettings_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Child_VideoSettings_C*   CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_5        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_PMM_Interface_C>K2Node_DynamicCast_AsBPi_PMM_Interface_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Settings_C::ExecuteUbergraph_WB_Container_Settings(int32 EntryPoint, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue, class UCommonButtonBase* K2Node_CustomEvent_Button, TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, int32 Temp_int_Variable_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, bool K2Node_CustomEvent_Confirmed_2, bool K2Node_CustomEvent_Confirmed_1, int32 K2Node_Select_Default, bool CallFunc_IsChildVideoSettings_ReturnValue, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings, bool CallFunc_IsAnySettingDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsScreenResolutionDirty_ReturnValue, bool CallFunc_GetIsFullscreenModeDirty_ReturnValue, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, bool CallFunc_IsChildVideoSettings_ReturnValue_1, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_1, bool CallFunc_BooleanOR_ReturnValue_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, class UWidget* CallFunc_GetChildAt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsChildVideoSettings_ReturnValue_2, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_2, class FText CallFunc_GetVideoChangesRequestText_Result, class UWB_Request_Timer_C* CallFunc_CreateRequestWithTimer_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_IsChildVideoSettings_ReturnValue_3, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsChildVideoSettings_ReturnValue_4, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_4, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsChildVideoSettings_ReturnValue_5, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_5, bool K2Node_CustomEvent_Confirmed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Settings_C", "ExecuteUbergraph_WB_Container_Settings");

	Params::UWB_Container_Settings_C_ExecuteUbergraph_WB_Container_Settings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateRequest_ReturnValue = CallFunc_CreateRequest_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_DynamicCast_AsBPi_PMM_Interface = K2Node_DynamicCast_AsBPi_PMM_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Confirmed_2 = K2Node_CustomEvent_Confirmed_2;
	Parms.K2Node_CustomEvent_Confirmed_1 = K2Node_CustomEvent_Confirmed_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsChildVideoSettings_ReturnValue = CallFunc_IsChildVideoSettings_ReturnValue;
	Parms.CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings = CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings;
	Parms.CallFunc_IsAnySettingDirty_ReturnValue = CallFunc_IsAnySettingDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetIsScreenResolutionDirty_ReturnValue = CallFunc_GetIsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_GetIsFullscreenModeDirty_ReturnValue = CallFunc_GetIsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.CallFunc_IsChildVideoSettings_ReturnValue_1 = CallFunc_IsChildVideoSettings_ReturnValue_1;
	Parms.CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_1 = CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_1 = CallFunc_Get_PMM_Instance_AsPMM_Instance_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_2 = CallFunc_Get_PMM_Instance_AsPMM_Instance_2;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_3 = CallFunc_Get_PMM_Instance_AsPMM_Instance_3;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPi_PMM_Interface_1 = K2Node_DynamicCast_AsBPi_PMM_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsChildVideoSettings_ReturnValue_2 = CallFunc_IsChildVideoSettings_ReturnValue_2;
	Parms.CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_2 = CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_2;
	Parms.CallFunc_GetVideoChangesRequestText_Result = CallFunc_GetVideoChangesRequestText_Result;
	Parms.CallFunc_CreateRequestWithTimer_ReturnValue = CallFunc_CreateRequestWithTimer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_IsChildVideoSettings_ReturnValue_3 = CallFunc_IsChildVideoSettings_ReturnValue_3;
	Parms.CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_3 = CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_CreateRequest_ReturnValue_1 = CallFunc_CreateRequest_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsChildVideoSettings_ReturnValue_4 = CallFunc_IsChildVideoSettings_ReturnValue_4;
	Parms.CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_4 = CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_4 = CallFunc_Get_PMM_Instance_AsPMM_Instance_4;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_5 = CallFunc_Get_PMM_Instance_AsPMM_Instance_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsChildVideoSettings_ReturnValue_5 = CallFunc_IsChildVideoSettings_ReturnValue_5;
	Parms.CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_5 = CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_5;
	Parms.K2Node_CustomEvent_Confirmed = K2Node_CustomEvent_Confirmed;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_DynamicCast_AsBPi_PMM_Interface_2 = K2Node_DynamicCast_AsBPi_PMM_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


