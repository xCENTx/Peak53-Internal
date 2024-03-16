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

// 0x10 (0x10 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.GetMusicOffVolume
struct UWB_Child_AudioSettings_C_GetMusicOffVolume_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.SetAudioButtonValue
struct UWB_Child_AudioSettings_C_SetAudioButtonValue_Params
{
public:
	class UWB_Button_Slider_C*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        InValue;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_256E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_Value_ImplicitCast;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_InValue_ImplicitCast;      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.GetLanguageButton_State
struct UWB_Child_AudioSettings_C_GetLanguageButton_State_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2581[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2582[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2583[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_3;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2585[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_2;                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BindPanelWidgetChildren_ButtonOnUnhovered
struct UWB_Child_AudioSettings_C_BindPanelWidgetChildren_ButtonOnUnhovered_Params
{
public:
	class UPanelWidget*                          Panel_Widget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Bind_Unbind;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_259C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           EventToBind;                                       // 0xC(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_259D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_DynamicCast_AsCommon_Button_Base;           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_259E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_259F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BindPanelWidgetChildren_ButtonOnHovered
struct UWB_Child_AudioSettings_C_BindPanelWidgetChildren_ButtonOnHovered_Params
{
public:
	class UPanelWidget*                          Panel_Widget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Bind_Unbind;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           EventToBind;                                       // 0xC(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_DynamicCast_AsCommon_Button_Base;           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.GetStateButtonInfo
struct UWB_Child_AudioSettings_C_GetStateButtonInfo_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Head;                                              // 0x8(0x18)(Parm, OutParm)
	class FText                                  Body;                                              // 0x20(0x18)(Parm, OutParm)
	class UWB_Button_Slider_C*                   K2Node_DynamicCast_AsWB_Button_Slider;             // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Button_State_C*                    K2Node_DynamicCast_AsWB_Button_State;              // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnInputMethodChanged
struct UWB_Child_AudioSettings_C_OnInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.SetInfoFieldInfo
struct UWB_Child_AudioSettings_C_SetInfoFieldInfo_Params
{
public:
	class FText                                  Head;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Body;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnAnyButtonHovered
struct UWB_Child_AudioSettings_C_OnAnyButtonHovered_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnAnyButtonUnhovered
struct UWB_Child_AudioSettings_C_OnAnyButtonUnhovered_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.Tick
struct UWB_Child_AudioSettings_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_MasterVolume_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_MasterVolume_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
public:
	class UWB_Button_Slider_C*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_MusicOn_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
struct UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_MusicOn_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params
{
public:
	class UWB_Button_State_C*                    Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        NewState;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_DialogueVolume_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
struct UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_DialogueVolume_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params
{
public:
	class UWB_Button_Slider_C*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_SFX_Volume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
struct UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_SFX_Volume_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params
{
public:
	class UWB_Button_Slider_C*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_MusicVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
struct UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_MusicVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params
{
public:
	class UWB_Button_Slider_C*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.CustomEvent_2
struct UWB_Child_AudioSettings_C_CustomEvent_2_Params
{
public:
	struct FSwapAudioOutputResult                SwapResult;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC (0xC - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.BndEvt__WB_Child_AudioSettings_Button_AudioDevice_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
struct UWB_Child_AudioSettings_C_BndEvt__WB_Child_AudioSettings_Button_AudioDevice_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
{
public:
	class UWB_Button_State_C*                    Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        NewState;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.OnAvailableAudioOutputDevicesFound
struct UWB_Child_AudioSettings_C_OnAvailableAudioOutputDevicesFound_Params
{
public:
	TArray<struct FAudioOutputDeviceInfo>        AvailableDevices;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.CustomEvent_3
struct UWB_Child_AudioSettings_C_CustomEvent_3_Params
{
public:
	class FString                                CurrentDevice;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x458 (0x458 - 0x0)
// Function WB_Child_AudioSettings.WB_Child_AudioSettings_C.ExecuteUbergraph_WB_Child_AudioSettings
struct UWB_Child_AudioSettings_C_ExecuteUbergraph_WB_Child_AudioSettings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUsingGamepad;                        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Head;                           // 0x50(0x18)(None)
	class FText                                  K2Node_CustomEvent_Body;                           // 0x68(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_CustomEvent_Button_1;                       // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetStateButtonInfo_Head;                  // 0x90(0x18)(None)
	class FText                                  CallFunc_GetStateButtonInfo_Body;                  // 0xA8(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_CustomEvent_Button;                         // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xDC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance;          // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x100(0x40)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_1;        // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_2;        // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_Button_Slider_C*                   K2Node_ComponentBoundEvent_Button_5;               // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Value_3;                // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Button_State_C*                    K2Node_ComponentBoundEvent_Button_4;               // 0x170(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewState_1;             // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Button_Slider_C*                   K2Node_ComponentBoundEvent_Button_3;               // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Value_2;                // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Button_Slider_C*                   K2Node_ComponentBoundEvent_Button_2;               // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Value_1;                // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_2;            // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Button_Slider_C*                   K2Node_ComponentBoundEvent_Button_1;               // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Value;                  // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_3;            // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMusicOffVolume_Value;                  // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMusicOffVolume_Value_1;                // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSwapAudioOutputResult                K2Node_CustomEvent_SwapResult;                     // 0x1E0(0x28)(ConstParm)
	class UWB_Button_State_C*                    K2Node_ComponentBoundEvent_Button;                 // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewState;               // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioOutputDeviceInfo                CallFunc_Array_Get_Item;                           // 0x220(0x48)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x268(0x18)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x280(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue_1;             // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_3;        // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_1;                           // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_4;        // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_5;        // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_6;        // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_7;        // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_8;        // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_9;        // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_10;       // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_11;       // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2EC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue_1;      // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x2FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue_2;      // 0x2FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25FD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default_2;                           // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue_3;      // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x30A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x30B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPMM_Instance_C*                       CallFunc_Get_PMM_Instance_AsPMM_Instance_12;       // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2600[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x31C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x330(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2601[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x348(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x358(0x18)(None)
	double                                       K2Node_Select_Default_3;                           // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x378(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x3C8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x3D8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2603[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAudioOutputDeviceInfo>        K2Node_CustomEvent_AvailableDevices;               // 0x3F8(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CurrentDevice;                  // 0x408(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x418(0x18)(None)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetAudioButtonValue_InValue_ImplicitCast; // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetAudioButtonValue_InValue_ImplicitCast_1; // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetAudioButtonValue_InValue_ImplicitCast_2; // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast; // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1; // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetAudioButtonValue_InValue_ImplicitCast_3; // 0x448(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2; // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3; // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4; // 0x454(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


