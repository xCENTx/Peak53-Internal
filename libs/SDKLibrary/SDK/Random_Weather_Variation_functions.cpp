#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Random_Weather_Variation.Random_Weather_Variation_C
// (None)

class UClass* URandom_Weather_Variation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Random_Weather_Variation_C");

	return Clss;
}


// Random_Weather_Variation_C Random_Weather_Variation.Default__Random_Weather_Variation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URandom_Weather_Variation_C* URandom_Weather_Variation_C::GetDefaultObj()
{
	static class URandom_Weather_Variation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URandom_Weather_Variation_C*>(URandom_Weather_Variation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Update Target Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Get_Weather_Preset_Weather_Intensity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Cloud_Coverage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Rain___Snow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Wind_Intensity                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Material_Wetness                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Material_Snow                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::Update_Target_Settings(double CallFunc_Get_Weather_Preset_Weather_Intensity, double CallFunc_Get_Weather_Preset_Cloud_Coverage, double CallFunc_Get_Weather_Preset_Rain___Snow, double CallFunc_Get_Weather_Preset_Wind_Intensity, double CallFunc_Get_Weather_Preset_Material_Wetness, double CallFunc_Get_Weather_Preset_Material_Snow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Update Target Settings");

	Params::URandom_Weather_Variation_C_Update_Target_Settings_Params Parms{};

	Parms.CallFunc_Get_Weather_Preset_Weather_Intensity = CallFunc_Get_Weather_Preset_Weather_Intensity;
	Parms.CallFunc_Get_Weather_Preset_Cloud_Coverage = CallFunc_Get_Weather_Preset_Cloud_Coverage;
	Parms.CallFunc_Get_Weather_Preset_Rain___Snow = CallFunc_Get_Weather_Preset_Rain___Snow;
	Parms.CallFunc_Get_Weather_Preset_Wind_Intensity = CallFunc_Get_Weather_Preset_Wind_Intensity;
	Parms.CallFunc_Get_Weather_Preset_Material_Wetness = CallFunc_Get_Weather_Preset_Material_Wetness;
	Parms.CallFunc_Get_Weather_Preset_Material_Snow = CallFunc_Get_Weather_Preset_Material_Snow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRandomWeatherVariation_StateRandom_Weather_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsComponentTickEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Current_Lerp_Alpha_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Current_Timer_Length_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Rain___Snow_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Material_Snow_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Material_Wetness_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::Apply_State(const struct FRandomWeatherVariation_State& Random_Weather_State, bool CallFunc_IsComponentTickEnabled_ReturnValue, double K2Node_VariableSet_Current_Lerp_Alpha_ImplicitCast, double K2Node_VariableSet_Current_Timer_Length_ImplicitCast, double K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast, double K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast, double K2Node_VariableSet_Old_Rain___Snow_ImplicitCast, double K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast, double K2Node_VariableSet_Old_Material_Snow_ImplicitCast, double K2Node_VariableSet_Old_Material_Wetness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Apply State");

	Params::URandom_Weather_Variation_C_Apply_State_Params Parms{};

	Parms.Random_Weather_State = Random_Weather_State;
	Parms.CallFunc_IsComponentTickEnabled_ReturnValue = CallFunc_IsComponentTickEnabled_ReturnValue;
	Parms.K2Node_VariableSet_Current_Lerp_Alpha_ImplicitCast = K2Node_VariableSet_Current_Lerp_Alpha_ImplicitCast;
	Parms.K2Node_VariableSet_Current_Timer_Length_ImplicitCast = K2Node_VariableSet_Current_Timer_Length_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast = K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast = K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Rain___Snow_ImplicitCast = K2Node_VariableSet_Old_Rain___Snow_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast = K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Material_Snow_ImplicitCast = K2Node_VariableSet_Old_Material_Snow_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Material_Wetness_ImplicitCast = K2Node_VariableSet_Old_Material_Wetness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRandomWeatherVariation_StateState                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  Volume                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRandomWeatherVariation_StateK2Node_MakeStruct_RandomWeatherVariation_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::Get_State_for_Saving(struct FRandomWeatherVariation_State* State, class AWeather_Override_Volume_C** Volume, const struct FRandomWeatherVariation_State& K2Node_MakeStruct_RandomWeatherVariation_State, float K2Node_MakeStruct_OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72_ImplicitCast, float K2Node_MakeStruct_OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF_ImplicitCast, float K2Node_MakeStruct_OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F_ImplicitCast, float K2Node_MakeStruct_OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78_ImplicitCast, float K2Node_MakeStruct_OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C_ImplicitCast, float K2Node_MakeStruct_OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF_ImplicitCast, float K2Node_MakeStruct_CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF_ImplicitCast, float K2Node_MakeStruct_CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Get State for Saving");

	Params::URandom_Weather_Variation_C_Get_State_for_Saving_Params Parms{};

	Parms.K2Node_MakeStruct_RandomWeatherVariation_State = K2Node_MakeStruct_RandomWeatherVariation_State;
	Parms.K2Node_MakeStruct_OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72_ImplicitCast = K2Node_MakeStruct_OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72_ImplicitCast;
	Parms.K2Node_MakeStruct_OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF_ImplicitCast = K2Node_MakeStruct_OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF_ImplicitCast;
	Parms.K2Node_MakeStruct_OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F_ImplicitCast = K2Node_MakeStruct_OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F_ImplicitCast;
	Parms.K2Node_MakeStruct_OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78_ImplicitCast = K2Node_MakeStruct_OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78_ImplicitCast;
	Parms.K2Node_MakeStruct_OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C_ImplicitCast = K2Node_MakeStruct_OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C_ImplicitCast;
	Parms.K2Node_MakeStruct_OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF_ImplicitCast = K2Node_MakeStruct_OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF_ImplicitCast;
	Parms.K2Node_MakeStruct_CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF_ImplicitCast = K2Node_MakeStruct_CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF_ImplicitCast;
	Parms.K2Node_MakeStruct_CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85_ImplicitCast = K2Node_MakeStruct_CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = std::move(Parms.State);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Filter_Probability_List                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Threshold                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Random_Float                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Random_Max_Range                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EUDS_WeatherTypes, double>Current_Probabilities                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EUDS_WeatherTypes, double>CallFunc_Filter_Probability_Map_Filtered_Probability_Map         (None)
// TArray<enum class EUDS_WeatherTypes>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// enum class EUDS_WeatherTypes       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EUDS_WeatherTypes, double>K2Node_Select_Default                                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::Select_New_Random_Weather_Type(bool Filter_Probability_List, double Threshold, double Random_Float, double Random_Max_Range, TMap<enum class EUDS_WeatherTypes, double> Current_Probabilities, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TMap<enum class EUDS_WeatherTypes, double> CallFunc_Filter_Probability_Map_Filtered_Probability_Map, TArray<enum class EUDS_WeatherTypes>& CallFunc_Map_Keys_Keys, enum class EUDS_WeatherTypes CallFunc_Array_Get_Item, TArray<double>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, double CallFunc_Array_Get_Item_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, enum class EUDS_Season Temp_byte_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, TMap<enum class EUDS_WeatherTypes, double> K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Select New Random Weather Type");

	Params::URandom_Weather_Variation_C_Select_New_Random_Weather_Type_Params Parms{};

	Parms.Filter_Probability_List = Filter_Probability_List;
	Parms.Threshold = Threshold;
	Parms.Random_Float = Random_Float;
	Parms.Random_Max_Range = Random_Max_Range;
	Parms.Current_Probabilities = Current_Probabilities;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Filter_Probability_Map_Filtered_Probability_Map = CallFunc_Filter_Probability_Map_Filtered_Probability_Map;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Eased_Lerp_Alpha                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::Increment_Random_Weather(double Eased_Lerp_Alpha, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Ease_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Lerp_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Increment Random Weather");

	Params::URandom_Weather_Variation_C_Increment_Random_Weather_Params Parms{};

	Parms.Eased_Lerp_Alpha = Eased_Lerp_Alpha;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUltra_Dynamic_Weather_C*    UDW                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EUDS_WeatherTypes, double>Summer_Probabilities                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<enum class EUDS_WeatherTypes, double>Autumn_Probabilities                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<enum class EUDS_WeatherTypes, double>Winter_Probabilities                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<enum class EUDS_WeatherTypes, double>Spring_Probabilities                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Start_with_Random_Type                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<enum class EUDS_WeatherTypes, double> Summer_Probabilities, TMap<enum class EUDS_WeatherTypes, double> Autumn_Probabilities, TMap<enum class EUDS_WeatherTypes, double> Winter_Probabilities, TMap<enum class EUDS_WeatherTypes, double> Spring_Probabilities, bool Start_with_Random_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Initialize");

	Params::URandom_Weather_Variation_C_Initialize_Params Parms{};

	Parms.UDW = UDW;
	Parms.Summer_Probabilities = Summer_Probabilities;
	Parms.Autumn_Probabilities = Autumn_Probabilities;
	Parms.Winter_Probabilities = Winter_Probabilities;
	Parms.Spring_Probabilities = Spring_Probabilities;
	Parms.Start_with_Random_Type = Start_with_Random_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "ReceiveTick");

	Params::URandom_Weather_Variation_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Change Weather Type
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URandom_Weather_Variation_C::Start_Timer_to_Change_Weather_Type()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Start Timer to Change Weather Type");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void URandom_Weather_Variation_C::Reset_Timer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Reset Timer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.Update Old Variables
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void URandom_Weather_Variation_C::Update_Old_Variables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "Update Old Variables");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Weather_C*    K2Node_CustomEvent_UDW                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EUDS_WeatherTypes, double>K2Node_CustomEvent_Summer_Probabilities                          (None)
// TMap<enum class EUDS_WeatherTypes, double>K2Node_CustomEvent_Autumn_Probabilities                          (None)
// TMap<enum class EUDS_WeatherTypes, double>K2Node_CustomEvent_Winter_Probabilities                          (None)
// TMap<enum class EUDS_WeatherTypes, double>K2Node_CustomEvent_Spring_Probabilities                          (None)
// bool                               K2Node_CustomEvent_Start_with_Random_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Weather_C*    CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandom_Weather_Variation_C::ExecuteUbergraph_Random_Weather_Variation(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AUltra_Dynamic_Weather_C* K2Node_CustomEvent_UDW, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Summer_Probabilities, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Autumn_Probabilities, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Winter_Probabilities, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Spring_Probabilities, bool K2Node_CustomEvent_Start_with_Random_Type, float K2Node_Event_DeltaSeconds, double CallFunc_RandomFloatInRange_ReturnValue, class AUltra_Dynamic_Weather_C* CallFunc_GetActorOfClass_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Random_Weather_Variation_C", "ExecuteUbergraph_Random_Weather_Variation");

	Params::URandom_Weather_Variation_C_ExecuteUbergraph_Random_Weather_Variation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_UDW = K2Node_CustomEvent_UDW;
	Parms.K2Node_CustomEvent_Summer_Probabilities = K2Node_CustomEvent_Summer_Probabilities;
	Parms.K2Node_CustomEvent_Autumn_Probabilities = K2Node_CustomEvent_Autumn_Probabilities;
	Parms.K2Node_CustomEvent_Winter_Probabilities = K2Node_CustomEvent_Winter_Probabilities;
	Parms.K2Node_CustomEvent_Spring_Probabilities = K2Node_CustomEvent_Spring_Probabilities;
	Parms.K2Node_CustomEvent_Start_with_Random_Type = K2Node_CustomEvent_Start_with_Random_Type;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


