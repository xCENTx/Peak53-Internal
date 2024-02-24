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
// UserDefinedStruct S_ContainerDetails.S_ContainerDetails
struct FS_ContainerDetails
{
public:
	bool                                         CanContainItems_9_25B233D543AED7B2D8CF249BD72C953A; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ContainerName_12_EE9C9F0B4A29370B9E8EF09A188E8C15; // 0x8(0x18)(Edit, BlueprintVisible)
	int32                                        ContainerInventoryCells_13_269D7DB442A1056CD715DEA438F850A2; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ContainerColumns_14_F97E5A5744D6545EC3C5FD967C512BF1; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseWeight_16_3F94FD134C121CE317A6D2A0C2938171;     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWeight_20_5CDB778F4D6FE3E65C8DD1A7E8722133;     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_InventoryRestrictionType        ContainerRestrictionType_23_EC5805D64D1B1EF6093FA8B19DBF48C5; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           RestrictionItems_27_B3D5BDB6404ACC06A8D798BDB3047E0E; // 0x38(0x10)(Edit, BlueprintVisible)
	enum class E_ContainerType                   ContainerType_33_C2D0977F47C071D4354A4BB1817475AD; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowContainerWindow_39_9420D45D470E700EA550EF9030EE64B4; // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseItemCountLimit_38_585327964096457C6B3EF697DA170C6F; // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A88[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemCountLimit_42_1BB0344A44E3DB354AC3DB9A4917C186; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CustomGridLayout_68_16D7144B4546126174180297FA5ED745; // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor)
	TArray<struct FS_CraftingCost>               StartingItems_65_659DE77E404552EC2048FBB7A2C12C0C; // 0x60(0x10)(Edit, BlueprintVisible)
};

}


