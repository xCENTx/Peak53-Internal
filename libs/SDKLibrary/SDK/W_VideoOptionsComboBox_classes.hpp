#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2A9 - 0x278)
// WidgetBlueprintGeneratedClass W_VideoOptionsComboBox.W_VideoOptionsComboBox_C
class UW_VideoOptionsComboBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                       ComboBoxString_105;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SettingTitle;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                  New_FirstKey;                                      // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class E_Video                           InputName;                                         // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_VideoOptionsComboBox_C* GetDefaultObj();

	class FText GetText(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void BndEvt__W_GameOptionsComboBox_ComboBoxString_105_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void LoadOptionSettings();
	void ExecuteUbergraph_W_VideoOptionsComboBox(int32 EntryPoint, int32 Temp_int_Variable, enum class E_Video Temp_byte_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, enum class EWindowMode CallFunc_GetPreferredFullscreenMode_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32 CallFunc_GetTextureQuality_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchString_CmpSuccess, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_NotEqual_StriStri_ReturnValue, int32 CallFunc_FindOptionIndex_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, float CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast);
};

}


