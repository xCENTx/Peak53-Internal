#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlotPole

#include "Basic.hpp"

#include "S_WorldAction_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_WorldActions_structs.hpp"
#include "S_NotificationDetails_structs.hpp"


namespace SDK::Params
{

// Function BP_PlotPole.BP_PlotPole_C.ExecuteUbergraph_BP_PlotPole
// 0x0120 (0x0120 - 0x0000)
struct BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B6B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerInventory_C*                  K2Node_Event_PlayerInventory;                      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_FromSaveGame;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B6C[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0028(0x0010)(ConstParm, ReferenceParm)
	uint8                                         Pad_3B6D[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B6E[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_ComponentOverlapActors_OutActors;         // 0x00A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_ComponentOverlapActors_ReturnValue;       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B6F[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B70[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface;     // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B71[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1;   // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_ClearOwners_ReturnValue;              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B72[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MasterBuildPart_C*                  K2Node_DynamicCast_AsBP_Master_Build_Part;         // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B73[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_AddMultipleOwners_ReturnValue;        // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole) == 0x000010, "Wrong alignment on BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole");
static_assert(sizeof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole) == 0x000120, "Wrong size on BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, EntryPoint) == 0x000000, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_Event_PlayerInventory) == 0x000008, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_Event_PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_Event_FromSaveGame) == 0x000010, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_Event_FromSaveGame' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_MakeArray_Array_1) == 0x000028, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000040, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, Temp_int_Loop_Counter_Variable) == 0x0000A0, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_ComponentOverlapActors_OutActors) == 0x0000A8, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_ComponentOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_ComponentOverlapActors_ReturnValue) == 0x0000B8, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_ComponentOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_DynamicCast_AsBP_SGKBuilding_Interface) == 0x0000D0, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_DynamicCast_AsBP_SGKBuilding_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_Less_IntInt_ReturnValue) == 0x0000E1, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1) == 0x0000E8, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_SGK_ClearOwners_ReturnValue) == 0x0000F9, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_SGK_ClearOwners_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_DynamicCast_AsBP_Master_Build_Part) == 0x000100, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_DynamicCast_AsBP_Master_Build_Part' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, K2Node_DynamicCast_bSuccess_2) == 0x000108, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_Add_IntInt_ReturnValue) == 0x00010C, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000110, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole, CallFunc_SGK_AddMultipleOwners_ReturnValue) == 0x000111, "Member 'BP_PlotPole_C_ExecuteUbergraph_BP_PlotPole::CallFunc_SGK_AddMultipleOwners_ReturnValue' has a wrong offset!");

// Function BP_PlotPole.BP_PlotPole_C.HasMaxOwners
// 0x000C (0x000C - 0x0000)
struct BP_PlotPole_C_HasMaxOwners final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B74[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlotPole_C_HasMaxOwners) == 0x000004, "Wrong alignment on BP_PlotPole_C_HasMaxOwners");
static_assert(sizeof(BP_PlotPole_C_HasMaxOwners) == 0x00000C, "Wrong size on BP_PlotPole_C_HasMaxOwners");
static_assert(offsetof(BP_PlotPole_C_HasMaxOwners, ReturnValue) == 0x000000, "Member 'BP_PlotPole_C_HasMaxOwners::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_HasMaxOwners, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_PlotPole_C_HasMaxOwners::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_HasMaxOwners, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'BP_PlotPole_C_HasMaxOwners::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_HasMaxOwners, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'BP_PlotPole_C_HasMaxOwners::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_PlotPole.BP_PlotPole_C.SGK AllowInteraction
// 0x0001 (0x0001 - 0x0000)
struct BP_PlotPole_C_SGK_AllowInteraction final
{
public:
	bool                                          AllowInteraction;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlotPole_C_SGK_AllowInteraction) == 0x000001, "Wrong alignment on BP_PlotPole_C_SGK_AllowInteraction");
static_assert(sizeof(BP_PlotPole_C_SGK_AllowInteraction) == 0x000001, "Wrong size on BP_PlotPole_C_SGK_AllowInteraction");
static_assert(offsetof(BP_PlotPole_C_SGK_AllowInteraction, AllowInteraction) == 0x000000, "Member 'BP_PlotPole_C_SGK_AllowInteraction::AllowInteraction' has a wrong offset!");

// Function BP_PlotPole.BP_PlotPole_C.SGK BuildPartPlaced
// 0x0010 (0x0010 - 0x0000)
struct BP_PlotPole_C_SGK_BuildPartPlaced final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          FromSaveGame;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlotPole_C_SGK_BuildPartPlaced) == 0x000008, "Wrong alignment on BP_PlotPole_C_SGK_BuildPartPlaced");
static_assert(sizeof(BP_PlotPole_C_SGK_BuildPartPlaced) == 0x000010, "Wrong size on BP_PlotPole_C_SGK_BuildPartPlaced");
static_assert(offsetof(BP_PlotPole_C_SGK_BuildPartPlaced, PlayerInventory) == 0x000000, "Member 'BP_PlotPole_C_SGK_BuildPartPlaced::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_BuildPartPlaced, FromSaveGame) == 0x000008, "Member 'BP_PlotPole_C_SGK_BuildPartPlaced::FromSaveGame' has a wrong offset!");

// Function BP_PlotPole.BP_PlotPole_C.SGK Interact
// 0x0138 (0x0138 - 0x0000)
struct BP_PlotPole_C_SGK_Interact final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_WorldActions                                Action;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMaxOwners_ReturnValue;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B75[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_NotificationDetails                 K2Node_MakeStruct_S_NotificationDetails;           // 0x0010(0x0038)(HasGetValueTypeHash)
	struct FS_NotificationDetails                 K2Node_MakeStruct_S_NotificationDetails_1;         // 0x0048(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B76[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_NotificationDetails                 K2Node_MakeStruct_S_NotificationDetails_2;         // 0x0088(0x0038)(HasGetValueTypeHash)
	struct FS_NotificationDetails                 K2Node_MakeStruct_S_NotificationDetails_3;         // 0x00C0(0x0038)(HasGetValueTypeHash)
	struct FS_NotificationDetails                 K2Node_MakeStruct_S_NotificationDetails_4;         // 0x00F8(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_ClearOwners_ReturnValue;              // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_AddOwner_ReturnValue;                 // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlotPole_C_SGK_Interact) == 0x000008, "Wrong alignment on BP_PlotPole_C_SGK_Interact");
static_assert(sizeof(BP_PlotPole_C_SGK_Interact) == 0x000138, "Wrong size on BP_PlotPole_C_SGK_Interact");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, PlayerInventory) == 0x000000, "Member 'BP_PlotPole_C_SGK_Interact::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, Action) == 0x000008, "Member 'BP_PlotPole_C_SGK_Interact::Action' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, ReturnValue) == 0x000009, "Member 'BP_PlotPole_C_SGK_Interact::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_HasMaxOwners_ReturnValue) == 0x00000A, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_HasMaxOwners_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_IsValid_ReturnValue) == 0x00000B, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, K2Node_MakeStruct_S_NotificationDetails) == 0x000010, "Member 'BP_PlotPole_C_SGK_Interact::K2Node_MakeStruct_S_NotificationDetails' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, K2Node_MakeStruct_S_NotificationDetails_1) == 0x000048, "Member 'BP_PlotPole_C_SGK_Interact::K2Node_MakeStruct_S_NotificationDetails_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_Array_RemoveItem_ReturnValue) == 0x000080, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000081, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, K2Node_MakeStruct_S_NotificationDetails_2) == 0x000088, "Member 'BP_PlotPole_C_SGK_Interact::K2Node_MakeStruct_S_NotificationDetails_2' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, K2Node_MakeStruct_S_NotificationDetails_3) == 0x0000C0, "Member 'BP_PlotPole_C_SGK_Interact::K2Node_MakeStruct_S_NotificationDetails_3' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, K2Node_MakeStruct_S_NotificationDetails_4) == 0x0000F8, "Member 'BP_PlotPole_C_SGK_Interact::K2Node_MakeStruct_S_NotificationDetails_4' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000130, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000131, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_SGK_ClearOwners_ReturnValue) == 0x000132, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_SGK_ClearOwners_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_Interact, CallFunc_SGK_AddOwner_ReturnValue) == 0x000133, "Member 'BP_PlotPole_C_SGK_Interact::CallFunc_SGK_AddOwner_ReturnValue' has a wrong offset!");

// Function BP_PlotPole.BP_PlotPole_C.SGK PossibleActions
// 0x00A8 (0x00A8 - 0x0000)
struct BP_PlotPole_C_SGK_PossibleActions final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ActionsFound;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B77[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_WorldAction>                 PossibleActions;                                   // 0x0010(0x0010)(Parm, OutParm)
	struct FS_WorldAction                         K2Node_MakeStruct_S_WorldAction;                   // 0x0020(0x0020)(HasGetValueTypeHash)
	struct FS_WorldAction                         K2Node_MakeStruct_S_WorldAction_1;                 // 0x0040(0x0020)(HasGetValueTypeHash)
	struct FS_WorldAction                         K2Node_MakeStruct_S_WorldAction_2;                 // 0x0060(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_SGK_PossibleActions_ActionsFound;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B78[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_WorldAction>                 CallFunc_SGK_PossibleActions_PossibleActions;      // 0x0088(0x0010)(ReferenceParm)
	TArray<struct FS_WorldAction>                 K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_PlotPole_C_SGK_PossibleActions) == 0x000008, "Wrong alignment on BP_PlotPole_C_SGK_PossibleActions");
static_assert(sizeof(BP_PlotPole_C_SGK_PossibleActions) == 0x0000A8, "Wrong size on BP_PlotPole_C_SGK_PossibleActions");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, PlayerInventory) == 0x000000, "Member 'BP_PlotPole_C_SGK_PossibleActions::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, ActionsFound) == 0x000008, "Member 'BP_PlotPole_C_SGK_PossibleActions::ActionsFound' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, PossibleActions) == 0x000010, "Member 'BP_PlotPole_C_SGK_PossibleActions::PossibleActions' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, K2Node_MakeStruct_S_WorldAction) == 0x000020, "Member 'BP_PlotPole_C_SGK_PossibleActions::K2Node_MakeStruct_S_WorldAction' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, K2Node_MakeStruct_S_WorldAction_1) == 0x000040, "Member 'BP_PlotPole_C_SGK_PossibleActions::K2Node_MakeStruct_S_WorldAction_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, K2Node_MakeStruct_S_WorldAction_2) == 0x000060, "Member 'BP_PlotPole_C_SGK_PossibleActions::K2Node_MakeStruct_S_WorldAction_2' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, CallFunc_SGK_PossibleActions_ActionsFound) == 0x000080, "Member 'BP_PlotPole_C_SGK_PossibleActions::CallFunc_SGK_PossibleActions_ActionsFound' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, CallFunc_SGK_PossibleActions_PossibleActions) == 0x000088, "Member 'BP_PlotPole_C_SGK_PossibleActions::CallFunc_SGK_PossibleActions_PossibleActions' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_SGK_PossibleActions, K2Node_MakeArray_Array) == 0x000098, "Member 'BP_PlotPole_C_SGK_PossibleActions::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_PlotPole.BP_PlotPole_C.UpdateBuildPartsOwners
// 0x0100 (0x0100 - 0x0000)
struct BP_PlotPole_C_UpdateBuildPartsOwners final
{
public:
	bool                                          Clear;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B79[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0018(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_ComponentOverlapActors_OutActors;         // 0x0090(0x0010)(ReferenceParm)
	bool                                          CallFunc_ComponentOverlapActors_ReturnValue;       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B7A[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B7B[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface;     // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_AddMultipleOwners_ReturnValue;        // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B7C[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1;   // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_ClearOwners_ReturnValue;              // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B7D[0x5];                                     // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MasterBuildPart_C*                  K2Node_DynamicCast_AsBP_Master_Build_Part;         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlotPole_C_UpdateBuildPartsOwners) == 0x000010, "Wrong alignment on BP_PlotPole_C_UpdateBuildPartsOwners");
static_assert(sizeof(BP_PlotPole_C_UpdateBuildPartsOwners) == 0x000100, "Wrong size on BP_PlotPole_C_UpdateBuildPartsOwners");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, Clear) == 0x000000, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::Clear' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_MakeArray_Array_1) == 0x000018, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_ComponentOverlapActors_OutActors) == 0x000090, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_ComponentOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_ComponentOverlapActors_ReturnValue) == 0x0000A0, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_ComponentOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_DynamicCast_AsBP_SGKBuilding_Interface) == 0x0000B8, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_DynamicCast_AsBP_SGKBuilding_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_SGK_AddMultipleOwners_ReturnValue) == 0x0000C9, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_SGK_AddMultipleOwners_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1) == 0x0000D0, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_SGK_ClearOwners_ReturnValue) == 0x0000E1, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_SGK_ClearOwners_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000E2, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_DynamicCast_AsBP_Master_Build_Part) == 0x0000E8, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_DynamicCast_AsBP_Master_Build_Part' has a wrong offset!");
static_assert(offsetof(BP_PlotPole_C_UpdateBuildPartsOwners, K2Node_DynamicCast_bSuccess_2) == 0x0000F0, "Member 'BP_PlotPole_C_UpdateBuildPartsOwners::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}

