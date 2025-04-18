#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MeleeInteract

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_MeleeInteract.WB_MeleeInteract_C.ExecuteUbergraph_WB_MeleeInteract
// 0x0010 (0x0010 - 0x0000)
struct WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_CustomEvent_PlayMode;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract) == 0x000008, "Wrong alignment on WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract");
static_assert(sizeof(WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract) == 0x000010, "Wrong size on WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract");
static_assert(offsetof(WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract, EntryPoint) == 0x000000, "Member 'WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract, K2Node_CustomEvent_PlayMode) == 0x000004, "Member 'WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract::K2Node_CustomEvent_PlayMode' has a wrong offset!");
static_assert(offsetof(WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WB_MeleeInteract_C_ExecuteUbergraph_WB_MeleeInteract::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WB_MeleeInteract.WB_MeleeInteract_C.PlayFade
// 0x0001 (0x0001 - 0x0000)
struct WB_MeleeInteract_C_PlayFade final
{
public:
	EUMGSequencePlayMode                          PlayMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MeleeInteract_C_PlayFade) == 0x000001, "Wrong alignment on WB_MeleeInteract_C_PlayFade");
static_assert(sizeof(WB_MeleeInteract_C_PlayFade) == 0x000001, "Wrong size on WB_MeleeInteract_C_PlayFade");
static_assert(offsetof(WB_MeleeInteract_C_PlayFade, PlayMode) == 0x000000, "Member 'WB_MeleeInteract_C_PlayFade::PlayMode' has a wrong offset!");

}

