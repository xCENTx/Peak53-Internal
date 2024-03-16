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

// 0x44 (0x44 - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.AddCraftingQueueListing
struct UBP_CraftingQueue_C_AddCraftingQueueListing_Params
{
public:
	struct FS_CraftingQueue                      NewQueueListing;                                   // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingQueueListing_C*            NewQueueListingL;                                  // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingQueueListing_C*            CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.PauseCraftingListing
struct UBP_CraftingQueue_C_PauseCraftingListing_Params
{
public:
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.ResumeCraftingListing
struct UBP_CraftingQueue_C_ResumeCraftingListing_Params
{
public:
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x37 (0x37 - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.UpdateCraftingListing
struct UBP_CraftingQueue_C_UpdateCraftingListing_Params
{
public:
	struct FS_CraftingQueue                      QueueListing;                                      // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5400[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            ListingWidgetL;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindCraftingListing_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5401[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            CallFunc_FindCraftingListing_QueueListing;         // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.StartListingTimer
struct UBP_CraftingQueue_C_StartListingTimer_Params
{
public:
	class FName                                  CraftingRecipe;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindCraftingListing_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5402[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            CallFunc_FindCraftingListing_QueueListing;         // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.FindCraftingListing
struct UBP_CraftingQueue_C_FindCraftingListing_Params
{
public:
	class FName                                  CraftingRecipe;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            QueueListing;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValueL;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            ArraryWidgetL;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5412[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingQueueListing_C*            CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5413[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.PreConstruct
struct UBP_CraftingQueue_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_CraftingQueue.BP_CraftingQueue_C.ExecuteUbergraph_BP_CraftingQueue
struct UBP_CraftingQueue_C_ExecuteUbergraph_BP_CraftingQueue_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5419[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


