#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2B8 - 0x278)
// WidgetBlueprintGeneratedClass BP_ResolutionSetting.BP_ResolutionSetting_C
class UBP_ResolutionSetting_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               BackButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               NextButton;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ScalerText;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Selected;                                          // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ScalerSetting_C*                   WindowSettingWidget;                               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                     ResList;                                           // 0x2A8(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_ResolutionSetting_C* GetDefaultObj();

	void CurrentSelection(struct FIntPoint* Output, const struct FIntPoint& CallFunc_Array_Get_Item);
	void PopulateResArray(bool CurrentAddedL, const struct FIntPoint& ResL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_FTrunc_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue);
	void CurrentSettingValue(int32* Index, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int32 CallFunc_Array_Find_ReturnValue);
	void ResetSelection(const struct FIntPoint& CallFunc_CurrentSelection_Output, int32 CallFunc_CurrentSettingValue_Index, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ChangeSettingValue(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item);
	void NextOption(const struct FIntPoint& CallFunc_CurrentSelection_Output, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void PreviousOption(const struct FIntPoint& CallFunc_CurrentSelection_Output, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void WindowModeChanged(int32 Value);
	void Construct();
	void ExecuteUbergraph_BP_ResolutionSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FIntPoint& CallFunc_CurrentSelection_Output, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_CustomEvent_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1);
};

}


