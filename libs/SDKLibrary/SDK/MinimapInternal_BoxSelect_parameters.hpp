#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimapInternal_BoxSelect

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.CompleteDrag
// 0x0001 (0x0001 - 0x0000)
struct MinimapInternal_BoxSelect_C_CompleteDrag final
{
public:
	bool                                          Param_IsLeftMouseButton;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_CompleteDrag) == 0x000001, "Wrong alignment on MinimapInternal_BoxSelect_C_CompleteDrag");
static_assert(sizeof(MinimapInternal_BoxSelect_C_CompleteDrag) == 0x000001, "Wrong size on MinimapInternal_BoxSelect_C_CompleteDrag");
static_assert(offsetof(MinimapInternal_BoxSelect_C_CompleteDrag, Param_IsLeftMouseButton) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_CompleteDrag::Param_IsLeftMouseButton' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.ExecuteUbergraph_MinimapInternal_BoxSelect
// 0x0268 (0x0268 - 0x0000)
struct MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0048(0x0098)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00E0(0x0098)(ConstParm)
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToLocal_ReturnValue;              // 0x0188(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsLeftMouseButton;              // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D2[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;                 // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0208(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_2;                        // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_2;                        // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0250(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_Vector2DFloat_B_ImplicitCast;      // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect");
static_assert(sizeof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect) == 0x000268, "Wrong size on MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, EntryPoint) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, K2Node_Event_MyGeometry) == 0x000008, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, K2Node_Event_MouseEvent_1) == 0x000048, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, K2Node_Event_MouseEvent) == 0x0000E0, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x000178, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_AbsoluteToLocal_ReturnValue) == 0x000188, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_AbsoluteToLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_GetViewportScale_ReturnValue) == 0x000198, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, K2Node_CustomEvent_IsLeftMouseButton) == 0x00019C, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::K2Node_CustomEvent_IsLeftMouseButton' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x0001A0, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0001B0, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_GetLocalSize_ReturnValue) == 0x0001C0, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_BreakVector2D_X) == 0x0001D0, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_BreakVector2D_Y) == 0x0001D8, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x0001E0, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_BreakVector2D_X_1) == 0x0001F0, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_BreakVector2D_Y_1) == 0x0001F8, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000200, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000208, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000218, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_BreakVector2D_X_2) == 0x000220, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_BreakVector2D_Y_2) == 0x000228, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_MakeVector2D_ReturnValue) == 0x000230, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000240, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x000248, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_MakeVector2D_ReturnValue_1) == 0x000250, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect, CallFunc_Divide_Vector2DFloat_B_ImplicitCast) == 0x000260, "Member 'MinimapInternal_BoxSelect_C_ExecuteUbergraph_MinimapInternal_BoxSelect::CallFunc_Divide_Vector2DFloat_B_ImplicitCast' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.OnBoxSelect__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature final
{
public:
	struct FVector2D                              StartUV;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              EndUV;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsLeftMouseButton;                           // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsShiftSelect;                               // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsCtrlSelect;                                // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature");
static_assert(sizeof(MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature) == 0x000028, "Wrong size on MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature, StartUV) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature::StartUV' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature, EndUV) == 0x000010, "Member 'MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature::EndUV' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature, Param_IsLeftMouseButton) == 0x000020, "Member 'MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature::Param_IsLeftMouseButton' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature, Param_IsShiftSelect) == 0x000021, "Member 'MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature::Param_IsShiftSelect' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature, Param_IsCtrlSelect) == 0x000022, "Member 'MinimapInternal_BoxSelect_C_OnBoxSelect__DelegateSignature::Param_IsCtrlSelect' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.OnMouseButtonDown
// 0x0268 (0x0268 - 0x0000)
struct MinimapInternal_BoxSelect_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0248(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_OnMouseButtonDown");
static_assert(sizeof(MinimapInternal_BoxSelect_C_OnMouseButtonDown) == 0x000268, "Wrong size on MinimapInternal_BoxSelect_C_OnMouseButtonDown");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000248, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonDown, CallFunc_Not_PreBool_ReturnValue) == 0x000261, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonDown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.OnMouseButtonUp
// 0x0268 (0x0268 - 0x0000)
struct MinimapInternal_BoxSelect_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0248(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_OnMouseButtonUp");
static_assert(sizeof(MinimapInternal_BoxSelect_C_OnMouseButtonUp) == 0x000268, "Wrong size on MinimapInternal_BoxSelect_C_OnMouseButtonUp");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonUp, MouseEvent) == 0x000040, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonUp, ReturnValue) == 0x0000D8, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonUp, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonUp, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000248, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonUp::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseButtonUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'MinimapInternal_BoxSelect_C_OnMouseButtonUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.OnMouseEnter
// 0x00D8 (0x00D8 - 0x0000)
struct MinimapInternal_BoxSelect_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_OnMouseEnter) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_OnMouseEnter");
static_assert(sizeof(MinimapInternal_BoxSelect_C_OnMouseEnter) == 0x0000D8, "Wrong size on MinimapInternal_BoxSelect_C_OnMouseEnter");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'MinimapInternal_BoxSelect_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.OnMouseLeave
// 0x0098 (0x0098 - 0x0000)
struct MinimapInternal_BoxSelect_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_OnMouseLeave) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_OnMouseLeave");
static_assert(sizeof(MinimapInternal_BoxSelect_C_OnMouseLeave) == 0x000098, "Wrong size on MinimapInternal_BoxSelect_C_OnMouseLeave");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.OnMouseMove
// 0x0268 (0x0268 - 0x0000)
struct MinimapInternal_BoxSelect_C_OnMouseMove final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x0248(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToLocal_ReturnValue;              // 0x0258(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_OnMouseMove) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_OnMouseMove");
static_assert(sizeof(MinimapInternal_BoxSelect_C_OnMouseMove) == 0x000268, "Wrong size on MinimapInternal_BoxSelect_C_OnMouseMove");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseMove, MyGeometry) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_OnMouseMove::MyGeometry' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseMove, MouseEvent) == 0x000040, "Member 'MinimapInternal_BoxSelect_C_OnMouseMove::MouseEvent' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseMove, ReturnValue) == 0x0000D8, "Member 'MinimapInternal_BoxSelect_C_OnMouseMove::ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseMove, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'MinimapInternal_BoxSelect_C_OnMouseMove::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseMove, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x000248, "Member 'MinimapInternal_BoxSelect_C_OnMouseMove::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnMouseMove, CallFunc_AbsoluteToLocal_ReturnValue) == 0x000258, "Member 'MinimapInternal_BoxSelect_C_OnMouseMove::CallFunc_AbsoluteToLocal_ReturnValue' has a wrong offset!");

// Function MinimapInternal_BoxSelect.MinimapInternal_BoxSelect_C.OnPaint
// 0x00A0 (0x00A0 - 0x0000)
struct MinimapInternal_BoxSelect_C_OnPaint final
{
public:
	struct FPaintContext                          Context;                                           // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FVector2D                              BoxP2;                                             // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BoxP1;                                             // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_BoxSelect_C_OnPaint) == 0x000008, "Wrong alignment on MinimapInternal_BoxSelect_C_OnPaint");
static_assert(sizeof(MinimapInternal_BoxSelect_C_OnPaint) == 0x0000A0, "Wrong size on MinimapInternal_BoxSelect_C_OnPaint");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, Context) == 0x000000, "Member 'MinimapInternal_BoxSelect_C_OnPaint::Context' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, BoxP2) == 0x000030, "Member 'MinimapInternal_BoxSelect_C_OnPaint::BoxP2' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, BoxP1) == 0x000040, "Member 'MinimapInternal_BoxSelect_C_OnPaint::BoxP1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, K2Node_MakeArray_Array) == 0x000050, "Member 'MinimapInternal_BoxSelect_C_OnPaint::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, CallFunc_BreakVector2D_X) == 0x000060, "Member 'MinimapInternal_BoxSelect_C_OnPaint::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, CallFunc_BreakVector2D_Y) == 0x000068, "Member 'MinimapInternal_BoxSelect_C_OnPaint::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, CallFunc_BreakVector2D_X_1) == 0x000070, "Member 'MinimapInternal_BoxSelect_C_OnPaint::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, CallFunc_BreakVector2D_Y_1) == 0x000078, "Member 'MinimapInternal_BoxSelect_C_OnPaint::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, CallFunc_MakeVector2D_ReturnValue) == 0x000080, "Member 'MinimapInternal_BoxSelect_C_OnPaint::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_BoxSelect_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_1) == 0x000090, "Member 'MinimapInternal_BoxSelect_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

}

