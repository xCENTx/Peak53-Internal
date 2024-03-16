#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B1 (0x17A1 - 0x14F0)
// WidgetBlueprintGeneratedClass WB_Button_State.WB_Button_State_C
class UWB_Button_State_C : public UCommonButtonBase
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
	class USizeBox*                              SB_States;                                         // 0x1530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Text;                                           // 0x1538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Switch_L;                                          // 0x1540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Switch_R;                                          // 0x1548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Button;                                       // 0x1550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_State;                                        // 0x1558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Button_Text;                                  // 0x1560(0x18)(Edit, BlueprintVisible)
	class FText                                  Text_Button_Description;                           // 0x1578(0x18)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                 Text_Button_Info;                                  // 0x1590(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Text_States;                                       // 0x1680(0x10)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                 Text_State_Info;                                   // 0x1690(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         bUsingGamepad;                                     // 0x1780(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Current_State;                                     // 0x1784(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x1788(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x1790(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bSkipCallback;                                     // 0x17A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Button_State_C* GetDefaultObj();

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1);
	void SetTextVisibility(class UWidget* InText, bool bVisible, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	int32 ClampStateIndex(int32 Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	class FText GetCurrentStateText(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText K2Node_Select_Default);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key, const struct FKeyEvent& KeyEvent, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1);
	void SetInputSwitcherVisibility(bool bVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetInputSwitcherGamepad(bool IsGamepad, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default);
	void SetTextInfo(class UCommonTextBlock* InText, struct FS_TextInfo_PMM& TextInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasColorChanged_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetOpacity_InOpacity_ImplicitCast);
	void SetButtonTextInfo(enum class ECommonButtonState InState, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_ReturnValue_1);
	struct FS_TextInfo_PMM FindTextInfoByButtonState(enum class ECommonButtonState State, struct FS_ButtonTextInfo_PMM& S_ButtonTextInfo_PMM, enum class ECommonButtonState Temp_byte_Variable, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_1, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_2, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_3, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_4, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_5, const struct FS_TextInfo_PMM& K2Node_Select_Default);
	void SetStateText(class FText InText);
	void SetButtonText(class FText InText);
	void AlignStateTextWidth(double CallFunc_GetSize_Width, double CallFunc_GetSize_Height, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void BP_OnClicked();
	void BP_OnSelected();
	void BP_OnDeselected();
	void BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void Construct();
	void BP_OnEnabled();
	void BP_OnDisabled();
	void PreConstruct(bool IsDesignTime);
	void OnLeftExecute();
	void OnRightExecute();
	void BndEvt__WB_Button_State_B_Left_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_Button_State_B_Right_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void SetCurrentState(int32 InState, bool SkipCallback);
	void ExecuteUbergraph_WB_Button_State(int32 EntryPoint, bool CallFunc_GetIsEnabled_ReturnValue, enum class ECommonButtonState Temp_byte_Variable, enum class ECommonButtonState Temp_byte_Variable_1, bool CallFunc_GetIsEnabled_ReturnValue_1, bool Temp_bool_Variable, enum class ECommonButtonState K2Node_Select_Default, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_GetIsEnabled_ReturnValue_2, bool CallFunc_IsHovered_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_GetIsEnabled_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetCurrentStateText_ReturnValue, int32 K2Node_CustomEvent_InState, bool K2Node_CustomEvent_SkipCallback, int32 CallFunc_ClampStateIndex_ReturnValue, class FText CallFunc_GetCurrentStateText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_ClampStateIndex_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GetIsEnabled_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_6, bool CallFunc_GetIsEnabled_ReturnValue_7);
	void OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState);
};

}


