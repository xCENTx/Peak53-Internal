#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_InvItem

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_InvItem.S_InvItem
// 0x0030 (0x0030 - 0x0000)
struct FS_InvItem final
{
public:
	class FName                                   ID_2_84C2CB8945979246059C568DCD463423;             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount_5_62DB2267439500D86A52E0B2266494D2;         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A32[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MasterInventory_C*                  MasterInventory_8_17FFB7D341FAF2689C1BABA12E3BA9F5; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         QuickBindIndex_16_7A1D8FC742EA4742106A33A874F67F34; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rotated_18_66B00C8648A7E3BEB56C4282929D015D;       // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A33[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UseAmount_21_73BF7A6447A384E099761EA48F7DB753;     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InUse_23_430FC3BE41900570FBD4AA881817E89F;         // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A34[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Durability_30_E9AF67CA4E71F502EF4B18A440FA0385;    // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DecayTime_33_E35E189B4E5F129EEECA28AE05E99A93;     // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_InvItem) == 0x000008, "Wrong alignment on FS_InvItem");
static_assert(sizeof(FS_InvItem) == 0x000030, "Wrong size on FS_InvItem");
static_assert(offsetof(FS_InvItem, ID_2_84C2CB8945979246059C568DCD463423) == 0x000000, "Member 'FS_InvItem::ID_2_84C2CB8945979246059C568DCD463423' has a wrong offset!");
static_assert(offsetof(FS_InvItem, Amount_5_62DB2267439500D86A52E0B2266494D2) == 0x000008, "Member 'FS_InvItem::Amount_5_62DB2267439500D86A52E0B2266494D2' has a wrong offset!");
static_assert(offsetof(FS_InvItem, MasterInventory_8_17FFB7D341FAF2689C1BABA12E3BA9F5) == 0x000010, "Member 'FS_InvItem::MasterInventory_8_17FFB7D341FAF2689C1BABA12E3BA9F5' has a wrong offset!");
static_assert(offsetof(FS_InvItem, QuickBindIndex_16_7A1D8FC742EA4742106A33A874F67F34) == 0x000018, "Member 'FS_InvItem::QuickBindIndex_16_7A1D8FC742EA4742106A33A874F67F34' has a wrong offset!");
static_assert(offsetof(FS_InvItem, Rotated_18_66B00C8648A7E3BEB56C4282929D015D) == 0x00001C, "Member 'FS_InvItem::Rotated_18_66B00C8648A7E3BEB56C4282929D015D' has a wrong offset!");
static_assert(offsetof(FS_InvItem, UseAmount_21_73BF7A6447A384E099761EA48F7DB753) == 0x000020, "Member 'FS_InvItem::UseAmount_21_73BF7A6447A384E099761EA48F7DB753' has a wrong offset!");
static_assert(offsetof(FS_InvItem, InUse_23_430FC3BE41900570FBD4AA881817E89F) == 0x000024, "Member 'FS_InvItem::InUse_23_430FC3BE41900570FBD4AA881817E89F' has a wrong offset!");
static_assert(offsetof(FS_InvItem, Durability_30_E9AF67CA4E71F502EF4B18A440FA0385) == 0x000028, "Member 'FS_InvItem::Durability_30_E9AF67CA4E71F502EF4B18A440FA0385' has a wrong offset!");
static_assert(offsetof(FS_InvItem, DecayTime_33_E35E189B4E5F129EEECA28AE05E99A93) == 0x00002C, "Member 'FS_InvItem::DecayTime_33_E35E189B4E5F129EEECA28AE05E99A93' has a wrong offset!");

}

