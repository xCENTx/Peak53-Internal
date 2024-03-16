#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x358 - 0x2E0)
// WidgetBlueprintGeneratedClass WB_Child_ControlSettings.WB_Child_ControlSettings_C
class UWB_Child_ControlSettings_C : public UWB_Child_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_Slider_C*                   Button_GamepadSensitivity_RStick;                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_State_C*                    Button_InvertGamepadControl;                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_State_C*                    Button_InvertMouseControl;                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_Slider_C*                   Button_MouseSensitivity;                           // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Infofield_C*                       Info_Field;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputSwitchListener;                               // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Buttons_PC;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUsingGamepad;                                     // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewState_InvMouse;                                 // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentState_InvMouse;                             // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewState_InvGamepad;                               // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentState_InvGamepad;                           // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewValue_MouseSensitivity;                         // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentValue_MouseSensitivity;                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewValue_GamepadSensitivity;                       // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentValue_GamepadSensitivity;                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Child_ControlSettings_C* GetDefaultObj();

	TArray<class UWidget*> FilterByVisibility(class UPanelWidget* PanelWidget, enum class ESlateVisibility Filter, const TArray<class UWidget*>& Found, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetValue_GamepadSensitivity(double CurrentValue_MouseSensitivity, float CallFunc_SetSliderValue_InValue_ImplicitCast);
	void SetValue_MouseSensitivity(double CurrentValue_MouseSensitivity, float CallFunc_SetSliderValue_InValue_ImplicitCast);
	void SetState_InvertGamepad(int32 CurrentState_InvGamepad);
	void SetState_InvertMouse(int32 CurrentState_InvMouse);
	void GetInvGamepadButton_State(int32* State, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, int32 K2Node_Select_Default);
	void GetInvMouseButton_State(int32* State, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, int32 K2Node_Select_Default);
	void GetGamepadSenButtonValue(double* Value, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance);
	void GetMouseSenButtonValue(double* Value, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance);
	void BindPanelWidgetChildren_ButtonOnUnhovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void BindPanelWidgetChildren_ButtonOnHovered(class UPanelWidget* Panel_Widget, bool Bind_Unbind, FDelegateProperty_& EventToBind, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetStateButtonInfo(class UCommonButtonBase* Button, class FText* Head, class FText* Body, class UWB_Button_Slider_C* K2Node_DynamicCast_AsWB_Button_Slider, bool K2Node_DynamicCast_bSuccess, class UWB_Button_State_C* K2Node_DynamicCast_AsWB_Button_State, bool K2Node_DynamicCast_bSuccess_1);
	void Construct();
	void OnInputMethodChanged(bool bUsingGamepad);
	void SetInfoFieldInfo(class FText Head, class FText Body);
	void BndEvt__WB_GeneralSettings_Button_Language_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState);
	void OnAnyButtonHovered(class UCommonButtonBase* Button);
	void OnAnyButtonUnhovered(class UCommonButtonBase* Button);
	void SetupButtons();
	void OnApplyChanges();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnResetDefaults();
	void OnResetDefaultsFinished();
	void BndEvt__WB_Child_ControlSettings_Button_InvertGamepadControl_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState);
	void BndEvt__WB_Child_ControlSettings_Button_GamepadSensitivity_RStick_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value);
	void BndEvt__WB_Child_ControlSettings_Button_MouseSensitivity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value);
	void ExecuteUbergraph_WB_Child_ControlSettings(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bUsingGamepad, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_3, int32 K2Node_ComponentBoundEvent_NewState_1, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class FText CallFunc_GetStateButtonInfo_Head, class FText CallFunc_GetStateButtonInfo_Body, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, bool Temp_bool_Has_Been_Initd_Variable_1, double CallFunc_GetMouseSenButtonValue_Value, double CallFunc_GetGamepadSenButtonValue_Value, int32 CallFunc_GetInvMouseButton_State_State, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_4, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_5, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_6, bool Temp_bool_IsClosed_Variable, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button_2, int32 K2Node_ComponentBoundEvent_NewState, bool Temp_bool_Variable_1, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button_1, double K2Node_ComponentBoundEvent_Value_1, class UWB_Button_Slider_C* K2Node_ComponentBoundEvent_Button, double K2Node_ComponentBoundEvent_Value, int32 CallFunc_GetInvGamepadButton_State_State, TArray<class UWidget*>& CallFunc_FilterByVisibility_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_HasAnyChildren_ReturnValue, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_NotEqual_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_IsInputMethodActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_1, bool K2Node_Select_Default_1, TArray<class UWidget*>& CallFunc_FilterByVisibility_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1);
};

}


