#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompassWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CompassWidget.CompassWidget_C.ExecuteUbergraph_CompassWidget
// 0x00A0 (0x00A0 - 0x0000)
struct CompassWidget_C_ExecuteUbergraph_CompassWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3758[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3759[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_375A[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompassWidget_C_ExecuteUbergraph_CompassWidget) == 0x000008, "Wrong alignment on CompassWidget_C_ExecuteUbergraph_CompassWidget");
static_assert(sizeof(CompassWidget_C_ExecuteUbergraph_CompassWidget) == 0x0000A0, "Wrong size on CompassWidget_C_ExecuteUbergraph_CompassWidget");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, EntryPoint) == 0x000000, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, K2Node_Event_MyGeometry) == 0x000008, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, K2Node_Event_InDeltaTime) == 0x000048, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000050, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000058, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_GetControlRotation_ReturnValue) == 0x000060, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_BreakRotator_Roll) == 0x00007C, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_BreakRotator_Pitch) == 0x000080, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_BreakRotator_Yaw) == 0x000084, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000088, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_ExecuteUbergraph_CompassWidget, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000098, "Member 'CompassWidget_C_ExecuteUbergraph_CompassWidget::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function CompassWidget.CompassWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CompassWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompassWidget_C_PreConstruct) == 0x000001, "Wrong alignment on CompassWidget_C_PreConstruct");
static_assert(sizeof(CompassWidget_C_PreConstruct) == 0x000001, "Wrong size on CompassWidget_C_PreConstruct");
static_assert(offsetof(CompassWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CompassWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CompassWidget.CompassWidget_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct CompassWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompassWidget_C_Tick) == 0x000008, "Wrong alignment on CompassWidget_C_Tick");
static_assert(sizeof(CompassWidget_C_Tick) == 0x000048, "Wrong size on CompassWidget_C_Tick");
static_assert(offsetof(CompassWidget_C_Tick, MyGeometry) == 0x000000, "Member 'CompassWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CompassWidget_C_Tick, InDeltaTime) == 0x000040, "Member 'CompassWidget_C_Tick::InDeltaTime' has a wrong offset!");

}

