#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x93 (0x353 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Container_Settings.WB_Container_Settings_C
class UWB_Container_Settings_C : public UWB_Container_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Action_Button_C*                   Action_ApplyChanges;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Action_Button_C*                   Action_Back;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Action_Button_C*                   Action_Left;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Action_Button_C*                   Action_ResetDefaults;                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Action_Button_C*                   Action_Right;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Action_Switcher;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_HitBlocker;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_Apply;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_Back;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_ResetDefaults;                              // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Foreground_Raster;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Actions_Gamepad;                                // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Actions_PC;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputSwitchListener;                               // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Content;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BackgroundBlur_C*                  WB_BackgroundBlur;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Child_Base_C*                      Child;                                             // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTopLevel;                                        // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FullscreenModeDirty;                               // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ScreenResDirty;                                    // 0x352(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Container_Settings_C* GetDefaultObj();

	bool IsChildVideoSettings(class UWB_Child_VideoSettings_C** AsWB_Child_Video_Settings, class UWB_Child_VideoSettings_C* K2Node_DynamicCast_AsWB_Child_Video_Settings, bool K2Node_DynamicCast_bSuccess);
	void CreateChildWidget(class UClass* Child_Class, FDelegateProperty_& OnSettingsChanged, FDelegateProperty_& OnSettingsUnchanged, class UWB_Child_Base_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UWB_Child_Base_C* K2Node_DynamicCast_AsWB_Child_Base, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& InKey, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FEventReply& CallFunc_ClearUserFocus_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3);
	void SetInputMethod(bool bUsingGamepad);
	void OnSettingsChanged();
	void OnConfirmSettings(class UCommonButtonBase* Button);
	void OnSettingsUnchanged();
	void Click_Back();
	void BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Click_ResetDefaults();
	void BndEvt__WB_Settings_General_Button_ResetDefaults_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnBackRequestVidSettings(bool Confirmed);
	void OnRequestBack(bool Confirmed);
	void CreateChild();
	void OnSettingsApplied();
	void BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void Construct();
	void OnFadeOutCompleted();
	void OnResetReactionDefaults(bool Confirmed);
	void ExecuteUbergraph_WB_Container_Settings(int32 EntryPoint, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue, class UCommonButtonBase* K2Node_CustomEvent_Button, TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, int32 Temp_int_Variable_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, bool K2Node_CustomEvent_Confirmed_2, bool K2Node_CustomEvent_Confirmed_1, int32 K2Node_Select_Default, bool CallFunc_IsChildVideoSettings_ReturnValue, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings, bool CallFunc_IsAnySettingDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsScreenResolutionDirty_ReturnValue, bool CallFunc_GetIsFullscreenModeDirty_ReturnValue, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, bool CallFunc_IsChildVideoSettings_ReturnValue_1, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_1, bool CallFunc_BooleanOR_ReturnValue_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_2, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_3, class UWidget* CallFunc_GetChildAt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsChildVideoSettings_ReturnValue_2, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_2, class FText CallFunc_GetVideoChangesRequestText_Result, class UWB_Request_Timer_C* CallFunc_CreateRequestWithTimer_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_IsChildVideoSettings_ReturnValue_3, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsChildVideoSettings_ReturnValue_4, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_4, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsChildVideoSettings_ReturnValue_5, class UWB_Child_VideoSettings_C* CallFunc_IsChildVideoSettings_AsWB_Child_Video_Settings_5, bool K2Node_CustomEvent_Confirmed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface_2, bool K2Node_DynamicCast_bSuccess_2);
};

}


