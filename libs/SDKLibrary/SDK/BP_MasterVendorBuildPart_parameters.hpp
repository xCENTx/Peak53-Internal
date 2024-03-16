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

// 0x11 (0x11 - 0x0)
// Function BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C.SGK EndInteraction
struct ABP_MasterVendorBuildPart_C_SGK_EndInteraction_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C.SGK PossibleActions
struct ABP_MasterVendorBuildPart_C_SGK_PossibleActions_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ActionsFound;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_WorldAction>                PossibleActions;                                   // 0x10(0x10)(Parm, OutParm)
	struct FS_WorldAction                        K2Node_MakeStruct_S_WorldAction;                   // 0x20(0x20)(HasGetValueTypeHash)
	TArray<struct FS_WorldAction>                K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C.SGK AllowInteraction
struct ABP_MasterVendorBuildPart_C_SGK_AllowInteraction_Params
{
public:
	bool                                         AllowInteraction;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C.SGK Interact
struct ABP_MasterVendorBuildPart_C_SGK_Interact_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldActions                    Action;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x288 (0x288 - 0x0)
// Function BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C.SaveExtraData
struct ABP_MasterVendorBuildPart_C_SaveExtraData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_LevelSaveData                      LevelSaveData;                                     // 0x8(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        ExtraDataIndex;                                    // 0xD8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      NewLevelSaveData;                                  // 0xE0(0xD0)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_PrepareVenderSaveData_ExtraDataIndex;     // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      CallFunc_PrepareVenderSaveData_NewLevelSaveData;   // 0x1B8(0xD0)(ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C.SGK LoadExtraData
struct ABP_MasterVendorBuildPart_C_SGK_LoadExtraData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C.ExecuteUbergraph_BP_MasterVendorBuildPart
struct ABP_MasterVendorBuildPart_C_ExecuteUbergraph_BP_MasterVendorBuildPart_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectLevelSaveData_SaveFound;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      CallFunc_SelectLevelSaveData_LevelSaveData;        // 0x30(0xD0)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A91[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_VendorSave                         CallFunc_Array_Get_Item;                           // 0x110(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4A93[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_CurrentRestockTime_ImplicitCast; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


