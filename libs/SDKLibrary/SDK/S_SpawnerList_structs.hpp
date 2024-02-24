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

// 0x70 (0x70 - 0x0)
// UserDefinedStruct S_SpawnerList.S_SpawnerList
struct FS_SpawnerList
{
public:
	struct FDataTableRowHandle                   Item_2_9755B88A40573D1DF345B39A2BA7A1FD;           // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor)
	int32                                        MinAmount_7_E0C00EEF445AC811C4357F8DB6EAFBB5;      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxAmount_8_496453F845B74B53B963B6B85EB28EC4;      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnChance_11_DE4087044B1140F840E6088D5F5606D7;   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class E_RecipeCategory>            SpawnerType_15_0974DE3C474B7D993D162EA4DACAF4F9;   // 0x20(0x50)(Edit, BlueprintVisible)
};

}


