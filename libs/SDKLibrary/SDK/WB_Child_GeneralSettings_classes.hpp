#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x314 - 0x2E0)
// WidgetBlueprintGeneratedClass WB_Child_GeneralSettings.WB_Child_GeneralSettings_C
class UWB_Child_GeneralSettings_C : public UWB_Child_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_State_C*                    Button_Language;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Infofield_C*                       Info_Field;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputSwitchListener;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Buttons;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUsingGamepad;                                     // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4639[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewState_Language;                                 // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentState_Language;                             // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Child_GeneralSettings_C* GetDefaultObj();

	int32 GetLanguageButton_State(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1);
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
	void ExecuteUbergraph_WB_Child_GeneralSettings(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool K2Node_Event_bUsingGamepad, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& Temp_string_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UWB_Button_State_C* K2Node_ComponentBoundEvent_Button, int32 K2Node_ComponentBoundEvent_NewState, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class FText CallFunc_GetStateButtonInfo_Head, class FText CallFunc_GetStateButtonInfo_Body, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable, int32 CallFunc_GetLanguageButton_State_ReturnValue, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_IntInt_ReturnValue, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Variable, const class FString& K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_1);
};

}


