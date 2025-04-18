#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OverlayOverride_NotifyState

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OverlayOverride_NotifyState.OverlayOverride_NotifyState_C.GetNotifyName
// 0x0030 (0x0030 - 0x0000)
struct OverlayOverride_NotifyState_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayOverride_NotifyState_C_GetNotifyName) == 0x000008, "Wrong alignment on OverlayOverride_NotifyState_C_GetNotifyName");
static_assert(sizeof(OverlayOverride_NotifyState_C_GetNotifyName) == 0x000030, "Wrong size on OverlayOverride_NotifyState_C_GetNotifyName");
static_assert(offsetof(OverlayOverride_NotifyState_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'OverlayOverride_NotifyState_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_GetNotifyName, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'OverlayOverride_NotifyState_C_GetNotifyName::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'OverlayOverride_NotifyState_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function OverlayOverride_NotifyState.OverlayOverride_NotifyState_C.Received_NotifyBegin
// 0x0068 (0x0068 - 0x0000)
struct OverlayOverride_NotifyState_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_356B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_356C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Animation_BPI_C>  K2Node_DynamicCast_AsALS_Animation_BPI;            // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayOverride_NotifyState_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on OverlayOverride_NotifyState_C_Received_NotifyBegin");
static_assert(sizeof(OverlayOverride_NotifyState_C_Received_NotifyBegin) == 0x000068, "Wrong size on OverlayOverride_NotifyState_C_Received_NotifyBegin");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, CallFunc_GetAnimInstance_ReturnValue) == 0x000048, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, K2Node_DynamicCast_AsALS_Animation_BPI) == 0x000050, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::K2Node_DynamicCast_AsALS_Animation_BPI' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'OverlayOverride_NotifyState_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function OverlayOverride_NotifyState.OverlayOverride_NotifyState_C.Received_NotifyEnd
// 0x0060 (0x0060 - 0x0000)
struct OverlayOverride_NotifyState_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_356D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Animation_BPI_C>  K2Node_DynamicCast_AsALS_Animation_BPI;            // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayOverride_NotifyState_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on OverlayOverride_NotifyState_C_Received_NotifyEnd");
static_assert(sizeof(OverlayOverride_NotifyState_C_Received_NotifyEnd) == 0x000060, "Wrong size on OverlayOverride_NotifyState_C_Received_NotifyEnd");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'OverlayOverride_NotifyState_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'OverlayOverride_NotifyState_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'OverlayOverride_NotifyState_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'OverlayOverride_NotifyState_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyEnd, CallFunc_GetAnimInstance_ReturnValue) == 0x000040, "Member 'OverlayOverride_NotifyState_C_Received_NotifyEnd::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyEnd, K2Node_DynamicCast_AsALS_Animation_BPI) == 0x000048, "Member 'OverlayOverride_NotifyState_C_Received_NotifyEnd::K2Node_DynamicCast_AsALS_Animation_BPI' has a wrong offset!");
static_assert(offsetof(OverlayOverride_NotifyState_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'OverlayOverride_NotifyState_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

