#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Child_ControlSettings.WB_Child_ControlSettings_C
// (None)

class UClass* UWB_Child_ControlSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Child_ControlSettings_C");

	return Clss;
}


// WB_Child_ControlSettings_C WB_Child_ControlSettings.Default__WB_Child_ControlSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Child_ControlSettings_C* UWB_Child_ControlSettings_C::GetDefaultObj()
{
	static class UWB_Child_ControlSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Child_ControlSettings_C*>(UWB_Child_ControlSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.FilterByVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*                PanelWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Filter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UWidget*>             Found                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<class UWidget*> UWB_Child_ControlSettings_C::FilterByVisibility(class UPanelWidget* PanelWidget, enum class ESlateVisibility Filter, const TArray<class UWidget*>& Found, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "FilterByVisibility");

	Params::UWB_Child_ControlSettings_C_FilterByVisibility_Params Parms{};

	Parms.PanelWidget = PanelWidget;
	Parms.Filter = Filter;
	Parms.Found = Found;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.SetValue_GamepadSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentValue_MouseSensitivity                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_InValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::SetValue_GamepadSensitivity(double CurrentValue_MouseSensitivity, float CallFunc_SetSliderValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "SetValue_GamepadSensitivity");

	Params::UWB_Child_ControlSettings_C_SetValue_GamepadSensitivity_Params Parms{};

	Parms.CurrentValue_MouseSensitivity = CurrentValue_MouseSensitivity;
	Parms.CallFunc_SetSliderValue_InValue_ImplicitCast = CallFunc_SetSliderValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.SetValue_MouseSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentValue_MouseSensitivity                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_InValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::SetValue_MouseSensitivity(double CurrentValue_MouseSensitivity, float CallFunc_SetSliderValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "SetValue_MouseSensitivity");

	Params::UWB_Child_ControlSettings_C_SetValue_MouseSensitivity_Params Parms{};

	Parms.CurrentValue_MouseSensitivity = CurrentValue_MouseSensitivity;
	Parms.CallFunc_SetSliderValue_InValue_ImplicitCast = CallFunc_SetSliderValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.SetState_InvertGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState_InvGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::SetState_InvertGamepad(int32 CurrentState_InvGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "SetState_InvertGamepad");

	Params::UWB_Child_ControlSettings_C_SetState_InvertGamepad_Params Parms{};

	Parms.CurrentState_InvGamepad = CurrentState_InvGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.SetState_InvertMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState_InvMouse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::SetState_InvertMouse(int32 CurrentState_InvMouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "SetState_InvertMouse");

	Params::UWB_Child_ControlSettings_C_SetState_InvertMouse_Params Parms{};

	Parms.CurrentState_InvMouse = CurrentState_InvMouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.GetInvGamepadButton_State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::GetInvGamepadButton_State(int32* State, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "GetInvGamepadButton_State");

	Params::UWB_Child_ControlSettings_C_GetInvGamepadButton_State_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.GetInvMouseButton_State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::GetInvMouseButton_State(int32* State, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "GetInvMouseButton_State");

	Params::UWB_Child_ControlSettings_C_GetInvMouseButton_State_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.GetGamepadSenButtonValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::GetGamepadSenButtonValue(double* Value, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "GetGamepadSenButtonValue");

	Params::UWB_Child_ControlSettings_C_GetGamepadSenButtonValue_Params Parms{};

	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.GetMouseSenButtonValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::GetMouseSenButtonValue(double* Value, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "GetMouseSenButtonValue");

	Params::UWB_Child_ControlSettings_C_GetMouseSenButtonValue_Params Parms{};

	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.BindPanelWidgetChildren_ButtonOnUnhovered
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

void UWB_Child_ControlSettings_C::BindPanelWidgetChildren_ButtonOnUnhovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "BindPanelWidgetChildren_ButtonOnUnhovered");

	Params::UWB_Child_ControlSettings_C_BindPanelWidgetChildren_ButtonOnUnhovered_Params Parms{};

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


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.BindPanelWidgetChildren_ButtonOnHovered
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

void UWB_Child_ControlSettings_C::BindPanelWidgetChildren_ButtonOnHovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "BindPanelWidgetChildren_ButtonOnHovered");

	Params::UWB_Child_ControlSettings_C_BindPanelWidgetChildren_ButtonOnHovered_Params Parms{};

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


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.GetStateButtonInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Head                                                             (Parm, OutParm)
// class FText                        Body                                                             (Parm, OutParm)
// class UWB_Button_Slider_C*         K2Node_DynamicCast_AsWB_Button_Slider                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_DynamicCast_AsWB_Button_State                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::GetStateButtonInfo(class UCommonButtonBase* Button, class FText* Head, class FText* Body, class UWB_Button_Slider_C* K2Node_DynamicCast_AsWB_Button_Slider, bool K2Node_DynamicCast_bSuccess, class UWB_Button_State_C* K2Node_DynamicCast_AsWB_Button_State, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "GetStateButtonInfo");

	Params::UWB_Child_ControlSettings_C_GetStateButtonInfo_Params Parms{};

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


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Child_ControlSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "OnInputMethodChanged");

	Params::UWB_Child_ControlSettings_C_OnInputMethodChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.SetInfoFieldInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Child_ControlSettings_C::SetInfoFieldInfo(class FText Head, class FText Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "SetInfoFieldInfo");

	Params::UWB_Child_ControlSettings_C_SetInfoFieldInfo_Params Parms{};

	Parms.Head = Head;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");

	Params::UWB_Child_ControlSettings_C_BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.OnAnyButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::OnAnyButtonHovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "OnAnyButtonHovered");

	Params::UWB_Child_ControlSettings_C_OnAnyButtonHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.OnAnyButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::OnAnyButtonUnhovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "OnAnyButtonUnhovered");

	Params::UWB_Child_ControlSettings_C_OnAnyButtonUnhovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.SetupButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_ControlSettings_C::SetupButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "SetupButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.OnApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_ControlSettings_C::OnApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "OnApplyChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "Tick");

	Params::UWB_Child_ControlSettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.OnResetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_ControlSettings_C::OnResetDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "OnResetDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.OnResetDefaultsFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_ControlSettings_C::OnResetDefaultsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "OnResetDefaultsFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.BndEvt__WB_Child_ControlSettings_Button_InvertGamepadControl_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::BndEvt__WB_Child_ControlSettings_Button_InvertGamepadControl_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "BndEvt__WB_Child_ControlSettings_Button_InvertGamepadControl_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	Params::UWB_Child_ControlSettings_C_BndEvt__WB_Child_ControlSettings_Button_InvertGamepadControl_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.BndEvt__WB_Child_ControlSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::BndEvt__WB_Child_ControlSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "BndEvt__WB_Child_ControlSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UWB_Child_ControlSettings_C_BndEvt__WB_Child_ControlSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.BndEvt__WB_Child_ControlSettings_Button_MouseSensitivity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::BndEvt__WB_Child_ControlSettings_Button_MouseSensitivity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "BndEvt__WB_Child_ControlSettings_Button_MouseSensitivity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	Params::UWB_Child_ControlSettings_C_BndEvt__WB_Child_ControlSettings_Button_MouseSensitivity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_ControlSettings.WB_Child_ControlSettings_C.ExecuteUbergraph_WB_Child_ControlSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Head                                          (None)
// class FText                        K2Node_CustomEvent_Body                                          (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetStateButtonInfo_Head                                 (None)
// class FText                        CallFunc_GetStateButtonInfo_Body                                 (None)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMouseSenButtonValue_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGamepadSenButtonValue_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInvMouseButton_State_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_Slider_C*         K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_Slider_C*         K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInvGamepadButton_State_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_FilterByVisibility_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputMethodActive_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_FilterByVisibility_ReturnValue_1                        (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_ControlSettings_C::ExecuteUbergraph_WB_Child_ControlSettings(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bUsingGamepad, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_3, int32 K2Node_ComponentBoundEvent_NewState_1, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class FText CallFunc_GetStateButtonInfo_Head, class FText CallFunc_GetStateButtonInfo_Body, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, bool Temp_bool_Has_Been_Initd_Variable_1, double CallFunc_GetMouseSenButtonValue_Value, double CallFunc_GetGamepadSenButtonValue_Value, int32 CallFunc_GetInvMouseButton_State_State, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_4, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_5, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_6, bool Temp_bool_IsClosed_Variable, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_2, int32 K2Node_ComponentBoundEvent_NewState, bool Temp_bool_Variable_1, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button_1, double K2Node_ComponentBoundEvent_Value_1, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button, double K2Node_ComponentBoundEvent_Value, int32 CallFunc_GetInvGamepadButton_State_State, TArray<class UWidget*>& CallFunc_FilterByVisibility_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_HasAnyChildren_ReturnValue, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_NotEqual_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_IsInputMethodActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_1, bool K2Node_Select_Default_1, TArray<class UWidget*>& CallFunc_FilterByVisibility_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_ControlSettings_C", "ExecuteUbergraph_WB_Child_ControlSettings");

	Params::UWB_Child_ControlSettings_C_ExecuteUbergraph_WB_Child_ControlSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_CustomEvent_Head = K2Node_CustomEvent_Head;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_NewState_1 = K2Node_ComponentBoundEvent_NewState_1;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_GetStateButtonInfo_Head = CallFunc_GetStateButtonInfo_Head;
	Parms.CallFunc_GetStateButtonInfo_Body = CallFunc_GetStateButtonInfo_Body;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_1 = CallFunc_Get_PMM_Instance_AsPMM_Instance_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_2 = CallFunc_Get_PMM_Instance_AsPMM_Instance_2;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_3 = CallFunc_Get_PMM_Instance_AsPMM_Instance_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetMouseSenButtonValue_Value = CallFunc_GetMouseSenButtonValue_Value;
	Parms.CallFunc_GetGamepadSenButtonValue_Value = CallFunc_GetGamepadSenButtonValue_Value;
	Parms.CallFunc_GetInvMouseButton_State_State = CallFunc_GetInvMouseButton_State_State;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_4 = CallFunc_Get_PMM_Instance_AsPMM_Instance_4;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_5 = CallFunc_Get_PMM_Instance_AsPMM_Instance_5;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_6 = CallFunc_Get_PMM_Instance_AsPMM_Instance_6;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_NewState = K2Node_ComponentBoundEvent_NewState;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetInvGamepadButton_State_State = CallFunc_GetInvGamepadButton_State_State;
	Parms.CallFunc_FilterByVisibility_ReturnValue = CallFunc_FilterByVisibility_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsInputMethodActive_ReturnValue = CallFunc_IsInputMethodActive_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FilterByVisibility_ReturnValue_1 = CallFunc_FilterByVisibility_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


