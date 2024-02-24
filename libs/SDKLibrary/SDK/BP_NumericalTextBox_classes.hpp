#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2C9 - 0x278)
// WidgetBlueprintGeneratedClass BP_NumericalTextBox.BP_NumericalTextBox_C
class UBP_NumericalTextBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      EditableTextBox_25;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USlider*                               Slider;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  DownName;                                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TurnMappingName;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterLimit;                                    // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxSensitivity;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AimSense_;                                         // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_NumericalTextBox_C* GetDefaultObj();

	void AxisMapping(class FName Name, bool* AxisFound, struct FInputAxisKeyMapping* Output, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateSensitivity(class FText& InText, const struct FInputAxisKeyMapping& AxisMap2, const struct FInputAxisKeyMapping& AxisMap1, bool CallFunc_IsVisible_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, double CallFunc_Conv_StringToDouble_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, double CallFunc_Conv_StringToDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, bool CallFunc_IsNumeric_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, int32 CallFunc_Len_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, double CallFunc_Conv_StringToDouble_ReturnValue_2, int32 CallFunc_Len_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_9, double CallFunc_Conv_StringToDouble_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void Reconstruct();
	void SliderUpdated(float Value);
	void Construct();
	void BndEvt__EditableTextBox_25_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_BP_NumericalTextBox(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_SGK_AimedSense_AimedSense, double CallFunc_SGK_MouseSense_MouseSense, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue_1, float K2Node_CustomEvent_Value, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, class FText K2Node_ComponentBoundEvent_Text, float CallFunc_SetMaxValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, float CallFunc_SetMaxValue_InValue_ImplicitCast_1, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
};

}


