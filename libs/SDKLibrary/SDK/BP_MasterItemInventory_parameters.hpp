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

// 0x1 (0x1 - 0x0)
// Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK AllowStartingItems
struct UBP_MasterItemInventory_C_SGK_AllowStartingItems_Params
{
public:
	bool                                         AllowStartingItems;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK SelfItem
struct UBP_MasterItemInventory_C_SGK_SelfItem_Params
{
public:
	struct FS_InvItem                            SelfItem;                                          // 0x0(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x30(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1210 (0x1210 - 0x0)
// Function BP_MasterItemInventory.BP_MasterItemInventory_C.RetrieveItemContainerDetails
struct UBP_MasterItemInventory_C_RetrieveItemContainerDetails_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_466E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           Temp_struct_Variable;                              // 0x8(0x10)(ReferenceParm)
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x18(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem_1;                     // 0x48(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_466F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x80(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4670[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4671[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x910(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4672[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_InventoryGridDetails_FoundGrid;       // 0x1190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4673[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CustomGridLayoutData               CallFunc_SGK_InventoryGridDetails_InventoryGridData; // 0x1198(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetItemRangeClass_ReturnValue;        // 0x11B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4674[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_SGK_GetItemRangeClass_RangeWeapon;        // 0x11C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem_2;                     // 0x11C8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetItemRangeClass_ReturnValue_1;      // 0x11F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4675[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_SGK_GetItemRangeClass_RangeWeapon_1;      // 0x1200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4676[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x120C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_MasterItemInventory.BP_MasterItemInventory_C.ExecuteUbergraph_BP_MasterItemInventory
struct UBP_MasterItemInventory_C_ExecuteUbergraph_BP_MasterItemInventory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


