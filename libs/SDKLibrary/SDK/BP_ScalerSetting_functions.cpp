#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ScalerSetting.BP_ScalerSetting_C
// (None)

class UClass* UBP_ScalerSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScalerSetting_C");

	return Clss;
}


// BP_ScalerSetting_C BP_ScalerSetting.Default__BP_ScalerSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScalerSetting_C* UBP_ScalerSetting_C::GetDefaultObj()
{
	static class UBP_ScalerSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScalerSetting_C*>(UBP_ScalerSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ScalerSetting.BP_ScalerSetting_C.NextOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Scaler                   CallFunc_CurrentSelection_Output                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScalerSetting_C::NextOption(const struct FS_Scaler& CallFunc_CurrentSelection_Output, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "NextOption");

	Params::UBP_ScalerSetting_C_NextOption_Params Parms{};

	Parms.CallFunc_CurrentSelection_Output = CallFunc_CurrentSelection_Output;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.CurrentSettingValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_10                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_ScalerSetting_C::CurrentSettingValue(enum class EWindowMode Temp_byte_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, const struct FS_Scaler& CallFunc_Array_Get_Item, double K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_8, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_9, int32 CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Conv_IntToFloat_ReturnValue_7, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_10, int32 CallFunc_GetTextureQuality_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_8, double K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_FunctionResult_ReturnValue_ImplicitCast_1, double K2Node_FunctionResult_ReturnValue_ImplicitCast_2, double K2Node_FunctionResult_ReturnValue_ImplicitCast_3, double K2Node_FunctionResult_ReturnValue_ImplicitCast_4, double K2Node_FunctionResult_ReturnValue_ImplicitCast_5, double K2Node_FunctionResult_ReturnValue_ImplicitCast_6, double K2Node_FunctionResult_ReturnValue_ImplicitCast_7, double K2Node_FunctionResult_ReturnValue_ImplicitCast_8, double K2Node_FunctionResult_ReturnValue_ImplicitCast_9, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "CurrentSettingValue");

	Params::UBP_ScalerSetting_C_CurrentSettingValue_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_IsVSyncEnabled_ReturnValue = CallFunc_IsVSyncEnabled_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_8 = CallFunc_GetGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_9 = CallFunc_GetGameUserSettings_ReturnValue_9;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_10 = CallFunc_GetGameUserSettings_ReturnValue_10;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_1 = K2Node_FunctionResult_ReturnValue_ImplicitCast_1;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_2 = K2Node_FunctionResult_ReturnValue_ImplicitCast_2;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_3 = K2Node_FunctionResult_ReturnValue_ImplicitCast_3;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_4 = K2Node_FunctionResult_ReturnValue_ImplicitCast_4;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_5 = K2Node_FunctionResult_ReturnValue_ImplicitCast_5;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_6 = K2Node_FunctionResult_ReturnValue_ImplicitCast_6;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_7 = K2Node_FunctionResult_ReturnValue_ImplicitCast_7;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_8 = K2Node_FunctionResult_ReturnValue_ImplicitCast_8;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_9 = K2Node_FunctionResult_ReturnValue_ImplicitCast_9;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.ResetSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Scaler                   CallFunc_CurrentSelection_Output                                 (HasGetValueTypeHash)
// double                             CallFunc_CurrentSettingValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScalerSetting_C::ResetSelection(const struct FS_Scaler& CallFunc_CurrentSelection_Output, double CallFunc_CurrentSettingValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "ResetSelection");

	Params::UBP_ScalerSetting_C_ResetSelection_Params Parms{};

	Parms.CallFunc_CurrentSelection_Output = CallFunc_CurrentSelection_Output;
	Parms.CallFunc_CurrentSettingValue_ReturnValue = CallFunc_CurrentSettingValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.ChangeSettingValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output                                 (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_1                               (HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_2                               (HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_3                               (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_4                               (HasGetValueTypeHash)
// enum class EWindowMode             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_5                               (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_6                               (HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_7                               (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_8                               (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_9                               (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_10                              (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_10                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_CurrentSelection_Output_11                              (HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_11                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FFloor_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FFloor_A_ImplicitCast_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScalerSetting_C::ChangeSettingValue(int32 Temp_int_Variable, enum class EWindowMode Temp_byte_Variable, enum class EWindowMode Temp_byte_Variable_1, enum class EWindowMode Temp_byte_Variable_2, const struct FS_Scaler& CallFunc_CurrentSelection_Output, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FS_Scaler& CallFunc_CurrentSelection_Output_1, const struct FS_Scaler& CallFunc_CurrentSelection_Output_2, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, const struct FS_Scaler& CallFunc_CurrentSelection_Output_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_2, const struct FS_Scaler& CallFunc_CurrentSelection_Output_4, enum class EWindowMode K2Node_Select_Default, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, const struct FS_Scaler& CallFunc_CurrentSelection_Output_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, const struct FS_Scaler& CallFunc_CurrentSelection_Output_6, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, const struct FS_Scaler& CallFunc_CurrentSelection_Output_7, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, int32 CallFunc_FTrunc_ReturnValue_3, const struct FS_Scaler& CallFunc_CurrentSelection_Output_8, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_8, int32 CallFunc_FTrunc_ReturnValue_4, const struct FS_Scaler& CallFunc_CurrentSelection_Output_9, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_9, int32 CallFunc_FTrunc_ReturnValue_5, const struct FS_Scaler& CallFunc_CurrentSelection_Output_10, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_10, int32 CallFunc_FTrunc_ReturnValue_6, const struct FS_Scaler& CallFunc_CurrentSelection_Output_11, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_11, int32 CallFunc_FTrunc_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2, double CallFunc_FTrunc_A_ImplicitCast_1, double CallFunc_FTrunc_A_ImplicitCast_2, double CallFunc_FTrunc_A_ImplicitCast_3, double CallFunc_FTrunc_A_ImplicitCast_4, double CallFunc_FTrunc_A_ImplicitCast_5, double CallFunc_FTrunc_A_ImplicitCast_6, double CallFunc_FTrunc_A_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "ChangeSettingValue");

	Params::UBP_ScalerSetting_C_ChangeSettingValue_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_CurrentSelection_Output = CallFunc_CurrentSelection_Output;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_CurrentSelection_Output_1 = CallFunc_CurrentSelection_Output_1;
	Parms.CallFunc_CurrentSelection_Output_2 = CallFunc_CurrentSelection_Output_2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_CurrentSelection_Output_3 = CallFunc_CurrentSelection_Output_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_CurrentSelection_Output_4 = CallFunc_CurrentSelection_Output_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_CurrentSelection_Output_5 = CallFunc_CurrentSelection_Output_5;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_CurrentSelection_Output_6 = CallFunc_CurrentSelection_Output_6;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.CallFunc_CurrentSelection_Output_7 = CallFunc_CurrentSelection_Output_7;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_CurrentSelection_Output_8 = CallFunc_CurrentSelection_Output_8;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_8 = CallFunc_GetGameUserSettings_ReturnValue_8;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.CallFunc_CurrentSelection_Output_9 = CallFunc_CurrentSelection_Output_9;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_9 = CallFunc_GetGameUserSettings_ReturnValue_9;
	Parms.CallFunc_FTrunc_ReturnValue_5 = CallFunc_FTrunc_ReturnValue_5;
	Parms.CallFunc_CurrentSelection_Output_10 = CallFunc_CurrentSelection_Output_10;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_10 = CallFunc_GetGameUserSettings_ReturnValue_10;
	Parms.CallFunc_FTrunc_ReturnValue_6 = CallFunc_FTrunc_ReturnValue_6;
	Parms.CallFunc_CurrentSelection_Output_11 = CallFunc_CurrentSelection_Output_11;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_11 = CallFunc_GetGameUserSettings_ReturnValue_11;
	Parms.CallFunc_FTrunc_ReturnValue_7 = CallFunc_FTrunc_ReturnValue_7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast_1 = CallFunc_FFloor_A_ImplicitCast_1;
	Parms.CallFunc_FFloor_A_ImplicitCast_2 = CallFunc_FFloor_A_ImplicitCast_2;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast_2 = CallFunc_FTrunc_A_ImplicitCast_2;
	Parms.CallFunc_FTrunc_A_ImplicitCast_3 = CallFunc_FTrunc_A_ImplicitCast_3;
	Parms.CallFunc_FTrunc_A_ImplicitCast_4 = CallFunc_FTrunc_A_ImplicitCast_4;
	Parms.CallFunc_FTrunc_A_ImplicitCast_5 = CallFunc_FTrunc_A_ImplicitCast_5;
	Parms.CallFunc_FTrunc_A_ImplicitCast_6 = CallFunc_FTrunc_A_ImplicitCast_6;
	Parms.CallFunc_FTrunc_A_ImplicitCast_7 = CallFunc_FTrunc_A_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.CurrentSelection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_Scaler                   Output                                                           (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Scaler                   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UBP_ScalerSetting_C::CurrentSelection(struct FS_Scaler* Output, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_Scaler& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "CurrentSelection");

	Params::UBP_ScalerSetting_C_CurrentSelection_Params Parms{};

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.PreviousOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Scaler                   CallFunc_CurrentSelection_Output                                 (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScalerSetting_C::PreviousOption(const struct FS_Scaler& CallFunc_CurrentSelection_Output, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "PreviousOption");

	Params::UBP_ScalerSetting_C_PreviousOption_Params Parms{};

	Parms.CallFunc_CurrentSelection_Output = CallFunc_CurrentSelection_Output;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ScalerSetting_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ScalerSetting_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ScalerSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.ExecuteUbergraph_BP_ScalerSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScalerSetting_C::ExecuteUbergraph_BP_ScalerSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "ExecuteUbergraph_BP_ScalerSetting");

	Params::UBP_ScalerSetting_C_ExecuteUbergraph_BP_ScalerSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ScalerSetting.BP_ScalerSetting_C.ValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScalerSetting_C::ValueChanged__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScalerSetting_C", "ValueChanged__DelegateSignature");

	Params::UBP_ScalerSetting_C_ValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


