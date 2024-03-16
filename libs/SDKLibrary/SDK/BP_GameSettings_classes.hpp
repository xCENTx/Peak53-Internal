#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x420 - 0x300)
// WidgetBlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C
class UBP_GameSettings_C : public UBP_MasterMenuPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Backround;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowHUDTickbox;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowItemTooltipsTickbox;                           // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Subtitle;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          BackroundColor;                                    // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TitleText;                                         // 0x340(0x18)(Edit, BlueprintVisible)
	class FText                                  SubtitleText;                                      // 0x358(0x18)(Edit, BlueprintVisible)
	struct FSlateFontInfo                        TitleFont;                                         // 0x370(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        SubtitleFont;                                      // 0x3C8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_GameSettings_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CheckBox_127_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_BP_GameSettings(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, class UBP_SGKSettingsSaveData_C* CallFunc_SGK_Options_Save_Settings, bool CallFunc_IsValid_ReturnValue, enum class ECheckBoxState K2Node_Select_Default, bool K2Node_Event_IsDesignTime, enum class ECheckBoxState Temp_byte_Variable_3, bool Temp_bool_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, enum class ECheckBoxState K2Node_Select_Default_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UBP_SGKSettingsSaveData_C* CallFunc_SGK_Options_Save_Settings_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class UBP_SGKSettingsSaveData_C* CallFunc_SGK_Options_Save_Settings_2, bool CallFunc_IsValid_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_ComponentBoundEvent_bIsChecked_1);
};

}


