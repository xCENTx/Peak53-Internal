#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuGM

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MenuGM.BP_MenuGM_C.K2_OnLogout
// 0x0008 (0x0008 - 0x0000)
struct BP_MenuGM_C_K2_OnLogout final
{
public:
	class AController*                            ExitingController;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuGM_C_K2_OnLogout) == 0x000008, "Wrong alignment on BP_MenuGM_C_K2_OnLogout");
static_assert(sizeof(BP_MenuGM_C_K2_OnLogout) == 0x000008, "Wrong size on BP_MenuGM_C_K2_OnLogout");
static_assert(offsetof(BP_MenuGM_C_K2_OnLogout, ExitingController) == 0x000000, "Member 'BP_MenuGM_C_K2_OnLogout::ExitingController' has a wrong offset!");

// Function BP_MenuGM.BP_MenuGM_C.ExecuteUbergraph_BP_MenuGM
// 0x0010 (0x0010 - 0x0000)
struct BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_522C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_Event_ExitingController;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM) == 0x000008, "Wrong alignment on BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM");
static_assert(sizeof(BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM) == 0x000010, "Wrong size on BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM");
static_assert(offsetof(BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM, EntryPoint) == 0x000000, "Member 'BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM, K2Node_Event_ExitingController) == 0x000008, "Member 'BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM::K2Node_Event_ExitingController' has a wrong offset!");

}

