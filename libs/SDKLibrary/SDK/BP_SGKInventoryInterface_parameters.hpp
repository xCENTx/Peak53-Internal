#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateCharacterYaw
struct IBP_SGKInventoryInterface_C_SGK_UpdateCharacterYaw_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK AllowStartingItems
struct IBP_SGKInventoryInterface_C_SGK_AllowStartingItems_Params
{
public:
	bool                                         AllowStartingItems;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SelfItem
struct IBP_SGKInventoryInterface_C_SGK_SelfItem_Params
{
public:
	struct FS_InvItem                            SelfItem;                                          // 0x0(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK ItemSound
struct IBP_SGKInventoryInterface_C_SGK_ItemSound_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Sounds                          SoundType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAdditionalChecks
struct IBP_SGKInventoryInterface_C_SGK_RemoveAdditionalChecks_Params
{
public:
	struct FS_InvSlot                            InvSlot;                                           // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4ABA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK UpdateSpecialSlot
struct IBP_SGKInventoryInterface_C_SGK_UpdateSpecialSlot_Params
{
public:
	struct FS_InvSlot                            InvSlot;                                           // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4ABB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK SpawnOverflowItems
struct IBP_SGKInventoryInterface_C_SGK_SpawnOverflowItems_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK RemoveAttachment
struct IBP_SGKInventoryInterface_C_SGK_RemoveAttachment_Params
{
public:
	enum class E_AttachmentType                  Attachment;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKInventoryInterface.BP_SGKInventoryInterface_C.SGK LoadWeaponAttachments
struct IBP_SGKInventoryInterface_C_SGK_LoadWeaponAttachments_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


