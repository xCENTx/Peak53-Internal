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

// 0xC1 (0xC1 - 0x0)
// Function BP_Keybind.BP_Keybind_C.Find Action Keys
struct UBP_Keybind_C_Find_Action_Keys_Params
{
public:
	TArray<struct FEnhancedActionKeyMapping>     ActionKeys;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FEnhancedActionKeyMapping>     ActionKeysL;                                       // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnhancedActionKeyMapping             CallFunc_Array_Get_Item;                           // 0x30(0x88)(ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x310 (0x310 - 0x0)
// Function BP_Keybind.BP_Keybind_C.OnMouseWheel
struct UBP_Keybind_C_OnMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x190(0xB8)(None)
	float                                        CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x250(0xB8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function BP_Keybind.BP_Keybind_C.InitializeKeybind
struct UBP_Keybind_C_InitializeKeybind_Params
{
public:
	class FName                                  BindName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAxis;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Action;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputMappingContext*                  Mapping;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAxisKeyMapping>          AxisMappingsL;                                     // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<struct FInputActionKeyMapping>        ActionMappingsL;                                   // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FEnhancedActionKeyMapping>     CallFunc_Find_Action_Keys_ActionKeys;              // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnhancedActionKeyMapping             CallFunc_Array_Get_Item;                           // 0x58(0x88)(ContainsInstancedReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0xE8(0x20)(HasGetValueTypeHash)
	TArray<struct FEnhancedActionKeyMapping>     CallFunc_Find_Action_Keys_ActionKeys_1;            // 0x108(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FEnhancedActionKeyMapping             CallFunc_Array_Get_Item_1;                         // 0x118(0x88)(ContainsInstancedReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord_1;                    // 0x1A8(0x20)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x1C8(0x18)(None)
};

// 0x89 (0x89 - 0x0)
// Function BP_Keybind.BP_Keybind_C.FindAxisBind
struct UBP_Keybind_C_FindAxisBind_Params
{
public:
	class FName                                  ActionBindName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BindIndex;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BindFound;                                         // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  ActionBind;                                        // 0x10(0x28)(Parm, OutParm)
	TArray<struct FInputAxisKeyMapping>          MappingsL;                                         // 0x38(0x10)(Edit, BlueprintVisible)
	struct FInputAxisKeyMapping                  CallFunc_Array_Get_Item;                           // 0x48(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function BP_Keybind.BP_Keybind_C.FindActionBind
struct UBP_Keybind_C_FindActionBind_Params
{
public:
	class FName                                  ActionBindName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BindIndex;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BindFound;                                         // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                ActionBind;                                        // 0x10(0x28)(Parm, OutParm)
	TArray<struct FInputActionKeyMapping>        MappingsL;                                         // 0x38(0x10)(Edit, BlueprintVisible)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item;                           // 0x48(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function BP_Keybind.BP_Keybind_C.RebindAction
struct UBP_Keybind_C_RebindAction_Params
{
public:
	struct FInputChord                           Key;                                               // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        RebindIndex;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnhancedActionKeyMapping             KeyTempL;                                          // 0x28(0x88)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_Keybind.BP_Keybind_C.RebindAxis
struct UBP_Keybind_C_RebindAxis_Params
{
public:
	struct FInputChord                           Key;                                               // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        RebindIndex;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  K2Node_MakeStruct_InputAxisKeyMapping;             // 0x30(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_2;           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_3;           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0x70(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  CallFunc_Array_Get_Item;                           // 0x88(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// Function BP_Keybind.BP_Keybind_C.KeySelect1Scroll
struct UBP_Keybind_C_KeySelect1Scroll_Params
{
public:
	bool                                         Up;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Keybind.BP_Keybind_C.KeySelect2Scroll
struct UBP_Keybind_C_KeySelect2Scroll_Params
{
public:
	bool                                         Up;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
struct UBP_Keybind_C_BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
struct UBP_Keybind_C_BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_Keybind.BP_Keybind_C.ExecuteUbergraph_BP_Keybind
struct UBP_Keybind_C_ExecuteUbergraph_BP_Keybind_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Up_1;                           // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Up;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_1;                    // 0x28(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_2;                    // 0x48(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_3;                    // 0x68(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_1;          // 0x88(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey;            // 0xA8(0x20)(HasGetValueTypeHash)
};

}
}


