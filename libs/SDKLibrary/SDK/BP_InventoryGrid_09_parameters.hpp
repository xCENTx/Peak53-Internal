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

// 0x28 (0x28 - 0x0)
// Function BP_InventoryGrid_09.BP_InventoryGrid_09_C.ExecuteUbergraph_BP_InventoryGrid_09
struct UBP_InventoryGrid_09_C_ExecuteUbergraph_BP_InventoryGrid_09_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_InventoryCell_C*>           K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UBP_InventoryItemIcon_C*>       K2Node_MakeArray_Array_1;                          // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


