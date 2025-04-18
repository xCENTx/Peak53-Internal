#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CompassIndicatorMaster

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "E_C_CalculateDistanceFrom_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_CompassIndicatorMaster.W_CompassIndicatorMaster_C.ExecuteUbergraph_W_CompassIndicatorMaster
// 0x00D0 (0x00D0 - 0x0000)
struct W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_dist;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_376D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_376E[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster) == 0x000008, "Wrong alignment on W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster");
static_assert(sizeof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster) == 0x0000D0, "Wrong size on W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, EntryPoint) == 0x000000, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, K2Node_CustomEvent_dist) == 0x000004, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::K2Node_CustomEvent_dist' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, K2Node_Event_IsDesignTime) == 0x000008, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_BreakVector2D_X) == 0x000010, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_BreakVector2D_Y) == 0x000018, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_MakeVector2D_ReturnValue) == 0x000020, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_MakeVector2D_ReturnValue_1) == 0x000088, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, K2Node_MakeArray_Array) == 0x000098, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x0000C4, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x0000C8, "Member 'W_CompassIndicatorMaster_C_ExecuteUbergraph_W_CompassIndicatorMaster::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

// Function W_CompassIndicatorMaster.W_CompassIndicatorMaster_C.GetPlayerNearestLocation
// 0x0090 (0x0090 - 0x0000)
struct W_CompassIndicatorMaster_C_GetPlayerNearestLocation final
{
public:
	E_C_CalculateDistanceFrom                     GetDistanceMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_376F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3770[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue_1;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3771[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation) == 0x000008, "Wrong alignment on W_CompassIndicatorMaster_C_GetPlayerNearestLocation");
static_assert(sizeof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation) == 0x000090, "Wrong size on W_CompassIndicatorMaster_C_GetPlayerNearestLocation");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, GetDistanceMode) == 0x000000, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::GetDistanceMode' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, ReturnValue) == 0x000008, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000020, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, CallFunc_GetCameraLocation_ReturnValue) == 0x000030, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x000048, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, CallFunc_GetCameraLocation_ReturnValue_1) == 0x000050, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::CallFunc_GetCameraLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, CallFunc_GetPlayerPawn_ReturnValue) == 0x000068, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CompassIndicatorMaster_C_GetPlayerNearestLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'W_CompassIndicatorMaster_C_GetPlayerNearestLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function W_CompassIndicatorMaster.W_CompassIndicatorMaster_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_CompassIndicatorMaster_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CompassIndicatorMaster_C_PreConstruct) == 0x000001, "Wrong alignment on W_CompassIndicatorMaster_C_PreConstruct");
static_assert(sizeof(W_CompassIndicatorMaster_C_PreConstruct) == 0x000001, "Wrong size on W_CompassIndicatorMaster_C_PreConstruct");
static_assert(offsetof(W_CompassIndicatorMaster_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_CompassIndicatorMaster_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_CompassIndicatorMaster.W_CompassIndicatorMaster_C.SetDistance
// 0x0004 (0x0004 - 0x0000)
struct W_CompassIndicatorMaster_C_SetDistance final
{
public:
	int32                                         Dist;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CompassIndicatorMaster_C_SetDistance) == 0x000004, "Wrong alignment on W_CompassIndicatorMaster_C_SetDistance");
static_assert(sizeof(W_CompassIndicatorMaster_C_SetDistance) == 0x000004, "Wrong size on W_CompassIndicatorMaster_C_SetDistance");
static_assert(offsetof(W_CompassIndicatorMaster_C_SetDistance, Dist) == 0x000000, "Member 'W_CompassIndicatorMaster_C_SetDistance::Dist' has a wrong offset!");

}

