#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VideoSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VideoSettings.BP_VideoSettings_C.ExecuteUbergraph_BP_VideoSettings
// 0x0010 (0x0010 - 0x0000)
struct BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42CE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings) == 0x000008, "Wrong alignment on BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings");
static_assert(sizeof(BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings) == 0x000010, "Wrong size on BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings");
static_assert(offsetof(BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings, EntryPoint) == 0x000000, "Member 'BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'BP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");

// Function BP_VideoSettings.BP_VideoSettings_C.Get_ResolutionSelector_bIsEnabled_0
// 0x0018 (0x0018 - 0x0000)
struct BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42CF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   CallFunc_GetFullscreenMode_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0) == 0x000008, "Wrong alignment on BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0");
static_assert(sizeof(BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0) == 0x000018, "Wrong size on BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0");
static_assert(offsetof(BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0, ReturnValue) == 0x000000, "Member 'BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0, CallFunc_GetFullscreenMode_ReturnValue) == 0x000010, "Member 'BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0::CallFunc_GetFullscreenMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BP_VideoSettings_C_Get_ResolutionSelector_bIsEnabled_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_VideoSettings.BP_VideoSettings_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_VideoSettings_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VideoSettings_C_PreConstruct) == 0x000001, "Wrong alignment on BP_VideoSettings_C_PreConstruct");
static_assert(sizeof(BP_VideoSettings_C_PreConstruct) == 0x000001, "Wrong size on BP_VideoSettings_C_PreConstruct");
static_assert(offsetof(BP_VideoSettings_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_VideoSettings_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

