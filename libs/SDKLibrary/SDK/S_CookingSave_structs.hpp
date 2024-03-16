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
// UserDefinedStruct S_CookingSave.S_CookingSave
struct FS_CookingSave
{
public:
	struct FS_StorageSave                        NormalStorageData_2_33E97B3748C726E0BBFF9A94BC0723D5; // 0x0(0x8C)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2606[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CookingSlot>                CookingSlotsData_8_65D8C0804FC47BB37B52B6B9F56E71B3; // 0x90(0x10)(Edit, BlueprintVisible)
	bool                                         SwitchedOn_9_58A9839048DD741C3490228E118095DA;     // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2607[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DummySlots_13_BE704C65405FEC78E451769C81EA9CAF;    // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


