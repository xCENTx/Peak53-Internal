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

// 0x48 (0x48 - 0x0)
// UserDefinedStruct S_AttachmentSlot.S_AttachmentSlot
struct FS_AttachmentSlot
{
public:
	enum class E_AttachmentType                  AttachmentType_2_1A97EB4C4C01C54C04D1698250A9500A; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            Item_12_175764FB4DD83CDAB68A699FD00A7CCA;          // 0x8(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 WeaponInventory_14_E55BE7F9486AF39C3206BCAA5B9A9920; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterAttachment_C*                Attachment_10_331C9F194189001DD1E1998244F73427;    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
};

}


