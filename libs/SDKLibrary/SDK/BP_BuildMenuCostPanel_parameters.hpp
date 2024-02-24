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

// 0xA18 (0xA18 - 0x0)
// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.UpdateText
struct UBP_BuildMenuCostPanel_C_UpdateText_Params
{
public:
	struct FS_CraftingCost                       Cost;                                              // 0x0(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalAmountL;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x20(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_PlayerInventoryTotalItemAmount_TotalAmount; // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem_1;                     // 0x58(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BA[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xA0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_31BB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x920(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x970(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x980(0x18)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x9A0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x9F0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xA00(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.InitializeCostPanel
struct UBP_BuildMenuCostPanel_C_InitializeCostPanel_Params
{
public:
	struct FS_CraftingCost                       Cost;                                              // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.ExecuteUbergraph_BP_BuildMenuCostPanel
struct UBP_BuildMenuCostPanel_C_ExecuteUbergraph_BP_BuildMenuCostPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CraftingCost                       K2Node_CustomEvent_Cost;                           // 0x8(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


