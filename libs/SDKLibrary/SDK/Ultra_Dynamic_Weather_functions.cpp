#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C
// (Actor)

class UClass* AUltra_Dynamic_Weather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ultra_Dynamic_Weather_C");

	return Clss;
}


// Ultra_Dynamic_Weather_C Ultra_Dynamic_Weather.Default__Ultra_Dynamic_Weather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUltra_Dynamic_Weather_C* AUltra_Dynamic_Weather_C::GetDefaultObj()
{
	static class AUltra_Dynamic_Weather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUltra_Dynamic_Weather_C*>(AUltra_Dynamic_Weather_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get State for Saving
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDS_and_UDW_State          UDW_State                                                        (Parm, OutParm, HasGetValueTypeHash)
// struct FUDS_and_UDW_State          State                                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWeather_Override_Volume_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AWeather_Override_Volume_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomWeatherVariation_StateCallFunc_Get_State_for_Saving_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  CallFunc_Get_State_for_Saving_Volume                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRandomWeatherVariation_StateCallFunc_Get_State_for_Saving_State_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  CallFunc_Get_State_for_Saving_Volume_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LerptoStaticSettings_69_384B646448CA6A50EA63CBA209165004_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LerptoNewSettings_67_D4D699EB4BB843F0AE80E4BFC8CFA364_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Timer_65_5497A6734CE6FEB9AD91B28233665806_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_NewWindIntensity_58_57942B374CDD4F640995D8A100A0A0F7_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_NewRainSnow_56_44526E4A4DF5431653EF048234773737_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_NewCloudCoverage_54_FC7C0B8947BC9984DDE756AA46ECA64B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_NewWeatherIntensity_52_3F32FA704604722459CF54A5BC2EC84E_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ChangeWeatherTimer_50_353A99B84ED03DA03DEB1389AF8AB999_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_OldWindIntensity_48_8CA9E58B4FAD1966869DACA837B2A72D_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_OldRainSnow_46_9681DBA0451D944F00450C8885948EAA_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_OldCloudCoverage_44_02CFC88541ECA075F65C67BAD5B8203D_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_OldWeatherIntensity_43_C55FBB284F0FA74378B1C39AC4A25456_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State, const struct FUDS_and_UDW_State& State, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AWeather_Override_Volume_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AWeather_Override_Volume_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FRandomWeatherVariation_State& CallFunc_Get_State_for_Saving_State, class AWeather_Override_Volume_C* CallFunc_Get_State_for_Saving_Volume, const struct FRandomWeatherVariation_State& CallFunc_Get_State_for_Saving_State_1, class AWeather_Override_Volume_C* CallFunc_Get_State_for_Saving_Volume_1, float K2Node_SetFieldsInStruct_LerptoStaticSettings_69_384B646448CA6A50EA63CBA209165004_ImplicitCast, float K2Node_SetFieldsInStruct_LerptoNewSettings_67_D4D699EB4BB843F0AE80E4BFC8CFA364_ImplicitCast, float K2Node_SetFieldsInStruct_Timer_65_5497A6734CE6FEB9AD91B28233665806_ImplicitCast, float K2Node_SetFieldsInStruct_GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291_ImplicitCast, float K2Node_SetFieldsInStruct_GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65_ImplicitCast, float K2Node_SetFieldsInStruct_NewWindIntensity_58_57942B374CDD4F640995D8A100A0A0F7_ImplicitCast, float K2Node_SetFieldsInStruct_NewRainSnow_56_44526E4A4DF5431653EF048234773737_ImplicitCast, float K2Node_SetFieldsInStruct_NewCloudCoverage_54_FC7C0B8947BC9984DDE756AA46ECA64B_ImplicitCast, float K2Node_SetFieldsInStruct_NewWeatherIntensity_52_3F32FA704604722459CF54A5BC2EC84E_ImplicitCast, float K2Node_SetFieldsInStruct_ChangeWeatherTimer_50_353A99B84ED03DA03DEB1389AF8AB999_ImplicitCast, float K2Node_SetFieldsInStruct_OldWindIntensity_48_8CA9E58B4FAD1966869DACA837B2A72D_ImplicitCast, float K2Node_SetFieldsInStruct_OldRainSnow_46_9681DBA0451D944F00450C8885948EAA_ImplicitCast, float K2Node_SetFieldsInStruct_OldCloudCoverage_44_02CFC88541ECA075F65C67BAD5B8203D_ImplicitCast, float K2Node_SetFieldsInStruct_OldWeatherIntensity_43_C55FBB284F0FA74378B1C39AC4A25456_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get State for Saving");

	Params::AUltra_Dynamic_Weather_C_Get_State_for_Saving_Params Parms{};

	Parms.State = State;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_State_for_Saving_State = CallFunc_Get_State_for_Saving_State;
	Parms.CallFunc_Get_State_for_Saving_Volume = CallFunc_Get_State_for_Saving_Volume;
	Parms.CallFunc_Get_State_for_Saving_State_1 = CallFunc_Get_State_for_Saving_State_1;
	Parms.CallFunc_Get_State_for_Saving_Volume_1 = CallFunc_Get_State_for_Saving_Volume_1;
	Parms.K2Node_SetFieldsInStruct_LerptoStaticSettings_69_384B646448CA6A50EA63CBA209165004_ImplicitCast = K2Node_SetFieldsInStruct_LerptoStaticSettings_69_384B646448CA6A50EA63CBA209165004_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LerptoNewSettings_67_D4D699EB4BB843F0AE80E4BFC8CFA364_ImplicitCast = K2Node_SetFieldsInStruct_LerptoNewSettings_67_D4D699EB4BB843F0AE80E4BFC8CFA364_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Timer_65_5497A6734CE6FEB9AD91B28233665806_ImplicitCast = K2Node_SetFieldsInStruct_Timer_65_5497A6734CE6FEB9AD91B28233665806_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291_ImplicitCast = K2Node_SetFieldsInStruct_GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65_ImplicitCast = K2Node_SetFieldsInStruct_GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_NewWindIntensity_58_57942B374CDD4F640995D8A100A0A0F7_ImplicitCast = K2Node_SetFieldsInStruct_NewWindIntensity_58_57942B374CDD4F640995D8A100A0A0F7_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_NewRainSnow_56_44526E4A4DF5431653EF048234773737_ImplicitCast = K2Node_SetFieldsInStruct_NewRainSnow_56_44526E4A4DF5431653EF048234773737_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_NewCloudCoverage_54_FC7C0B8947BC9984DDE756AA46ECA64B_ImplicitCast = K2Node_SetFieldsInStruct_NewCloudCoverage_54_FC7C0B8947BC9984DDE756AA46ECA64B_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_NewWeatherIntensity_52_3F32FA704604722459CF54A5BC2EC84E_ImplicitCast = K2Node_SetFieldsInStruct_NewWeatherIntensity_52_3F32FA704604722459CF54A5BC2EC84E_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_ChangeWeatherTimer_50_353A99B84ED03DA03DEB1389AF8AB999_ImplicitCast = K2Node_SetFieldsInStruct_ChangeWeatherTimer_50_353A99B84ED03DA03DEB1389AF8AB999_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_OldWindIntensity_48_8CA9E58B4FAD1966869DACA837B2A72D_ImplicitCast = K2Node_SetFieldsInStruct_OldWindIntensity_48_8CA9E58B4FAD1966869DACA837B2A72D_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_OldRainSnow_46_9681DBA0451D944F00450C8885948EAA_ImplicitCast = K2Node_SetFieldsInStruct_OldRainSnow_46_9681DBA0451D944F00450C8885948EAA_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_OldCloudCoverage_44_02CFC88541ECA075F65C67BAD5B8203D_ImplicitCast = K2Node_SetFieldsInStruct_OldCloudCoverage_44_02CFC88541ECA075F65C67BAD5B8203D_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_OldWeatherIntensity_43_C55FBB284F0FA74378B1C39AC4A25456_ImplicitCast = K2Node_SetFieldsInStruct_OldWeatherIntensity_43_C55FBB284F0FA74378B1C39AC4A25456_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (UDW_State != nullptr)
		*UDW_State = std::move(Parms.UDW_State);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intended_Cloud_Direction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_Intended_Cloud_Direction(double* Intended_Cloud_Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get Intended Cloud Direction");

	Params::AUltra_Dynamic_Weather_C_Get_Intended_Cloud_Direction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Intended_Cloud_Direction != nullptr)
		*Intended_Cloud_Direction = Parms.Intended_Cloud_Direction;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intended_Cloud_Speed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_Intended_Cloud_Speed(double* Intended_Cloud_Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get Intended Cloud Speed");

	Params::AUltra_Dynamic_Weather_C_Get_Intended_Cloud_Speed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Intended_Cloud_Speed != nullptr)
		*Intended_Cloud_Speed = Parms.Intended_Cloud_Speed;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Brushes by Height
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AWeather_Mask_Brush_C*>Brushes                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AWeather_Mask_Brush_C*>Sorted_Brushes                                                   (Parm, OutParm)
// TArray<class AWeather_Mask_Brush_C*>Sorted                                                           (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Current_Index                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWeather_Mask_Brush_C*>Unsorted                                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<double>                     Heights                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Mask_Brush_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Mask_Brush_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MaxOfFloatArray_IndexOfMaxValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaxOfFloatArray_MaxValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_MaxOfFloatArray_FloatArray_ImplicitCast                 (ConstParm, ReferenceParm)

void AUltra_Dynamic_Weather_C::Sort_Brushes_by_Height(TArray<class AWeather_Mask_Brush_C*>& Brushes, TArray<class AWeather_Mask_Brush_C*>* Sorted_Brushes, const TArray<class AWeather_Mask_Brush_C*>& Sorted, int32 Current_Index, const TArray<class AWeather_Mask_Brush_C*>& Unsorted, const TArray<double>& Heights, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AWeather_Mask_Brush_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AWeather_Mask_Brush_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, int32 CallFunc_Array_Add_ReturnValue_1, TArray<float>& CallFunc_MaxOfFloatArray_FloatArray_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Sort Brushes by Height");

	Params::AUltra_Dynamic_Weather_C_Sort_Brushes_by_Height_Params Parms{};

	Parms.Brushes = Brushes;
	Parms.Sorted = Sorted;
	Parms.Current_Index = Current_Index;
	Parms.Unsorted = Unsorted;
	Parms.Heights = Heights;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MaxOfFloatArray_IndexOfMaxValue = CallFunc_MaxOfFloatArray_IndexOfMaxValue;
	Parms.CallFunc_MaxOfFloatArray_MaxValue = CallFunc_MaxOfFloatArray_MaxValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MaxOfFloatArray_FloatArray_ImplicitCast = CallFunc_MaxOfFloatArray_FloatArray_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Sorted_Brushes != nullptr)
		*Sorted_Brushes = std::move(Parms.Sorted_Brushes);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Close Thunder Sound Delay
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Delay                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lightning_Distance_Range_Range                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Close_Thunder_Sound_Delay(double* Delay, double CallFunc_Lightning_Distance_Range_Range, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Close Thunder Sound Delay");

	Params::AUltra_Dynamic_Weather_C_Close_Thunder_Sound_Delay_Params Parms{};

	Parms.CallFunc_Lightning_Distance_Range_Range = CallFunc_Lightning_Distance_Range_Range;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Delay != nullptr)
		*Delay = Parms.Delay;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Approximate Weather Mask Brush Effect
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeather_Mask_Brush_C*       Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Cancel                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Cancel_Mask_Above                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Mask_Strength                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Centered_UV                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Mask                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Distance2D_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAbsMax2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_DLWE_Mode          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAbsMax2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAbsMax2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize2D_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRotated2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRotated2D_AngleDeg_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Approximate_Weather_Mask_Brush_Effect(class AWeather_Mask_Brush_C* Brush, const struct FVector2D& Location, double Height, double* Out, bool* Cancel, bool Cancel_Mask_Above, double Mask_Strength, const struct FVector2D& Centered_UV, double Mask, double CallFunc_Distance2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_GetAbsMax2D_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_VSize2D_ReturnValue, enum class EUDS_DLWE_Mode Temp_byte_Variable, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_GetAbsMax2D_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_GetAbsMax2D_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_VSize2D_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Approximate Weather Mask Brush Effect");

	Params::AUltra_Dynamic_Weather_C_Approximate_Weather_Mask_Brush_Effect_Params Parms{};

	Parms.Brush = Brush;
	Parms.Location = Location;
	Parms.Height = Height;
	Parms.Cancel_Mask_Above = Cancel_Mask_Above;
	Parms.Mask_Strength = Mask_Strength;
	Parms.Centered_UV = Centered_UV;
	Parms.Mask = Mask;
	Parms.CallFunc_Distance2D_ReturnValue = CallFunc_Distance2D_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetAbsMax2D_ReturnValue = CallFunc_GetAbsMax2D_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_GetAbsMax2D_ReturnValue_1 = CallFunc_GetAbsMax2D_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_GetAbsMax2D_ReturnValue_2 = CallFunc_GetAbsMax2D_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_VSize2D_ReturnValue_1 = CallFunc_VSize2D_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_GetRotated2D_ReturnValue = CallFunc_GetRotated2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetRotated2D_AngleDeg_ImplicitCast = CallFunc_GetRotated2D_AngleDeg_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

	if (Cancel != nullptr)
		*Cancel = Parms.Cancel;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Redraw Weather Mask Target
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_GetAbsMax_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Check_to_Redraw_Weather_Mask_Target(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Vector_GetAbsMax_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Check to Redraw Weather Mask Target");

	Params::AUltra_Dynamic_Weather_C_Check_to_Redraw_Weather_Mask_Target_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Vector_GetAbsMax_ReturnValue = CallFunc_Vector_GetAbsMax_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather Mask Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWeather_Mask_Brush_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Weather_Mask_Target_Half_Size_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Initialize_Weather_Mask_Target(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, TArray<class AWeather_Mask_Brush_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_Weather_Mask_Target_Half_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Initialize Weather Mask Target");

	Params::AUltra_Dynamic_Weather_C_Initialize_Weather_Mask_Target_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_Weather_Mask_Target_Half_Size_ImplicitCast = K2Node_VariableSet_Weather_Mask_Target_Half_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Draw Weather Mask Brush Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Use_Editor_Location                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWeather_Mask_Brush_C*>Brushes_Canceling_Above                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AWeather_Mask_Brush_C*>Brushes_to_Apply                                                 (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AWeather_Mask_Brush_C*       Current_Brush                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               Approved                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWeather_Mask_Brush_C*>CallFunc_Sort_Brushes_by_Height_Sorted_Brushes                   (ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Mask_Brush_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context_1                 (NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMax2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Distance2D_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context_2                 (NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Mask_Brush_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWeather_Mask_Brush_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAbsMax2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_SnappedToGrid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_DrawTexture_Rotation_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_B_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_DrawTexture_Rotation_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_SnappedToGrid_InGridSize_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Draw_Weather_Mask_Brush_Target(bool Use_Editor_Location, const TArray<class AWeather_Mask_Brush_C*>& Brushes_Canceling_Above, const TArray<class AWeather_Mask_Brush_C*>& Brushes_to_Apply, class AWeather_Mask_Brush_C* Current_Brush, bool Approved, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<class AWeather_Mask_Brush_C*>& CallFunc_Sort_Brushes_by_Height_Sorted_Brushes, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AWeather_Mask_Brush_C* CallFunc_Array_Get_Item, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size_1, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_DLWE_Render_Target_Area_Area, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_GetMax2D_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_Distance2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas_2, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size_2, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AWeather_Mask_Brush_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class AWeather_Mask_Brush_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_3, const struct FVector2D& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, double CallFunc_GetAbsMax2D_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_Vector_SnappedToGrid_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float CallFunc_K2_DrawTexture_Rotation_ImplicitCast, float CallFunc_MakeColor_B_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast_1, double CallFunc_MakeVector2D_Y_ImplicitCast_1, float CallFunc_K2_DrawTexture_Rotation_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_Vector_SnappedToGrid_InGridSize_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Draw Weather Mask Brush Target");

	Params::AUltra_Dynamic_Weather_C_Draw_Weather_Mask_Brush_Target_Params Parms{};

	Parms.Use_Editor_Location = Use_Editor_Location;
	Parms.Brushes_Canceling_Above = Brushes_Canceling_Above;
	Parms.Brushes_to_Apply = Brushes_to_Apply;
	Parms.Current_Brush = Current_Brush;
	Parms.Approved = Approved;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Sort_Brushes_by_Height_Sorted_Brushes = CallFunc_Sort_Brushes_by_Height_Sorted_Brushes;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size_1 = CallFunc_BeginDrawCanvasToRenderTarget_Size_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context_1 = CallFunc_BeginDrawCanvasToRenderTarget_Context_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_1 = CallFunc_Divide_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetMax2D_ReturnValue = CallFunc_GetMax2D_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Distance2D_ReturnValue = CallFunc_Distance2D_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas_2 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas_2;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size_2 = CallFunc_BeginDrawCanvasToRenderTarget_Size_2;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context_2 = CallFunc_BeginDrawCanvasToRenderTarget_Context_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_2 = CallFunc_Divide_Vector2DFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_2 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_3 = CallFunc_Divide_Vector2DFloat_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_1 = CallFunc_Conv_VectorToVector2D_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_3 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_3;
	Parms.CallFunc_GetAbsMax2D_ReturnValue = CallFunc_GetAbsMax2D_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_4 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Vector_SnappedToGrid_ReturnValue = CallFunc_Vector_SnappedToGrid_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.CallFunc_K2_DrawTexture_Rotation_ImplicitCast = CallFunc_K2_DrawTexture_Rotation_ImplicitCast;
	Parms.CallFunc_MakeColor_B_ImplicitCast = CallFunc_MakeColor_B_ImplicitCast;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast_1 = CallFunc_MakeVector2D_X_ImplicitCast_1;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast_1 = CallFunc_MakeVector2D_Y_ImplicitCast_1;
	Parms.CallFunc_K2_DrawTexture_Rotation_ImplicitCast_1 = CallFunc_K2_DrawTexture_Rotation_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Vector_SnappedToGrid_InGridSize_ImplicitCast = CallFunc_Vector_SnappedToGrid_InGridSize_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Delta Time with Tick Set
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Delta                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Delta_Time_with_Tick_Set(double* Delta, double CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Delta Time with Tick Set");

	Params::AUltra_Dynamic_Weather_C_Delta_Time_with_Tick_Set_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Delta != nullptr)
		*Delta = Parms.Delta;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Material State is Changing
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Changing                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Current_Material_State_is_Changing(bool* Changing, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Current Material State is Changing");

	Params::AUltra_Dynamic_Weather_C_Current_Material_State_is_Changing_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Changing != nullptr)
		*Changing = Parms.Changing;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Weather State is Changing
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Changing                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Current_Weather_State_is_Changing(bool* Changing, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Current Weather State is Changing");

	Params::AUltra_Dynamic_Weather_C_Current_Weather_State_is_Changing_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Changing != nullptr)
		*Changing = Parms.Changing;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Global Weather State is Changing
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Changing                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Global_Weather_State_is_Changing(bool* Changing, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Global Weather State is Changing");

	Params::AUltra_Dynamic_Weather_C_Global_Weather_State_is_Changing_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (Changing != nullptr)
		*Changing = Parms.Changing;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Static to Random
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Alpha                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Static_to_Random(double* Alpha, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Static to Random");

	Params::AUltra_Dynamic_Weather_C_Static_to_Random_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Preset Value
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EUDS_WeatherTypes       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherVariables   Variable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherVariables   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUDS_Weather_Preset_C*       CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_Preset_Value(enum class EUDS_WeatherTypes Type, enum class EUDS_WeatherVariables Variable, double* Value, bool Temp_bool_Variable, double Temp_real_Variable, enum class EUDS_WeatherVariables Temp_byte_Variable, class UUDS_Weather_Preset_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double K2Node_Select_Default, double K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get Preset Value");

	Params::AUltra_Dynamic_Weather_C_Get_Preset_Value_Params Parms{};

	Parms.Type = Type;
	Parms.Variable = Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Timer Max
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Current_Timer_Max(double* Max, int32 Temp_int_Variable, double K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Current Timer Max");

	Params::AUltra_Dynamic_Weather_C_Current_Timer_Max_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Max != nullptr)
		*Max = Parms.Max;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Cloudy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Currently_Cloudy(bool* Yes, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Currently Cloudy");

	Params::AUltra_Dynamic_Weather_C_Currently_Cloudy_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Snowing
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Currently_Snowing(bool* Yes, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Currently Snowing");

	Params::AUltra_Dynamic_Weather_C_Currently_Snowing_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Raining
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Currently_Raining(bool* Yes, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Currently Raining");

	Params::AUltra_Dynamic_Weather_C_Currently_Raining_Params Parms{};

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Rotation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    Rot                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Wind_Rotation(struct FRotator* Rot, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Wind Rotation");

	Params::AUltra_Dynamic_Weather_C_Wind_Rotation_Params Parms{};

	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Rot != nullptr)
		*Rot = std::move(Parms.Rot);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cloudiness Masked Weather Intensity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Cloudiness_Masked_Weather_Intensity(double* Out, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Cloudiness Masked Weather Intensity");

	Params::AUltra_Dynamic_Weather_C_Cloudiness_Masked_Weather_Intensity_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Is Point in DLWE Space
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Point                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_DLWE_Mode          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPointInBox_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Is_Point_in_DLWE_Space(const struct FVector& Point, bool* Yes, enum class EUDS_DLWE_Mode Temp_byte_Variable, double Temp_real_Variable, double CallFunc_DLWE_Render_Target_Area_Area, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsPointInBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Is Point in DLWE Space");

	Params::AUltra_Dynamic_Weather_C_Is_Point_in_DLWE_Space_Params Parms{};

	Parms.Point = Point;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsPointInBox_ReturnValue = CallFunc_IsPointInBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Does DLWE Need Recentering
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Needs_X_Axis_Recenter                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Needs_Y_Axis_Recenter                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Does_DLWE_Need_Recentering(bool* Needs_X_Axis_Recenter, bool* Needs_Y_Axis_Recenter, double CallFunc_DLWE_Render_Target_Area_Area, double CallFunc_DLWE_Render_Target_Area_Area_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_Abs_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Does DLWE Need Recentering");

	Params::AUltra_Dynamic_Weather_C_Does_DLWE_Need_Recentering_Params Parms{};

	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_DLWE_Render_Target_Area_Area_1 = CallFunc_DLWE_Render_Target_Area_Area_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Needs_X_Axis_Recenter != nullptr)
		*Needs_X_Axis_Recenter = Parms.Needs_X_Axis_Recenter;

	if (Needs_Y_Axis_Recenter != nullptr)
		*Needs_Y_Axis_Recenter = Parms.Needs_Y_Axis_Recenter;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Render Target Area
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Area                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_DLWE_Mode          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::DLWE_Render_Target_Area(double* Area, enum class EUDS_DLWE_Mode Temp_byte_Variable, double K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "DLWE Render Target Area");

	Params::AUltra_Dynamic_Weather_C_DLWE_Render_Target_Area_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Area != nullptr)
		*Area = Parms.Area;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Compression Brush
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Resolution                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Corner_Position                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Brush_Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_Vector2DFloat_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::DLWE_Compression_Brush(const struct FVector& Location, double Size, int32 Resolution, double Spread, struct FVector2D* Corner_Position, struct FVector2D* Brush_Size, double CallFunc_DLWE_Render_Target_Area_Area, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_DLWE_Render_Target_Area_Area_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_DLWE_Render_Target_Area_Area_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_Multiply_Vector2DFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "DLWE Compression Brush");

	Params::AUltra_Dynamic_Weather_C_DLWE_Compression_Brush_Params Parms{};

	Parms.Location = Location;
	Parms.Size = Size;
	Parms.Resolution = Resolution;
	Parms.Spread = Spread;
	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_DLWE_Render_Target_Area_Area_1 = CallFunc_DLWE_Render_Target_Area_Area_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_DLWE_Render_Target_Area_Area_2 = CallFunc_DLWE_Render_Target_Area_Area_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_B_ImplicitCast = CallFunc_Multiply_Vector2DFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Corner_Position != nullptr)
		*Corner_Position = std::move(Parms.Corner_Position);

	if (Brush_Size != nullptr)
		*Brush_Size = std::move(Parms.Brush_Size);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE_Render Target Mapping
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Mapping                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_B_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_A_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_R_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_G_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::DLWE_Render_Target_Mapping(struct FLinearColor* Mapping, double CallFunc_DLWE_Render_Target_Area_Area, double CallFunc_DLWE_Render_Target_Area_Area_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "DLWE_Render Target Mapping");

	Params::AUltra_Dynamic_Weather_C_DLWE_Render_Target_Mapping_Params Parms{};

	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_DLWE_Render_Target_Area_Area_1 = CallFunc_DLWE_Render_Target_Area_Area_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_B_ImplicitCast = CallFunc_MakeColor_B_ImplicitCast;
	Parms.CallFunc_MakeColor_A_ImplicitCast = CallFunc_MakeColor_A_ImplicitCast;
	Parms.CallFunc_MakeColor_R_ImplicitCast = CallFunc_MakeColor_R_ImplicitCast;
	Parms.CallFunc_MakeColor_G_ImplicitCast = CallFunc_MakeColor_G_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Mapping != nullptr)
		*Mapping = std::move(Parms.Mapping);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Distant Thunder Sound Intensity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Cloudiness_Masked_Weather_Intensity_Out                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Distant_Thunder_Sound_Intensity(double* Int, double CallFunc_Cloudiness_Masked_Weather_Intensity_Out, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Distant Thunder Sound Intensity");

	Params::AUltra_Dynamic_Weather_C_Distant_Thunder_Sound_Intensity_Params Parms{};

	Parms.CallFunc_Cloudiness_Masked_Weather_Intensity_Out = CallFunc_Cloudiness_Masked_Weather_Intensity_Out;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Whistling Sound Intensity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Wind_Sound_Intensity_Int                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Wind_Whistling_Sound_Intensity(double* Int, double CallFunc_Wind_Sound_Intensity_Int, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Wind Whistling Sound Intensity");

	Params::AUltra_Dynamic_Weather_C_Wind_Whistling_Sound_Intensity_Params Parms{};

	Parms.CallFunc_Wind_Sound_Intensity_Int = CallFunc_Wind_Sound_Intensity_Int;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Sound Intensity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Wind_Sound_Intensity(double* Int, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Wind Sound Intensity");

	Params::AUltra_Dynamic_Weather_C_Wind_Sound_Intensity_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Rain Sound Intensity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Rain_Sound_Intensity(double* Int, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Rain Sound Intensity");

	Params::AUltra_Dynamic_Weather_C_Rain_Sound_Intensity_Params Parms{};

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Distance Range
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Lightning_Distance_Range(double* Range, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Lightning Distance Range");

	Params::AUltra_Dynamic_Weather_C_Lightning_Distance_Range_Params Parms{};

	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Debris Percentage
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Perc                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Current_Debris_Percentage(double* Perc, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Current Debris Percentage");

	Params::AUltra_Dynamic_Weather_C_Current_Debris_Percentage_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Perc != nullptr)
		*Perc = Parms.Perc;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Rain Snow Spawn Rate
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Rate                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Current_Rain_Snow_Spawn_Rate(double* Rate, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Current Rain Snow Spawn Rate");

	Params::AUltra_Dynamic_Weather_C_Current_Rain_Snow_Spawn_Rate_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current General Velocity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Wind_Rotation_Rot                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Current_General_Velocity(struct FVector* Velocity, const struct FRotator& CallFunc_Wind_Rotation_Rot, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Current General Velocity");

	Params::AUltra_Dynamic_Weather_C_Current_General_Velocity_Params Parms{};

	Parms.CallFunc_Wind_Rotation_Rot = CallFunc_Wind_Rotation_Rot;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Global Weather Intensity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Invert                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Limit_Global_Weather_Intensity(bool Invert, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Limit Global Weather Intensity");

	Params::AUltra_Dynamic_Weather_C_Limit_Global_Weather_Intensity_Params Parms{};

	Parms.Invert = Invert;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Weather Override Volumes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Priorities                                                       (Edit, BlueprintVisible)
// TArray<class AWeather_Override_Volume_C*>Sorted_List_of_Volumes                                           (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AWeather_Override_Volume_C*  Current_Volume                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               Inserted                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Sort_Weather_Override_Volumes(const TArray<int32>& Priorities, const TArray<class AWeather_Override_Volume_C*>& Sorted_List_of_Volumes, class AWeather_Override_Volume_C* Current_Volume, bool Inserted, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AWeather_Override_Volume_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Sort Weather Override Volumes");

	Params::AUltra_Dynamic_Weather_C_Sort_Weather_Override_Volumes_Params Parms{};

	Parms.Priorities = Priorities;
	Parms.Sorted_List_of_Volumes = Sorted_List_of_Volumes;
	Parms.Current_Volume = Current_Volume;
	Parms.Inserted = Inserted;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Niagara Systems
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Active_Niagara_Systems(bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Active Niagara Systems");

	Params::AUltra_Dynamic_Weather_C_Update_Active_Niagara_Systems_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Screen Droplets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Direct_Exposure_of_Camera_to_Rain                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Current_General_Velocity_Velocity                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Screen_Droplets(double Direct_Exposure_of_Camera_to_Rain, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_Current_General_Velocity_Velocity, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Abs_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_FInterpTo_Constant_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Screen Droplets");

	Params::AUltra_Dynamic_Weather_C_Update_Screen_Droplets_Params Parms{};

	Parms.Direct_Exposure_of_Camera_to_Rain = Direct_Exposure_of_Camera_to_Rain;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Current_General_Velocity_Velocity = CallFunc_Current_General_Velocity_Velocity;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Screen Droplets
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Start_Screen_Droplets(const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Start Screen Droplets");

	Params::AUltra_Dynamic_Weather_C_Start_Screen_Droplets_Params Parms{};

	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for Events to Dispatch
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Currently_Cloudy_Yes                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Currently_Cloudy_Yes_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Currently_Snowing_Yes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Currently_Snowing_Yes_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Currently_Raining_Yes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Currently_Raining_Yes_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Check_for_Events_to_Dispatch(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Currently_Cloudy_Yes, bool CallFunc_Currently_Cloudy_Yes_1, bool CallFunc_Currently_Snowing_Yes, bool CallFunc_Currently_Snowing_Yes_1, bool CallFunc_Currently_Raining_Yes, bool CallFunc_Currently_Raining_Yes_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Check for Events to Dispatch");

	Params::AUltra_Dynamic_Weather_C_Check_for_Events_to_Dispatch_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Currently_Cloudy_Yes = CallFunc_Currently_Cloudy_Yes;
	Parms.CallFunc_Currently_Cloudy_Yes_1 = CallFunc_Currently_Cloudy_Yes_1;
	Parms.CallFunc_Currently_Snowing_Yes = CallFunc_Currently_Snowing_Yes;
	Parms.CallFunc_Currently_Snowing_Yes_1 = CallFunc_Currently_Snowing_Yes_1;
	Parms.CallFunc_Currently_Raining_Yes = CallFunc_Currently_Raining_Yes;
	Parms.CallFunc_Currently_Raining_Yes_1 = CallFunc_Currently_Raining_Yes_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_1 = CallFunc_NotEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_2 = CallFunc_NotEqual_BoolBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Actor for Weather Exposure
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Test_Colliding_Components_Only                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Rain_Exposure                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Snow_Exposure                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Exposure                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Direction_Exposure                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Weather_Exposure                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Current_Trace_Origin                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Actor_Extent                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Actor_Origin                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Wind_Rotation_Rot                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Current_General_Velocity_Velocity                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Current_General_Velocity_Velocity_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Test_Actor_for_Weather_Exposure(class AActor* Actor, bool Test_Colliding_Components_Only, double* Rain_Exposure, double* Snow_Exposure, double* Wind_Exposure, double Wind_Direction_Exposure, double Weather_Exposure, const struct FVector& Current_Trace_Origin, const struct FVector& Actor_Extent, const struct FVector& Actor_Origin, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRotator& CallFunc_Wind_Rotation_Rot, const struct FVector& CallFunc_Current_General_Velocity_Velocity, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Current_General_Velocity_Velocity_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, TArray<struct FVector>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, TArray<class AActor*>& K2Node_MakeArray_Array_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Test Actor for Weather Exposure");

	Params::AUltra_Dynamic_Weather_C_Test_Actor_for_Weather_Exposure_Params Parms{};

	Parms.Actor = Actor;
	Parms.Test_Colliding_Components_Only = Test_Colliding_Components_Only;
	Parms.Wind_Direction_Exposure = Wind_Direction_Exposure;
	Parms.Weather_Exposure = Weather_Exposure;
	Parms.Current_Trace_Origin = Current_Trace_Origin;
	Parms.Actor_Extent = Actor_Extent;
	Parms.Actor_Origin = Actor_Origin;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Wind_Rotation_Rot = CallFunc_Wind_Rotation_Rot;
	Parms.CallFunc_Current_General_Velocity_Velocity = CallFunc_Current_General_Velocity_Velocity;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Current_General_Velocity_Velocity_1 = CallFunc_Current_General_Velocity_Velocity_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_2 = CallFunc_Normal_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Rain_Exposure != nullptr)
		*Rain_Exposure = Parms.Rain_Exposure;

	if (Snow_Exposure != nullptr)
		*Snow_Exposure = Parms.Snow_Exposure;

	if (Wind_Exposure != nullptr)
		*Wind_Exposure = Parms.Wind_Exposure;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Wind Direction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Delta_Time_with_Tick_Set_Delta                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_Value_ImplicitCast                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Wind_Direction(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Delta_Time_with_Tick_Set_Delta, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_PerlinNoise1D_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Wind Direction");

	Params::AUltra_Dynamic_Weather_C_Update_Wind_Direction_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Delta_Time_with_Tick_Set_Delta = CallFunc_Delta_Time_with_Tick_Set_Delta;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_ReturnValue = CallFunc_PerlinNoise1D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_Value_ImplicitCast = CallFunc_PerlinNoise1D_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Tested_Component                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UAudioComponent*>     Affected_Components                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// double                             Current_Sound_Intensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Start_Randomization                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Play_StartTime_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Audio_Component_Activity(class UAudioComponent* Tested_Component, TArray<class UAudioComponent*>& Affected_Components, double Current_Sound_Intensity, double Start_Randomization, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UAudioComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UAudioComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsActive_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Play_StartTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Audio Component Activity");

	Params::AUltra_Dynamic_Weather_C_Update_Audio_Component_Activity_Params Parms{};

	Parms.Tested_Component = Tested_Component;
	Parms.Affected_Components = Affected_Components;
	Parms.Current_Sound_Intensity = Current_Sound_Intensity;
	Parms.Start_Randomization = Start_Randomization;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Play_StartTime_ImplicitCast = CallFunc_Play_StartTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Distant_Thunder_Sound_Intensity_Int                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Wind_Whistling_Sound_Intensity_Int                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Wind_Sound_Intensity_Int                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Rain_Sound_Intensity_Int                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAudioComponent*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void AUltra_Dynamic_Weather_C::Update_Enabled_Sound_Components(double CallFunc_Distant_Thunder_Sound_Intensity_Int, double CallFunc_Wind_Whistling_Sound_Intensity_Int, double CallFunc_Wind_Sound_Intensity_Int, double CallFunc_Rain_Sound_Intensity_Int, TArray<class UAudioComponent*>& K2Node_MakeArray_Array, TArray<class UAudioComponent*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Enabled Sound Components");

	Params::AUltra_Dynamic_Weather_C_Update_Enabled_Sound_Components_Params Parms{};

	Parms.CallFunc_Distant_Thunder_Sound_Intensity_Int = CallFunc_Distant_Thunder_Sound_Intensity_Int;
	Parms.CallFunc_Wind_Whistling_Sound_Intensity_Int = CallFunc_Wind_Whistling_Sound_Intensity_Int;
	Parms.CallFunc_Wind_Sound_Intensity_Int = CallFunc_Wind_Sound_Intensity_Int;
	Parms.CallFunc_Rain_Sound_Intensity_Int = CallFunc_Rain_Sound_Intensity_Int;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Current_General_Velocity_Velocity                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Current_General_Velocity_Velocity_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Post_Process_Wind_Fog(const struct FVector& CallFunc_Current_General_Velocity_Velocity, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Current_General_Velocity_Velocity_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Array_Get_Item, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_Array_Get_Item_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Array_Get_Item_2, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Post Process Wind Fog");

	Params::AUltra_Dynamic_Weather_C_Update_Post_Process_Wind_Fog_Params Parms{};

	Parms.CallFunc_Current_General_Velocity_Velocity = CallFunc_Current_General_Velocity_Velocity;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Current_General_Velocity_Velocity_1 = CallFunc_Current_General_Velocity_Velocity_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Set_up_Post_Process_Wind_Fog(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Set up Post Process Wind Fog");

	Params::AUltra_Dynamic_Weather_C_Set_up_Post_Process_Wind_Fog_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Occlusion Profile
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Interp_Speed_Multiplier                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Delta_Time_with_Tick_Set_Delta                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Current_Occlusion_Profile(double Interp_Speed_Multiplier, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Delta_Time_with_Tick_Set_Delta, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TArray<double>& K2Node_MakeArray_Array, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Current Occlusion Profile");

	Params::AUltra_Dynamic_Weather_C_Update_Current_Occlusion_Profile_Params Parms{};

	Parms.Interp_Speed_Multiplier = Interp_Speed_Multiplier;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Delta_Time_with_Tick_Set_Delta = CallFunc_Delta_Time_with_Tick_Set_Delta;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Target Occlusion Profile
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Actors_to_Ignore                                                 (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Directional_Hits                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance_Occluded                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Total_Occlusion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Total_Hits                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Overhead_Blocked                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     New_Occlusion_Profile                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Current_General_Velocity_Velocity                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FVector                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_2                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Target_Occlusion_Profile(const TArray<class AActor*>& Actors_to_Ignore, int32 Directional_Hits, double Distance_Occluded, double Total_Occlusion, int32 Total_Hits, bool Overhead_Blocked, const TArray<double>& New_Occlusion_Profile, int32 Temp_int_Variable, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_4, const struct FVector& CallFunc_Current_General_Velocity_Velocity, TArray<double>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Variable_5, double CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, TArray<struct FVector>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_7, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 Temp_int_Variable_6, const struct FVector& CallFunc_Normal_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_4, TArray<struct FVector>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_2, bool CallFunc_LineTraceSingle_ReturnValue_2, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Target Occlusion Profile");

	Params::AUltra_Dynamic_Weather_C_Update_Target_Occlusion_Profile_Params Parms{};

	Parms.Actors_to_Ignore = Actors_to_Ignore;
	Parms.Directional_Hits = Directional_Hits;
	Parms.Distance_Occluded = Distance_Occluded;
	Parms.Total_Occlusion = Total_Occlusion;
	Parms.Total_Hits = Total_Hits;
	Parms.Overhead_Blocked = Overhead_Blocked;
	Parms.New_Occlusion_Profile = New_Occlusion_Profile;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_Current_General_Velocity_Velocity = CallFunc_Current_General_Velocity_Velocity;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Normal_ReturnValue_2 = CallFunc_Normal_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_LineTraceSingle_OutHit_2 = CallFunc_LineTraceSingle_OutHit_2;
	Parms.CallFunc_LineTraceSingle_ReturnValue_2 = CallFunc_LineTraceSingle_ReturnValue_2;
	Parms.CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast = CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update New Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_New_Settings(bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update New Settings");

	Params::AUltra_Dynamic_Weather_C_Update_New_Settings_Params Parms{};

	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_3 = CallFunc_NotEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Weather_Intensity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Cloud_Coverage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Snow_Percentage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Period                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Current_Lightning_Period_and_Status(double Weather_Intensity, double Cloud_Coverage, double Snow_Percentage, bool Override, double* Period, bool* Enabled, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Current Lightning Period and Status");

	Params::AUltra_Dynamic_Weather_C_Current_Lightning_Period_and_Status_Params Parms{};

	Parms.Weather_Intensity = Weather_Intensity;
	Parms.Cloud_Coverage = Cloud_Coverage;
	Parms.Snow_Percentage = Snow_Percentage;
	Parms.Override = Override;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Period != nullptr)
		*Period = Parms.Period;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Preset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDS_WeatherTypes       Preset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Weather_Intensity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Cloud_Coverage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             _Snow                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Intensity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Material_Wetness                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Material_Snow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_Weather_Preset(enum class EUDS_WeatherTypes Preset, double* Weather_Intensity, double* Cloud_Coverage, double* _Snow, double* Wind_Intensity, double* Material_Wetness, double* Material_Snow, double CallFunc_Get_Preset_Value_Value, double CallFunc_Get_Preset_Value_Value_1, double CallFunc_Get_Preset_Value_Value_2, double CallFunc_Get_Preset_Value_Value_3, double CallFunc_Get_Preset_Value_Value_4, double CallFunc_Get_Preset_Value_Value_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get Weather Preset");

	Params::AUltra_Dynamic_Weather_C_Get_Weather_Preset_Params Parms{};

	Parms.Preset = Preset;
	Parms.CallFunc_Get_Preset_Value_Value = CallFunc_Get_Preset_Value_Value;
	Parms.CallFunc_Get_Preset_Value_Value_1 = CallFunc_Get_Preset_Value_Value_1;
	Parms.CallFunc_Get_Preset_Value_Value_2 = CallFunc_Get_Preset_Value_Value_2;
	Parms.CallFunc_Get_Preset_Value_Value_3 = CallFunc_Get_Preset_Value_Value_3;
	Parms.CallFunc_Get_Preset_Value_Value_4 = CallFunc_Get_Preset_Value_Value_4;
	Parms.CallFunc_Get_Preset_Value_Value_5 = CallFunc_Get_Preset_Value_Value_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Weather_Intensity != nullptr)
		*Weather_Intensity = Parms.Weather_Intensity;

	if (Cloud_Coverage != nullptr)
		*Cloud_Coverage = Parms.Cloud_Coverage;

	if (_Snow != nullptr)
		*_Snow = Parms._Snow;

	if (Wind_Intensity != nullptr)
		*Wind_Intensity = Parms.Wind_Intensity;

	if (Material_Wetness != nullptr)
		*Material_Wetness = Parms.Material_Wetness;

	if (Material_Snow != nullptr)
		*Material_Snow = Parms.Material_Snow;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Wind_Rotation_Rot                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Material_Effect_Parameters(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FRotator& CallFunc_Wind_Rotation_Rot, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Material Effect Parameters");

	Params::AUltra_Dynamic_Weather_C_Update_Material_Effect_Parameters_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Wind_Rotation_Rot = CallFunc_Wind_Rotation_Rot;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Current Weather Intensity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Limit_Current_Weather_Intensity(double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Limit Current Weather Intensity");

	Params::AUltra_Dynamic_Weather_C_Limit_Current_Weather_Intensity_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_ControlPointMode   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_Updated_Control_Point_Location(const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, enum class EUDS_ControlPointMode Temp_byte_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& K2Node_Select_Default, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get Updated Control Point Location");

	Params::AUltra_Dynamic_Weather_C_Get_Updated_Control_Point_Location_Params Parms{};

	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Local Weather
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Previous_Material_Wet                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Previous_Material_Snow                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Previous_Weather_Intensity                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Snow                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Previous_Wind_Intensity                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Previous_Cloud_Coverage                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance_from_Spline_Center                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  Current_Volume                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             Current_Volume_Alpha                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Inserted                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Priorities                                                       (Edit, BlueprintVisible)
// TArray<class AWeather_Override_Volume_C*>Filtered_List_of_Volumes                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindRightVectorClosestToWorldLocation_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindLocationClosestToWorldLocation_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Normal2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DotProduct2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Local_Weather(double Previous_Material_Wet, double Previous_Material_Snow, double Previous_Weather_Intensity, double Snow, double Previous_Wind_Intensity, double Previous_Cloud_Coverage, double Distance_from_Spline_Center, class AWeather_Override_Volume_C* Current_Volume, double Current_Volume_Alpha, bool Inserted, const TArray<int32>& Priorities, const TArray<class AWeather_Override_Volume_C*>& Filtered_List_of_Volumes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_4, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, class AWeather_Override_Volume_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_6, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_FindRightVectorClosestToWorldLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_FindLocationClosestToWorldLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, double CallFunc_VSize_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, double CallFunc_DotProduct2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Ease_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Local Weather");

	Params::AUltra_Dynamic_Weather_C_Local_Weather_Params Parms{};

	Parms.Previous_Material_Wet = Previous_Material_Wet;
	Parms.Previous_Material_Snow = Previous_Material_Snow;
	Parms.Previous_Weather_Intensity = Previous_Weather_Intensity;
	Parms.Snow = Snow;
	Parms.Previous_Wind_Intensity = Previous_Wind_Intensity;
	Parms.Previous_Cloud_Coverage = Previous_Cloud_Coverage;
	Parms.Distance_from_Spline_Center = Distance_from_Spline_Center;
	Parms.Current_Volume = Current_Volume;
	Parms.Current_Volume_Alpha = Current_Volume_Alpha;
	Parms.Inserted = Inserted;
	Parms.Priorities = Priorities;
	Parms.Filtered_List_of_Volumes = Filtered_List_of_Volumes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_3 = CallFunc_NotEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_4 = CallFunc_NotEqual_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_5 = CallFunc_NotEqual_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_FindRightVectorClosestToWorldLocation_ReturnValue = CallFunc_FindRightVectorClosestToWorldLocation_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_FindLocationClosestToWorldLocation_ReturnValue = CallFunc_FindLocationClosestToWorldLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_1 = CallFunc_Conv_VectorToVector2D_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Normal2D_ReturnValue = CallFunc_Normal2D_ReturnValue;
	Parms.CallFunc_DotProduct2D_ReturnValue = CallFunc_DotProduct2D_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles or Snow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Ground_Normal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           Physical_Material                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Puddle_Depth                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Snow_Depth                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Mask_Cancel                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Weather_Mask_Rain                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Weather_Mask                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Puddle_Mask                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Snow_Mask                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Small_Cloud_Sample                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Large_Cloud_Sample                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Mask_Brush_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Approximate_Weather_Mask_Brush_Effect_Out               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Approximate_Weather_Mask_Brush_Effect_Cancel            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FWrap_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FWrap_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FWrap_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FWrap_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Check_Point_for_Puddles_or_Snow(const struct FVector& Location, const struct FVector& Ground_Normal, class UPhysicalMaterial* Physical_Material, double* Puddle_Depth, double* Snow_Depth, bool Mask_Cancel, double Weather_Mask_Rain, double Weather_Mask, double Puddle_Mask, double Snow_Mask, const struct FVector2D& Small_Cloud_Sample, const struct FVector2D& Large_Cloud_Sample, int32 Temp_int_Array_Index_Variable, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_2, class AWeather_Mask_Brush_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Approximate_Weather_Mask_Brush_Effect_Out, bool CallFunc_Approximate_Weather_Mask_Brush_Effect_Cancel, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Ease_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Subtract_DoubleDouble_ReturnValue_5, double CallFunc_FClamp_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_6, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_7, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_8, double CallFunc_FClamp_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_9, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_FClamp_ReturnValue_5, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, double CallFunc_FWrap_ReturnValue, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_FWrap_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double CallFunc_FWrap_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double CallFunc_FWrap_ReturnValue_3, int32 CallFunc_FFloor_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_Array_Get_Item_1, const struct FVector2D& CallFunc_Array_Get_Item_2, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Check Point for Puddles or Snow");

	Params::AUltra_Dynamic_Weather_C_Check_Point_for_Puddles_or_Snow_Params Parms{};

	Parms.Location = Location;
	Parms.Ground_Normal = Ground_Normal;
	Parms.Physical_Material = Physical_Material;
	Parms.Mask_Cancel = Mask_Cancel;
	Parms.Weather_Mask_Rain = Weather_Mask_Rain;
	Parms.Weather_Mask = Weather_Mask;
	Parms.Puddle_Mask = Puddle_Mask;
	Parms.Snow_Mask = Snow_Mask;
	Parms.Small_Cloud_Sample = Small_Cloud_Sample;
	Parms.Large_Cloud_Sample = Large_Cloud_Sample;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_1 = CallFunc_Conv_VectorToVector2D_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_2 = CallFunc_Conv_VectorToVector2D_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Approximate_Weather_Mask_Brush_Effect_Out = CallFunc_Approximate_Weather_Mask_Brush_Effect_Out;
	Parms.CallFunc_Approximate_Weather_Mask_Brush_Effect_Cancel = CallFunc_Approximate_Weather_Mask_Brush_Effect_Cancel;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4 = CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_5 = CallFunc_Subtract_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_6 = CallFunc_Subtract_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_7 = CallFunc_Subtract_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_8 = CallFunc_Subtract_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_9 = CallFunc_Subtract_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_1 = CallFunc_Divide_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_FWrap_ReturnValue = CallFunc_FWrap_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_FWrap_ReturnValue_1 = CallFunc_FWrap_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_FWrap_ReturnValue_2 = CallFunc_FWrap_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_FWrap_ReturnValue_3 = CallFunc_FWrap_ReturnValue_3;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Puddle_Depth != nullptr)
		*Puddle_Depth = Parms.Puddle_Depth;

	if (Snow_Depth != nullptr)
		*Snow_Depth = Parms.Snow_Depth;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Pixel_Y                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Pixel_X                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      Source_Render_Target                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_ReadRenderTargetRawPixel_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Create_Cloud_Reference_Array(int32 Pixel_Y, int32 Pixel_X, class UTextureRenderTarget2D* Source_Render_Target, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable_1, const struct FLinearColor& CallFunc_ReadRenderTargetRawPixel_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Create Cloud Reference Array");

	Params::AUltra_Dynamic_Weather_C_Create_Cloud_Reference_Array_Params Parms{};

	Parms.Pixel_Y = Pixel_Y;
	Parms.Pixel_X = Pixel_X;
	Parms.Source_Render_Target = Source_Render_Target;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_ReadRenderTargetRawPixel_ReturnValue = CallFunc_ReadRenderTargetRawPixel_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Recycle_Render_Targets(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Recycle Render Targets");

	Params::AUltra_Dynamic_Weather_C_Recycle_Render_Targets_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDrawToRenderTargetContext  Render_Context                                                   (Edit, BlueprintVisible, NoDestructor)
// class UCanvas*                     RenderCanvas                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Corner_Position                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Brush_Size                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context_1                 (NoDestructor)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Corner_Position_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Brush_Size_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_DLWE_Puddle_Ripples(const struct FDrawToRenderTargetContext& Render_Context, class UCanvas* RenderCanvas, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, double CallFunc_Array_Get_Item, double CallFunc_FClamp_ReturnValue, double CallFunc_Array_Get_Item_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, double CallFunc_Array_Get_Item_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_Array_Get_Item_4, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Corner_Position, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Brush_Size, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_5, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size_1, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context_1, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Corner_Position_1, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Brush_Size_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update DLWE Puddle Ripples");

	Params::AUltra_Dynamic_Weather_C_Update_DLWE_Puddle_Ripples_Params Parms{};

	Parms.Render_Context = Render_Context;
	Parms.RenderCanvas = RenderCanvas;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.CallFunc_DLWE_Compression_Brush_Corner_Position = CallFunc_DLWE_Compression_Brush_Corner_Position;
	Parms.CallFunc_DLWE_Compression_Brush_Brush_Size = CallFunc_DLWE_Compression_Brush_Brush_Size;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size_1 = CallFunc_BeginDrawCanvasToRenderTarget_Size_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context_1 = CallFunc_BeginDrawCanvasToRenderTarget_Context_1;
	Parms.CallFunc_DLWE_Compression_Brush_Corner_Position_1 = CallFunc_DLWE_Compression_Brush_Corner_Position_1;
	Parms.CallFunc_DLWE_Compression_Brush_Brush_Size_1 = CallFunc_DLWE_Compression_Brush_Brush_Size_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Strength                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Point_in_DLWE_Space_Yes                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Ripple_DLWE_Puddle(const struct FVector& Location, double Size, double Strength, bool CallFunc_Is_Point_in_DLWE_Space_Yes, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Ripple DLWE Puddle");

	Params::AUltra_Dynamic_Weather_C_Ripple_DLWE_Puddle_Params Parms{};

	Parms.Location = Location;
	Parms.Size = Size;
	Parms.Strength = Strength;
	Parms.CallFunc_Is_Point_in_DLWE_Space_Yes = CallFunc_Is_Point_in_DLWE_Space_Yes;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDS_DLWE_Mode          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_DLWE_Mode          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_DLWE_Mode          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_DLWE_Render_Target_Mapping_Mapping                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Hypotenuse_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_DLWE_Mode          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_DLWE_Mode          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Check_to_change_DLWE_Mode(enum class EUDS_DLWE_Mode Temp_byte_Variable, enum class EUDS_DLWE_Mode Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EUDS_DLWE_Mode Temp_byte_Variable_2, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_DLWE_Render_Target_Area_Area, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_DLWE_Render_Target_Area_Area_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_DLWE_Render_Target_Mapping_Mapping, double CallFunc_Hypotenuse_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, enum class EUDS_DLWE_Mode K2Node_Select_Default, enum class EUDS_DLWE_Mode K2Node_Select_Default_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Check to change DLWE Mode");

	Params::AUltra_Dynamic_Weather_C_Check_to_change_DLWE_Mode_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_DLWE_Render_Target_Area_Area_1 = CallFunc_DLWE_Render_Target_Area_Area_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_DLWE_Render_Target_Mapping_Mapping = CallFunc_DLWE_Render_Target_Mapping_Mapping;
	Parms.CallFunc_Hypotenuse_ReturnValue = CallFunc_Hypotenuse_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      Render_Target                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETextureRenderTargetFormatFormat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Clear_Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          EdgeFade_Material                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context_1                 (NoDestructor)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Recenter_DLWE_Render_Target(class UTextureRenderTarget2D* Render_Target, enum class ETextureRenderTargetFormat Format, const struct FLinearColor& Clear_Color, class UMaterialInterface* EdgeFade_Material, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size_1, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context_1, double CallFunc_DLWE_Render_Target_Area_Area, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Recenter DLWE Render Target");

	Params::AUltra_Dynamic_Weather_C_Recenter_DLWE_Render_Target_Params Parms{};

	Parms.Render_Target = Render_Target;
	Parms.Format = Format;
	Parms.Clear_Color = Clear_Color;
	Parms.EdgeFade_Material = EdgeFade_Material;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size_1 = CallFunc_BeginDrawCanvasToRenderTarget_Size_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context_1 = CallFunc_BeginDrawCanvasToRenderTarget_Context_1;
	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context_1                 (NoDestructor)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_G_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_R_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Fade_DLWE_Target_Over_Time(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_MapRangeClamped_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size_1, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_MakeColor_G_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Fade DLWE Target Over Time");

	Params::AUltra_Dynamic_Weather_C_Fade_DLWE_Target_Over_Time_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size_1 = CallFunc_BeginDrawCanvasToRenderTarget_Size_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context_1 = CallFunc_BeginDrawCanvasToRenderTarget_Context_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_MakeColor_G_ImplicitCast = CallFunc_MakeColor_G_ImplicitCast;
	Parms.CallFunc_MakeColor_R_ImplicitCast = CallFunc_MakeColor_R_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDrawToRenderTargetContext  Render_Context                                                   (Edit, BlueprintVisible, NoDestructor)
// class UCanvas*                     RenderCanvas                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DLWE_Render_Target_Area_Area_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Corner_Position                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Brush_Size                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context_1                 (NoDestructor)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Corner_Position_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_DLWE_Compression_Brush_Brush_Size_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_DLWE_Snow_Compressions(const struct FDrawToRenderTargetContext& Render_Context, class UCanvas* RenderCanvas, double CallFunc_DLWE_Render_Target_Area_Area, double CallFunc_DLWE_Render_Target_Area_Area_1, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Array_Get_Item, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, double CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Corner_Position, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Brush_Size, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_3, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size_1, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context_1, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Corner_Position_1, const struct FVector2D& CallFunc_DLWE_Compression_Brush_Brush_Size_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update DLWE Snow Compressions");

	Params::AUltra_Dynamic_Weather_C_Update_DLWE_Snow_Compressions_Params Parms{};

	Parms.Render_Context = Render_Context;
	Parms.RenderCanvas = RenderCanvas;
	Parms.CallFunc_DLWE_Render_Target_Area_Area = CallFunc_DLWE_Render_Target_Area_Area;
	Parms.CallFunc_DLWE_Render_Target_Area_Area_1 = CallFunc_DLWE_Render_Target_Area_Area_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_DLWE_Compression_Brush_Corner_Position = CallFunc_DLWE_Compression_Brush_Corner_Position;
	Parms.CallFunc_DLWE_Compression_Brush_Brush_Size = CallFunc_DLWE_Compression_Brush_Brush_Size;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1 = CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size_1 = CallFunc_BeginDrawCanvasToRenderTarget_Size_1;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context_1 = CallFunc_BeginDrawCanvasToRenderTarget_Context_1;
	Parms.CallFunc_DLWE_Compression_Brush_Corner_Position_1 = CallFunc_DLWE_Compression_Brush_Corner_Position_1;
	Parms.CallFunc_DLWE_Compression_Brush_Brush_Size_1 = CallFunc_DLWE_Compression_Brush_Brush_Size_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_2 = CallFunc_Multiply_Vector2DFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_2 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Point_in_DLWE_Space_Yes                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Compress_DLWE_Snow(const struct FVector& Location, double Size, bool CallFunc_Is_Point_in_DLWE_Space_Yes, double CallFunc_RandomFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Compress DLWE Snow");

	Params::AUltra_Dynamic_Weather_C_Compress_DLWE_Snow_Params Parms{};

	Parms.Location = Location;
	Parms.Size = Size;
	Parms.CallFunc_Is_Point_in_DLWE_Space_Yes = CallFunc_Is_Point_in_DLWE_Space_Yes;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Check_for_DLWE_Recenter(bool CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter, bool CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter, bool CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_1, bool CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_1, bool CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_2, bool CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Check for DLWE Recenter");

	Params::AUltra_Dynamic_Weather_C_Check_for_DLWE_Recenter_Params Parms{};

	Parms.CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter = CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter;
	Parms.CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter = CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter;
	Parms.CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_1 = CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_1;
	Parms.CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_1 = CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_1;
	Parms.CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_2 = CallFunc_Does_DLWE_Need_Recentering_Needs_X_Axis_Recenter_2;
	Parms.CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_2 = CallFunc_Does_DLWE_Need_Recentering_Needs_Y_Axis_Recenter_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Material_State_is_Changing_Changing             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Material_State_is_Changing_Changing_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_A_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_A_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_DLWE_Parameters(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Current_Material_State_is_Changing_Changing, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Current_Material_State_is_Changing_Changing_1, bool CallFunc_Current_Weather_State_is_Changing_Changing, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_MapRangeClamped_ReturnValue_8, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_Ease_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_14, double CallFunc_MapRangeClamped_ReturnValue_9, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, double CallFunc_Percent_FloatFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, double CallFunc_Percent_FloatFloat_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update DLWE Parameters");

	Params::AUltra_Dynamic_Weather_C_Update_DLWE_Parameters_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Current_Material_State_is_Changing_Changing = CallFunc_Current_Material_State_is_Changing_Changing;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Current_Material_State_is_Changing_Changing_1 = CallFunc_Current_Material_State_is_Changing_Changing_1;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing = CallFunc_Current_Weather_State_is_Changing_Changing;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_6 = CallFunc_MapRangeClamped_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_7 = CallFunc_MapRangeClamped_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue_1 = CallFunc_Percent_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_MapRangeClamped_ReturnValue_8 = CallFunc_MapRangeClamped_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_14 = CallFunc_Multiply_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_MapRangeClamped_ReturnValue_9 = CallFunc_MapRangeClamped_ReturnValue_9;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_Percent_FloatFloat_A_ImplicitCast = CallFunc_Percent_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;
	Parms.CallFunc_Percent_FloatFloat_A_ImplicitCast_1 = CallFunc_Percent_FloatFloat_A_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Update DLWE Targets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               First_Run                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_DLWE_Render_Target_Mapping_Mapping                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_DLWE_Render_Target_Mapping_Mapping_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::_Update_DLWE_Targets(bool First_Run, const struct FLinearColor& CallFunc_DLWE_Render_Target_Mapping_Mapping, const struct FLinearColor& CallFunc_DLWE_Render_Target_Mapping_Mapping_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", " Update DLWE Targets");

	Params::AUltra_Dynamic_Weather_C__Update_DLWE_Targets_Params Parms{};

	Parms.First_Run = First_Run;
	Parms.CallFunc_DLWE_Render_Target_Mapping_Mapping = CallFunc_DLWE_Render_Target_Mapping_Mapping;
	Parms.CallFunc_DLWE_Render_Target_Mapping_Mapping_1 = CallFunc_DLWE_Render_Target_Mapping_Mapping_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Celsius                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fahrenheit                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_TemperatureType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_TemperatureType    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_Value_ImplicitCast                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_Current_Temperature(double* Celsius, double* Fahrenheit, enum class EUDS_TemperatureType Temp_byte_Variable, enum class EUDS_Season Temp_byte_Variable_1, enum class EUDS_TemperatureType Temp_byte_Variable_2, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_4, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double K2Node_Select_Default, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_MapRangeClamped_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_5, double CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_7, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_8, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1, double K2Node_Select_Default_2, float CallFunc_PerlinNoise1D_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get Current Temperature");

	Params::AUltra_Dynamic_Weather_C_Get_Current_Temperature_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_ReturnValue = CallFunc_PerlinNoise1D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MapRangeClamped_ReturnValue_6 = CallFunc_MapRangeClamped_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_6 = CallFunc_Add_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_7 = CallFunc_Add_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_8 = CallFunc_Add_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PerlinNoise1D_Value_ImplicitCast = CallFunc_PerlinNoise1D_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Celsius != nullptr)
		*Celsius = Parms.Celsius;

	if (Fahrenheit != nullptr)
		*Fahrenheit = Parms.Fahrenheit;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EUDS_WeatherTypes, double>Probability_Map                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EUDS_WeatherTypes       Current_Random_Type                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EUDS_WeatherTypes, double>Filtered_Probability_Map                                         (Parm, OutParm)
// TMap<enum class EUDS_WeatherTypes, double>Map                                                              (Edit, BlueprintVisible)
// TArray<enum class EUDS_WeatherTypes>Weather_Types_to_Filter                                          (Edit, BlueprintVisible)
// enum class EUDS_WeatherTypes       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_1                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_2                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_3                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_4                                             (ReferenceParm)
// TMap<enum class EUDS_WeatherTypes, double>K2Node_MakeVariable_MakeVariableOutput                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_5                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class EUDS_WeatherTypes       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_6                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_7                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_8                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_9                                             (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>Temp_byte_Variable_10                                            (ReferenceParm)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_WeatherTypes>K2Node_Select_Default                                            (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array_5                                         (ReferenceParm)
// TArray<enum class EUDS_WeatherTypes>K2Node_Select_Default_1                                          (ReferenceParm)

void AUltra_Dynamic_Weather_C::Filter_Probability_Map(TMap<enum class EUDS_WeatherTypes, double> Probability_Map, enum class EUDS_WeatherTypes Current_Random_Type, TMap<enum class EUDS_WeatherTypes, double>* Filtered_Probability_Map, TMap<enum class EUDS_WeatherTypes, double> Map, const TArray<enum class EUDS_WeatherTypes>& Weather_Types_to_Filter, enum class EUDS_WeatherTypes Temp_byte_Variable, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_1, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_2, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_3, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_4, TMap<enum class EUDS_WeatherTypes, double> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_5, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array, enum class EUDS_WeatherTypes CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array_1, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_6, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_7, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_8, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_9, TArray<enum class EUDS_WeatherTypes>& Temp_byte_Variable_10, enum class EUDS_WeatherTypes Temp_byte_Variable_11, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<enum class EUDS_WeatherTypes>& K2Node_Select_Default, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array_2, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array_3, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array_4, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array_5, TArray<enum class EUDS_WeatherTypes>& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Filter Probability Map");

	Params::AUltra_Dynamic_Weather_C_Filter_Probability_Map_Params Parms{};

	Parms.Probability_Map = Probability_Map;
	Parms.Current_Random_Type = Current_Random_Type;
	Parms.Map = Map;
	Parms.Weather_Types_to_Filter = Weather_Types_to_Filter;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Filtered_Probability_Map != nullptr)
		*Filtered_Probability_Map = Parms.Filtered_Probability_Map;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Run_by_Counterpart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeather_Effects_Interface_C>K2Node_DynamicCast_AsWeather_Effects_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::ConstructionScript_Function(bool Run_by_Counterpart, bool NewLocalVar_0, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IWeather_Effects_Interface_C> K2Node_DynamicCast_AsWeather_Effects_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "ConstructionScript_Function");

	Params::AUltra_Dynamic_Weather_C_ConstructionScript_Function_Params Parms{};

	Parms.Run_by_Counterpart = Run_by_Counterpart;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeather_Effects_Interface = K2Node_DynamicCast_AsWeather_Effects_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Current_Wind_Sound_Intensity                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Sound_Occlusion                                                  (Edit, BlueprintVisible)
// double                             Current_Wind_Global_LPF                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Wind_Rotation_Rot                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Distant_Thunder_Sound_Intensity_Int                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Wind_Whistling_Sound_Intensity_Int                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Wind_Sound_Intensity_Int                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Rain_Sound_Intensity_Int                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Rain_Sound_Intensity_Int_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_Select_Default                                            (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FVector                     CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_LowPassFilterFrequency_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_Value_ImplicitCast                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_Value_ImplicitCast_1                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_3  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Audio_Update(double Current_Wind_Sound_Intensity, const TArray<double>& Sound_Occlusion, double Current_Wind_Global_LPF, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Current_Weather_State_is_Changing_Changing, bool CallFunc_Current_Weather_State_is_Changing_Changing_1, bool CallFunc_Current_Weather_State_is_Changing_Changing_2, const struct FRotator& CallFunc_Wind_Rotation_Rot, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_Distant_Thunder_Sound_Intensity_Int, double CallFunc_Wind_Whistling_Sound_Intensity_Int, double CallFunc_Wind_Sound_Intensity_Int, double CallFunc_Rain_Sound_Intensity_Int, double CallFunc_Rain_Sound_Intensity_Int_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, double CallFunc_Array_Get_Item_3, TArray<double>& K2Node_MakeArray_Array, double CallFunc_Array_Get_Item_4, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Lerp_ReturnValue_1, bool Temp_bool_Variable, double CallFunc_Lerp_ReturnValue_2, TArray<double>& K2Node_Select_Default, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Lerp_ReturnValue_5, int32 Temp_int_Variable_1, double CallFunc_FMin_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, class UAudioComponent* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Lerp_ReturnValue_6, double CallFunc_FMin_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_Lerp_ReturnValue_7, int32 Temp_int_Variable_2, double CallFunc_Lerp_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_6, class UAudioComponent* CallFunc_Array_Get_Item_7, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_PerlinNoise1D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_PerlinNoise1D_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_4, TArray<struct FVector>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Array_Get_Item_9, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, float CallFunc_SetFloatParameter_InFloat_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast_1, float CallFunc_SetFloatParameter_InFloat_ImplicitCast_2, float CallFunc_SetFloatParameter_InFloat_ImplicitCast_3, float CallFunc_SetFloatParameter_InFloat_ImplicitCast_4, float CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast, float CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_1, float K2Node_VariableSet_LowPassFilterFrequency_ImplicitCast, float CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_2, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast, float CallFunc_PerlinNoise1D_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_PerlinNoise1D_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_2, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Audio Update");

	Params::AUltra_Dynamic_Weather_C_Audio_Update_Params Parms{};

	Parms.Current_Wind_Sound_Intensity = Current_Wind_Sound_Intensity;
	Parms.Sound_Occlusion = Sound_Occlusion;
	Parms.Current_Wind_Global_LPF = Current_Wind_Global_LPF;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing = CallFunc_Current_Weather_State_is_Changing_Changing;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing_1 = CallFunc_Current_Weather_State_is_Changing_Changing_1;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing_2 = CallFunc_Current_Weather_State_is_Changing_Changing_2;
	Parms.CallFunc_Wind_Rotation_Rot = CallFunc_Wind_Rotation_Rot;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Distant_Thunder_Sound_Intensity_Int = CallFunc_Distant_Thunder_Sound_Intensity_Int;
	Parms.CallFunc_Wind_Whistling_Sound_Intensity_Int = CallFunc_Wind_Whistling_Sound_Intensity_Int;
	Parms.CallFunc_Wind_Sound_Intensity_Int = CallFunc_Wind_Sound_Intensity_Int;
	Parms.CallFunc_Rain_Sound_Intensity_Int = CallFunc_Rain_Sound_Intensity_Int;
	Parms.CallFunc_Rain_Sound_Intensity_Int_1 = CallFunc_Rain_Sound_Intensity_Int_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_PerlinNoise1D_ReturnValue = CallFunc_PerlinNoise1D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_PerlinNoise1D_ReturnValue_1 = CallFunc_PerlinNoise1D_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast = CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast_1 = CallFunc_SetFloatParameter_InFloat_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast_2 = CallFunc_SetFloatParameter_InFloat_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast_3 = CallFunc_SetFloatParameter_InFloat_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast_4 = CallFunc_SetFloatParameter_InFloat_ImplicitCast_4;
	Parms.CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast = CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast;
	Parms.CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_1 = CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_1;
	Parms.K2Node_VariableSet_LowPassFilterFrequency_ImplicitCast = K2Node_VariableSet_LowPassFilterFrequency_ImplicitCast;
	Parms.CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_2 = CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast_2;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast;
	Parms.CallFunc_PerlinNoise1D_Value_ImplicitCast = CallFunc_PerlinNoise1D_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_PerlinNoise1D_Value_ImplicitCast_1 = CallFunc_PerlinNoise1D_Value_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_1 = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_2 = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_2;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_3 = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Delta_Time_with_Tick_Set_Delta                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Delta_Time_with_Tick_Set_Delta_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Delta_Time_with_Tick_Set_Delta_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Delta_Time_with_Tick_Set_Delta_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Current_Material_Effects(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Delta_Time_with_Tick_Set_Delta, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Delta_Time_with_Tick_Set_Delta_1, double CallFunc_Delta_Time_with_Tick_Set_Delta_2, double CallFunc_Delta_Time_with_Tick_Set_Delta_3, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FClamp_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_FClamp_ReturnValue_6, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_14, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Current Material Effects");

	Params::AUltra_Dynamic_Weather_C_Update_Current_Material_Effects_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Delta_Time_with_Tick_Set_Delta = CallFunc_Delta_Time_with_Tick_Set_Delta;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Delta_Time_with_Tick_Set_Delta_1 = CallFunc_Delta_Time_with_Tick_Set_Delta_1;
	Parms.CallFunc_Delta_Time_with_Tick_Set_Delta_2 = CallFunc_Delta_Time_with_Tick_Set_Delta_2;
	Parms.CallFunc_Delta_Time_with_Tick_Set_Delta_3 = CallFunc_Delta_Time_with_Tick_Set_Delta_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_FClamp_ReturnValue_6 = CallFunc_FClamp_ReturnValue_6;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_4 = CallFunc_Divide_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_5 = CallFunc_Divide_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_7 = CallFunc_FClamp_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_14 = CallFunc_Multiply_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_8 = CallFunc_FClamp_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Weather Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDS_WeatherTypes       Current_Weather_Type                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Get_Current_Weather_Type(enum class EUDS_WeatherTypes* Current_Weather_Type, bool Temp_bool_Variable, enum class EUDS_WeatherTypes Temp_byte_Variable, enum class EUDS_WeatherTypes Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUDS_WeatherTypes Temp_byte_Variable_2, enum class EUDS_WeatherTypes Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class EUDS_WeatherTypes Temp_byte_Variable_4, bool Temp_bool_Variable_3, enum class EUDS_WeatherTypes Temp_byte_Variable_5, enum class EUDS_WeatherTypes Temp_byte_Variable_6, bool Temp_bool_Variable_4, enum class EUDS_WeatherTypes Temp_byte_Variable_7, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, enum class EUDS_WeatherTypes Temp_byte_Variable_8, bool Temp_bool_Variable_7, enum class EUDS_WeatherTypes Temp_byte_Variable_9, bool Temp_bool_Variable_8, enum class EUDS_WeatherTypes Temp_byte_Variable_10, bool Temp_bool_Variable_9, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, enum class EUDS_WeatherTypes K2Node_Select_Default, enum class EUDS_WeatherTypes K2Node_Select_Default_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class EUDS_WeatherTypes K2Node_Select_Default_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3, enum class EUDS_WeatherTypes K2Node_Select_Default_3, enum class EUDS_WeatherTypes K2Node_Select_Default_4, bool CallFunc_Less_DoubleDouble_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_5, enum class EUDS_WeatherTypes K2Node_Select_Default_5, enum class EUDS_WeatherTypes K2Node_Select_Default_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_6, enum class EUDS_WeatherTypes K2Node_Select_Default_7, enum class EUDS_WeatherTypes K2Node_Select_Default_8, bool CallFunc_Less_DoubleDouble_ReturnValue_7, enum class EUDS_WeatherTypes K2Node_Select_Default_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Get Current Weather Type");

	Params::AUltra_Dynamic_Weather_C_Get_Current_Weather_Type_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_3 = CallFunc_Less_DoubleDouble_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_4 = CallFunc_Less_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_5 = CallFunc_Less_DoubleDouble_ReturnValue_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_6 = CallFunc_Less_DoubleDouble_ReturnValue_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_7 = CallFunc_Less_DoubleDouble_ReturnValue_7;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Weather_Type != nullptr)
		*Current_Weather_Type = Parms.Current_Weather_Type;

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Weather Preset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUDS_WeatherTypes>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Preset_Value_Value_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Apply_Weather_Preset(bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Get_Preset_Value_Value, double CallFunc_Get_Preset_Value_Value_1, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Get_Preset_Value_Value_2, double CallFunc_Get_Preset_Value_Value_3, double CallFunc_Get_Preset_Value_Value_4, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, double CallFunc_Get_Preset_Value_Value_5, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Apply Weather Preset");

	Params::AUltra_Dynamic_Weather_C_Apply_Weather_Preset_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_Preset_Value_Value = CallFunc_Get_Preset_Value_Value;
	Parms.CallFunc_Get_Preset_Value_Value_1 = CallFunc_Get_Preset_Value_Value_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Get_Preset_Value_Value_2 = CallFunc_Get_Preset_Value_Value_2;
	Parms.CallFunc_Get_Preset_Value_Value_3 = CallFunc_Get_Preset_Value_Value_3;
	Parms.CallFunc_Get_Preset_Value_Value_4 = CallFunc_Get_Preset_Value_Value_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Get_Preset_Value_Value_5 = CallFunc_Get_Preset_Value_Value_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status To Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDS_WeatherTypes       CallFunc_Get_Current_Weather_Type_Current_Weather_Type           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue_1                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue_2                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue_3                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Print_Current_Status_To_Screen(enum class EUDS_WeatherTypes CallFunc_Get_Current_Weather_Type_Current_Weather_Type, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Left_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Left_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Left_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Print Current Status To Screen");

	Params::AUltra_Dynamic_Weather_C_Print_Current_Status_To_Screen_Params Parms{};

	Parms.CallFunc_Get_Current_Weather_Type_Current_Weather_Type = CallFunc_Get_Current_Weather_Type_Current_Weather_Type;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Left_ReturnValue_1 = CallFunc_Left_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Left_ReturnValue_2 = CallFunc_Left_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_Left_ReturnValue_3 = CallFunc_Left_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAudioComponent*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_15                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_16                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Static_Variables(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<class UAudioComponent*>& K2Node_MakeArray_Array, TArray<class UAudioComponent*>& K2Node_MakeArray_Array_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_IsStandalone_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5, float CallFunc_SetFloatParameter_Param_ImplicitCast_6, float CallFunc_SetFloatParameter_Param_ImplicitCast_7, float CallFunc_SetFloatParameter_Param_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_9, float CallFunc_SetFloatParameter_Param_ImplicitCast_10, float CallFunc_SetFloatParameter_Param_ImplicitCast_11, float CallFunc_SetFloatParameter_Param_ImplicitCast_12, float CallFunc_SetFloatParameter_Param_ImplicitCast_13, float CallFunc_SetFloatParameter_Param_ImplicitCast_14, float CallFunc_SetFloatParameter_Param_ImplicitCast_15, float CallFunc_SetFloatParameter_Param_ImplicitCast_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Static Variables");

	Params::AUltra_Dynamic_Weather_C_Update_Static_Variables_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue_1 = CallFunc_Conv_LinearColorToVector_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue_1 = CallFunc_IsStandalone_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_4 = CallFunc_SetFloatParameter_Param_ImplicitCast_4;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_5 = CallFunc_SetFloatParameter_Param_ImplicitCast_5;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_6 = CallFunc_SetFloatParameter_Param_ImplicitCast_6;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_7 = CallFunc_SetFloatParameter_Param_ImplicitCast_7;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_8 = CallFunc_SetFloatParameter_Param_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_9 = CallFunc_SetFloatParameter_Param_ImplicitCast_9;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_10 = CallFunc_SetFloatParameter_Param_ImplicitCast_10;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_11 = CallFunc_SetFloatParameter_Param_ImplicitCast_11;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_12 = CallFunc_SetFloatParameter_Param_ImplicitCast_12;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_13 = CallFunc_SetFloatParameter_Param_ImplicitCast_13;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_14 = CallFunc_SetFloatParameter_Param_ImplicitCast_14;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_15 = CallFunc_SetFloatParameter_Param_ImplicitCast_15;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_16 = CallFunc_SetFloatParameter_Param_ImplicitCast_16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Weather_State_is_Changing_Changing_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Global_Weather_State_is_Changing_Changing               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Static_to_Random_Alpha                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Static_to_Random_Alpha_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Static_to_Random_Alpha_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Static_to_Random_Alpha_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Wind_Rotation_Rot                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Wind_Rotation_Rot_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Cloudiness_Masked_Weather_Intensity_Out                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Cloudiness_Masked_Weather_Intensity_Out_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Cloudiness_Masked_Weather_Intensity_Out_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Debris_Percentage_Perc                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Rain_Snow_Spawn_Rate_Rate                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Current_General_Velocity_Velocity                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSpeed_InNewSpeed_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Active_Variables(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Current_Weather_State_is_Changing_Changing, bool CallFunc_Current_Weather_State_is_Changing_Changing_1, bool CallFunc_Current_Weather_State_is_Changing_Changing_2, bool CallFunc_Current_Weather_State_is_Changing_Changing_3, bool CallFunc_Global_Weather_State_is_Changing_Changing, double CallFunc_Static_to_Random_Alpha, double CallFunc_Static_to_Random_Alpha_1, double CallFunc_Static_to_Random_Alpha_2, double CallFunc_Static_to_Random_Alpha_3, const struct FRotator& CallFunc_Wind_Rotation_Rot, const struct FRotator& CallFunc_Wind_Rotation_Rot_1, double CallFunc_Cloudiness_Masked_Weather_Intensity_Out, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Cloudiness_Masked_Weather_Intensity_Out_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, double CallFunc_Cloudiness_Masked_Weather_Intensity_Out_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_Current_Debris_Percentage_Perc, double CallFunc_Current_Rain_Snow_Spawn_Rate_Rate, const struct FVector& CallFunc_Current_General_Velocity_Velocity, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_8, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_6, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, double CallFunc_Lerp_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_8, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Lerp_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_9, double CallFunc_MapRangeClamped_ReturnValue_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Lerp_ReturnValue_6, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_11, double CallFunc_MapRangeClamped_ReturnValue_12, double CallFunc_Lerp_ReturnValue_7, double CallFunc_Lerp_ReturnValue_8, double CallFunc_Lerp_ReturnValue_9, double CallFunc_Lerp_ReturnValue_10, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5, float CallFunc_SetFloatParameter_Param_ImplicitCast_6, float CallFunc_SetSpeed_InNewSpeed_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_7, float CallFunc_SetFloatParameter_Param_ImplicitCast_8, float CallFunc_SetFloatParameter_Param_ImplicitCast_9, float CallFunc_SetFloatParameter_Param_ImplicitCast_10, float CallFunc_SetFloatParameter_Param_ImplicitCast_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Active Variables");

	Params::AUltra_Dynamic_Weather_C_Update_Active_Variables_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing = CallFunc_Current_Weather_State_is_Changing_Changing;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing_1 = CallFunc_Current_Weather_State_is_Changing_Changing_1;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing_2 = CallFunc_Current_Weather_State_is_Changing_Changing_2;
	Parms.CallFunc_Current_Weather_State_is_Changing_Changing_3 = CallFunc_Current_Weather_State_is_Changing_Changing_3;
	Parms.CallFunc_Global_Weather_State_is_Changing_Changing = CallFunc_Global_Weather_State_is_Changing_Changing;
	Parms.CallFunc_Static_to_Random_Alpha = CallFunc_Static_to_Random_Alpha;
	Parms.CallFunc_Static_to_Random_Alpha_1 = CallFunc_Static_to_Random_Alpha_1;
	Parms.CallFunc_Static_to_Random_Alpha_2 = CallFunc_Static_to_Random_Alpha_2;
	Parms.CallFunc_Static_to_Random_Alpha_3 = CallFunc_Static_to_Random_Alpha_3;
	Parms.CallFunc_Wind_Rotation_Rot = CallFunc_Wind_Rotation_Rot;
	Parms.CallFunc_Wind_Rotation_Rot_1 = CallFunc_Wind_Rotation_Rot_1;
	Parms.CallFunc_Cloudiness_Masked_Weather_Intensity_Out = CallFunc_Cloudiness_Masked_Weather_Intensity_Out;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Cloudiness_Masked_Weather_Intensity_Out_1 = CallFunc_Cloudiness_Masked_Weather_Intensity_Out_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_Cloudiness_Masked_Weather_Intensity_Out_2 = CallFunc_Cloudiness_Masked_Weather_Intensity_Out_2;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Current_Debris_Percentage_Perc = CallFunc_Current_Debris_Percentage_Perc;
	Parms.CallFunc_Current_Rain_Snow_Spawn_Rate_Rate = CallFunc_Current_Rain_Snow_Spawn_Rate_Rate;
	Parms.CallFunc_Current_General_Velocity_Velocity = CallFunc_Current_General_Velocity_Velocity;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_6 = CallFunc_MapRangeClamped_ReturnValue_6;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_7 = CallFunc_MapRangeClamped_ReturnValue_7;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_8 = CallFunc_MapRangeClamped_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_9 = CallFunc_MapRangeClamped_ReturnValue_9;
	Parms.CallFunc_MapRangeClamped_ReturnValue_10 = CallFunc_MapRangeClamped_ReturnValue_10;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_11 = CallFunc_MapRangeClamped_ReturnValue_11;
	Parms.CallFunc_MapRangeClamped_ReturnValue_12 = CallFunc_MapRangeClamped_ReturnValue_12;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_4 = CallFunc_SetFloatParameter_Param_ImplicitCast_4;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_5 = CallFunc_SetFloatParameter_Param_ImplicitCast_5;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_6 = CallFunc_SetFloatParameter_Param_ImplicitCast_6;
	Parms.CallFunc_SetSpeed_InNewSpeed_ImplicitCast = CallFunc_SetSpeed_InNewSpeed_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_7 = CallFunc_SetFloatParameter_Param_ImplicitCast_7;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_8 = CallFunc_SetFloatParameter_Param_ImplicitCast_8;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_9 = CallFunc_SetFloatParameter_Param_ImplicitCast_9;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_10 = CallFunc_SetFloatParameter_Param_ImplicitCast_10;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_11 = CallFunc_SetFloatParameter_Param_ImplicitCast_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Settings
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Weather_Intensity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Cloudiness                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Intensity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             _Snow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_To_Transition_To_New_Settings                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Hold_New_Settings                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Transition_Back_to_Random_Variation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reset_Particle_Emitters                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Change_Weather_Using_Settings(double Weather_Intensity, double Cloudiness, double Wind_Intensity, double _Snow, double Time_To_Transition_To_New_Settings, double Time_to_Hold_New_Settings, double Time_to_Transition_Back_to_Random_Variation, bool Reset_Particle_Emitters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Change Weather Using Settings");

	Params::AUltra_Dynamic_Weather_C_Change_Weather_Using_Settings_Params Parms{};

	Parms.Weather_Intensity = Weather_Intensity;
	Parms.Cloudiness = Cloudiness;
	Parms.Wind_Intensity = Wind_Intensity;
	Parms._Snow = _Snow;
	Parms.Time_To_Transition_To_New_Settings = Time_To_Transition_To_New_Settings;
	Parms.Time_to_Hold_New_Settings = Time_to_Hold_New_Settings;
	Parms.Time_to_Transition_Back_to_Random_Variation = Time_to_Transition_Back_to_Random_Variation;
	Parms.Reset_Particle_Emitters = Reset_Particle_Emitters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Type
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDS_WeatherTypes       New_Weather_Type                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_To_Transition_To_New_Settings                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Hold_New_Settings                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Transition_Back_to_Random_Variation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reset_Particle_Emitters                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Change_Weather_Using_Type(enum class EUDS_WeatherTypes New_Weather_Type, double Time_To_Transition_To_New_Settings, double Time_to_Hold_New_Settings, double Time_to_Transition_Back_to_Random_Variation, bool Reset_Particle_Emitters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Change Weather Using Type");

	Params::AUltra_Dynamic_Weather_C_Change_Weather_Using_Type_Params Parms{};

	Parms.New_Weather_Type = New_Weather_Type;
	Parms.Time_To_Transition_To_New_Settings = Time_To_Transition_To_New_Settings;
	Parms.Time_to_Hold_New_Settings = Time_to_Hold_New_Settings;
	Parms.Time_to_Transition_Back_to_Random_Variation = Time_to_Transition_Back_to_Random_Variation;
	Parms.Reset_Particle_Emitters = Reset_Particle_Emitters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Client Weather Change
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Transition_State                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Start_Client_Weather_Change(int32 Transition_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Start Client Weather Change");

	Params::AUltra_Dynamic_Weather_C_Start_Client_Weather_Change_Params Parms{};

	Parms.Transition_State = Transition_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Reset_All_Emitters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Reset All Emitters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Current Season
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDS_Season             Season                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Set_Current_Season(enum class EUDS_Season Season)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Set Current Season");

	Params::AUltra_Dynamic_Weather_C_Set_Current_Season_Params Parms{};

	Parms.Season = Season;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Cloud Coverage from UDS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cloud_Coverage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Update_Cloud_Coverage_from_UDS(double Cloud_Coverage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Cloud Coverage from UDS");

	Params::AUltra_Dynamic_Weather_C_Update_Cloud_Coverage_from_UDS_Params Parms{};

	Parms.Cloud_Coverage = Cloud_Coverage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDS_and_UDW_State          State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Apply_State(const struct FUDS_and_UDW_State& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Apply State");

	Params::AUltra_Dynamic_Weather_C_Apply_State_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Update_Material_Effects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Update Material Effects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Timed Override with New Changes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Timed_Override_with_New_Changes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Timed Override with New Changes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use_Custom_Lightning_Location                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Custom_Lightning_Location                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Flash_Lightning(double Angle, bool Use_Custom_Lightning_Location, const struct FVector& Custom_Lightning_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Flash Lightning");

	Params::AUltra_Dynamic_Weather_C_Flash_Lightning_Params Parms{};

	Parms.Angle = Angle;
	Parms.Use_Custom_Lightning_Location = Use_Custom_Lightning_Location;
	Parms.Custom_Lightning_Location = Custom_Lightning_Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::End_Lightning_Flash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "End Lightning Flash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Tick_Lightning_Flash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Tick Lightning Flash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning Local
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeather_Override_Volume_C*  Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::Flash_Lightning_Local(class AWeather_Override_Volume_C* Volume, double Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Flash Lightning Local");

	Params::AUltra_Dynamic_Weather_C_Flash_Lightning_Local_Params Parms{};

	Parms.Volume = Volume;
	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "ReceiveTick");

	Params::AUltra_Dynamic_Weather_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Force_Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Force Tick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Initialize_Weather()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Initialize Weather");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "ReceiveEndPlay");

	Params::AUltra_Dynamic_Weather_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_WeatherTypes       K2Node_CustomEvent_New_Weather_Type                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time_To_Transition_To_New_Settings            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time_to_Hold_New_Settings                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Reset_Particle_Emitters                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeather_Effects_Interface_C>K2Node_DynamicCast_AsWeather_Effects_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Transition_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Season             K2Node_Event_Season                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Cloud_Coverage                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUDS_and_UDW_State          K2Node_Event_State                                               (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWeather_Override_Volume_C*>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Weather_Intensity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Cloudiness                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Wind_Intensity                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Rain___Snow                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time_To_Transition_To_New_Settings_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time_to_Hold_New_Settings_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Reset_Particle_Emitters_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Angle_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Use_Custom_Lightning_Location                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Custom_Lightning_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  K2Node_CustomEvent_Volume                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Angle                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Lightning_Period_and_Status_Period              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Lightning_Period_and_Status_Enabled             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lightning_Distance_Range_Range                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lightning_Distance_Range_Range_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Close_Thunder_Sound_Delay_Delay                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Lightning_Period_and_Status_Period_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Lightning_Period_and_Status_Enabled_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Timer_Max_Max                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Timer_Max_Max_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Timer_Max_Max_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Timer_Max_Max_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeather_Override_Volume_C*  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomWeatherVariation_StateCallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors_1                   (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWeather_Effects_Interface_C>K2Node_DynamicCast_AsWeather_Effects_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Rain___Snow_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Timer_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Weather_Intensity_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Cloud_Coverage_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Rain___Snow_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Wind_Intensity_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Global_Material_Snow_Coverage_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Global_Material_Wetness_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Timer_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Lerp_to_New_Settings_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Lerp_to_Static_Settings_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_Value_ImplicitCast                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUltra_Dynamic_Weather_C::ExecuteUbergraph_Ultra_Dynamic_Weather(int32 EntryPoint, int32 Temp_int_Variable, enum class EUDS_WeatherTypes K2Node_CustomEvent_New_Weather_Type, double K2Node_CustomEvent_Time_To_Transition_To_New_Settings, double K2Node_CustomEvent_Time_to_Hold_New_Settings, double K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation, bool K2Node_CustomEvent_Reset_Particle_Emitters, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IWeather_Effects_Interface_C> K2Node_DynamicCast_AsWeather_Effects_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_CustomEvent_Transition_State, enum class EUDS_Season K2Node_Event_Season, double K2Node_Event_Cloud_Coverage, double CallFunc_MapRangeClamped_ReturnValue, const struct FUDS_and_UDW_State& K2Node_Event_State, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, TArray<class AWeather_Override_Volume_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue_1, double K2Node_CustomEvent_Weather_Intensity, double K2Node_CustomEvent_Cloudiness, double K2Node_CustomEvent_Wind_Intensity, double K2Node_CustomEvent_Rain___Snow, double K2Node_CustomEvent_Time_To_Transition_To_New_Settings_1, double K2Node_CustomEvent_Time_to_Hold_New_Settings_1, double K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation_1, bool K2Node_CustomEvent_Reset_Particle_Emitters_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsActive_ReturnValue, double K2Node_CustomEvent_Angle_1, bool K2Node_CustomEvent_Use_Custom_Lightning_Location, const struct FVector& K2Node_CustomEvent_Custom_Lightning_Location, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_PerlinNoise1D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, class AWeather_Override_Volume_C* K2Node_CustomEvent_Volume, double K2Node_CustomEvent_Angle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Current_Lightning_Period_and_Status_Period, bool CallFunc_Current_Lightning_Period_and_Status_Enabled, double CallFunc_Lightning_Distance_Range_Range, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Lightning_Distance_Range_Range_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, double CallFunc_Close_Thunder_Sound_Delay_Delay, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_SelectVector_ReturnValue, int32 Temp_int_Variable_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float K2Node_Event_DeltaSeconds, double CallFunc_VSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_Current_Lightning_Period_and_Status_Period_1, bool CallFunc_Current_Lightning_Period_and_Status_Enabled_1, const struct FTransform& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue_4, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Current_Timer_Max_Max, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Current_Timer_Max_Max_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double CallFunc_Current_Timer_Max_Max_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Current_Timer_Max_Max_3, double CallFunc_Ease_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_Ease_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, int32 Temp_int_Array_Index_Variable, class AWeather_Override_Volume_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_8, const struct FRandomWeatherVariation_State& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FTransform& Temp_struct_Variable_1, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Variable_3, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<double>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_IsDedicatedServer_ReturnValue_3, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors_1, bool CallFunc_Not_PreBool_ReturnValue_8, class AActor* CallFunc_Array_Get_Item_3, TScriptInterface<class IWeather_Effects_Interface_C> K2Node_DynamicCast_AsWeather_Effects_Interface_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_10, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, double K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast, double K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast, double K2Node_VariableSet_Old_Rain___Snow_ImplicitCast, double K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast, double K2Node_VariableSet_Timer_ImplicitCast, double K2Node_VariableSet_Weather_Intensity_ImplicitCast, double K2Node_VariableSet_Cloud_Coverage_ImplicitCast, double K2Node_VariableSet_Rain___Snow_ImplicitCast, double K2Node_VariableSet_Wind_Intensity_ImplicitCast, double K2Node_VariableSet_Global_Material_Snow_Coverage_ImplicitCast, double K2Node_VariableSet_Global_Material_Wetness_ImplicitCast, double K2Node_VariableSet_Timer_ImplicitCast_1, double K2Node_VariableSet_Lerp_to_New_Settings_ImplicitCast, double K2Node_VariableSet_Lerp_to_Static_Settings_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_PerlinNoise1D_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "ExecuteUbergraph_Ultra_Dynamic_Weather");

	Params::AUltra_Dynamic_Weather_C_ExecuteUbergraph_Ultra_Dynamic_Weather_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_New_Weather_Type = K2Node_CustomEvent_New_Weather_Type;
	Parms.K2Node_CustomEvent_Time_To_Transition_To_New_Settings = K2Node_CustomEvent_Time_To_Transition_To_New_Settings;
	Parms.K2Node_CustomEvent_Time_to_Hold_New_Settings = K2Node_CustomEvent_Time_to_Hold_New_Settings;
	Parms.K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation = K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation;
	Parms.K2Node_CustomEvent_Reset_Particle_Emitters = K2Node_CustomEvent_Reset_Particle_Emitters;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWeather_Effects_Interface = K2Node_DynamicCast_AsWeather_Effects_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Transition_State = K2Node_CustomEvent_Transition_State;
	Parms.K2Node_Event_Season = K2Node_Event_Season;
	Parms.K2Node_Event_Cloud_Coverage = K2Node_Event_Cloud_Coverage;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CustomEvent_Weather_Intensity = K2Node_CustomEvent_Weather_Intensity;
	Parms.K2Node_CustomEvent_Cloudiness = K2Node_CustomEvent_Cloudiness;
	Parms.K2Node_CustomEvent_Wind_Intensity = K2Node_CustomEvent_Wind_Intensity;
	Parms.K2Node_CustomEvent_Rain___Snow = K2Node_CustomEvent_Rain___Snow;
	Parms.K2Node_CustomEvent_Time_To_Transition_To_New_Settings_1 = K2Node_CustomEvent_Time_To_Transition_To_New_Settings_1;
	Parms.K2Node_CustomEvent_Time_to_Hold_New_Settings_1 = K2Node_CustomEvent_Time_to_Hold_New_Settings_1;
	Parms.K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation_1 = K2Node_CustomEvent_Time_to_Transition_Back_to_Random_Variation_1;
	Parms.K2Node_CustomEvent_Reset_Particle_Emitters_1 = K2Node_CustomEvent_Reset_Particle_Emitters_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.K2Node_CustomEvent_Angle_1 = K2Node_CustomEvent_Angle_1;
	Parms.K2Node_CustomEvent_Use_Custom_Lightning_Location = K2Node_CustomEvent_Use_Custom_Lightning_Location;
	Parms.K2Node_CustomEvent_Custom_Lightning_Location = K2Node_CustomEvent_Custom_Lightning_Location;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_PerlinNoise1D_ReturnValue = CallFunc_PerlinNoise1D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue = CallFunc_Multiply_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_CustomEvent_Volume = K2Node_CustomEvent_Volume;
	Parms.K2Node_CustomEvent_Angle = K2Node_CustomEvent_Angle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Current_Lightning_Period_and_Status_Period = CallFunc_Current_Lightning_Period_and_Status_Period;
	Parms.CallFunc_Current_Lightning_Period_and_Status_Enabled = CallFunc_Current_Lightning_Period_and_Status_Enabled;
	Parms.CallFunc_Lightning_Distance_Range_Range = CallFunc_Lightning_Distance_Range_Range;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Lightning_Distance_Range_Range_1 = CallFunc_Lightning_Distance_Range_Range_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_Close_Thunder_Sound_Delay_Delay = CallFunc_Close_Thunder_Sound_Delay_Delay;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_Current_Lightning_Period_and_Status_Period_1 = CallFunc_Current_Lightning_Period_and_Status_Period_1;
	Parms.CallFunc_Current_Lightning_Period_and_Status_Enabled_1 = CallFunc_Current_Lightning_Period_and_Status_Enabled_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Current_Timer_Max_Max = CallFunc_Current_Timer_Max_Max;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Current_Timer_Max_Max_1 = CallFunc_Current_Timer_Max_Max_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Current_Timer_Max_Max_2 = CallFunc_Current_Timer_Max_Max_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Current_Timer_Max_Max_3 = CallFunc_Current_Timer_Max_Max_3;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_Ease_ReturnValue_1 = CallFunc_Ease_ReturnValue_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_2 = CallFunc_GetPlayerCameraManager_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_3 = CallFunc_IsDedicatedServer_ReturnValue_3;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors_1 = CallFunc_GetAllActorsWithInterface_OutActors_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsWeather_Effects_Interface_1 = K2Node_DynamicCast_AsWeather_Effects_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_4 = CallFunc_IsDedicatedServer_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_5 = CallFunc_IsDedicatedServer_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast = K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast = K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Rain___Snow_ImplicitCast = K2Node_VariableSet_Old_Rain___Snow_ImplicitCast;
	Parms.K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast = K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast;
	Parms.K2Node_VariableSet_Timer_ImplicitCast = K2Node_VariableSet_Timer_ImplicitCast;
	Parms.K2Node_VariableSet_Weather_Intensity_ImplicitCast = K2Node_VariableSet_Weather_Intensity_ImplicitCast;
	Parms.K2Node_VariableSet_Cloud_Coverage_ImplicitCast = K2Node_VariableSet_Cloud_Coverage_ImplicitCast;
	Parms.K2Node_VariableSet_Rain___Snow_ImplicitCast = K2Node_VariableSet_Rain___Snow_ImplicitCast;
	Parms.K2Node_VariableSet_Wind_Intensity_ImplicitCast = K2Node_VariableSet_Wind_Intensity_ImplicitCast;
	Parms.K2Node_VariableSet_Global_Material_Snow_Coverage_ImplicitCast = K2Node_VariableSet_Global_Material_Snow_Coverage_ImplicitCast;
	Parms.K2Node_VariableSet_Global_Material_Wetness_ImplicitCast = K2Node_VariableSet_Global_Material_Wetness_ImplicitCast;
	Parms.K2Node_VariableSet_Timer_ImplicitCast_1 = K2Node_VariableSet_Timer_ImplicitCast_1;
	Parms.K2Node_VariableSet_Lerp_to_New_Settings_ImplicitCast = K2Node_VariableSet_Lerp_to_New_Settings_ImplicitCast;
	Parms.K2Node_VariableSet_Lerp_to_Static_Settings_ImplicitCast = K2Node_VariableSet_Lerp_to_Static_Settings_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_PerlinNoise1D_Value_ImplicitCast = CallFunc_PerlinNoise1D_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast = CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast = CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clouds Clearing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Clouds_Clearing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Clouds Clearing__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Getting Cloudy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Getting_Cloudy__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Getting Cloudy__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Snowing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Finished_Snowing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Finished Snowing__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Raining__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Finished_Raining__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Finished Raining__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Snowing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Started_Snowing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Started Snowing__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Raining__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUltra_Dynamic_Weather_C::Started_Raining__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ultra_Dynamic_Weather_C", "Started Raining__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


