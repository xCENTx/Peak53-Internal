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

// 0x938 (0x938 - 0x0)
// Function BP_RepairCost.BP_RepairCost_C.Initialize
struct UBP_RepairCost_C_Initialize_Params
{
public:
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_261[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x8C0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x910(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x920(0x18)(None)
};

}
}


