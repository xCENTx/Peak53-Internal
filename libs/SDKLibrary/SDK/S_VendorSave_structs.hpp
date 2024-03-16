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

// 0xA8 (0xA8 - 0x0)
// UserDefinedStruct S_VendorSave.S_VendorSave
struct FS_VendorSave
{
public:
	struct FS_StorageSave                        NormalStorageData_10_B4D0E4144E8441D90DA9BF800C6CE535; // 0x0(0x8C)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_22CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentRestockTime_7_E0221E3246F85F7AD9EB15A37A6C21F3; // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                VenderStock_3_AC51E78742E001885012F099400EBC53;    // 0x98(0x10)(Edit, BlueprintVisible)
};

}


