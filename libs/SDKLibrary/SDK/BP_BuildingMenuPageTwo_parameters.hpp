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

// 0x249 (0x249 - 0x0)
// Function BP_BuildingMenuPageTwo.BP_BuildingMenuPageTwo_C.PopulateCostInformation
struct UBP_BuildingMenuPageTwo_C_PopulateCostInformation_Params
{
public:
	struct FS_CraftingCost                       ArrayElementL;                                     // 0x0(0x14)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BuildPartDetails                   BuildPartDetailsL;                                 // 0x18(0xE1)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3C49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CraftingCost                       CallFunc_Array_Get_Item;                           // 0x110(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildMenuCostPanel_C*              CallFunc_Create_ReturnValue;                       // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_BuildPartDetails_BuildPartFound;      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BuildPartDetails                   CallFunc_SGK_BuildPartDetails_BuildPartDetails;    // 0x160(0xE1)(HasGetValueTypeHash)
	uint8                                        Pad_3C4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D8 (0x1D8 - 0x0)
// Function BP_BuildingMenuPageTwo.BP_BuildingMenuPageTwo_C.SetCentreInformation
struct UBP_BuildingMenuPageTwo_C_SetCentreInformation_Params
{
public:
	struct FS_BuildPartDetails                   BuildPartDetailsL;                                 // 0x0(0xE1)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3C50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_BuildPartDetails_BuildPartFound;      // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C51[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BuildPartDetails                   CallFunc_SGK_BuildPartDetails_BuildPartDetails;    // 0xF0(0xE1)(HasGetValueTypeHash)
	uint8                                        Pad_3C52[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5 (0x5 - 0x0)
// Function BP_BuildingMenuPageTwo.BP_BuildingMenuPageTwo_C.ExecuteUbergraph_BP_BuildingMenuPageTwo
struct UBP_BuildingMenuPageTwo_C_ExecuteUbergraph_BP_BuildingMenuPageTwo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


