#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterRespawnPoint

#include "Basic.hpp"

#include "S_WorldAction_structs.hpp"
#include "S_LevelSaveData_structs.hpp"
#include "E_WorldActions_structs.hpp"
#include "S_NotificationDetails_structs.hpp"


namespace SDK::Params
{

// Function BP_MasterRespawnPoint.BP_MasterRespawnPoint_C.ExecuteUbergraph_BP_MasterRespawnPoint
// 0x0158 (0x0158 - 0x0000)
struct BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521D[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521E[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerInventory_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKSaveGame_C*                      K2Node_Event_SaveGame;                             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Index;                                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectLevelSaveData_SaveFound;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521F[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_LevelSaveData                       CallFunc_SelectLevelSaveData_LevelSaveData;        // 0x0068(0x00D0)(ContainsInstancedReference, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item_1;                         // 0x0138(0x0018)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint) == 0x000008, "Wrong alignment on BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint");
static_assert(sizeof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint) == 0x000158, "Wrong size on BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, EntryPoint) == 0x000000, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_IsValid_ReturnValue) == 0x00002D, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000038, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, K2Node_Event_SaveGame) == 0x000058, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::K2Node_Event_SaveGame' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, K2Node_Event_Index) == 0x000060, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::K2Node_Event_Index' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000064, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_SelectLevelSaveData_SaveFound) == 0x000065, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_SelectLevelSaveData_SaveFound' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_SelectLevelSaveData_LevelSaveData) == 0x000068, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_SelectLevelSaveData_LevelSaveData' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_Array_Get_Item_1) == 0x000138, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000150, "Member 'BP_MasterRespawnPoint_C_ExecuteUbergraph_BP_MasterRespawnPoint::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BP_MasterRespawnPoint.BP_MasterRespawnPoint_C.SaveExtraData
// 0x0288 (0x0288 - 0x0000)
struct BP_MasterRespawnPoint_C_SaveExtraData final
{
public:
	class UBP_SGKSaveGame_C*                      SaveGame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_LevelSaveData                       LevelSaveData;                                     // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         ExtraDataIndex;                                    // 0x00D8(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5220[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_LevelSaveData                       NewLevelSaveData;                                  // 0x00E0(0x00D0)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_LevelSaveData                       CallFunc_PrepareRespawnNameData_SaveData;          // 0x01B0(0x00D0)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_PrepareRespawnNameData_SaveIndex;         // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRespawnPoint_C_SaveExtraData) == 0x000008, "Wrong alignment on BP_MasterRespawnPoint_C_SaveExtraData");
static_assert(sizeof(BP_MasterRespawnPoint_C_SaveExtraData) == 0x000288, "Wrong size on BP_MasterRespawnPoint_C_SaveExtraData");
static_assert(offsetof(BP_MasterRespawnPoint_C_SaveExtraData, SaveGame) == 0x000000, "Member 'BP_MasterRespawnPoint_C_SaveExtraData::SaveGame' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SaveExtraData, LevelSaveData) == 0x000008, "Member 'BP_MasterRespawnPoint_C_SaveExtraData::LevelSaveData' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SaveExtraData, ExtraDataIndex) == 0x0000D8, "Member 'BP_MasterRespawnPoint_C_SaveExtraData::ExtraDataIndex' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SaveExtraData, NewLevelSaveData) == 0x0000E0, "Member 'BP_MasterRespawnPoint_C_SaveExtraData::NewLevelSaveData' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SaveExtraData, CallFunc_PrepareRespawnNameData_SaveData) == 0x0001B0, "Member 'BP_MasterRespawnPoint_C_SaveExtraData::CallFunc_PrepareRespawnNameData_SaveData' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SaveExtraData, CallFunc_PrepareRespawnNameData_SaveIndex) == 0x000280, "Member 'BP_MasterRespawnPoint_C_SaveExtraData::CallFunc_PrepareRespawnNameData_SaveIndex' has a wrong offset!");

// Function BP_MasterRespawnPoint.BP_MasterRespawnPoint_C.SGK AllowInteraction
// 0x0001 (0x0001 - 0x0000)
struct BP_MasterRespawnPoint_C_SGK_AllowInteraction final
{
public:
	bool                                          AllowInteraction;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRespawnPoint_C_SGK_AllowInteraction) == 0x000001, "Wrong alignment on BP_MasterRespawnPoint_C_SGK_AllowInteraction");
static_assert(sizeof(BP_MasterRespawnPoint_C_SGK_AllowInteraction) == 0x000001, "Wrong size on BP_MasterRespawnPoint_C_SGK_AllowInteraction");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_AllowInteraction, AllowInteraction) == 0x000000, "Member 'BP_MasterRespawnPoint_C_SGK_AllowInteraction::AllowInteraction' has a wrong offset!");

// Function BP_MasterRespawnPoint.BP_MasterRespawnPoint_C.SGK Interact
// 0x0048 (0x0048 - 0x0000)
struct BP_MasterRespawnPoint_C_SGK_Interact final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_WorldActions                                Action;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5221[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_NotificationDetails                 K2Node_MakeStruct_S_NotificationDetails;           // 0x0010(0x0038)(HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRespawnPoint_C_SGK_Interact) == 0x000008, "Wrong alignment on BP_MasterRespawnPoint_C_SGK_Interact");
static_assert(sizeof(BP_MasterRespawnPoint_C_SGK_Interact) == 0x000048, "Wrong size on BP_MasterRespawnPoint_C_SGK_Interact");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_Interact, PlayerInventory) == 0x000000, "Member 'BP_MasterRespawnPoint_C_SGK_Interact::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_Interact, Action) == 0x000008, "Member 'BP_MasterRespawnPoint_C_SGK_Interact::Action' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_Interact, ReturnValue) == 0x000009, "Member 'BP_MasterRespawnPoint_C_SGK_Interact::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_Interact, K2Node_MakeStruct_S_NotificationDetails) == 0x000010, "Member 'BP_MasterRespawnPoint_C_SGK_Interact::K2Node_MakeStruct_S_NotificationDetails' has a wrong offset!");

// Function BP_MasterRespawnPoint.BP_MasterRespawnPoint_C.SGK LoadExtraData
// 0x0010 (0x0010 - 0x0000)
struct BP_MasterRespawnPoint_C_SGK_LoadExtraData final
{
public:
	class UBP_SGKSaveGame_C*                      SaveGame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRespawnPoint_C_SGK_LoadExtraData) == 0x000008, "Wrong alignment on BP_MasterRespawnPoint_C_SGK_LoadExtraData");
static_assert(sizeof(BP_MasterRespawnPoint_C_SGK_LoadExtraData) == 0x000010, "Wrong size on BP_MasterRespawnPoint_C_SGK_LoadExtraData");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_LoadExtraData, SaveGame) == 0x000000, "Member 'BP_MasterRespawnPoint_C_SGK_LoadExtraData::SaveGame' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_LoadExtraData, Param_Index) == 0x000008, "Member 'BP_MasterRespawnPoint_C_SGK_LoadExtraData::Param_Index' has a wrong offset!");

// Function BP_MasterRespawnPoint.BP_MasterRespawnPoint_C.SGK PossibleActions
// 0x0050 (0x0050 - 0x0000)
struct BP_MasterRespawnPoint_C_SGK_PossibleActions final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ActionsFound;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5222[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_WorldAction>                 PossibleActions;                                   // 0x0010(0x0010)(Parm, OutParm)
	struct FS_WorldAction                         K2Node_MakeStruct_S_WorldAction;                   // 0x0020(0x0020)(HasGetValueTypeHash)
	TArray<struct FS_WorldAction>                 K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_MasterRespawnPoint_C_SGK_PossibleActions) == 0x000008, "Wrong alignment on BP_MasterRespawnPoint_C_SGK_PossibleActions");
static_assert(sizeof(BP_MasterRespawnPoint_C_SGK_PossibleActions) == 0x000050, "Wrong size on BP_MasterRespawnPoint_C_SGK_PossibleActions");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_PossibleActions, PlayerInventory) == 0x000000, "Member 'BP_MasterRespawnPoint_C_SGK_PossibleActions::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_PossibleActions, ActionsFound) == 0x000008, "Member 'BP_MasterRespawnPoint_C_SGK_PossibleActions::ActionsFound' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_PossibleActions, PossibleActions) == 0x000010, "Member 'BP_MasterRespawnPoint_C_SGK_PossibleActions::PossibleActions' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_PossibleActions, K2Node_MakeStruct_S_WorldAction) == 0x000020, "Member 'BP_MasterRespawnPoint_C_SGK_PossibleActions::K2Node_MakeStruct_S_WorldAction' has a wrong offset!");
static_assert(offsetof(BP_MasterRespawnPoint_C_SGK_PossibleActions, K2Node_MakeArray_Array) == 0x000040, "Member 'BP_MasterRespawnPoint_C_SGK_PossibleActions::K2Node_MakeArray_Array' has a wrong offset!");

}

