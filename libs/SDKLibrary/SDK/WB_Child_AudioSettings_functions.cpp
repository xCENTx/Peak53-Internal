#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Child_AudioSettings.WB_Child_AudioSettings_C
// (None)

class UClass* UWB_Child_AudioSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Child_AudioSettings_C");

	return Clss;
}


// WB_Child_AudioSettings_C WB_Child_AudioSettings.Default__WB_Child_AudioSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Child_AudioSettings_C* UWB_Child_AudioSettings_C::GetDefaultObj()
{
	static class UWB_Child_AudioSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Child_AudioSettings_C*>(UWB_Child_AudioSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.GetMusicOffVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::GetMusicOffVolume(double* Value, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "GetMusicOffVolume");

	Params::UWB_Child_AudioSettings_C_GetMusicOffVolume_Params Parms{};

	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.SetAudioButtonValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_InValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::SetAudioButtonValue(class UWB_Button_Slider_C* Button, float InValue, double CallFunc_FClamp_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_SetSliderValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "SetAudioButtonValue");

	Params::UWB_Child_AudioSettings_C_SetAudioButtonValue_Params Parms{};

	Parms.Button = Button;
	Parms.InValue = InValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;
	Parms.CallFunc_SetSliderValue_InValue_ImplicitCast = CallFunc_SetSliderValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.GetLanguageButton_State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWB_Child_AudioSettings_C::GetLanguageButton_State(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable_2, int32 Temp_int_Variable_3, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "GetLanguageButton_State");

	Params::UWB_Child_AudioSettings_C_GetLanguageButton_State_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BindPanelWidgetChildren_ButtonOnUnhovered
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Panel_Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Bind_Unbind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 EventToBind                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_DynamicCast_AsCommon_Button_Base                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BindPanelWidgetChildren_ButtonOnUnhovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BindPanelWidgetChildren_ButtonOnUnhovered");

	Params::UWB_Child_AudioSettings_C_BindPanelWidgetChildren_ButtonOnUnhovered_Params Parms{};

	Parms.Panel_Widget = Panel_Widget;
	Parms.Bind_Unbind = Bind_Unbind;
	Parms.EventToBind = EventToBind;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Button_Base = K2Node_DynamicCast_AsCommon_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BindPanelWidgetChildren_ButtonOnHovered
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Panel_Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Bind_Unbind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 EventToBind                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_DynamicCast_AsCommon_Button_Base                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BindPanelWidgetChildren_ButtonOnHovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BindPanelWidgetChildren_ButtonOnHovered");

	Params::UWB_Child_AudioSettings_C_BindPanelWidgetChildren_ButtonOnHovered_Params Parms{};

	Parms.Panel_Widget = Panel_Widget;
	Parms.Bind_Unbind = Bind_Unbind;
	Parms.EventToBind = EventToBind;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Button_Base = K2Node_DynamicCast_AsCommon_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.GetStateButtonInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Head                                                             (Parm, OutParm)
// class FText                        Body                                                             (Parm, OutParm)
// class UWB_Button_Slider_C*         K2Node_DynamicCast_AsWB_Button_Slider                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_DynamicCast_AsWB_Button_State                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::GetStateButtonInfo(class UCommonButtonBase* Button, class FText* Head, class FText* Body, class UWB_Button_Slider_C* K2Node_DynamicCast_AsWB_Button_Slider, bool K2Node_DynamicCast_bSuccess, class UWB_Button_State_C* K2Node_DynamicCast_AsWB_Button_State, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "GetStateButtonInfo");

	Params::UWB_Child_AudioSettings_C_GetStateButtonInfo_Params Parms{};

	Parms.Button = Button;
	Parms.K2Node_DynamicCast_AsWB_Button_Slider = K2Node_DynamicCast_AsWB_Button_Slider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWB_Button_State = K2Node_DynamicCast_AsWB_Button_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Head != nullptr)
		*Head = Parms.Head;

	if (Body != nullptr)
		*Body = Parms.Body;

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Child_AudioSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "OnInputMethodChanged");

	Params::UWB_Child_AudioSettings_C_OnInputMethodChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.SetInfoFieldInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Child_AudioSettings_C::SetInfoFieldInfo(class FText Head, class FText Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "SetInfoFieldInfo");

	Params::UWB_Child_AudioSettings_C_SetInfoFieldInfo_Params Parms{};

	Parms.Head = Head;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnAnyButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::OnAnyButtonHovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "OnAnyButtonHovered");

	Params::UWB_Child_AudioSettings_C_OnAnyButtonHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnAnyButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::OnAnyButtonUnhovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "OnAnyButtonUnhovered");

	Params::UWB_Child_AudioSettings_C_OnAnyButtonUnhovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.SetupButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_AudioSettings_C::SetupButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "SetupButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_AudioSettings_C::OnApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "OnApplyChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "Tick");

	Params::UWB_Child_AudioSettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnResetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_AudioSettings_C::OnResetDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "OnResetDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnResetDefaultsFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_AudioSettings_C::OnResetDefaultsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "OnResetDefaultsFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_MasterVolume_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BndEvt__WB_Child_AudioSettings_Button_MasterVolume_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BndEvt__WB_Child_AudioSettings_Button_MasterVolume_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	Params::UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_MasterVolume_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_MusicOn_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BndEvt__WB_Child_AudioSettings_Button_MusicOn_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BndEvt__WB_Child_AudioSettings_Button_MusicOn_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature");

	Params::UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_MusicOn_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_DialogueVolume_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BndEvt__WB_Child_AudioSettings_Button_DialogueVolume_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BndEvt__WB_Child_AudioSettings_Button_DialogueVolume_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature");

	Params::UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_DialogueVolume_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_SFX_Volume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BndEvt__WB_Child_AudioSettings_Button_SFX_Volume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BndEvt__WB_Child_AudioSettings_Button_SFX_Volume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature");

	Params::UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_SFX_Volume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_MusicVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BndEvt__WB_Child_AudioSettings_Button_MusicVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BndEvt__WB_Child_AudioSettings_Button_MusicVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	Params::UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_MusicVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.CustomEvent_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSwapAudioOutputResult      SwapResult                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Child_AudioSettings_C::CustomEvent_2(struct FSwapAudioOutputResult& SwapResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "CustomEvent_2");

	Params::UWB_Child_AudioSettings_C_CustomEvent_2_Params Parms{};

	Parms.SwapResult = SwapResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_AudioDevice_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::BndEvt__WB_Child_AudioSettings_Button_AudioDevice_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "BndEvt__WB_Child_AudioSettings_Button_AudioDevice_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	Params::UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_AudioDevice_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnAvailableAudioOutputDevicesFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAudioOutputDeviceInfo>AvailableDevices                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Child_AudioSettings_C::OnAvailableAudioOutputDevicesFound(TArray<struct FAudioOutputDeviceInfo>& AvailableDevices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "OnAvailableAudioOutputDevicesFound");

	Params::UWB_Child_AudioSettings_C_OnAvailableAudioOutputDevicesFound_Params Parms{};

	Parms.AvailableDevices = AvailableDevices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentDevice                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::CustomEvent_3(const class FString& CurrentDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "CustomEvent_3");

	Params::UWB_Child_AudioSettings_C_CustomEvent_3_Params Parms{};

	Parms.CurrentDevice = CurrentDevice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.ExecuteUbergraph_WB_Child_AudioSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Head                                          (None)
// class FText                        K2Node_CustomEvent_Body                                          (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetStateButtonInfo_Head                                 (None)
// class FText                        CallFunc_GetStateButtonInfo_Body                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_Slider_C*         K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_Slider_C*         K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_Slider_C*         K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_Slider_C*         K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMusicOffVolume_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMusicOffVolume_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSwapAudioOutputResult      K2Node_CustomEvent_SwapResult                                    (ConstParm)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioOutputDeviceInfo      CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_10                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_11                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_12                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAudioOutputDeviceInfo>K2Node_CustomEvent_AvailableDevices                              (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CurrentDevice                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioButtonValue_InValue_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioButtonValue_InValue_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioButtonValue_InValue_ImplicitCast_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioButtonValue_InValue_ImplicitCast_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_AudioSettings_C::ExecuteUbergraph_WB_Child_AudioSettings(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool K2Node_Event_bUsingGamepad, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class FText CallFunc_GetStateButtonInfo_Head, class FText CallFunc_GetStateButtonInfo_Body, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button_5, double K2Node_ComponentBoundEvent_Value_3, double CallFunc_MapRangeClamped_ReturnValue, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_4, int32 K2Node_ComponentBoundEvent_NewState_1, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button_3, double K2Node_ComponentBoundEvent_Value_2, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button_2, double K2Node_ComponentBoundEvent_Value_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button_1, double K2Node_ComponentBoundEvent_Value, double CallFunc_MapRangeClamped_ReturnValue_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_1, double CallFunc_GetMusicOffVolume_Value, double CallFunc_GetMusicOffVolume_Value_1, const struct FSwapAudioOutputResult& K2Node_CustomEvent_SwapResult, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button, int32 K2Node_ComponentBoundEvent_NewState, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_2, const struct FAudioOutputDeviceInfo& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, int32 Temp_int_Variable_2, bool K2Node_Select_Default_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_4, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_5, bool Temp_bool_Has_Been_Initd_Variable_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_6, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_7, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_8, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_9, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_10, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_11, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, double K2Node_Select_Default_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_12, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, bool Temp_bool_Variable_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, double K2Node_Select_Default_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TArray<struct FAudioOutputDeviceInfo>& K2Node_CustomEvent_AvailableDevices, const class FString& K2Node_CustomEvent_CurrentDevice, class FText CallFunc_Conv_StringToText_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue, float CallFunc_SetAudioButtonValue_InValue_ImplicitCast, float CallFunc_SetAudioButtonValue_InValue_ImplicitCast_1, float CallFunc_SetAudioButtonValue_InValue_ImplicitCast_2, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1, float CallFunc_SetAudioButtonValue_InValue_ImplicitCast_3, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_AudioSettings_C", "ExecuteUbergraph_WB_Child_AudioSettings");

	Params::UWB_Child_AudioSettings_C_ExecuteUbergraph_WB_Child_AudioSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_CustomEvent_Head = K2Node_CustomEvent_Head;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_GetStateButtonInfo_Head = CallFunc_GetStateButtonInfo_Head;
	Parms.CallFunc_GetStateButtonInfo_Body = CallFunc_GetStateButtonInfo_Body;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_1 = CallFunc_Get_PMM_Instance_AsPMM_Instance_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_2 = CallFunc_Get_PMM_Instance_AsPMM_Instance_2;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_NewState_1 = K2Node_ComponentBoundEvent_NewState_1;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetMusicOffVolume_Value = CallFunc_GetMusicOffVolume_Value;
	Parms.CallFunc_GetMusicOffVolume_Value_1 = CallFunc_GetMusicOffVolume_Value_1;
	Parms.K2Node_CustomEvent_SwapResult = K2Node_CustomEvent_SwapResult;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_NewState = K2Node_ComponentBoundEvent_NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_3 = CallFunc_Get_PMM_Instance_AsPMM_Instance_3;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_4 = CallFunc_Get_PMM_Instance_AsPMM_Instance_4;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_5 = CallFunc_Get_PMM_Instance_AsPMM_Instance_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_6 = CallFunc_Get_PMM_Instance_AsPMM_Instance_6;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_7 = CallFunc_Get_PMM_Instance_AsPMM_Instance_7;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_8 = CallFunc_Get_PMM_Instance_AsPMM_Instance_8;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_9 = CallFunc_Get_PMM_Instance_AsPMM_Instance_9;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_10 = CallFunc_Get_PMM_Instance_AsPMM_Instance_10;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_11 = CallFunc_Get_PMM_Instance_AsPMM_Instance_11;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_3 = CallFunc_NotEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_12 = CallFunc_Get_PMM_Instance_AsPMM_Instance_12;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_CustomEvent_AvailableDevices = K2Node_CustomEvent_AvailableDevices;
	Parms.K2Node_CustomEvent_CurrentDevice = K2Node_CustomEvent_CurrentDevice;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_SetAudioButtonValue_InValue_ImplicitCast = CallFunc_SetAudioButtonValue_InValue_ImplicitCast;
	Parms.CallFunc_SetAudioButtonValue_InValue_ImplicitCast_1 = CallFunc_SetAudioButtonValue_InValue_ImplicitCast_1;
	Parms.CallFunc_SetAudioButtonValue_InValue_ImplicitCast_2 = CallFunc_SetAudioButtonValue_InValue_ImplicitCast_2;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1;
	Parms.CallFunc_SetAudioButtonValue_InValue_ImplicitCast_3 = CallFunc_SetAudioButtonValue_InValue_ImplicitCast_3;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


