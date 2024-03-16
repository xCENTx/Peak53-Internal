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

// 0x18 (0x18 - 0x0)
// Function BP_QuickSlotKey.BP_QuickSlotKey_C.SetNumber
struct UBP_QuickSlotKey_C_SetNumber_Params
{
public:
	struct FKey                                  SlotNumber;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_QuickSlotKey.BP_QuickSlotKey_C.PreConstruct
struct UBP_QuickSlotKey_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_QuickSlotKey.BP_QuickSlotKey_C.ExecuteUbergraph_BP_QuickSlotKey
struct UBP_QuickSlotKey_C_ExecuteUbergraph_BP_QuickSlotKey_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3874[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_CustomEvent_SlotNumber;                     // 0x28(0x18)(HasGetValueTypeHash)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue;           // 0x40(0x18)(None)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


