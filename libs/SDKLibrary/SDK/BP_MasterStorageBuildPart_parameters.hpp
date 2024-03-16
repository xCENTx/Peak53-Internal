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

// 0x6C (0x6C - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.LockCheck
struct ABP_MasterStorageBuildPart_C_LockCheck_Params
{
public:
	class UBP_PlayerInventory_C*                 Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowOpen;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ADA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_GridComponent_C*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_GridComponent_C*                   CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AttachedActorCheck_ActorFound;            // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ADF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_AttachedActorCheck_FoundActor;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterLock_C*                      K2Node_DynamicCast_AsBP_Master_Lock;               // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanOpen_AllowOpen;                        // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayerFindKeyItem_Found;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.SGK EndInteraction
struct ABP_MasterStorageBuildPart_C_SGK_EndInteraction_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.SGK InteractName
struct ABP_MasterStorageBuildPart_C_SGK_InteractName_Params
{
public:
	class FText                                  InteractName;                                      // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_SGK_InteractName_InteractName;            // 0x18(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.SGK PossibleActions
struct ABP_MasterStorageBuildPart_C_SGK_PossibleActions_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ActionsFound;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_WorldAction>                PossibleActions;                                   // 0x10(0x10)(Parm, OutParm)
	struct FS_WorldAction                        K2Node_MakeStruct_S_WorldAction;                   // 0x20(0x20)(HasGetValueTypeHash)
	TArray<struct FS_WorldAction>                K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.SGK AllowInteraction
struct ABP_MasterStorageBuildPart_C_SGK_AllowInteraction_Params
{
public:
	bool                                         AllowInteraction;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AllowInteraction_AllowInteraction;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.SGK Interact
struct ABP_MasterStorageBuildPart_C_SGK_Interact_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldActions                    Action;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LockCheck_AllowOpen;                      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x288 (0x288 - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.SaveExtraData
struct ABP_MasterStorageBuildPart_C_SaveExtraData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_LevelSaveData                      LevelSaveData;                                     // 0x8(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        ExtraDataIndex;                                    // 0xD8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      NewLevelSaveData;                                  // 0xE0(0xD0)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_PrepareStorageSaveData_ExtraDataIndex;    // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      CallFunc_PrepareStorageSaveData_NewLevelSaveData;  // 0x1B8(0xD0)(ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.SGK LoadExtraData
struct ABP_MasterStorageBuildPart_C_SGK_LoadExtraData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E3 (0x1E3 - 0x0)
// Function BP_MasterStorageBuildPart.BP_MasterStorageBuildPart_C.ExecuteUbergraph_BP_MasterStorageBuildPart
struct ABP_MasterStorageBuildPart_C_ExecuteUbergraph_BP_MasterStorageBuildPart_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x8(0x10)(ConstParm, ReferenceParm)
	class UBP_SGKSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x38(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_SelectLevelSaveData_SaveFound;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      CallFunc_SelectLevelSaveData_LevelSaveData;        // 0x50(0xD0)(ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_SphereOverlapActors_OutActors;            // 0x138(0x10)(ReferenceParm)
	bool                                         CallFunc_SphereOverlapActors_ReturnValue;          // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_StorageSave                        CallFunc_Array_Get_Item;                           // 0x150(0x8C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4B18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


