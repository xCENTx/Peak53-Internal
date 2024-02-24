#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F0 - 0x278)
// WidgetBlueprintGeneratedClass Options-Graphics.Options-Graphics_C
class UOptionsMinusGraphics_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               ApplySettings;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BackButton;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Defaults;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMinusGraphicsMinusItem_C*      RenderQuality;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMinusGraphicsMinusItem_C*      ResolutionMode;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMinusGraphicsMinusItem_C*      ScreenResolution;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Title;                                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnBackRequested;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCustomUserSettings_C*                 Custom_User_Settings;                              // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                Slot_Name;                                         // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FGraphicsPreset>               Presets;                                           // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UOptionsMinusGraphics_C* GetDefaultObj();

	void SetUICustomPreset();
	void LoadCustomSettings(class UCustomUserSettings_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCustomUserSettings_C* K2Node_DynamicCast_AsCustom_User_Settings, bool K2Node_DynamicCast_bSuccess);
	void FindPresetByName(class FText PresetName, bool* IsFound, struct FGraphicsPreset* Preset, int32* PresetID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGraphicsPreset& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void GeneratePresetItems();
	void SetUICurrentPreset();
	void ApplyPreset(int32 PresetID, class FText PresetLabel);
	void ApplyFPSDisplay(bool IsOn);
	void SetUICurrentFPSDisplay();
	void SetUICurrentVSync();
	void SetUICurrentScalabilityLevel(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded);
	void SetUICurrentScreenResolution(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_SetCurrentItemByIndex_Succeded, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetUICurrentScreenMode(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded);
	void SetUICurentMaxFramerate(int32 BestIndex);
	void FilterItemsBySupportedResolutions(const TArray<class FText>& ValidItems, TSet<struct FIntPoint> AvailableResolutions, const TArray<struct FIntPoint>& ValidResolutions, const TArray<struct FIntPoint>& TargetResolutions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FIntPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, class FText CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int32 CallFunc_Array_Add_ReturnValue_2);
	void OnMaxFramerateChanged(int32 Index, class FText Label);
	void UpdateMaxFramerate(double FrameRate);
	void UpdateCurrentValuesInUI();
	void OnPresetChanged(int32 Index, class FText Label);
	void UpdatePreset(class FText PresetLabel);
	void OnRenderQualityChanged(int32 Index, class FText Label);
	void UpdateScalabilityLevel(int32 ScalabilityLevel);
	void OnVirtualShadowsChanged(int32 Index, class FText Label);
	void UpdateVirtualShadows();
	void OnVSyncChanged(int32 Index, class FText Label);
	void UpdateVSync(bool IsOn);
	void OnFPSDisplayChanged(int32 Index, class FText Label);
	void OnScreenModeChanged(int32 Index, class FText Label);
	void UpdateFPSDisplay(bool IsOn);
	void BndEvt__OptionsMinusGraphics_Defaults_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OptionsMinusGraphics_ApplySettings_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void UpdatePresetUIValues(const struct FGraphicsPreset& Preset, int32 PresetID);
	void UpdateScreenMode(enum class EWindowMode Mode);
	void BndEvt__OptionsMinusGraphics_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateScreenResolution(const struct FIntPoint& Resolution);
	void OnOpened();
	void OnClosed();
	void OnScreenResolutionChanged(int32 Index, class FText Label);
	void UpdateResolutionChangeInteractibility(enum class EWindowMode CurrentMode);
	void BndEvt__OptionsMinusGraphics_RenderQuality_K2Node_ComponentBoundEvent_2_OnItemChanged__DelegateSignature(int32 Index, class FText Label);
	void BndEvt__OptionsMinusGraphics_ResolutionMode_K2Node_ComponentBoundEvent_4_OnItemChanged__DelegateSignature(int32 Index, class FText Label);
	void BndEvt__OptionsMinusGraphics_ScreenResolution_K2Node_ComponentBoundEvent_5_OnItemChanged__DelegateSignature(int32 Index, class FText Label);
	void ExecuteUbergraph_OptionsMinusGraphics(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index, class FText K2Node_ComponentBoundEvent_Label, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 K2Node_CustomEvent_Index_7, class FText K2Node_CustomEvent_Label_7, double K2Node_CustomEvent_Framerate, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, int32 K2Node_CustomEvent_Index_6, class FText K2Node_CustomEvent_Label_6, class FText K2Node_CustomEvent_PresetLabel, int32 K2Node_CustomEvent_Index_5, class FText K2Node_CustomEvent_Label_5, int32 K2Node_CustomEvent_ScalabilityLevel, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool Temp_bool_Variable_2, enum class EWindowMode Temp_byte_Variable, int32 K2Node_CustomEvent_Index_4, class FText K2Node_CustomEvent_Label_4, int32 K2Node_CustomEvent_Index_3, class FText K2Node_CustomEvent_Label_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, bool K2Node_CustomEvent_IsOn_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_Index_2, class FText K2Node_CustomEvent_Label_2, int32 K2Node_CustomEvent_Index_1, class FText K2Node_CustomEvent_Label_1, bool K2Node_CustomEvent_IsOn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SaveGameToSlot_ReturnValue, enum class EWindowMode Temp_byte_Variable_1, enum class EWindowMode Temp_byte_Variable_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, enum class EWindowMode Temp_byte_Variable_3, const struct FGraphicsPreset& K2Node_CustomEvent_Preset, int32 K2Node_CustomEvent_PresetID, enum class EWindowMode K2Node_CustomEvent_Mode, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EWindowMode K2Node_Select_Default, const struct FIntPoint& K2Node_CustomEvent_Resolution, bool Temp_bool_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_4, int32 Temp_int_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Select_Default_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool K2Node_Select_Default_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, int32 K2Node_CustomEvent_Index, class FText K2Node_CustomEvent_Label, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, enum class EWindowMode K2Node_CustomEvent_CurrentMode, int32 CallFunc_Conv_StringToInt_ReturnValue, bool K2Node_Select_Default_3, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int32 K2Node_ComponentBoundEvent_Index_2, class FText K2Node_ComponentBoundEvent_Label_2, int32 K2Node_ComponentBoundEvent_Index_1, class FText K2Node_ComponentBoundEvent_Label_1, float CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast);
	void OnBackRequested__DelegateSignature();
};

}


