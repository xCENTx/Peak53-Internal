#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MetalWindowShutters

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_WorldAction_structs.hpp"
#include "E_WorldActions_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.CheckLocks
// 0x0060 (0x0060 - 0x0000)
struct BP_MetalWindowShutters_C_CheckLocks final
{
public:
	bool                                          AllowOpen;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0010(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C7[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MasterLock_C*                       K2Node_DynamicCast_AsBP_Master_Lock;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C8[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanOpen_AllowOpen;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C9[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayerFindKeyItem_Found;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MetalWindowShutters_C_CheckLocks) == 0x000008, "Wrong alignment on BP_MetalWindowShutters_C_CheckLocks");
static_assert(sizeof(BP_MetalWindowShutters_C_CheckLocks) == 0x000060, "Wrong size on BP_MetalWindowShutters_C_CheckLocks");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, AllowOpen) == 0x000000, "Member 'BP_MetalWindowShutters_C_CheckLocks::AllowOpen' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_MetalWindowShutters_C_CheckLocks::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_MetalWindowShutters_C_CheckLocks::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_GetAttachedActors_OutActors) == 0x000010, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, K2Node_DynamicCast_AsBP_Master_Lock) == 0x000030, "Member 'BP_MetalWindowShutters_C_CheckLocks::K2Node_DynamicCast_AsBP_Master_Lock' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_MetalWindowShutters_C_CheckLocks::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_CanOpen_AllowOpen) == 0x000050, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_CanOpen_AllowOpen' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_Conv_StringToName_ReturnValue) == 0x000054, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_CheckLocks, CallFunc_PlayerFindKeyItem_Found) == 0x00005C, "Member 'BP_MetalWindowShutters_C_CheckLocks::CallFunc_PlayerFindKeyItem_Found' has a wrong offset!");

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.ExecuteUbergraph_BP_MetalWindowShutters
// 0x0258 (0x0258 - 0x0000)
struct BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0138(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UBP_PlayerInventory_C*                  K2Node_Event_PlayerInventory;                      // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_FromSaveGame;                         // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckLocks_AllowOpen;                     // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CB[0x5];                                     // 0x022B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0230(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_FilterArray_FilteredArray;                // 0x0240(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0256(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters) == 0x000008, "Wrong alignment on BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters");
static_assert(sizeof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters) == 0x000258, "Wrong size on BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, EntryPoint) == 0x000000, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, Temp_bool_Variable) == 0x000004, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, Temp_bool_Has_Been_Initd_Variable) == 0x000006, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_IsValid_ReturnValue) == 0x000007, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000008, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000018, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_MakeRotator_ReturnValue) == 0x000020, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_MakeRotator_ReturnValue_1) == 0x000038, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000050, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000138, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, K2Node_Event_PlayerInventory) == 0x000220, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::K2Node_Event_PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, K2Node_Event_FromSaveGame) == 0x000228, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::K2Node_Event_FromSaveGame' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_CheckLocks_AllowOpen) == 0x000229, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_CheckLocks_AllowOpen' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, Temp_bool_Variable_1) == 0x00022A, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_GetAttachedActors_OutActors) == 0x000230, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_FilterArray_FilteredArray) == 0x000240, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_FilterArray_FilteredArray' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_Array_Length_ReturnValue) == 0x000250, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, Temp_bool_Variable_2) == 0x000254, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, CallFunc_Greater_IntInt_ReturnValue) == 0x000255, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters, K2Node_Select_Default) == 0x000256, "Member 'BP_MetalWindowShutters_C_ExecuteUbergraph_BP_MetalWindowShutters::K2Node_Select_Default' has a wrong offset!");

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK AllowInteraction
// 0x0001 (0x0001 - 0x0000)
struct BP_MetalWindowShutters_C_SGK_AllowInteraction final
{
public:
	bool                                          AllowInteraction;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MetalWindowShutters_C_SGK_AllowInteraction) == 0x000001, "Wrong alignment on BP_MetalWindowShutters_C_SGK_AllowInteraction");
static_assert(sizeof(BP_MetalWindowShutters_C_SGK_AllowInteraction) == 0x000001, "Wrong size on BP_MetalWindowShutters_C_SGK_AllowInteraction");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_AllowInteraction, AllowInteraction) == 0x000000, "Member 'BP_MetalWindowShutters_C_SGK_AllowInteraction::AllowInteraction' has a wrong offset!");

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK BuildPartPlaced
// 0x0010 (0x0010 - 0x0000)
struct BP_MetalWindowShutters_C_SGK_BuildPartPlaced final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          FromSaveGame;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MetalWindowShutters_C_SGK_BuildPartPlaced) == 0x000008, "Wrong alignment on BP_MetalWindowShutters_C_SGK_BuildPartPlaced");
static_assert(sizeof(BP_MetalWindowShutters_C_SGK_BuildPartPlaced) == 0x000010, "Wrong size on BP_MetalWindowShutters_C_SGK_BuildPartPlaced");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_BuildPartPlaced, PlayerInventory) == 0x000000, "Member 'BP_MetalWindowShutters_C_SGK_BuildPartPlaced::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_BuildPartPlaced, FromSaveGame) == 0x000008, "Member 'BP_MetalWindowShutters_C_SGK_BuildPartPlaced::FromSaveGame' has a wrong offset!");

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK Interact
// 0x0010 (0x0010 - 0x0000)
struct BP_MetalWindowShutters_C_SGK_Interact final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_WorldActions                                Action;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MetalWindowShutters_C_SGK_Interact) == 0x000008, "Wrong alignment on BP_MetalWindowShutters_C_SGK_Interact");
static_assert(sizeof(BP_MetalWindowShutters_C_SGK_Interact) == 0x000010, "Wrong size on BP_MetalWindowShutters_C_SGK_Interact");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_Interact, PlayerInventory) == 0x000000, "Member 'BP_MetalWindowShutters_C_SGK_Interact::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_Interact, Action) == 0x000008, "Member 'BP_MetalWindowShutters_C_SGK_Interact::Action' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_Interact, ReturnValue) == 0x000009, "Member 'BP_MetalWindowShutters_C_SGK_Interact::ReturnValue' has a wrong offset!");

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK InteractName
// 0x0018 (0x0018 - 0x0000)
struct BP_MetalWindowShutters_C_SGK_InteractName final
{
public:
	class FText                                   InteractName;                                      // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_MetalWindowShutters_C_SGK_InteractName) == 0x000008, "Wrong alignment on BP_MetalWindowShutters_C_SGK_InteractName");
static_assert(sizeof(BP_MetalWindowShutters_C_SGK_InteractName) == 0x000018, "Wrong size on BP_MetalWindowShutters_C_SGK_InteractName");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_InteractName, InteractName) == 0x000000, "Member 'BP_MetalWindowShutters_C_SGK_InteractName::InteractName' has a wrong offset!");

// Function BP_MetalWindowShutters.BP_MetalWindowShutters_C.SGK PossibleActions
// 0x0050 (0x0050 - 0x0000)
struct BP_MetalWindowShutters_C_SGK_PossibleActions final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ActionsFound;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CC[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_WorldAction>                 PossibleActions;                                   // 0x0010(0x0010)(Parm, OutParm)
	struct FS_WorldAction                         K2Node_MakeStruct_S_WorldAction;                   // 0x0020(0x0020)(HasGetValueTypeHash)
	TArray<struct FS_WorldAction>                 K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_MetalWindowShutters_C_SGK_PossibleActions) == 0x000008, "Wrong alignment on BP_MetalWindowShutters_C_SGK_PossibleActions");
static_assert(sizeof(BP_MetalWindowShutters_C_SGK_PossibleActions) == 0x000050, "Wrong size on BP_MetalWindowShutters_C_SGK_PossibleActions");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_PossibleActions, PlayerInventory) == 0x000000, "Member 'BP_MetalWindowShutters_C_SGK_PossibleActions::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_PossibleActions, ActionsFound) == 0x000008, "Member 'BP_MetalWindowShutters_C_SGK_PossibleActions::ActionsFound' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_PossibleActions, PossibleActions) == 0x000010, "Member 'BP_MetalWindowShutters_C_SGK_PossibleActions::PossibleActions' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_PossibleActions, K2Node_MakeStruct_S_WorldAction) == 0x000020, "Member 'BP_MetalWindowShutters_C_SGK_PossibleActions::K2Node_MakeStruct_S_WorldAction' has a wrong offset!");
static_assert(offsetof(BP_MetalWindowShutters_C_SGK_PossibleActions, K2Node_MakeArray_Array) == 0x000040, "Member 'BP_MetalWindowShutters_C_SGK_PossibleActions::K2Node_MakeArray_Array' has a wrong offset!");

}

