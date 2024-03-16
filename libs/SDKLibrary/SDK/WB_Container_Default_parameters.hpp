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
// Function WB_Container_Default.WB_Container_Default_C.IsChildVideoSettings
struct UWB_Container_Default_C_IsChildVideoSettings_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Child_VideoSettings_C*             AsWB_Child_Video_Settings;                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Child_VideoSettings_C*             K2Node_DynamicCast_AsWB_Child_Video_Settings;      // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WB_Container_Default.WB_Container_Default_C.CreateChildWidget
struct UWB_Container_Default_C_CreateChildWidget_Params
{
public:
	class UClass*                                Child_Class;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_Child_Base_C*                      CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Child_Base_C*                      K2Node_DynamicCast_AsWB_Child_Base;                // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E8 (0x2E8 - 0x0)
// Function WB_Container_Default.WB_Container_Default_C.OnKeyDown
struct UWB_Container_Default_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x40(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  InKey;                                             // 0x138(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B4E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x170(0xB8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_ClearUserFocus_ReturnValue;               // 0x230(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function WB_Container_Default.WB_Container_Default_C.SetInputMethod
struct UWB_Container_Default_C_SetInputMethod_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Container_Default.WB_Container_Default_C.BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UWB_Container_Default_C_BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Container_Default.WB_Container_Default_C.BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWB_Container_Default_C_BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WB_Container_Default.WB_Container_Default_C.ExecuteUbergraph_WB_Container_Default
struct UWB_Container_Default_C_ExecuteUbergraph_WB_Container_Default_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B57[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface;            // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


