#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Child_GeneralSettings.WB_Child_GeneralSettings_C
// (None)

class UClass* UWB_Child_GeneralSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Child_GeneralSettings_C");

	return Clss;
}


// WB_Child_GeneralSettings_C WB_Child_GeneralSettings.Default__WB_Child_GeneralSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Child_GeneralSettings_C* UWB_Child_GeneralSettings_C::GetDefaultObj()
{
	static class UWB_Child_GeneralSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Child_GeneralSettings_C*>(UWB_Child_GeneralSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.GetLanguageButton_State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWB_Child_GeneralSettings_C::GetLanguageButton_State(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "GetLanguageButton_State");

	Params::UWB_Child_GeneralSettings_C_GetLanguageButton_State_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.BindPanelWidgetChildren_ButtonOnUnhovered
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

void UWB_Child_GeneralSettings_C::BindPanelWidgetChildren_ButtonOnUnhovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "BindPanelWidgetChildren_ButtonOnUnhovered");

	Params::UWB_Child_GeneralSettings_C_BindPanelWidgetChildren_ButtonOnUnhovered_Params Parms{};

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


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.BindPanelWidgetChildren_ButtonOnHovered
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

void UWB_Child_GeneralSettings_C::BindPanelWidgetChildren_ButtonOnHovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "BindPanelWidgetChildren_ButtonOnHovered");

	Params::UWB_Child_GeneralSettings_C_BindPanelWidgetChildren_ButtonOnHovered_Params Parms{};

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


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.GetStateButtonInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Head                                                             (Parm, OutParm)
// class FText                        Body                                                             (Parm, OutParm)
// class UWB_Button_Slider_C*         K2Node_DynamicCast_AsWB_Button_Slider                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_DynamicCast_AsWB_Button_State                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_GeneralSettings_C::GetStateButtonInfo(class UCommonButtonBase* Button, class FText* Head, class FText* Body, class UWB_Button_Slider_C* K2Node_DynamicCast_AsWB_Button_Slider, bool K2Node_DynamicCast_bSuccess, class UWB_Button_State_C* K2Node_DynamicCast_AsWB_Button_State, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "GetStateButtonInfo");

	Params::UWB_Child_GeneralSettings_C_GetStateButtonInfo_Params Parms{};

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


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Child_GeneralSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_GeneralSettings_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "OnInputMethodChanged");

	Params::UWB_Child_GeneralSettings_C_OnInputMethodChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.SetInfoFieldInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Child_GeneralSettings_C::SetInfoFieldInfo(class FText Head, class FText Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "SetInfoFieldInfo");

	Params::UWB_Child_GeneralSettings_C_SetInfoFieldInfo_Params Parms{};

	Parms.Head = Head;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_GeneralSettings_C::BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");

	Params::UWB_Child_GeneralSettings_C_BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.OnAnyButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_GeneralSettings_C::OnAnyButtonHovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "OnAnyButtonHovered");

	Params::UWB_Child_GeneralSettings_C_OnAnyButtonHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.OnAnyButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_GeneralSettings_C::OnAnyButtonUnhovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "OnAnyButtonUnhovered");

	Params::UWB_Child_GeneralSettings_C_OnAnyButtonUnhovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.SetupButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_GeneralSettings_C::SetupButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "SetupButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.OnApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_GeneralSettings_C::OnApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "OnApplyChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_GeneralSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "Tick");

	Params::UWB_Child_GeneralSettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.OnResetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_GeneralSettings_C::OnResetDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "OnResetDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.OnResetDefaultsFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_GeneralSettings_C::OnResetDefaultsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "OnResetDefaultsFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_GeneralSettings.WB_Child_GeneralSettings_C.ExecuteUbergraph_WB_Child_GeneralSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Head                                          (None)
// class FText                        K2Node_CustomEvent_Body                                          (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetStateButtonInfo_Head                                 (None)
// class FText                        CallFunc_GetStateButtonInfo_Body                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLanguageButton_State_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_GeneralSettings_C::ExecuteUbergraph_WB_Child_GeneralSettings(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool K2Node_Event_bUsingGamepad, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& Temp_string_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button, int32 K2Node_ComponentBoundEvent_NewState, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class FText CallFunc_GetStateButtonInfo_Head, class FText CallFunc_GetStateButtonInfo_Body, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable, int32 CallFunc_GetLanguageButton_State_ReturnValue, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_IntInt_ReturnValue, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Variable, const class FString& K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_GeneralSettings_C", "ExecuteUbergraph_WB_Child_GeneralSettings");

	Params::UWB_Child_GeneralSettings_C_ExecuteUbergraph_WB_Child_GeneralSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_CustomEvent_Head = K2Node_CustomEvent_Head;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_NewState = K2Node_ComponentBoundEvent_NewState;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_GetStateButtonInfo_Head = CallFunc_GetStateButtonInfo_Head;
	Parms.CallFunc_GetStateButtonInfo_Body = CallFunc_GetStateButtonInfo_Body;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetLanguageButton_State_ReturnValue = CallFunc_GetLanguageButton_State_ReturnValue;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_1 = CallFunc_Get_PMM_Instance_AsPMM_Instance_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_2 = CallFunc_Get_PMM_Instance_AsPMM_Instance_2;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_3 = CallFunc_Get_PMM_Instance_AsPMM_Instance_3;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


