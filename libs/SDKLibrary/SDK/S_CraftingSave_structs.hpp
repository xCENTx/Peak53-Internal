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

// 0xA1 (0xA1 - 0x0)
// UserDefinedStruct S_CraftingSave.S_CraftingSave
struct FS_CraftingSave
{
public:
	struct FS_StorageSave                        NormalStorageSave_2_EF4DAFF24E393CB8C8D2E192B3B7C2E6; // 0x0(0x8C)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_200B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CraftingQueue>              CraftingQueueSave_7_1FBE2D994D2D2A7B18EE82AF9582D235; // 0x90(0x10)(Edit, BlueprintVisible)
	bool                                         SwitchedOn_11_347F052A4CE8C6D031FB5CAD379F5050;    // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


