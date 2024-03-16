#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x369 (0x1859 - 0x14F0)
// WidgetBlueprintGeneratedClass WB_Button_Input.WB_Button_Input_C
class UWB_Button_Input_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selecting_Anim_R;                                  // 0x14F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selecting_Anim_L;                                  // 0x1500(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_Frame_C*                           Frame_L;                                           // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Frame_C*                           Frame_R;                                           // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     IKS_Left;                                          // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     IKS_Right;                                         // 0x1520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputDetector;                                     // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_States;                                         // 0x1530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_Left;                                            // 0x1538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_Right;                                           // 0x1540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Button;                                       // 0x1548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Button_Text;                                  // 0x1550(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Text_Button_Description;                           // 0x1568(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FS_ButtonTextInfo_PMM                 Text_Button_Info;                                  // 0x1580(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>          Input_TextStyle;                                   // 0x1670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bUsingGamepad;                                     // 0x1678(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x1679(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4540[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ButtonTextInfo_PMM                 Input_Button_Info;                                 // 0x1680(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           SelectedKey_L;                                     // 0x1770(0x20)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputChord                           SelectedKey_R;                                     // 0x1790(0x20)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         CanExecute;                                        // 0x17B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4541[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnKeySelected;                                     // 0x17B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInputChord                           Old_Key_L;                                         // 0x17C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInputChord                           New_Key_L;                                         // 0x17E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInputChord                           Old_Key_R;                                         // 0x1808(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInputChord                           New_Key_R;                                         // 0x1828(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  MappingName;                                       // 0x1848(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       AxisValue;                                         // 0x1850(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsAxisMapping;                                     // 0x1858(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Button_Input_C* GetDefaultObj();

	void SetInputTextButtonState(enum class ECommonButtonState State, bool bIsLeft, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue);
	void SetInputTextInfo(struct FS_TextInfo_PMM& TextInfo);
	class FText InputKeySelector_FindCurrentText(class UInputKeySelector* InputKeySelector, bool Temp_bool_Variable, bool CallFunc_GetIsSelectingKey_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_Key_GetDisplayName_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetAnalogValue_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1);
	void SetTextVisibility(class UWidget* InText, bool bVisible, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key, const struct FKeyEvent& KeyEvent, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1);
	void SetTextInfo(class UCommonTextBlock* InText, struct FS_TextInfo_PMM& TextInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasColorChanged_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetOpacity_InOpacity_ImplicitCast);
	void SetButtonTextInfo(enum class ECommonButtonState InState, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue);
	struct FS_TextInfo_PMM FindTextInfoByButtonState(enum class ECommonButtonState State, struct FS_ButtonTextInfo_PMM& S_ButtonTextInfo_PMM, enum class ECommonButtonState Temp_byte_Variable, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_1, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_2, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_3, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_4, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_5, const struct FS_TextInfo_PMM& K2Node_Select_Default);
	void SetButtonText(class FText InText);
	void AlignStateTextWidth();
	void PreConstruct(bool IsDesignTime);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void BP_OnSelected();
	void BP_OnDeselected();
	void BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnLeftExecute();
	void OnRightExecute();
	void BndEvt__WB_Button_Input_IKS_Left_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__WB_Button_Input_IKS_Left_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WB_Button_Input_IKS_Right_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WB_Button_Input_IKS_Right_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void ExecuteUbergraph_WB_Button_Input(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_1, bool Temp_bool_IsClosed_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_2, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_Variable_2, int32 Temp_int_Variable_1, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_GetIsEnabled_ReturnValue, enum class ECommonButtonState Temp_byte_Variable_2, bool Temp_bool_Variable_3, int32 K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, enum class EUMGSequencePlayMode Temp_byte_Variable_3, enum class ECommonButtonState Temp_byte_Variable_4, bool Temp_bool_Variable_4, enum class ECommonButtonState K2Node_Select_Default_2, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool Temp_bool_Has_Been_Initd_Variable_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_IsClosed_Variable_6, bool Temp_bool_Has_Been_Initd_Variable_6, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, class FText CallFunc_InputKeySelector_FindCurrentText_ReturnValue, class FText CallFunc_InputKeySelector_FindCurrentText_ReturnValue_1, class FText CallFunc_InputKeySelector_FindCurrentText_ReturnValue_2, class FText CallFunc_InputKeySelector_FindCurrentText_ReturnValue_3, bool CallFunc_GetIsSelectingKey_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_7, bool CallFunc_GetIsSelectingKey_ReturnValue_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, class FText CallFunc_InputKeySelector_FindCurrentText_ReturnValue_4, class FText CallFunc_InputKeySelector_FindCurrentText_ReturnValue_5, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue_2, bool CallFunc_GetIsEnabled_ReturnValue_3, bool CallFunc_GetIsEnabled_ReturnValue_4, bool CallFunc_GetIsEnabled_ReturnValue_5, int32 Temp_int_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_5, enum class EUMGSequencePlayMode K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Variable_3, bool Temp_bool_IsClosed_Variable_7, int32 K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1);
	void OnKeySelected__DelegateSignature(const struct FInputChord& OldKey, const struct FInputChord& NewKey, class UWB_Button_Input_C* Button, class FName MappingName, class FText MappingNameText, double AxisValue, bool IsAxisMapping);
};

}


