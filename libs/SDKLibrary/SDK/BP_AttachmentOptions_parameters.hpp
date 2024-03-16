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

// 0x248 (0x248 - 0x0)
// Function BP_AttachmentOptions.BP_AttachmentOptions_C.OnMouseButtonDown
struct UBP_AttachmentOptions_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x190(0xB8)(None)
};

// 0x103 (0x103 - 0x0)
// Function BP_AttachmentOptions.BP_AttachmentOptions_C.ExecuteUbergraph_BP_AttachmentOptions
struct UBP_AttachmentOptions_C_ExecuteUbergraph_BP_AttachmentOptions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_140B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlotID                   K2Node_MakeStruct_S_AttachmentSlotID;              // 0x8(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_140C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0x20(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlotID                   K2Node_MakeStruct_S_AttachmentSlotID_1;            // 0x68(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemContainerDetails_ItemFound;       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_140D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ContainerDetails                   CallFunc_SGK_ItemContainerDetails_ItemContainerDetails; // 0x80(0x70)(ContainsInstancedReference, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


