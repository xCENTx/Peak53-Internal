#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitMarker

#include "Basic.hpp"


namespace SDK::Params
{

// Function HitMarker.HitMarker_C.ExecuteUbergraph_HitMarker
// 0x0010 (0x0010 - 0x0000)
struct HitMarker_C_ExecuteUbergraph_HitMarker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3835[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HitMarker_C_ExecuteUbergraph_HitMarker) == 0x000008, "Wrong alignment on HitMarker_C_ExecuteUbergraph_HitMarker");
static_assert(sizeof(HitMarker_C_ExecuteUbergraph_HitMarker) == 0x000010, "Wrong size on HitMarker_C_ExecuteUbergraph_HitMarker");
static_assert(offsetof(HitMarker_C_ExecuteUbergraph_HitMarker, EntryPoint) == 0x000000, "Member 'HitMarker_C_ExecuteUbergraph_HitMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(HitMarker_C_ExecuteUbergraph_HitMarker, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'HitMarker_C_ExecuteUbergraph_HitMarker::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

