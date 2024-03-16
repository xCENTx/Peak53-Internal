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

// 0x10 (0x10 - 0x0)
// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK InvItemSlots
struct IBP_SGKGridInterface_C_SGK_InvItemSlots_Params
{
public:
	TArray<class UBP_InventoryItemIcon_C*>       ItemInvWidgets;                                    // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK ConstructGrid
struct IBP_SGKGridInterface_C_SGK_ConstructGrid_Params
{
public:
	class UBP_MasterInventory_C*                 GridInventory;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK CellSlots
struct IBP_SGKGridInterface_C_SGK_CellSlots_Params
{
public:
	TArray<class UBP_InventoryCell_C*>           Cells;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

}
}


