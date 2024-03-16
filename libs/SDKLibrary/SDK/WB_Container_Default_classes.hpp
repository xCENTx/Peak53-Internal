#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x63 (0x323 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Container_Default.WB_Container_Default_C
class UWB_Container_Default_C : public UWB_Container_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Action_Button_C*                   Action_Back;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Action_Switcher;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_HitBlocker;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_Back;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Foreground_Raster;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Actions_Gamepad;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Actions_PC;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputSwitchListener;                               // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Content;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BackgroundBlur_C*                  WB_BackgroundBlur;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Child_Base_C*                      Child;                                             // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTopLevel;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FullscreenModeDirty;                               // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ScreenResDirty;                                    // 0x322(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Container_Default_C* GetDefaultObj();

	bool IsChildVideoSettings(class UWB_Child_VideoSettings_C** AsWB_Child_Video_Settings, class UWB_Child_VideoSettings_C* K2Node_DynamicCast_AsWB_Child_Video_Settings, bool K2Node_DynamicCast_bSuccess);
	void CreateChildWidget(class UClass* Child_Class, class UWB_Child_Base_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UWB_Child_Base_C* K2Node_DynamicCast_AsWB_Child_Base, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& InKey, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_ClearUserFocus_ReturnValue);
	void SetInputMethod(bool bUsingGamepad);
	void CreateChild();
	void BndEvt__WB_Settings_General_InputSwitchListener_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void Click_Back();
	void BndEvt__WB_Settings_General_Button_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void OnFadeOutCompleted();
	void ExecuteUbergraph_WB_Container_Default(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, TScriptInterface<class IBPi_PMM_Interface_C> K2Node_DynamicCast_AsBPi_PMM_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_CustomEvent_bUsingGamepad, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default);
};

}


