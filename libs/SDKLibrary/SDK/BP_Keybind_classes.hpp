#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x3C8 - 0x278)
// WidgetBlueprintGeneratedClass BP_Keybind.BP_Keybind_C
class UBP_Keybind_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BindNameText;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     KeySelector1;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     KeySelector2;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsAxisBind;                                        // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BindName;                                          // 0x29C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeySelect1;                                        // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeySelect2;                                        // 0x2A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Action;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UInputMappingContext*                  Mapping;                                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FEnhancedActionKeyMapping             Key1;                                              // 0x2B8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnhancedActionKeyMapping             Key2;                                              // 0x340(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_Keybind_C* GetDefaultObj();

	void Find_Action_Keys(TArray<struct FEnhancedActionKeyMapping>* ActionKeys, const TArray<struct FEnhancedActionKeyMapping>& ActionKeysL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void InitializeKeybind(class FName BindName, bool IsAxis, class UInputAction* Action, class UInputMappingContext* Mapping, const TArray<struct FInputAxisKeyMapping>& AxisMappingsL, const TArray<struct FInputActionKeyMapping>& ActionMappingsL, TArray<struct FEnhancedActionKeyMapping>& CallFunc_Find_Action_Keys_ActionKeys, bool CallFunc_IsValid_ReturnValue, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord, TArray<struct FEnhancedActionKeyMapping>& CallFunc_Find_Action_Keys_ActionKeys_1, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FInputChord& K2Node_MakeStruct_InputChord_1, class FText CallFunc_Conv_NameToText_ReturnValue);
	void FindAxisBind(class FName ActionBindName, int32 BindIndex, bool* BindFound, struct FInputAxisKeyMapping* ActionBind, const TArray<struct FInputAxisKeyMapping>& MappingsL, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void FindActionBind(class FName ActionBindName, int32 BindIndex, bool* BindFound, struct FInputActionKeyMapping* ActionBind, const TArray<struct FInputActionKeyMapping>& MappingsL, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void RebindAction(struct FInputChord& Key, int32 RebindIndex, const struct FEnhancedActionKeyMapping& KeyTempL, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void RebindAxis(struct FInputChord& Key, int32 RebindIndex, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item);
	void KeySelect1Scroll(bool Up);
	void KeySelect2Scroll(bool Up);
	void BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void ExecuteUbergraph_BP_Keybind(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_CustomEvent_Up_1, bool K2Node_CustomEvent_Up, const struct FInputChord& K2Node_MakeStruct_InputChord, const struct FInputChord& K2Node_MakeStruct_InputChord_1, const struct FInputChord& K2Node_MakeStruct_InputChord_2, const struct FInputChord& K2Node_MakeStruct_InputChord_3, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey);
};

}


