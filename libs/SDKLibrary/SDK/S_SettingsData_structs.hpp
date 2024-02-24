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
// UserDefinedStruct S_SettingsData.S_SettingsData
struct FS_SettingsData
{
public:
	enum class E_SettingsName                    Settingname_2_0EE011EA47FB93F8A05A8CAF34F6FC1F;    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Settingcommand_5_93C91EE54F3C52562D84F3A83270C46C; // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                        DefaultPercent_10_D8EB8A2F4229055CB164709BF4416279; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SliderMinValue_23_9171D37944E26F9037547795DC12E3F1; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SliderMaxValue_20_B60910EA4B318936F87B5188A9821D7A; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


