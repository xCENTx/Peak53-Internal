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

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK Aimed
struct IBP_SGKHoldableInterface_C_SGK_Aimed_Params
{
public:
	bool                                         Aimed;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK NewHeld
struct IBP_SGKHoldableInterface_C_SGK_NewHeld_Params
{
public:
	bool                                         Held;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientToggleBuildMenu
struct IBP_SGKHoldableInterface_C_SGK_ClientToggleBuildMenu_Params
{
public:
	bool                                         Open;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK MeleeCollisionToggle
struct IBP_SGKHoldableInterface_C_SGK_MeleeCollisionToggle_Params
{
public:
	bool                                         TraceOn;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK AttachNewAttachment
struct IBP_SGKHoldableInterface_C_SGK_AttachNewAttachment_Params
{
public:
	class ABP_MasterAttachment_C*                Attachment;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            InvItem;                                           // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_AttachmentType                  AttachmentType;                                    // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientSecondaryAction
struct IBP_SGKHoldableInterface_C_SGK_ClientSecondaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ClientPrimaryAction
struct IBP_SGKHoldableInterface_C_SGK_ClientPrimaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK SpawnAttachment
struct IBP_SGKHoldableInterface_C_SGK_SpawnAttachment_Params
{
public:
	class UClass*                                Attachment;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableMesh
struct IBP_SGKHoldableInterface_C_SGK_HoldableMesh_Params
{
public:
	class UPrimitiveComponent*                   Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK HoldableSkeletalMesh
struct IBP_SGKHoldableInterface_C_SGK_HoldableSkeletalMesh_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerSecondaryAction
struct IBP_SGKHoldableInterface_C_SGK_ServerSecondaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKHoldableInterface.BP_SGKHoldableInterface_C.SGK ServerPrimaryAction
struct IBP_SGKHoldableInterface_C_SGK_ServerPrimaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


