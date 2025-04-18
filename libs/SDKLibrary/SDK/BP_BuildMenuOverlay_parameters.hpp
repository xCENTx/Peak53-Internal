#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuildMenuOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_BuildPartDetails_structs.hpp"


namespace SDK::Params
{

// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.ExecuteUbergraph_BP_BuildMenuOverlay
// 0x0120 (0x0120 - 0x0000)
struct BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4763[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerBuildingComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_BuildPartDetails_BuildPartFound;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4764[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_BuildPartDetails                    CallFunc_SGK_BuildPartDetails_BuildPartDetails;    // 0x0038(0x00E8)(HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay) == 0x000008, "Wrong alignment on BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay");
static_assert(sizeof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay) == 0x000120, "Wrong size on BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, EntryPoint) == 0x000000, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, CallFunc_SGK_BuildPartDetails_BuildPartFound) == 0x000031, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::CallFunc_SGK_BuildPartDetails_BuildPartFound' has a wrong offset!");
static_assert(offsetof(BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay, CallFunc_SGK_BuildPartDetails_BuildPartDetails) == 0x000038, "Member 'BP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay::CallFunc_SGK_BuildPartDetails_BuildPartDetails' has a wrong offset!");

}

