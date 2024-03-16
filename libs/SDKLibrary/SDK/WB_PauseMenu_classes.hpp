#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE9 (0x389 - 0x2A0)
// WidgetBlueprintGeneratedClass WB_PauseMenu.WB_PauseMenu_C
class UWB_PauseMenu_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeButtons;                                       // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeContent;                                       // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_Action_Button_C*                   Action_Quit;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Action_Button_C*                   Action_Select;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_Exit;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_Resume;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_Settings;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Promo_Button_C*                    Button_Settings_Audio;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Promo_Button_C*                    Button_Settings_Controls;                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Promo_Button_C*                    Button_Settings_Credits;                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Promo_Button_C*                    Button_Settings_General;                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Promo_Button_C*                    Button_Settings_Input;                             // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Promo_Button_C*                    Button_Settings_Video;                             // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                     Button_Stats;                                      // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      CommonLoadGuard_0;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Content_Switcher;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GrungeMask_BG;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_ActionWidgets;                                  // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_163;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_290;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputSwitchListener;                               // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Content;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ButtonContent;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BackgroundBlur_C*                  WB_BackgroundBlur;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentlySelectedTabButtonIndex;                   // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Using_Gamepad;                                     // 0x374(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTopLevel;                                        // 0x375(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4444[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Container_Settings_C*              WB_Container_Settings;                             // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_Container_Default_C*               WB_Container_Default;                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PauseMenu_C* GetDefaultObj();

	void Anim_FadeButtons(double PlaybackSpeed, bool Forward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void Anim_FadeContent(double PlaybackSpeed, bool Forward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	class UWB_Container_Base_C* CreateChildWidget(class UClass* Container, class UClass* ChildClass, FDelegateProperty_& OnDeactivated, class UWB_Container_Base_C* CallFunc_Create_ReturnValue);
	void SetTabSwitcherIndex(int32 Index);
	void SetGamepadFocus(class UWidget* FocusObject, bool CallFunc_IsValid_ReturnValue);
	bool IsTopLevelWidget(class UUserWidget* InWidget, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKeyEvent& Key, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue_2);
	class UCommonButtonBase* GetDesiredFocusTarget(bool CustomFocusTarget, class UWB_Text_Button_C* FocusTarget, bool Temp_bool_Variable, class UWB_Text_Button_C* K2Node_Select_Default);
	void Construct();
	void BndEvt__WB_MainMenu_Button_ActionText_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WB_MainMenu_Button_ActionText_1_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WB_MainMenu_Button_ActionText_2_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WB_MainMenu_Button_ActionText_4_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WB_MainMenu_CommonActionWidget_127_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void BndEvt__WB_MainMenu_Button_Settings_Audio_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_MainMenu_Button_Settings_Controls_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_MainMenu_Button_Settings_Credits_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_MainMenu_Button_Settings_General_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_MainMenu_Button_Settings_Video_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnGamepad_QuitGame();
	void BndEvt__WB_MainMenu_Button_Settings_Input_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void RefreshInputMethod();
	void BndEvt__WB_PauseMenu_Button_Resume_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_PauseMenu_Button_Exit_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ClickResume();
	void Quit_Reaction(bool Confirmed);
	void OnwGeneralSettingsDeactivated();
	void OnInputSettingsDeactivated();
	void OnVideoSettingsDeactivated();
	void OnAudioSettingsDeactivated();
	void OnCreditsDeactivated();
	void OnControlSettingsDeactivated();
	void OnFadeCompleted();
	void CustomEvent(bool Confirmed);
	void OnFadeCompleted_Event_0();
	void ExecuteUbergraph_WB_PauseMenu(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_1, class UWB_Container_Default_C* K2Node_DynamicCast_AsWB_Container_Default, bool K2Node_DynamicCast_bSuccess_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, bool K2Node_ComponentBoundEvent_Selected_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, bool K2Node_ComponentBoundEvent_Selected_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, bool K2Node_ComponentBoundEvent_Selected_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, bool K2Node_ComponentBoundEvent_Selected, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_Confirmed_1, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_2, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_1, bool K2Node_DynamicCast_bSuccess_2, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_5, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_3, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_2, bool K2Node_DynamicCast_bSuccess_3, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_4, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_3, bool K2Node_DynamicCast_bSuccess_4, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_7, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_8, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_5, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_4, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_Confirmed, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
};

}


