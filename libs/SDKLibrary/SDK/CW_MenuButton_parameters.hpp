#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CW_MenuButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function CW_MenuButton.CW_MenuButton_C.ExecuteUbergraph_CW_MenuButton
// 0x0018 (0x0018 - 0x0000)
struct CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CCF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD0[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton) == 0x000008, "Wrong alignment on CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton");
static_assert(sizeof(CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton) == 0x000018, "Wrong size on CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton");
static_assert(offsetof(CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton, EntryPoint) == 0x000000, "Member 'CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton, K2Node_Event_IsDesignTime) == 0x000010, "Member 'CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton, CallFunc_Delay_Duration_ImplicitCast) == 0x000014, "Member 'CW_MenuButton_C_ExecuteUbergraph_CW_MenuButton::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function CW_MenuButton.CW_MenuButton_C.GetText
// 0x0018 (0x0018 - 0x0000)
struct CW_MenuButton_C_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(CW_MenuButton_C_GetText) == 0x000008, "Wrong alignment on CW_MenuButton_C_GetText");
static_assert(sizeof(CW_MenuButton_C_GetText) == 0x000018, "Wrong size on CW_MenuButton_C_GetText");
static_assert(offsetof(CW_MenuButton_C_GetText, ReturnValue) == 0x000000, "Member 'CW_MenuButton_C_GetText::ReturnValue' has a wrong offset!");

// Function CW_MenuButton.CW_MenuButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CW_MenuButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CW_MenuButton_C_PreConstruct) == 0x000001, "Wrong alignment on CW_MenuButton_C_PreConstruct");
static_assert(sizeof(CW_MenuButton_C_PreConstruct) == 0x000001, "Wrong size on CW_MenuButton_C_PreConstruct");
static_assert(offsetof(CW_MenuButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CW_MenuButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

