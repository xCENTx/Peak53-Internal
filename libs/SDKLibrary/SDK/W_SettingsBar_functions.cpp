#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SettingsBar.W_SettingsBar_C
// (None)

class UClass* UW_SettingsBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SettingsBar_C");

	return Clss;
}


// W_SettingsBar_C W_SettingsBar.Default__W_SettingsBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SettingsBar_C* UW_SettingsBar_C::GetDefaultObj()
{
	static class UW_SettingsBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SettingsBar_C*>(UW_SettingsBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SettingsBar.W_SettingsBar_C.SetSliderValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_MakeSlider_                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsBar_C::SetSliderValue(double Value, double Local_Value, bool Local_MakeSlider_, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Lerp_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_1, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsBar_C", "SetSliderValue");

	Params::UW_SettingsBar_C_SetSliderValue_Params Parms{};

	Parms.Value = Value;
	Parms.Local_Value = Local_Value;
	Parms.Local_MakeSlider_ = Local_MakeSlider_;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsBar.W_SettingsBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsBar_C", "PreConstruct");

	Params::UW_SettingsBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsBar.W_SettingsBar_C.BndEvt__Slider_Setting_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsBar_C::BndEvt__Slider_Setting_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsBar_C", "BndEvt__Slider_Setting_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_SettingsBar_C_BndEvt__Slider_Setting_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsBar.W_SettingsBar_C.ExecuteUbergraph_W_SettingsBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_SetSliderValue_Value_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSliderValue_Value_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsBar_C::ExecuteUbergraph_W_SettingsBar(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_SetSliderValue_Value_ImplicitCast, double CallFunc_SetSliderValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsBar_C", "ExecuteUbergraph_W_SettingsBar");

	Params::UW_SettingsBar_C_ExecuteUbergraph_W_SettingsBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SetSliderValue_Value_ImplicitCast = CallFunc_SetSliderValue_Value_ImplicitCast;
	Parms.CallFunc_SetSliderValue_Value_ImplicitCast_1 = CallFunc_SetSliderValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


