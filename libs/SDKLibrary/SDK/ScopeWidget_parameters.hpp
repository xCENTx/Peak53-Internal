#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScopeWidget

#include "Basic.hpp"

#include "S_ItemDetails_structs.hpp"


namespace SDK::Params
{

// Function ScopeWidget.ScopeWidget_C.DT_Event
// 0x0008 (0x0008 - 0x0000)
struct ScopeWidget_C_DT_Event final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScopeWidget_C_DT_Event) == 0x000004, "Wrong alignment on ScopeWidget_C_DT_Event");
static_assert(sizeof(ScopeWidget_C_DT_Event) == 0x000008, "Wrong size on ScopeWidget_C_DT_Event");
static_assert(offsetof(ScopeWidget_C_DT_Event, RowName) == 0x000000, "Member 'ScopeWidget_C_DT_Event::RowName' has a wrong offset!");

// Function ScopeWidget.ScopeWidget_C.ExecuteUbergraph_ScopeWidget
// 0x08F0 (0x08F0 - 0x0000)
struct ScopeWidget_C_ExecuteUbergraph_ScopeWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_RowName;                        // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_ItemDetails                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0890)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x08A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C4[0x7];                                     // 0x08A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x08A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C5[0x7];                                     // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKController_C*                    K2Node_DynamicCast_AsBP_SGKController;             // 0x08B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x08C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C6[0x7];                                     // 0x08C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x08C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x08D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C7[0x7];                                     // 0x08D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x08D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x08E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x08E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x08E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget) == 0x000010, "Wrong alignment on ScopeWidget_C_ExecuteUbergraph_ScopeWidget");
static_assert(sizeof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget) == 0x0008F0, "Wrong size on ScopeWidget_C_ExecuteUbergraph_ScopeWidget");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, EntryPoint) == 0x000000, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, K2Node_CustomEvent_RowName) == 0x000004, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::K2Node_CustomEvent_RowName' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0008A0, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x0008A8, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0008B0, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, K2Node_DynamicCast_AsBP_SGKController) == 0x0008B8, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::K2Node_DynamicCast_AsBP_SGKController' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, K2Node_DynamicCast_bSuccess) == 0x0008C0, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_K2_GetPawn_ReturnValue) == 0x0008C8, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x0008D0, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, K2Node_DynamicCast_AsBP_SGKMaster_Character) == 0x0008D8, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::K2Node_DynamicCast_AsBP_SGKMaster_Character' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, K2Node_DynamicCast_bSuccess_1) == 0x0008E0, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0008E1, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScopeWidget_C_ExecuteUbergraph_ScopeWidget, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0008E2, "Member 'ScopeWidget_C_ExecuteUbergraph_ScopeWidget::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

}

