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

// 0x50 (0x50 - 0x0)
// UserDefinedStruct S_DurabilityDetails.S_DurabilityDetails
struct FS_DurabilityDetails
{
public:
	bool                                         UseDurability_1_13FF8AEC41F8FB8A7E973CA195D0CDF8;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDurability_4_2937EBF8401931EACB7C5C932B3CB4FC;  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyItemAt0Durability_8_0941EB874C13F33FB68492B0414CEB9F; // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanRepair_10_E3D078744EB73580CAD78DB9D29BF92B;     // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_RepairActors>               RepairActors_22_250F45ED4AB0016FAB159CB1D840F657;  // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_CraftingCost>               RepairCost_17_81F6B265407AA8BFAA7DC8B135B2B54C;    // 0x20(0x10)(Edit, BlueprintVisible)
	struct FS_DecayDetails                       DecayDetails_28_E55B8B1D423F7D487FFACDAB43C68F74;  // 0x30(0x20)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};

}


