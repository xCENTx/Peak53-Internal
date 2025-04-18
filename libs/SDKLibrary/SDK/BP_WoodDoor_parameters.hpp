#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WoodDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_WorldAction_structs.hpp"
#include "E_WorldActions_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WoodDoor.BP_WoodDoor_C.CheckLocks
// 0x0060 (0x0060 - 0x0000)
struct BP_WoodDoor_C_CheckLocks final
{
public:
	bool                                          AllowOpen;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5468[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0010(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5469[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MasterLock_C*                       K2Node_DynamicCast_AsBP_Master_Lock;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546A[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanOpen_AllowOpen;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546B[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayerFindKeyItem_Found;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WoodDoor_C_CheckLocks) == 0x000008, "Wrong alignment on BP_WoodDoor_C_CheckLocks");
static_assert(sizeof(BP_WoodDoor_C_CheckLocks) == 0x000060, "Wrong size on BP_WoodDoor_C_CheckLocks");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, AllowOpen) == 0x000000, "Member 'BP_WoodDoor_C_CheckLocks::AllowOpen' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_WoodDoor_C_CheckLocks::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_WoodDoor_C_CheckLocks::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_GetAttachedActors_OutActors) == 0x000010, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, K2Node_DynamicCast_AsBP_Master_Lock) == 0x000030, "Member 'BP_WoodDoor_C_CheckLocks::K2Node_DynamicCast_AsBP_Master_Lock' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_WoodDoor_C_CheckLocks::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_CanOpen_AllowOpen) == 0x000050, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_CanOpen_AllowOpen' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_Conv_StringToName_ReturnValue) == 0x000054, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_CheckLocks, CallFunc_PlayerFindKeyItem_Found) == 0x00005C, "Member 'BP_WoodDoor_C_CheckLocks::CallFunc_PlayerFindKeyItem_Found' has a wrong offset!");

// Function BP_WoodDoor.BP_WoodDoor_C.ExecuteUbergraph_BP_WoodDoor
// 0x0380 (0x0380 - 0x0000)
struct BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546F[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0058(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5470[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue_1;                      // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x01E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_BreakVector_X;                            // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x02E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5471[0x5];                                     // 0x02E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x02E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_CheckLocks_AllowOpen;                     // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5472[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_FilterArray_FilteredArray;                // 0x0300(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0315(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0316(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5473[0x1];                                     // 0x0317(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5474[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_GetComponentsByTag_ReturnValue;           // 0x0338(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0348(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5475[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_GetComponentsByTag_ReturnValue_1;         // 0x0358(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item_1;                         // 0x0368(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5476[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor) == 0x000008, "Wrong alignment on BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor");
static_assert(sizeof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor) == 0x000380, "Wrong size on BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, EntryPoint) == 0x000000, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_bool_Variable) == 0x000008, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000020, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000030, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_RLerp_ReturnValue) == 0x000038, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_int_Loop_Counter_Variable_1) == 0x000050, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000058, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Add_IntInt_ReturnValue_1) == 0x000140, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000148, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_SelectFloat_ReturnValue) == 0x000160, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000168, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_MakeRotator_ReturnValue) == 0x000180, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000198, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_RLerp_ReturnValue_1) == 0x0001B0, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_RLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x0001C8, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x0001E0, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_BreakVector_X) == 0x0002C8, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_BreakVector_Y) == 0x0002D0, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_BreakVector_Z) == 0x0002D8, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0002E0, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_bool_Has_Been_Initd_Variable) == 0x0002E1, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_bool_IsClosed_Variable) == 0x0002E2, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_GetAttachedActors_OutActors) == 0x0002E8, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_CheckLocks_AllowOpen) == 0x0002F8, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_CheckLocks_AllowOpen' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_FilterArray_FilteredArray) == 0x000300, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_FilterArray_FilteredArray' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Array_Length_ReturnValue) == 0x000310, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_bool_Variable_1) == 0x000314, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Greater_IntInt_ReturnValue) == 0x000315, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, Temp_bool_Variable_2) == 0x000316, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000318, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, K2Node_Select_Default) == 0x000330, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_GetComponentsByTag_ReturnValue) == 0x000338, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Array_Get_Item) == 0x000348, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Array_Length_ReturnValue_1) == 0x000350, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Less_IntInt_ReturnValue) == 0x000354, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_GetComponentsByTag_ReturnValue_1) == 0x000358, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_GetComponentsByTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Array_Get_Item_1) == 0x000368, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Array_Length_ReturnValue_2) == 0x000370, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_Less_IntInt_ReturnValue_1) == 0x000374, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000378, "Member 'BP_WoodDoor_C_ExecuteUbergraph_BP_WoodDoor::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_WoodDoor.BP_WoodDoor_C.SGK AllowInteraction
// 0x0002 (0x0002 - 0x0000)
struct BP_WoodDoor_C_SGK_AllowInteraction final
{
public:
	bool                                          AllowInteraction;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_AllowInteraction_AllowInteraction;    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WoodDoor_C_SGK_AllowInteraction) == 0x000001, "Wrong alignment on BP_WoodDoor_C_SGK_AllowInteraction");
static_assert(sizeof(BP_WoodDoor_C_SGK_AllowInteraction) == 0x000002, "Wrong size on BP_WoodDoor_C_SGK_AllowInteraction");
static_assert(offsetof(BP_WoodDoor_C_SGK_AllowInteraction, AllowInteraction) == 0x000000, "Member 'BP_WoodDoor_C_SGK_AllowInteraction::AllowInteraction' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_AllowInteraction, CallFunc_SGK_AllowInteraction_AllowInteraction) == 0x000001, "Member 'BP_WoodDoor_C_SGK_AllowInteraction::CallFunc_SGK_AllowInteraction_AllowInteraction' has a wrong offset!");

// Function BP_WoodDoor.BP_WoodDoor_C.SGK Interact
// 0x0010 (0x0010 - 0x0000)
struct BP_WoodDoor_C_SGK_Interact final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_WorldActions                                Action;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WoodDoor_C_SGK_Interact) == 0x000008, "Wrong alignment on BP_WoodDoor_C_SGK_Interact");
static_assert(sizeof(BP_WoodDoor_C_SGK_Interact) == 0x000010, "Wrong size on BP_WoodDoor_C_SGK_Interact");
static_assert(offsetof(BP_WoodDoor_C_SGK_Interact, PlayerInventory) == 0x000000, "Member 'BP_WoodDoor_C_SGK_Interact::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_Interact, Action) == 0x000008, "Member 'BP_WoodDoor_C_SGK_Interact::Action' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_Interact, ReturnValue) == 0x000009, "Member 'BP_WoodDoor_C_SGK_Interact::ReturnValue' has a wrong offset!");

// Function BP_WoodDoor.BP_WoodDoor_C.SGK InteractName
// 0x0030 (0x0030 - 0x0000)
struct BP_WoodDoor_C_SGK_InteractName final
{
public:
	class FText                                   InteractName;                                      // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_SGK_InteractName_InteractName;            // 0x0018(0x0018)()
};
static_assert(alignof(BP_WoodDoor_C_SGK_InteractName) == 0x000008, "Wrong alignment on BP_WoodDoor_C_SGK_InteractName");
static_assert(sizeof(BP_WoodDoor_C_SGK_InteractName) == 0x000030, "Wrong size on BP_WoodDoor_C_SGK_InteractName");
static_assert(offsetof(BP_WoodDoor_C_SGK_InteractName, InteractName) == 0x000000, "Member 'BP_WoodDoor_C_SGK_InteractName::InteractName' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_InteractName, CallFunc_SGK_InteractName_InteractName) == 0x000018, "Member 'BP_WoodDoor_C_SGK_InteractName::CallFunc_SGK_InteractName_InteractName' has a wrong offset!");

// Function BP_WoodDoor.BP_WoodDoor_C.SGK PossibleActions
// 0x00B8 (0x00B8 - 0x0000)
struct BP_WoodDoor_C_SGK_PossibleActions final
{
public:
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ActionsFound;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5477[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_WorldAction>                 PossibleActions;                                   // 0x0010(0x0010)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5478[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0040(0x0018)()
	bool                                          CallFunc_SGK_PossibleActions_ActionsFound;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5479[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_WorldAction>                 CallFunc_SGK_PossibleActions_PossibleActions;      // 0x0060(0x0010)(ReferenceParm)
	class FText                                   K2Node_Select_Default;                             // 0x0070(0x0018)()
	struct FS_WorldAction                         K2Node_MakeStruct_S_WorldAction;                   // 0x0088(0x0020)(HasGetValueTypeHash)
	TArray<struct FS_WorldAction>                 K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_WoodDoor_C_SGK_PossibleActions) == 0x000008, "Wrong alignment on BP_WoodDoor_C_SGK_PossibleActions");
static_assert(sizeof(BP_WoodDoor_C_SGK_PossibleActions) == 0x0000B8, "Wrong size on BP_WoodDoor_C_SGK_PossibleActions");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, PlayerInventory) == 0x000000, "Member 'BP_WoodDoor_C_SGK_PossibleActions::PlayerInventory' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, ActionsFound) == 0x000008, "Member 'BP_WoodDoor_C_SGK_PossibleActions::ActionsFound' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, PossibleActions) == 0x000010, "Member 'BP_WoodDoor_C_SGK_PossibleActions::PossibleActions' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, Temp_bool_Variable) == 0x000020, "Member 'BP_WoodDoor_C_SGK_PossibleActions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, Temp_text_Variable) == 0x000028, "Member 'BP_WoodDoor_C_SGK_PossibleActions::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, Temp_text_Variable_1) == 0x000040, "Member 'BP_WoodDoor_C_SGK_PossibleActions::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, CallFunc_SGK_PossibleActions_ActionsFound) == 0x000058, "Member 'BP_WoodDoor_C_SGK_PossibleActions::CallFunc_SGK_PossibleActions_ActionsFound' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, CallFunc_SGK_PossibleActions_PossibleActions) == 0x000060, "Member 'BP_WoodDoor_C_SGK_PossibleActions::CallFunc_SGK_PossibleActions_PossibleActions' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, K2Node_Select_Default) == 0x000070, "Member 'BP_WoodDoor_C_SGK_PossibleActions::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, K2Node_MakeStruct_S_WorldAction) == 0x000088, "Member 'BP_WoodDoor_C_SGK_PossibleActions::K2Node_MakeStruct_S_WorldAction' has a wrong offset!");
static_assert(offsetof(BP_WoodDoor_C_SGK_PossibleActions, K2Node_MakeArray_Array) == 0x0000A8, "Member 'BP_WoodDoor_C_SGK_PossibleActions::K2Node_MakeArray_Array' has a wrong offset!");

}

