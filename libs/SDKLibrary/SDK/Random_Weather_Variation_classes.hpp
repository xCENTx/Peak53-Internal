#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x2A8 - 0xA0)
// BlueprintGeneratedClass Random_Weather_Variation.Random_Weather_Variation_C
class URandom_Weather_Variation_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AUltra_Dynamic_Weather_C*              UDW;                                               // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Random_Weather_Intensity;                          // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Random_Cloud_Coverage;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _Snow;                                             // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Random_Wind_Intensity;                             // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Random_Material_Snow;                              // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Random_Material_Wetness;                           // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUDS_WeatherTypes                 Current_Random_Weather_Type;                       // 0xE0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Summer_;               // 0xE8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Autumn_;               // 0x138(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Winter_;               // 0x188(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Spring_;               // 0x1D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Current_Lerp_Alpha;                                // 0x228(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_Timer_Length;                              // 0x230(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Old_Weather_Intensity;                             // 0x238(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Old_Cloud_Coverage;                                // 0x240(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __Snow;                                             // 0x248(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Old_Wind_Intensity;                                // 0x250(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Old_Material_Snow;                                 // 0x258(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Old_Material_Wetness;                              // 0x260(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeather_Override_Volume_C*            Volume;                                            // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Changes;                                     // 0x270(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Changing_Weather;                                  // 0x274(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUDS_WeatherTypes                 Last_Random_Weather_Type;                          // 0x275(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EF0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Target_Weather_Intensity;                          // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Target_Cloud_Coverage;                             // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ___Snow;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Target_Wind_Intensity;                             // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Target_Material_Wetness;                           // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Target_Material_Snow;                              // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URandom_Weather_Variation_C* GetDefaultObj();

	void Update_Target_Settings(double CallFunc_Get_Weather_Preset_Weather_Intensity, double CallFunc_Get_Weather_Preset_Cloud_Coverage, double CallFunc_Get_Weather_Preset_Rain___Snow, double CallFunc_Get_Weather_Preset_Wind_Intensity, double CallFunc_Get_Weather_Preset_Material_Wetness, double CallFunc_Get_Weather_Preset_Material_Snow);
	void Apply_State(const struct FRandomWeatherVariation_State& Random_Weather_State, bool CallFunc_IsComponentTickEnabled_ReturnValue, double K2Node_VariableSet_Current_Lerp_Alpha_ImplicitCast, double K2Node_VariableSet_Current_Timer_Length_ImplicitCast, double K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast, double K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast, double K2Node_VariableSet_Old_Rain___Snow_ImplicitCast, double K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast, double K2Node_VariableSet_Old_Material_Snow_ImplicitCast, double K2Node_VariableSet_Old_Material_Wetness_ImplicitCast);
	void Get_State_for_Saving(struct FRandomWeatherVariation_State* State, class AWeather_Override_Volume_C** Volume, const struct FRandomWeatherVariation_State& K2Node_MakeStruct_RandomWeatherVariation_State, float K2Node_MakeStruct_OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72_ImplicitCast, float K2Node_MakeStruct_OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF_ImplicitCast, float K2Node_MakeStruct_OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F_ImplicitCast, float K2Node_MakeStruct_OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78_ImplicitCast, float K2Node_MakeStruct_OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C_ImplicitCast, float K2Node_MakeStruct_OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF_ImplicitCast, float K2Node_MakeStruct_CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF_ImplicitCast, float K2Node_MakeStruct_CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85_ImplicitCast);
	void Select_New_Random_Weather_Type(bool Filter_Probability_List, double Threshold, double Random_Float, double Random_Max_Range, TMap<enum class EUDS_WeatherTypes, double> Current_Probabilities, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TMap<enum class EUDS_WeatherTypes, double> CallFunc_Filter_Probability_Map_Filtered_Probability_Map, TArray<enum class EUDS_WeatherTypes>& CallFunc_Map_Keys_Keys, enum class EUDS_WeatherTypes CallFunc_Array_Get_Item, TArray<double>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, double CallFunc_Array_Get_Item_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, enum class EUDS_Season Temp_byte_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, TMap<enum class EUDS_WeatherTypes, double> K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void Increment_Random_Weather(double Eased_Lerp_Alpha, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Ease_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, TArray<enum class EUDS_WeatherTypes>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Lerp_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5);
	void Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<enum class EUDS_WeatherTypes, double> Summer_Probabilities, TMap<enum class EUDS_WeatherTypes, double> Autumn_Probabilities, TMap<enum class EUDS_WeatherTypes, double> Winter_Probabilities, TMap<enum class EUDS_WeatherTypes, double> Spring_Probabilities, bool Start_with_Random_Type);
	void ReceiveTick(float DeltaSeconds);
	void Start_Timer_to_Change_Weather_Type();
	void Reset_Timer();
	void Update_Old_Variables();
	void ExecuteUbergraph_Random_Weather_Variation(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AUltra_Dynamic_Weather_C* K2Node_CustomEvent_UDW, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Summer_Probabilities, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Autumn_Probabilities, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Winter_Probabilities, TMap<enum class EUDS_WeatherTypes, double> K2Node_CustomEvent_Spring_Probabilities, bool K2Node_CustomEvent_Start_with_Random_Type, float K2Node_Event_DeltaSeconds, double CallFunc_RandomFloatInRange_ReturnValue, class AUltra_Dynamic_Weather_C* CallFunc_GetActorOfClass_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}


