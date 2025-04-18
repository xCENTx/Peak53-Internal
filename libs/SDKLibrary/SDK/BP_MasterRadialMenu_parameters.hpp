#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterRadialMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.ExecuteUbergraph_BP_MasterRadialMenu
// 0x0010 (0x0010 - 0x0000)
struct BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4747[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu) == 0x000008, "Wrong alignment on BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu");
static_assert(sizeof(BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu) == 0x000010, "Wrong size on BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu");
static_assert(offsetof(BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu, EntryPoint) == 0x000000, "Member 'BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'BP_MasterRadialMenu_C_ExecuteUbergraph_BP_MasterRadialMenu::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.GetMouseOver
// 0x0001 (0x0001 - 0x0000)
struct BP_MasterRadialMenu_C_GetMouseOver final
{
public:
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRadialMenu_C_GetMouseOver) == 0x000001, "Wrong alignment on BP_MasterRadialMenu_C_GetMouseOver");
static_assert(sizeof(BP_MasterRadialMenu_C_GetMouseOver) == 0x000001, "Wrong size on BP_MasterRadialMenu_C_GetMouseOver");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseOver, CallFunc_IsVisible_ReturnValue) == 0x000000, "Member 'BP_MasterRadialMenu_C_GetMouseOver::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.GetMouseRotation
// 0x00C0 (0x00C0 - 0x0000)
struct BP_MasterRadialMenu_C_GetMouseRotation final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePosition_LocationX;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePosition_LocationY;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePosition_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4748[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4749[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector_X_ImplicitCast;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector_Y_ImplicitCast;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRadialMenu_C_GetMouseRotation) == 0x000008, "Wrong alignment on BP_MasterRadialMenu_C_GetMouseRotation");
static_assert(sizeof(BP_MasterRadialMenu_C_GetMouseRotation) == 0x0000C0, "Wrong size on BP_MasterRadialMenu_C_GetMouseRotation");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_GetViewportSize_ReturnValue) == 0x000008, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_GetMousePosition_LocationX) == 0x000018, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_GetMousePosition_LocationX' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_GetMousePosition_LocationY) == 0x00001C, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_GetMousePosition_LocationY' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_GetMousePosition_ReturnValue) == 0x000020, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_GetMousePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_BreakVector2D_X) == 0x000028, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_MakeVector_ReturnValue) == 0x000038, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_MakeVector_ReturnValue_1) == 0x000060, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_FindLookAtRotation_ReturnValue) == 0x000078, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_BreakRotator_Roll) == 0x000090, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_BreakRotator_Pitch) == 0x000094, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_BreakRotator_Yaw) == 0x000098, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_MakeVector_X_ImplicitCast) == 0x0000A8, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_MakeVector_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_MakeVector_Y_ImplicitCast) == 0x0000B0, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_MakeVector_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_GetMouseRotation, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'BP_MasterRadialMenu_C_GetMouseRotation::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.SelectSegment
// 0x0002 (0x0002 - 0x0000)
struct BP_MasterRadialMenu_C_SelectSegment final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRadialMenu_C_SelectSegment) == 0x000001, "Wrong alignment on BP_MasterRadialMenu_C_SelectSegment");
static_assert(sizeof(BP_MasterRadialMenu_C_SelectSegment) == 0x000002, "Wrong size on BP_MasterRadialMenu_C_SelectSegment");
static_assert(offsetof(BP_MasterRadialMenu_C_SelectSegment, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'BP_MasterRadialMenu_C_SelectSegment::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SelectSegment, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_MasterRadialMenu_C_SelectSegment::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MasterRadialMenu.BP_MasterRadialMenu_C.SetSegmentOver
// 0x0040 (0x0040 - 0x0000)
struct BP_MasterRadialMenu_C_SetSegmentOver final
{
public:
	class UBP_MasterSegment_C*                    Segment;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Rotation_;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Rotation__0;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ExtraChecks;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ExtraRotation_;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExtraRotation__0;                                  // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterRadialMenu_C_SetSegmentOver) == 0x000008, "Wrong alignment on BP_MasterRadialMenu_C_SetSegmentOver");
static_assert(sizeof(BP_MasterRadialMenu_C_SetSegmentOver) == 0x000040, "Wrong size on BP_MasterRadialMenu_C_SetSegmentOver");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, Segment) == 0x000000, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::Segment' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, Rotation_) == 0x000008, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::Rotation_' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, Rotation__0) == 0x000010, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::Rotation__0' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, ExtraChecks) == 0x000018, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::ExtraChecks' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, ExtraRotation_) == 0x000020, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::ExtraRotation_' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, ExtraRotation__0) == 0x000028, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::ExtraRotation__0' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, Temp_bool_Variable) == 0x000030, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000031, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000032, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000033, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000034, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_BooleanAND_ReturnValue) == 0x000035, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000036, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_BooleanAND_ReturnValue_1) == 0x000037, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, CallFunc_BooleanOR_ReturnValue) == 0x000038, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterRadialMenu_C_SetSegmentOver, K2Node_Select_Default) == 0x000039, "Member 'BP_MasterRadialMenu_C_SetSegmentOver::K2Node_Select_Default' has a wrong offset!");

}

