#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B8 (0x17A8 - 0x14F0)
// WidgetBlueprintGeneratedClass WB_Button_Slider.WB_Button_Slider_C
class UWB_Button_Slider_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_State_Arrow_C*              B_Left;                                            // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_State_Arrow_C*              B_Right;                                           // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   Icon_Left;                                         // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   Icon_Right;                                        // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputDetector;                                     // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_L;                                              // 0x1520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_R;                                              // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Slider;                                         // 0x1530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_States;                                         // 0x1538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         Slider;                                            // 0x1540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Switch_L;                                          // 0x1548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Switch_R;                                          // 0x1550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Button;                                       // 0x1558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Value;                                        // 0x1560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Button_Text;                                  // 0x1568(0x18)(Edit, BlueprintVisible)
	class FText                                  Text_Button_Description;                           // 0x1580(0x18)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                 Text_Button_Info;                                  // 0x1598(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_ButtonTextInfo_PMM                 Text_State_Info;                                   // 0x1688(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         bUsingGamepad;                                     // 0x1778(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x1779(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkipCallback;                                     // 0x177A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4387[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentValue;                                      // 0x177C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinValue;                                          // 0x1780(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxValue;                                          // 0x1784(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StepSize;                                          // 0x1788(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SliderValue;                                       // 0x178C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x1790(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       CacheValue;                                        // 0x17A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Button_Slider_C* GetDefaultObj();

	void SetSliderWidth(float PC_Width, float Gamepad_Width, bool Temp_bool_Variable, float K2Node_Select_Default);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetAnalogValue_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1);
	float Slider_GetValue(float CallFunc_GetValue_ReturnValue);
	double Slider_ClampValue(double Value, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_FClamp_Min_ImplicitCast);
	void Slider_SetValue(float Value);
	void Slider_SetMaxValue(float MaxValue);
	void Slider_SetMinValue(float MinValue);
	void Slider_SetStepSize(float StepSize);
	void SetTextVisibility(class UWidget* InText, bool bVisible, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key, const struct FKeyEvent& KeyEvent, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1);
	void SetInputSwitcherVisibility(bool bVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetInputSwitcherGamepad(bool IsGamepad, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default);
	void SetTextInfo(class UCommonTextBlock* InText, struct FS_TextInfo_PMM& TextInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasColorChanged_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetOpacity_InOpacity_ImplicitCast);
	void SetButtonTextInfo(enum class ECommonButtonState InState, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue_1);
	struct FS_TextInfo_PMM FindTextInfoByButtonState(enum class ECommonButtonState State, struct FS_ButtonTextInfo_PMM& S_ButtonTextInfo_PMM, enum class ECommonButtonState Temp_byte_Variable, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_1, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_2, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_3, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_4, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_5, const struct FS_TextInfo_PMM& K2Node_Select_Default);
	void SetValueText(class FText InText);
	void SetButtonText(class FText InText);
	void AlignStateTextWidth();
	void BP_OnDeselected();
	void BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void BP_OnSelected();
	void Construct();
	void BP_OnClicked();
	void BP_OnUnhovered();
	void OnLeftExecute();
	void OnRightExecute();
	void BndEvt__WB_Button_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BP_OnHovered();
	void CustomValueChanged(double Value);
	void SetSliderValue(float InValue, bool bSkipCallback);
	void BP_OnEnabled();
	void SetSliderText(float Value);
	void BP_OnDisabled();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Button_Slider(int32 EntryPoint, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool Temp_bool_Variable, enum class ECommonButtonState Temp_byte_Variable, bool K2Node_ComponentBoundEvent_bUsingGamepad, enum class ECommonButtonState Temp_byte_Variable_1, bool CallFunc_IsHovered_ReturnValue, bool Temp_bool_Variable_1, enum class ECommonButtonState K2Node_Select_Default, float CallFunc_GetValue_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Slider_ClampValue_ReturnValue, float K2Node_ComponentBoundEvent_Value, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, float CallFunc_GetValue_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Slider_ClampValue_ReturnValue_1, double K2Node_CustomEvent_Value_1, double CallFunc_Slider_ClampValue_ReturnValue_2, float CallFunc_Slider_GetValue_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float K2Node_CustomEvent_InValue, bool K2Node_CustomEvent_bSkipCallback, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_CustomEvent_Value, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_4, bool K2Node_Event_IsDesignTime, bool CallFunc_GetIsEnabled_ReturnValue_5, bool CallFunc_GetIsEnabled_ReturnValue_6, bool CallFunc_GetIsEnabled_ReturnValue_7, bool CallFunc_GetIsEnabled_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetSliderValue_InValue_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetSliderValue_InValue_ImplicitCast_1, float K2Node_VariableSet_SliderValue_ImplicitCast, float CallFunc_SetSliderText_Value_ImplicitCast, double CallFunc_CustomValueChanged_Value_ImplicitCast, double K2Node_VariableSet_CacheValue_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
	void OnValueChanged__DelegateSignature(class UWB_Button_Slider_C* Button, double Value);
};

}


