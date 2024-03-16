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

// 0x6C (0x6C - 0x0)
// UserDefinedStruct S_SpawnSettings.S_SpawnSettings
struct FS_SpawnSettings
{
public:
	bool                                         SpawnRandomItems_1_7BC24B7B49B1A134516294A1A6EAFE0E; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnItemsOnStart_5_51A2E51144C38B3EA63A07B5A445C7A8; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnItemsOnTimer_6_A4671C864C8CEEF7ECB3F9A948DF7FA6; // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysSpawnItems_8_656737854ADCDB07E33E01BD064A772F; // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClearInventoryWhenItemsSpawn_10_70F4A26541CF4D86B681A58948E761F7; // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnTimerLength_28_DA96DE704502ECE258D0419F30DB4500; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinItemAmount_14_9729659B49D1AA39797FC58C782E6F76; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxItemAmount_15_C33B901A43BEA1E616CA978B8AE15CD0; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class E_RecipeCategory>            SpawnType_20_CEC2C79A4C241E6690F3A696B86F73B6;     // 0x18(0x50)(Edit, BlueprintVisible)
	int32                                        MaxAlwaysSpawnAttempts_25_443DDEE14EF5DF490E0DE9820D9D7808; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


