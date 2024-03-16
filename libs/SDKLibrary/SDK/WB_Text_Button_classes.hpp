#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18D (0x167D - 0x14F0)
// WidgetBlueprintGeneratedClass WB_Text_Button.WB_Text_Button_C
class UWB_Text_Button_C : public UWB_Base_Button_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               B_InputAction;                                     // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               b_TextColor;                                       // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ButtonText;                                        // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      NewsIndicator;                                     // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_InputActionWidget;                              // 0x1520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_NewsIndicator;                                  // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InText;                                            // 0x1530(0x18)(Edit, BlueprintVisible)
	bool                                         bIsDesignTime;                                     // 0x1548(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Action_Widget;                                // 0x1549(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Action_Widget_Scale_Size;                          // 0x1550(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Action_Widget_Color_Override;                      // 0x1558(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFocusMakesSelection;                              // 0x1568(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Display_News_Indicator;                            // 0x1569(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveNewsIndicatorOnClicked;                      // 0x156A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           NewsIndicatorBrush;                                // 0x1570(0xD0)(Edit, BlueprintVisible)
	bool                                         NewsIndicator_UseGlobalColor;                      // 0x1640(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGlobalColors                     NewsIndicator_GlobalColorType;                     // 0x1641(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewsIndicator_Size;                                // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotIndex;                                         // 0x1650(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       Neighbours;                                        // 0x1658(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_TextButtonInfo                     TextColorOverrides;                                // 0x1668(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActionWidget_ShowAlways;                           // 0x1674(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSelectionGroup;                                // 0x1675(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectionGroup;                                    // 0x1678(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAlignLeft;                                        // 0x167C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Text_Button_C* GetDefaultObj();

	void SetButtonState(enum class ECommonButtonState State, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, enum class ECommonButtonState Temp_byte_Variable, const struct FS_GlobalColorOption& K2Node_Select_Default, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1);
	void DisplayNewsIndicator(bool bDisplayNewsIndicator, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void DisplayInputAction(bool bShow, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetInputActionWidgetHasInput_ReturnValue);
	bool GetInputActionWidgetHasInput(const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	bool GetHasTriggeringInputAction(bool CallFunc_IsValid_ReturnValue);
	bool GetHasTextOverride(bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class FText GetButtonText(bool Temp_bool_Variable, class FText CallFunc_GetInputAction_DisplayName_DisplayName, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
	void GetInputAction_DisplayName(class FText* DisplayName, const struct FDataTableRowHandle& CallFunc_GetInputAction_InputActionRow, bool CallFunc_GetInputAction_ReturnValue, const struct FCommonInputActionDataBase& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnCurrentTextStyleChanged();
	void BP_OnDeselected();
	void BP_OnSelected();
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void BndEvt__Text_Button_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_WB_Text_Button(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetButtonText_ReturnValue, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue_1, TArray<class UWB_Base_Button_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, enum class EHorizontalAlignment Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, enum class EHorizontalAlignment Temp_byte_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, bool CallFunc_HasColorChanged_ReturnValue, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_GetSelected_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue_2, bool Temp_bool_Variable_2, const struct FLinearColor& K2Node_Select_Default, bool K2Node_ComponentBoundEvent_bUsingGamepad, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, enum class EHorizontalAlignment K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, int32 Temp_int_Array_Index_Variable, class UWB_Base_Button_C* CallFunc_Array_Get_Item, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UWB_Text_Button_C* K2Node_DynamicCast_AsWB_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetSelected_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1);
};

}


