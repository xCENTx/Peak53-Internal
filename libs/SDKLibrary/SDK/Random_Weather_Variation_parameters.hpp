#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.Update Target Settings
struct URandom_Weather_Variation_C_Update_Target_Settings_Params
{
public:
	double                                       CallFunc_Get_Weather_Preset_Weather_Intensity;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Weather_Preset_Cloud_Coverage;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Weather_Preset_Rain___Snow;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Weather_Preset_Wind_Intensity;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Weather_Preset_Material_Wetness;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Weather_Preset_Material_Snow;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State
struct URandom_Weather_Variation_C_Apply_State_Params
{
public:
	struct FRandomWeatherVariation_State         Random_Weather_State;                              // 0x0(0x24)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsComponentTickEnabled_ReturnValue;       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EDF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_Current_Lerp_Alpha_ImplicitCast; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Current_Timer_Length_ImplicitCast; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Old_Weather_Intensity_ImplicitCast; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Old_Cloud_Coverage_ImplicitCast; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Old_Rain___Snow_ImplicitCast;   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Old_Wind_Intensity_ImplicitCast; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Old_Material_Snow_ImplicitCast; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Old_Material_Wetness_ImplicitCast; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving
struct URandom_Weather_Variation_C_Get_State_for_Saving_Params
{
public:
	struct FRandomWeatherVariation_State         State;                                             // 0x0(0x24)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeather_Override_Volume_C*            Volume;                                            // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRandomWeatherVariation_State         K2Node_MakeStruct_RandomWeatherVariation_State;    // 0x30(0x24)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72_ImplicitCast; // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF_ImplicitCast; // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F_ImplicitCast; // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78_ImplicitCast; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C_ImplicitCast; // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF_ImplicitCast; // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF_ImplicitCast; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85_ImplicitCast; // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type
struct URandom_Weather_Variation_C_Select_New_Random_Weather_Type_Params
{
public:
	bool                                         Filter_Probability_List;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Threshold;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Random_Float;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Random_Max_Range;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EUDS_WeatherTypes, double>   Current_Probabilities;                             // 0x20(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EUDS_WeatherTypes, double>   CallFunc_Filter_Probability_Map_Filtered_Probability_Map; // 0x88(0x50)(None)
	TArray<enum class EUDS_WeatherTypes>         CallFunc_Map_Keys_Keys;                            // 0xD8(0x10)(ReferenceParm)
	enum class EUDS_WeatherTypes                 CallFunc_Array_Get_Item;                           // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               CallFunc_Map_Values_Values;                        // 0xF0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Find_Value;                           // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_1;                         // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUDS_Season                       Temp_byte_Variable;                                // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EUDS_WeatherTypes, double>   K2Node_Select_Default;                             // 0x140(0x50)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather
struct URandom_Weather_Variation_C_Increment_Random_Weather_Params
{
public:
	double                                       Eased_Lerp_Alpha;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Ease_ReturnValue;                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EUDS_WeatherTypes>         K2Node_MakeArray_Array;                            // 0x60(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_3;                       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_4;                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_5;                       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize
struct URandom_Weather_Variation_C_Initialize_Params
{
public:
	class AUltra_Dynamic_Weather_C*              UDW;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EUDS_WeatherTypes, double>   Summer_Probabilities;                              // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<enum class EUDS_WeatherTypes, double>   Autumn_Probabilities;                              // 0x58(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<enum class EUDS_WeatherTypes, double>   Winter_Probabilities;                              // 0xA8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<enum class EUDS_WeatherTypes, double>   Spring_Probabilities;                              // 0xF8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Start_with_Random_Type;                            // 0x148(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick
struct URandom_Weather_Variation_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16C (0x16C - 0x0)
// Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation
struct URandom_Weather_Variation_C_ExecuteUbergraph_Random_Weather_Variation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AUltra_Dynamic_Weather_C*              K2Node_CustomEvent_UDW;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EUDS_WeatherTypes, double>   K2Node_CustomEvent_Summer_Probabilities;           // 0x10(0x50)(None)
	TMap<enum class EUDS_WeatherTypes, double>   K2Node_CustomEvent_Autumn_Probabilities;           // 0x60(0x50)(None)
	TMap<enum class EUDS_WeatherTypes, double>   K2Node_CustomEvent_Winter_Probabilities;           // 0xB0(0x50)(None)
	TMap<enum class EUDS_WeatherTypes, double>   K2Node_CustomEvent_Spring_Probabilities;           // 0x100(0x50)(None)
	bool                                         K2Node_CustomEvent_Start_with_Random_Type;         // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Weather_C*              CallFunc_GetActorOfClass_ReturnValue;              // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


