#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x378 - 0x2E0)
// WidgetBlueprintGeneratedClass WB_Child_Credits.WB_Child_Credits_C
class UWB_Child_Credits_C : public UWB_Child_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   InputSwitchListener;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_65;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUsingGamepad;                                     // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          Headline_Style;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>          Body_Style;                                        // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       InterpValue;                                       // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FText>               CreditEntries;                                     // 0x320(0x50)(Edit, BlueprintVisible)
	double                                       ScrollSpeed;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Child_Credits_C* GetDefaultObj();

	void CreateAndAddCommonText(TSubclassOf<class UCommonTextStyle> Style, class FText InText, const struct FMargin& InPadding, class UCommonTextBlock* CallFunc_SpawnObject_ReturnValue, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue, class UPanelSlot* CallFunc_AddChildToScrollBox_ReturnValue);
	void SetScrollOffset(float NewScrollOffset);
	class UPanelSlot* AddChildToScrollBox(class UWidget* Content, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void OnInputMethodChanged(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_Child_Credits(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bUsingGamepad, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Finterpolate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class USpacer* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChildToScrollBox_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class USpacer* CallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* CallFunc_AddChildToScrollBox_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool Temp_bool_IsClosed_Variable, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_MapRangeClamped_OutRangeB_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast_1);
};

}


