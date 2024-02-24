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

// 0x3C (0x3C - 0x0)
// UserDefinedStruct S_OtherInvSaves.S_OtherInvSaves
struct FS_OtherInvSaves
{
public:
	int32                                        Index_2_39CD1C0F4603CE11EC153998A75A6566;          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSaveSlot>                Inventory_7_7766F73341404F28636081A6E71E7F86;      // 0x8(0x10)(Edit, BlueprintVisible)
	float                                        Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD;        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemCount_13_4CB843EB4E38213CFD68E28014510145;     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_AttachmentSaveSlot>         Attachments_17_A4B1897143F77BD866FAA8A2AF5089A2;   // 0x20(0x10)(Edit, BlueprintVisible)
	enum class E_FireModes                       FireMode_20_1ED6FB204E2276C97E75ED8B4FA7A0E5;      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Code_25_E2C5355F4F59F6BFACBDF78D7A464417;          // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


