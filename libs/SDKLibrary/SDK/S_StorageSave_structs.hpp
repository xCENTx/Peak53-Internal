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

// 0x8C (0x8C - 0x0)
// UserDefinedStruct S_StorageSave.S_StorageSave
struct FS_StorageSave
{
public:
	struct FTransform                            Transform_2_F6E57D90457287E8CA61C7B0A4F0FC8D;      // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemCount_8_A7235E3648E8A13D8EACAE98FDA7439A;      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Weight_20_58948A1040967D2B29D8A4A240AA4C79;        // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSaveSlot>                Inventory_21_2A4A93F346C9C45611D2AABF0F17C7C7;     // 0x68(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_OtherInvSaves>              OtherInventories_16_763679614801C8070E0103A5EA38323C; // 0x78(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Index_25_1FDE054841C095061B30BCB4D5448AF6;         // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


