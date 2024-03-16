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
// UserDefinedStruct S_WeaponSlotSave.S_WeaponSlotSave
struct FS_WeaponSlotSave
{
public:
	enum class E_WeaponSlots                     WeaponType_2_304A9CBF4AEC4F80C435098424B87C8D;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemID_5_26E2E3C148A7F41359EEF39B502F49AB;         // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount_12_6D811F684B8A8A3593A220B2C51DC0A0;        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QuickBindIndex_18_EBE3B07146DB6F046E9EE18A1233410F; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UseAmount_21_414731B445E33D733ADBF39FF5EA3EB8;     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Durability_13_41620A5C45BE036DED93D4BA75C81238;    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvIndex_14_BE2EEDBB4242A37457C550AE325EFD41;      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DecayTime_24_66E9F05347B0671DC04AFE9852A36BFF;     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


