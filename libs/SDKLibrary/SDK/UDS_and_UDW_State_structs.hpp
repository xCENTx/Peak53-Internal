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

// 0xD4 (0xD4 - 0x0)
// UserDefinedStruct UDS_and_UDW_State.UDS_and_UDW_State
struct FUDS_and_UDW_State
{
public:
	float                                        TimeofDay_2_2DF54613424D82C28D8AF38B5CCC017E;      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             SimulationDate_6_6AAFF3384452285DB969FABE6CC7502E; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalDaysElapsed_10_85A4D6E54B4BA738A5AAD08B278168AC; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UDS_CloudCoverage_14_5BE3DD95403439E0DC4FC7B950B72734; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoonPhase_16_00C2557E44B4CE73A824F2977842EF06;     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IncludesUDWState_19_4B877A784EE94D12717D3998B8494AC4; // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRandomWeatherVariation_State         UDWRandomWeatherState_27_74741D5149E4365461FC87BA73842B8C; // 0x20(0x24)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AWeather_Override_Volume_C*, struct FRandomWeatherVariation_State> WeatherOverrideVolumeStates_31_56B54B4D46756590EAD0B08CF93C14E3; // 0x48(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        TransitionState_35_8C2DC6CD4C7139677FD63AA06BA2C6F4; // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldWeatherIntensity_43_C55FBB284F0FA74378B1C39AC4A25456; // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldCloudCoverage_44_02CFC88541ECA075F65C67BAD5B8203D; // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldRainSnow_46_9681DBA0451D944F00450C8885948EAA;   // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldWindIntensity_48_8CA9E58B4FAD1966869DACA837B2A72D; // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChangeWeatherTimer_50_353A99B84ED03DA03DEB1389AF8AB999; // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewWeatherIntensity_52_3F32FA704604722459CF54A5BC2EC84E; // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewCloudCoverage_54_FC7C0B8947BC9984DDE756AA46ECA64B; // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewRainSnow_56_44526E4A4DF5431653EF048234773737;   // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewWindIntensity_58_57942B374CDD4F640995D8A100A0A0F7; // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65; // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291; // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timer_65_5497A6734CE6FEB9AD91B28233665806;         // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LerptoNewSettings_67_D4D699EB4BB843F0AE80E4BFC8CFA364; // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LerptoStaticSettings_69_384B646448CA6A50EA63CBA209165004; // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


