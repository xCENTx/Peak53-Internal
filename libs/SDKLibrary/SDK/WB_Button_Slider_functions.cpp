#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button_Slider.WB_Button_Slider_C
// (None)

class UClass* UWB_Button_Slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button_Slider_C");

	return Clss;
}


// WB_Button_Slider_C WB_Button_Slider.Default__WB_Button_Slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button_Slider_C* UWB_Button_Slider_C::GetDefaultObj()
{
	static class UWB_Button_Slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button_Slider_C*>(UWB_Button_Slider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Button_Slider.WB_Button_Slider_C.SetSliderWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PC_Width                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Gamepad_Width                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetSliderWidth(float PC_Width, float Gamepad_Width, bool Temp_bool_Variable, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetSliderWidth");

	Params::UWB_Button_Slider_C_SetSliderWidth_Params Parms{};

	Parms.PC_Width = PC_Width;
	Parms.Gamepad_Width = Gamepad_Width;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWB_Button_Slider_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetAnalogValue_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "OnAnalogValueChanged");

	Params::UWB_Button_Slider_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Button_Slider.WB_Button_Slider_C.Slider_GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_Button_Slider_C::Slider_GetValue(float CallFunc_GetValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "Slider_GetValue");

	Params::UWB_Button_Slider_C_Slider_GetValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Button_Slider.WB_Button_Slider_C.Slider_ClampValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Max_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Min_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWB_Button_Slider_C::Slider_ClampValue(double Value, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_FClamp_Min_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "Slider_ClampValue");

	Params::UWB_Button_Slider_C_Slider_ClampValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_Max_ImplicitCast = CallFunc_FClamp_Max_ImplicitCast;
	Parms.CallFunc_FClamp_Min_ImplicitCast = CallFunc_FClamp_Min_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Button_Slider.WB_Button_Slider_C.Slider_SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::Slider_SetValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "Slider_SetValue");

	Params::UWB_Button_Slider_C_Slider_SetValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.Slider_SetMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::Slider_SetMaxValue(float MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "Slider_SetMaxValue");

	Params::UWB_Button_Slider_C_Slider_SetMaxValue_Params Parms{};

	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.Slider_SetMinValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::Slider_SetMinValue(float MinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "Slider_SetMinValue");

	Params::UWB_Button_Slider_C_Slider_SetMinValue_Params Parms{};

	Parms.MinValue = MinValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.Slider_SetStepSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StepSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::Slider_SetStepSize(float StepSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "Slider_SetStepSize");

	Params::UWB_Button_Slider_C_Slider_SetStepSize_Params Parms{};

	Parms.StepSize = StepSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetTextVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetTextVisibility(class UWidget* InText, bool bVisible, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetTextVisibility");

	Params::UWB_Button_Slider_C_SetTextVisibility_Params Parms{};

	Parms.InText = InText;
	Parms.bVisible = bVisible;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue_1 = CallFunc_GetVisibility_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        Key                                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FKeyEvent                   KeyEvent                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)

struct FEventReply UWB_Button_Slider_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key, const struct FKeyEvent& KeyEvent, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "OnPreviewKeyDown");

	Params::UWB_Button_Slider_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.Key = Key;
	Parms.KeyEvent = KeyEvent;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetInputSwitcherVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetInputSwitcherVisibility(bool bVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetInputSwitcherVisibility");

	Params::UWB_Button_Slider_C_SetInputSwitcherVisibility_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetInputSwitcherGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetInputSwitcherGamepad(bool IsGamepad, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetInputSwitcherGamepad");

	Params::UWB_Button_Slider_C_SetInputSwitcherGamepad_Params Parms{};

	Parms.IsGamepad = IsGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetTextInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             TextInfo                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasColorChanged_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              CallFunc_SetOpacity_InOpacity_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetTextInfo(class UCommonTextBlock* InText, struct FS_TextInfo_PMM& TextInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasColorChanged_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetTextInfo");

	Params::UWB_Button_Slider_C_SetTextInfo_Params Parms{};

	Parms.InText = InText;
	Parms.TextInfo = TextInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasColorChanged_ReturnValue = CallFunc_HasColorChanged_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_SetOpacity_InOpacity_ImplicitCast = CallFunc_SetOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetButtonTextInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonButtonState      InState                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_FindTextInfoByButtonState_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_FindTextInfoByButtonState_ReturnValue_1                 (NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetButtonTextInfo(enum class ECommonButtonState InState, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetButtonTextInfo");

	Params::UWB_Button_Slider_C_SetButtonTextInfo_Params Parms{};

	Parms.InState = InState;
	Parms.CallFunc_FindTextInfoByButtonState_ReturnValue = CallFunc_FindTextInfoByButtonState_ReturnValue;
	Parms.CallFunc_FindTextInfoByButtonState_ReturnValue_1 = CallFunc_FindTextInfoByButtonState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.FindTextInfoByButtonState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECommonButtonState      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ButtonTextInfo_PMM       S_ButtonTextInfo_PMM                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// enum class ECommonButtonState      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_TextInfo_HandleColorOverride_Out                        (NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_TextInfo_HandleColorOverride_Out_1                      (NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_TextInfo_HandleColorOverride_Out_2                      (NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_TextInfo_HandleColorOverride_Out_3                      (NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_TextInfo_HandleColorOverride_Out_4                      (NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             CallFunc_TextInfo_HandleColorOverride_Out_5                      (NoDestructor, HasGetValueTypeHash)
// struct FS_TextInfo_PMM             K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)

struct FS_TextInfo_PMM UWB_Button_Slider_C::FindTextInfoByButtonState(enum class ECommonButtonState State, struct FS_ButtonTextInfo_PMM& S_ButtonTextInfo_PMM, enum class ECommonButtonState Temp_byte_Variable, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_1, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_2, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_3, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_4, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_5, const struct FS_TextInfo_PMM& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "FindTextInfoByButtonState");

	Params::UWB_Button_Slider_C_FindTextInfoByButtonState_Params Parms{};

	Parms.State = State;
	Parms.S_ButtonTextInfo_PMM = S_ButtonTextInfo_PMM;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextInfo_HandleColorOverride_Out = CallFunc_TextInfo_HandleColorOverride_Out;
	Parms.CallFunc_TextInfo_HandleColorOverride_Out_1 = CallFunc_TextInfo_HandleColorOverride_Out_1;
	Parms.CallFunc_TextInfo_HandleColorOverride_Out_2 = CallFunc_TextInfo_HandleColorOverride_Out_2;
	Parms.CallFunc_TextInfo_HandleColorOverride_Out_3 = CallFunc_TextInfo_HandleColorOverride_Out_3;
	Parms.CallFunc_TextInfo_HandleColorOverride_Out_4 = CallFunc_TextInfo_HandleColorOverride_Out_4;
	Parms.CallFunc_TextInfo_HandleColorOverride_Out_5 = CallFunc_TextInfo_HandleColorOverride_Out_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Button_Slider_C::SetValueText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetValueText");

	Params::UWB_Button_Slider_C_SetValueText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Button_Slider_C::SetButtonText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetButtonText");

	Params::UWB_Button_Slider_C_SetButtonText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.AlignStateTextWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::AlignStateTextWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "AlignStateTextWidth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UWB_Button_Slider_C_BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.OnLeftExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::OnLeftExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "OnLeftExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.OnRightExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::OnRightExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "OnRightExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BndEvt__WB_Button_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::BndEvt__WB_Button_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BndEvt__WB_Button_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWB_Button_Slider_C_BndEvt__WB_Button_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.CustomValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::CustomValueChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "CustomValueChanged");

	Params::UWB_Button_Slider_C_CustomValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetSliderValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSkipCallback                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetSliderValue(float InValue, bool bSkipCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetSliderValue");

	Params::UWB_Button_Slider_C_SetSliderValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.bSkipCallback = bSkipCallback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BP_OnEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.SetSliderText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::SetSliderText(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "SetSliderText");

	Params::UWB_Button_Slider_C_SetSliderText_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Button_Slider_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "BP_OnDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Slider.WB_Button_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "PreConstruct");

	Params::UWB_Button_Slider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.ExecuteUbergraph_WB_Button_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonButtonState      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonButtonState      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonButtonState      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Slider_ClampValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Slider_ClampValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Slider_ClampValue_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Slider_GetValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSkipCallback                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_InValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_InValue_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_SliderValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderText_Value_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CustomValueChanged_Value_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CacheValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::ExecuteUbergraph_WB_Button_Slider(int32 EntryPoint, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool Temp_bool_Variable, enum class ECommonButtonState Temp_byte_Variable, bool K2Node_ComponentBoundEvent_bUsingGamepad, enum class ECommonButtonState Temp_byte_Variable_1, bool CallFunc_IsHovered_ReturnValue, bool Temp_bool_Variable_1, enum class ECommonButtonState K2Node_Select_Default, float CallFunc_GetValue_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Slider_ClampValue_ReturnValue, float K2Node_ComponentBoundEvent_Value, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, float CallFunc_GetValue_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Slider_ClampValue_ReturnValue_1, double K2Node_CustomEvent_Value_1, double CallFunc_Slider_ClampValue_ReturnValue_2, float CallFunc_Slider_GetValue_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float K2Node_CustomEvent_InValue, bool K2Node_CustomEvent_bSkipCallback, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_CustomEvent_Value, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_4, bool K2Node_Event_IsDesignTime, bool CallFunc_GetIsEnabled_ReturnValue_5, bool CallFunc_GetIsEnabled_ReturnValue_6, bool CallFunc_GetIsEnabled_ReturnValue_7, bool CallFunc_GetIsEnabled_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetSliderValue_InValue_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetSliderValue_InValue_ImplicitCast_1, float K2Node_VariableSet_SliderValue_ImplicitCast, float CallFunc_SetSliderText_Value_ImplicitCast, double CallFunc_CustomValueChanged_Value_ImplicitCast, double K2Node_VariableSet_CacheValue_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "ExecuteUbergraph_WB_Button_Slider");

	Params::UWB_Button_Slider_C_ExecuteUbergraph_WB_Button_Slider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Slider_ClampValue_ReturnValue = CallFunc_Slider_ClampValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Slider_ClampValue_ReturnValue_1 = CallFunc_Slider_ClampValue_ReturnValue_1;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.CallFunc_Slider_ClampValue_ReturnValue_2 = CallFunc_Slider_ClampValue_ReturnValue_2;
	Parms.CallFunc_Slider_GetValue_ReturnValue = CallFunc_Slider_GetValue_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_2 = CallFunc_GetIsEnabled_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_InValue = K2Node_CustomEvent_InValue;
	Parms.K2Node_CustomEvent_bSkipCallback = K2Node_CustomEvent_bSkipCallback;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_3 = CallFunc_GetIsEnabled_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_4 = CallFunc_GetIsEnabled_ReturnValue_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetIsEnabled_ReturnValue_5 = CallFunc_GetIsEnabled_ReturnValue_5;
	Parms.CallFunc_GetIsEnabled_ReturnValue_6 = CallFunc_GetIsEnabled_ReturnValue_6;
	Parms.CallFunc_GetIsEnabled_ReturnValue_7 = CallFunc_GetIsEnabled_ReturnValue_7;
	Parms.CallFunc_GetIsEnabled_ReturnValue_8 = CallFunc_GetIsEnabled_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetSliderValue_InValue_ImplicitCast = CallFunc_SetSliderValue_InValue_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetSliderValue_InValue_ImplicitCast_1 = CallFunc_SetSliderValue_InValue_ImplicitCast_1;
	Parms.K2Node_VariableSet_SliderValue_ImplicitCast = K2Node_VariableSet_SliderValue_ImplicitCast;
	Parms.CallFunc_SetSliderText_Value_ImplicitCast = CallFunc_SetSliderText_Value_ImplicitCast;
	Parms.CallFunc_CustomValueChanged_Value_ImplicitCast = CallFunc_CustomValueChanged_Value_ImplicitCast;
	Parms.K2Node_VariableSet_CacheValue_ImplicitCast = K2Node_VariableSet_CacheValue_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Slider.WB_Button_Slider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Slider_C::OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Slider_C", "OnValueChanged__DelegateSignature");

	Params::UWB_Button_Slider_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


