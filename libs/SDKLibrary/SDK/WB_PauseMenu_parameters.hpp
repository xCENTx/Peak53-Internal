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

// 0x2C (0x2C - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.Anim_FadeButtons
struct UWB_PauseMenu_C_Anim_FadeButtons_Params
{
public:
	double                                       PlaybackSpeed;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Forward;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_440A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_440B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.Anim_FadeContent
struct UWB_PauseMenu_C_Anim_FadeContent_Params
{
public:
	double                                       PlaybackSpeed;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Forward;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_440E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4410[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.CreateChildWidget
struct UWB_PauseMenu_C_CreateChildWidget_Params
{
public:
	class UClass*                                Container;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ChildClass;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           OnDeactivated;                                     // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Base_C*                  ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Base_C*                  CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.SetTabSwitcherIndex
struct UWB_PauseMenu_C_SetTabSwitcherIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadFocus
struct UWB_PauseMenu_C_SetGamepadFocus_Params
{
public:
	class UWidget*                               FocusObject;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.IsTopLevelWidget
struct UWB_PauseMenu_C_IsTopLevelWidget_Params
{
public:
	class UUserWidget*                           InWidget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4420[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C0 (0x3C0 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown
struct UWB_PauseMenu_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x40(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm)
	struct FKeyEvent                             Key;                                               // 0x138(0x40)(Edit, BlueprintVisible)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x178(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue_1;                  // 0x230(0xB8)(None)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x2E8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x302(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x303(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4425[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue_2;                  // 0x308(0xB8)(None)
};

// 0x28 (0x28 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.GetDesiredFocusTarget
struct UWB_PauseMenu_C_GetDesiredFocusTarget_Params
{
public:
	bool                                         CustomFocusTarget;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4429[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Text_Button_C*                     FocusTarget;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Text_Button_C*                     K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_1_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_1_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_2_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_2_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_4_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_4_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_CommonActionWidget_127_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_CommonActionWidget_127_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Audio_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Audio_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Controls_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Controls_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Credits_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Credits_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_General_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_General_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Video_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Video_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Input_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Input_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_PauseMenu_Button_Resume_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_PauseMenu_Button_Resume_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_PauseMenu_Button_Exit_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__WB_PauseMenu_Button_Exit_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.Quit_Reaction
struct UWB_PauseMenu_C_Quit_Reaction_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.CustomEvent
struct UWB_PauseMenu_C_CustomEvent_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x292 (0x292 - 0x0)
// Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu
struct UWB_PauseMenu_C_ExecuteUbergraph_WB_PauseMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Container_Base_C*                  CallFunc_CreateChildWidget_ReturnValue;            // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Settings_C*              K2Node_DynamicCast_AsWB_Container_Settings;        // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Container_Base_C*                  CallFunc_CreateChildWidget_ReturnValue_1;          // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Default_C*               K2Node_DynamicCast_AsWB_Container_Default;         // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4430[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_11;              // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected_3;             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4431[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_10;              // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected_2;             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4432[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_9;               // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected_1;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4433[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_8;               // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected;               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4434[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4435[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_1;      // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_7;               // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_6;               // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_5;               // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_4;               // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_3;               // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Request_C*                         CallFunc_CreateRequest_ReturnValue;                // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_2;      // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x100(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x118(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x138(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Confirmed_1;                    // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_3;      // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x158(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Base_C*                  CallFunc_CreateChildWidget_ReturnValue_2;          // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Settings_C*              K2Node_DynamicCast_AsWB_Container_Settings_1;      // 0x170(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_4;      // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x188(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_5;      // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Base_C*                  CallFunc_CreateChildWidget_ReturnValue_3;          // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Settings_C*              K2Node_DynamicCast_AsWB_Container_Settings_2;      // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4438[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_6;      // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4439[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1C4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Container_Base_C*                  CallFunc_CreateChildWidget_ReturnValue_4;          // 0x1D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Settings_C*              K2Node_DynamicCast_AsWB_Container_Settings_3;      // 0x1E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_7;      // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     CallFunc_GetDesiredFocusTarget_ReturnValue_8;      // 0x1F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x210(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Base_C*                  CallFunc_CreateChildWidget_ReturnValue_5;          // 0x220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Settings_C*              K2Node_DynamicCast_AsWB_Container_Settings_4;      // 0x228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x248(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Confirmed;                      // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_Request_C*                         CallFunc_CreateRequest_ReturnValue_1;              // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_3;            // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_4;            // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


