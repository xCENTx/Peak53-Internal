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

// 0x19 (0x19 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.IsChildVideoSettings
struct UWB_Container_Settings_C_IsChildVideoSettings_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             AsWB_Child_Video_Settings;                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Child_VideoSettings_C*             K2Node_DynamicCast_AsWB_Child_Video_Settings;      // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.CreateChildWidget
struct UWB_Container_Settings_C_CreateChildWidget_Params
{
public:
	class UClass*                                Child_Class;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           OnSettingsChanged;                                 // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           OnSettingsUnchanged;                               // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UWB_Child_Base_C*                      CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Child_Base_C*                      K2Node_DynamicCast_AsWB_Child_Base;                // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39A (0x39A - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.OnKeyDown
struct UWB_Container_Settings_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x40(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  InKey;                                             // 0x138(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AEB[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x170(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue_1;                  // 0x228(0xB8)(None)
	struct FEventReply                           CallFunc_ClearUserFocus_ReturnValue;               // 0x2E0(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.SetInputMethod
struct UWB_Container_Settings_C_SetInputMethod_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.OnConfirmSettings
struct UWB_Container_Settings_C_OnConfirmSettings_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWB_Container_Settings_C_BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.BndEvt__WB_Settings_General_Button_ResetDefaults_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UWB_Container_Settings_C_BndEvt__WB_Settings_General_Button_ResetDefaults_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.OnBackRequestVidSettings
struct UWB_Container_Settings_C_OnBackRequestVidSettings_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.OnRequestBack
struct UWB_Container_Settings_C_OnRequestBack_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UWB_Container_Settings_C_BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.OnResetReactionDefaults
struct UWB_Container_Settings_C_OnResetReactionDefaults_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x219 (0x219 - 0x0)
// Function WB_Container_Settings.WB_Container_Settings_C.ExecuteUbergraph_WB_Container_Settings
struct UWB_Container_Settings_C_ExecuteUbergraph_WB_Container_Settings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Request_C*                         CallFunc_CreateRequest_ReturnValue;                // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_CustomEvent_Button;                         // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B68[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Confirmed_2;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Confirmed_1;                    // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChildVideoSettings_ReturnValue;         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings; // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnySettingDirty_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsScreenResolutionDirty_ReturnValue;   // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsFullscreenModeDirty_ReturnValue;     // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B73[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance;          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChildVideoSettings_ReturnValue_1;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B75[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_1; // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B78[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_1;        // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_2;        // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_3;        // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xC0(0x18)(None)
	TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface_1;          // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChildVideoSettings_ReturnValue_2;       // 0xEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_2; // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetVideoChangesRequestText_Result;        // 0xF8(0x18)(None)
	class UWB_Request_Timer_C*                   CallFunc_CreateRequestWithTimer_ReturnValue;       // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChildVideoSettings_ReturnValue_3;       // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B86[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_3; // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x128(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x140(0x18)(None)
	class UWB_Request_C*                         CallFunc_CreateRequest_ReturnValue_1;              // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B89[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x164(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x174(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChildVideoSettings_ReturnValue_4;       // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_4; // 0x188(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x190(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1A0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_4;        // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_5;        // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1C0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChildVideoSettings_ReturnValue_5;       // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B91[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_5; // 0x1D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Confirmed;                      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B95[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1E4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1F4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B98[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface_2;          // 0x208(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


