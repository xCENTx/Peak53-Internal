#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x24 - 0x0)
// UserDefinedStruct RandomWeatherVariation_State.RandomWeatherVariation_State
struct FRandomWeatherVariation_State
{
public:
	enum class EUDS_WeatherTypes                 CurrentRandomWeatherType_2_BBFDBC5E46C25F1DFB0037A44AB6D268; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78;   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


