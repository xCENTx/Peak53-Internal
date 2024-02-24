#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Child_VideoSettings.WB_Child_VideoSettings_C
// (None)

class UClass* UWB_Child_VideoSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Child_VideoSettings_C");

	return Clss;
}


// WB_Child_VideoSettings_C WB_Child_VideoSettings.Default__WB_Child_VideoSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Child_VideoSettings_C* UWB_Child_VideoSettings_C::GetDefaultObj()
{
	static class UWB_Child_VideoSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Child_VideoSettings_C*>(UWB_Child_VideoSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.IsAnySettingDirty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_CurrentScaleValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_MinScaleValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_MaxScaleValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDynamicResolutionDirty_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsFullscreenModeDirty_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsScreenResolutionDirty_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Child_VideoSettings_C::IsAnySettingDirty(bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized, float CallFunc_GetResolutionScaleInfo_CurrentScaleValue, float CallFunc_GetResolutionScaleInfo_MinScaleValue, float CallFunc_GetResolutionScaleInfo_MaxScaleValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue_6, bool CallFunc_NotEqual_IntInt_ReturnValue_7, bool CallFunc_NotEqual_IntInt_ReturnValue_8, bool CallFunc_NotEqual_IntInt_ReturnValue_9, bool CallFunc_GetIsDynamicResolutionDirty_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_10, bool CallFunc_GetIsFullscreenModeDirty_ReturnValue, bool CallFunc_GetIsScreenResolutionDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "IsAnySettingDirty");

	Params::UWB_Child_VideoSettings_C_IsAnySettingDirty_Params Parms{};

	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized = CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized;
	Parms.CallFunc_GetResolutionScaleInfo_CurrentScaleValue = CallFunc_GetResolutionScaleInfo_CurrentScaleValue;
	Parms.CallFunc_GetResolutionScaleInfo_MinScaleValue = CallFunc_GetResolutionScaleInfo_MinScaleValue;
	Parms.CallFunc_GetResolutionScaleInfo_MaxScaleValue = CallFunc_GetResolutionScaleInfo_MaxScaleValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_4 = CallFunc_NotEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_5 = CallFunc_NotEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_6 = CallFunc_NotEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_7 = CallFunc_NotEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_8 = CallFunc_NotEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_9 = CallFunc_NotEqual_IntInt_ReturnValue_9;
	Parms.CallFunc_GetIsDynamicResolutionDirty_ReturnValue = CallFunc_GetIsDynamicResolutionDirty_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_10 = CallFunc_NotEqual_IntInt_ReturnValue_10;
	Parms.CallFunc_GetIsFullscreenModeDirty_ReturnValue = CallFunc_GetIsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_GetIsScreenResolutionDirty_ReturnValue = CallFunc_GetIsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.IsVideoModeDirty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsFullscreenModeDirty_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsScreenResolutionDirty_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Child_VideoSettings_C::IsVideoModeDirty(bool CallFunc_GetIsFullscreenModeDirty_ReturnValue, bool CallFunc_GetIsScreenResolutionDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "IsVideoModeDirty");

	Params::UWB_Child_VideoSettings_C_IsVideoModeDirty_Params Parms{};

	Parms.CallFunc_GetIsFullscreenModeDirty_ReturnValue = CallFunc_GetIsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_GetIsScreenResolutionDirty_ReturnValue = CallFunc_GetIsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.GetVideoChangesRequestText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UWB_Child_VideoSettings_C::GetVideoChangesRequestText(class FText* Result, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, enum class EWindowMode Temp_byte_Variable, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "GetVideoChangesRequestText");

	Params::UWB_Child_VideoSettings_C_GetVideoChangesRequestText_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.SetSliderButtonInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         InButton                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StepSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::SetSliderButtonInfo(class UWB_Button_Slider_C* InButton, float CurrentValue, float MinValue, float MaxValue, float StepSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "SetSliderButtonInfo");

	Params::UWB_Child_VideoSettings_C_SetSliderButtonInfo_Params Parms{};

	Parms.InButton = InButton;
	Parms.CurrentValue = CurrentValue;
	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;
	Parms.StepSize = StepSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.ConvertTextToScreenRes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FIntPoint                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FIntPoint UWB_Child_VideoSettings_C::ConvertTextToScreenRes(class FText& Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "ConvertTextToScreenRes");

	Params::UWB_Child_VideoSettings_C_ConvertTextToScreenRes_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.ConvertScreenResToText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint                   IntPoint                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWB_Child_VideoSettings_C::ConvertScreenResToText(struct FIntPoint& IntPoint, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "ConvertScreenResToText");

	Params::UWB_Child_VideoSettings_C_ConvertScreenResToText_Params Parms{};

	Parms.IntPoint = IntPoint;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.FindFirstButtonContainedInPanel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*                Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           FirstButton                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_DynamicCast_AsCommon_Button_Base                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWB_Child_VideoSettings_C::FindFirstButtonContainedInPanel(class UPanelWidget* Panel, class UCommonButtonBase* FirstButton, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "FindFirstButtonContainedInPanel");

	Params::UWB_Child_VideoSettings_C_FindFirstButtonContainedInPanel_Params Parms{};

	Parms.Panel = Panel;
	Parms.FirstButton = FirstButton;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsCommon_Button_Base = K2Node_DynamicCast_AsCommon_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BindPanelWidgetChildren_ButtonOnUnhovered
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

void UWB_Child_VideoSettings_C::BindPanelWidgetChildren_ButtonOnUnhovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BindPanelWidgetChildren_ButtonOnUnhovered");

	Params::UWB_Child_VideoSettings_C_BindPanelWidgetChildren_ButtonOnUnhovered_Params Parms{};

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


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BindPanelWidgetChildren_ButtonOnHovered
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

void UWB_Child_VideoSettings_C::BindPanelWidgetChildren_ButtonOnHovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BindPanelWidgetChildren_ButtonOnHovered");

	Params::UWB_Child_VideoSettings_C_BindPanelWidgetChildren_ButtonOnHovered_Params Parms{};

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


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.GetStateButtonInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Head                                                             (Parm, OutParm)
// class FText                        Body                                                             (Parm, OutParm)
// class UWB_Button_Slider_C*         K2Node_DynamicCast_AsWB_Button_Slider                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_DynamicCast_AsWB_Button_State                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::GetStateButtonInfo(class UCommonButtonBase* Button, class FText* Head, class FText* Body, class UWB_Button_Slider_C* K2Node_DynamicCast_AsWB_Button_Slider, bool K2Node_DynamicCast_bSuccess, class UWB_Button_State_C* K2Node_DynamicCast_AsWB_Button_State, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "GetStateButtonInfo");

	Params::UWB_Child_VideoSettings_C_GetStateButtonInfo_Params Parms{};

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


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.OnAnyButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::OnAnyButtonHovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "OnAnyButtonHovered");

	Params::UWB_Child_VideoSettings_C_OnAnyButtonHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.OnAnyButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::OnAnyButtonUnhovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "OnAnyButtonUnhovered");

	Params::UWB_Child_VideoSettings_C_OnAnyButtonUnhovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.SetupButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_VideoSettings_C::SetupButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "SetupButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.OnApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_VideoSettings_C::OnApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "OnApplyChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "Tick");

	Params::UWB_Child_VideoSettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.SetInfoFieldInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Child_VideoSettings_C::SetInfoFieldInfo(class FText Head, class FText Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "SetInfoFieldInfo");

	Params::UWB_Child_VideoSettings_C_SetInfoFieldInfo_Params Parms{};

	Parms.Head = Head;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.OnResetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_VideoSettings_C::OnResetDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "OnResetDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.OnResetDefaultsFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_VideoSettings_C::OnResetDefaultsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "OnResetDefaultsFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_WindowMode_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_WindowMode_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_WindowMode_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_WindowMode_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_Slider_C*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_DynamicResolution_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_DynamicResolution_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_DynamicResolution_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_DynamicResolution_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_VerticalSync_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_VerticalSync_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_VerticalSync_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_VerticalSync_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "OnInputMethodChanged");

	Params::UWB_Child_VideoSettings_C_OnInputMethodChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_FrameRateLimit_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_FrameRateLimit_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_FrameRateLimit_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_FrameRateLimit_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_OverallScalability_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_OverallScalability_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_OverallScalability_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_OverallScalability_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Child_VideoSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_AntiAliasing_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_AntiAliasing_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_AntiAliasing_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_AntiAliasing_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_Foliage_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_Foliage_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_Foliage_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_Foliage_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_TextureQuality_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_TextureQuality_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_TextureQuality_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_TextureQuality_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_ShadingQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_ShadingQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_ShadingQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_ShadingQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_ShadowQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_ShadowQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_ShadowQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_ShadowQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_ReflectionsQuality_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_ReflectionsQuality_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_ReflectionsQuality_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_ReflectionsQuality_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_PostProcessQuality_K2Node_ComponentBoundEvent_13_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_PostProcessQuality_K2Node_ComponentBoundEvent_13_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_PostProcessQuality_K2Node_ComponentBoundEvent_13_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_PostProcessQuality_K2Node_ComponentBoundEvent_13_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_VisualEffectsQuality_K2Node_ComponentBoundEvent_14_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_VisualEffectsQuality_K2Node_ComponentBoundEvent_14_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_VisualEffectsQuality_K2Node_ComponentBoundEvent_14_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_VisualEffectsQuality_K2Node_ComponentBoundEvent_14_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_ViewDistanceQuality_K2Node_ComponentBoundEvent_15_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_ViewDistanceQuality_K2Node_ComponentBoundEvent_15_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_ViewDistanceQuality_K2Node_ComponentBoundEvent_15_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_ViewDistanceQuality_K2Node_ComponentBoundEvent_15_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.BndEvt__WB_Child_VideoSettings_Button_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_Button_State_C*          Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::BndEvt__WB_Child_VideoSettings_Button_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "BndEvt__WB_Child_VideoSettings_Button_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature");

	Params::UWB_Child_VideoSettings_C_BndEvt__WB_Child_VideoSettings_Button_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_16_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.ConfirmVideoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetupButtons                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::ConfirmVideoMode(bool SetupButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "ConfirmVideoMode");

	Params::UWB_Child_VideoSettings_C_ConfirmVideoMode_Params Parms{};

	Parms.SetupButtons = SetupButtons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.RevertVideoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetupButtons                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::RevertVideoMode(bool SetupButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "RevertVideoMode");

	Params::UWB_Child_VideoSettings_C_RevertVideoMode_Params Parms{};

	Parms.SetupButtons = SetupButtons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.OnRequestApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::OnRequestApply(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "OnRequestApply");

	Params::UWB_Child_VideoSettings_C_OnRequestApply_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_VideoSettings.WB_Child_VideoSettings_C.ExecuteUbergraph_WB_Child_VideoSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_16                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetStateButtonInfo_Head                                 (None)
// class FText                        CallFunc_GetStateButtonInfo_Body                                 (None)
// struct FIntPoint                   CallFunc_ConvertTextToScreenRes_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Head                                          (None)
// class FText                        K2Node_CustomEvent_Body                                          (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_FindFirstButtonContainedInPanel_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_15                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_Slider_C*         K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_FindFirstButtonContainedInPanel_ReturnValue_1           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Button_State_C*          K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewState                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SetupButtons_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SetupButtons                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_FindFirstButtonContainedInPanel_ReturnValue_2           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_ConvertScreenResToText_ReturnValue                      (None)
// enum class EWindowMode             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_ConvertScreenResToText_ReturnValue_1                    (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_ConvertScreenResToText_ReturnValue_2                    (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_CurrentScaleValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_MinScaleValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_MaxScaleValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_CurrentScaleValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_MinScaleValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInfo_MaxScaleValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDynamicResolutionEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsVsyncEnabled_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnySettingDirty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGlobalIlluminationQuality_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessQuality_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetReflectionQuality_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadingQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVideoModeDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetVideoChangesRequestText_Result                       (None)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Request_Timer_C*         CallFunc_CreateRequestWithTimer_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetResolutionScaleValue_NewScaleValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_VideoSettings_C::ExecuteUbergraph_WB_Child_VideoSettings(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable_1, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool Temp_bool_Variable_2, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, bool Temp_bool_Variable_3, int32 Temp_int_Variable_7, bool Temp_bool_Variable_4, int32 Temp_int_Variable_8, bool Temp_bool_Variable_5, int32 Temp_int_Variable_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable_10, float Temp_real_Variable, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_16, int32 K2Node_ComponentBoundEvent_NewState_15, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class FText CallFunc_GetStateButtonInfo_Head, class FText CallFunc_GetStateButtonInfo_Body, const struct FIntPoint& CallFunc_ConvertTextToScreenRes_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_11, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EWindowMode Temp_byte_Variable, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UWidget* CallFunc_FindFirstButtonContainedInPanel_ReturnValue, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_15, int32 K2Node_ComponentBoundEvent_NewState_14, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, int32 Temp_int_Variable_12, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button_14, double K2Node_ComponentBoundEvent_Value, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_13, int32 K2Node_ComponentBoundEvent_NewState_13, bool Temp_bool_Has_Been_Initd_Variable, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_12, int32 K2Node_ComponentBoundEvent_NewState_12, bool K2Node_Event_bUsingGamepad, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_11, int32 K2Node_ComponentBoundEvent_NewState_11, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_10, int32 K2Node_ComponentBoundEvent_NewState_10, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_FindFirstButtonContainedInPanel_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_9, int32 K2Node_ComponentBoundEvent_NewState_9, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_8, int32 K2Node_ComponentBoundEvent_NewState_8, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_7, int32 K2Node_ComponentBoundEvent_NewState_7, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_6, int32 K2Node_ComponentBoundEvent_NewState_6, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_5, int32 K2Node_ComponentBoundEvent_NewState_5, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_4, int32 K2Node_ComponentBoundEvent_NewState_4, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_3, int32 K2Node_ComponentBoundEvent_NewState_3, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_2, int32 K2Node_ComponentBoundEvent_NewState_2, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_1, int32 K2Node_ComponentBoundEvent_NewState_1, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button, int32 K2Node_ComponentBoundEvent_NewState, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_4, bool K2Node_CustomEvent_SetupButtons_1, bool K2Node_CustomEvent_SetupButtons, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_5, float Temp_real_Variable_1, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, class UWidget* CallFunc_FindFirstButtonContainedInPanel_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue_1, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, class FText CallFunc_ConvertScreenResToText_ReturnValue, enum class EWindowMode Temp_byte_Variable_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue_1, class FText CallFunc_ConvertScreenResToText_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float Temp_real_Variable_2, enum class EWindowMode Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable, const struct FIntPoint& CallFunc_Array_Get_Item, class FText CallFunc_ConvertScreenResToText_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_real_Variable_3, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, int32 Temp_int_Variable_15, enum class EWindowMode Temp_byte_Variable_3, float K2Node_Select_Default, bool Temp_bool_Variable_6, enum class EWindowMode Temp_byte_Variable_4, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue_1, int32 K2Node_Select_Default_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Select_Default_2, bool Temp_bool_Variable_7, float CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized, float CallFunc_GetResolutionScaleInfo_CurrentScaleValue, float CallFunc_GetResolutionScaleInfo_MinScaleValue, float CallFunc_GetResolutionScaleInfo_MaxScaleValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized_1, float CallFunc_GetResolutionScaleInfo_CurrentScaleValue_1, float CallFunc_GetResolutionScaleInfo_MinScaleValue_1, float CallFunc_GetResolutionScaleInfo_MaxScaleValue_1, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_GetIsDynamicResolutionEnabled_ReturnValue, int32 Temp_int_Variable_16, int32 K2Node_Select_Default_3, bool K2Node_Select_Default_4, bool CallFunc_GetIsVsyncEnabled_ReturnValue, int32 K2Node_Select_Default_5, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Variable_8, int32 Temp_int_Variable_17, int32 Temp_int_Variable_18, enum class EWindowMode K2Node_Select_Default_6, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, int32 K2Node_Select_Default_7, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, int32 K2Node_Select_Default_8, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_3, int32 K2Node_Select_Default_9, bool Temp_bool_Variable_9, int32 K2Node_Select_Default_10, bool CallFunc_IsAnySettingDirty_ReturnValue, int32 Temp_int_Variable_19, int32 CallFunc_GetGlobalIlluminationQuality_ReturnValue, bool K2Node_Select_Default_11, int32 CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetPostProcessQuality_ReturnValue, int32 CallFunc_GetReflectionQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetShadingQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool Temp_bool_IsClosed_Variable_3, bool K2Node_CustomEvent_Confirmed, bool CallFunc_IsVideoModeDirty_ReturnValue, class FText CallFunc_GetVideoChangesRequestText_Result, bool Temp_bool_Variable_10, class UWB_Request_Timer_C* CallFunc_CreateRequestWithTimer_ReturnValue, int32 K2Node_Select_Default_12, float CallFunc_SetResolutionScaleValue_NewScaleValue_ImplicitCast, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_VideoSettings_C", "ExecuteUbergraph_WB_Child_VideoSettings");

	Params::UWB_Child_VideoSettings_C_ExecuteUbergraph_WB_Child_VideoSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_16 = K2Node_ComponentBoundEvent_Button_16;
	Parms.K2Node_ComponentBoundEvent_NewState_15 = K2Node_ComponentBoundEvent_NewState_15;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_GetStateButtonInfo_Head = CallFunc_GetStateButtonInfo_Head;
	Parms.CallFunc_GetStateButtonInfo_Body = CallFunc_GetStateButtonInfo_Body;
	Parms.CallFunc_ConvertTextToScreenRes_ReturnValue = CallFunc_ConvertTextToScreenRes_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Head = K2Node_CustomEvent_Head;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_1 = CallFunc_Get_PMM_Instance_AsPMM_Instance_1;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_2 = CallFunc_Get_PMM_Instance_AsPMM_Instance_2;
	Parms.CallFunc_FindFirstButtonContainedInPanel_ReturnValue = CallFunc_FindFirstButtonContainedInPanel_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_15 = K2Node_ComponentBoundEvent_Button_15;
	Parms.K2Node_ComponentBoundEvent_NewState_14 = K2Node_ComponentBoundEvent_NewState_14;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_3 = CallFunc_Get_PMM_Instance_AsPMM_Instance_3;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_NewState_13 = K2Node_ComponentBoundEvent_NewState_13;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_NewState_12 = K2Node_ComponentBoundEvent_NewState_12;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_NewState_11 = K2Node_ComponentBoundEvent_NewState_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_NewState_10 = K2Node_ComponentBoundEvent_NewState_10;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_FindFirstButtonContainedInPanel_ReturnValue_1 = CallFunc_FindFirstButtonContainedInPanel_ReturnValue_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_NewState_9 = K2Node_ComponentBoundEvent_NewState_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_NewState_8 = K2Node_ComponentBoundEvent_NewState_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_NewState_7 = K2Node_ComponentBoundEvent_NewState_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_NewState_6 = K2Node_ComponentBoundEvent_NewState_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_NewState_5 = K2Node_ComponentBoundEvent_NewState_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_NewState_4 = K2Node_ComponentBoundEvent_NewState_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_NewState_3 = K2Node_ComponentBoundEvent_NewState_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_NewState_2 = K2Node_ComponentBoundEvent_NewState_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_NewState_1 = K2Node_ComponentBoundEvent_NewState_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_NewState = K2Node_ComponentBoundEvent_NewState;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_4 = CallFunc_Get_PMM_Instance_AsPMM_Instance_4;
	Parms.K2Node_CustomEvent_SetupButtons_1 = K2Node_CustomEvent_SetupButtons_1;
	Parms.K2Node_CustomEvent_SetupButtons = K2Node_CustomEvent_SetupButtons;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance_5 = CallFunc_Get_PMM_Instance_AsPMM_Instance_5;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.CallFunc_FindFirstButtonContainedInPanel_ReturnValue_2 = CallFunc_FindFirstButtonContainedInPanel_ReturnValue_2;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_ConvertScreenResToText_ReturnValue = CallFunc_ConvertScreenResToText_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue_1 = CallFunc_GetScreenResolution_ReturnValue_1;
	Parms.CallFunc_ConvertScreenResToText_ReturnValue_1 = CallFunc_ConvertScreenResToText_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ConvertScreenResToText_ReturnValue_2 = CallFunc_ConvertScreenResToText_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue_1 = CallFunc_GetFullscreenMode_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized = CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized;
	Parms.CallFunc_GetResolutionScaleInfo_CurrentScaleValue = CallFunc_GetResolutionScaleInfo_CurrentScaleValue;
	Parms.CallFunc_GetResolutionScaleInfo_MinScaleValue = CallFunc_GetResolutionScaleInfo_MinScaleValue;
	Parms.CallFunc_GetResolutionScaleInfo_MaxScaleValue = CallFunc_GetResolutionScaleInfo_MaxScaleValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized_1 = CallFunc_GetResolutionScaleInfo_CurrentScaleNormalized_1;
	Parms.CallFunc_GetResolutionScaleInfo_CurrentScaleValue_1 = CallFunc_GetResolutionScaleInfo_CurrentScaleValue_1;
	Parms.CallFunc_GetResolutionScaleInfo_MinScaleValue_1 = CallFunc_GetResolutionScaleInfo_MinScaleValue_1;
	Parms.CallFunc_GetResolutionScaleInfo_MaxScaleValue_1 = CallFunc_GetResolutionScaleInfo_MaxScaleValue_1;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetIsDynamicResolutionEnabled_ReturnValue = CallFunc_GetIsDynamicResolutionEnabled_ReturnValue;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetIsVsyncEnabled_ReturnValue = CallFunc_GetIsVsyncEnabled_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.Temp_int_Variable_18 = Temp_int_Variable_18;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_3 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_IsAnySettingDirty_ReturnValue = CallFunc_IsAnySettingDirty_ReturnValue;
	Parms.Temp_int_Variable_19 = Temp_int_Variable_19;
	Parms.CallFunc_GetGlobalIlluminationQuality_ReturnValue = CallFunc_GetGlobalIlluminationQuality_ReturnValue;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetPostProcessQuality_ReturnValue = CallFunc_GetPostProcessQuality_ReturnValue;
	Parms.CallFunc_GetReflectionQuality_ReturnValue = CallFunc_GetReflectionQuality_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetShadingQuality_ReturnValue = CallFunc_GetShadingQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.K2Node_CustomEvent_Confirmed = K2Node_CustomEvent_Confirmed;
	Parms.CallFunc_IsVideoModeDirty_ReturnValue = CallFunc_IsVideoModeDirty_ReturnValue;
	Parms.CallFunc_GetVideoChangesRequestText_Result = CallFunc_GetVideoChangesRequestText_Result;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.CallFunc_CreateRequestWithTimer_ReturnValue = CallFunc_CreateRequestWithTimer_ReturnValue;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.CallFunc_SetResolutionScaleValue_NewScaleValue_ImplicitCast = CallFunc_SetResolutionScaleValue_NewScaleValue_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;
	Parms.CallFunc_Round_A_ImplicitCast_2 = CallFunc_Round_A_ImplicitCast_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


