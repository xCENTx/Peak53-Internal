#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x157C - 0x14F0)
// WidgetBlueprintGeneratedClass WB_Quick_Button.WB_Quick_Button_C
class UWB_Quick_Button_C : public UWB_Base_Button_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               B_InputAction;                                     // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               b_TextColor;                                       // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ButtonText;                                        // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_InputActionWidget;                              // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InText;                                            // 0x1518(0x18)(Edit, BlueprintVisible)
	bool                                         bIsDesignTime;                                     // 0x1530(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Action_Widget;                                // 0x1531(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Action_Widget_Scale_Size;                          // 0x1538(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Action_Widget_Color_Override;                      // 0x1540(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFocusMakesSelection;                              // 0x1550(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlotIndex;                                         // 0x1554(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       Neighbours;                                        // 0x1558(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_TextButtonInfo                     TextColorOverrides;                                // 0x1568(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActionWidget_ShowAlways;                           // 0x1574(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSelectionGroup;                                // 0x1575(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectionGroup;                                    // 0x1578(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Quick_Button_C* GetDefaultObj();

	void SetButtonState(enum class ECommonButtonState State, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, enum class ECommonButtonState Temp_byte_Variable, const struct FS_GlobalColorOption& K2Node_Select_Default, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1);
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
	void Activate();
	void ExecuteUbergraph_WB_Quick_Button(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetButtonText_ReturnValue, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue_1, TArray<class UWB_Base_Button_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, enum class ESlateVisibility Temp_byte_Variable_1, class UWB_Base_Button_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UWB_Quick_Button_C* K2Node_DynamicCast_AsWB_Quick_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetSelected_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, bool CallFunc_HasColorChanged_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FLinearColor& K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_GetSelected_ReturnValue_2, bool CallFunc_GetSelected_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


