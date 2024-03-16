#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2D0 - 0x278)
// WidgetBlueprintGeneratedClass W_SettingsBar.W_SettingsBar_C
class UW_SettingsBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          ProgressBar_Settings;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_Setting;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Name;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Setting;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_SettingsData                       SettingsData;                                      // 0x2A0(0x24)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_3DD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ActualValue;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SettingsBar_C* GetDefaultObj();

	void SetSliderValue(double Value, double Local_Value, bool Local_MakeSlider_, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Lerp_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_1, float CallFunc_SetValue_InValue_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Slider_Setting_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_W_SettingsBar(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_SetSliderValue_Value_ImplicitCast, double CallFunc_SetSliderValue_Value_ImplicitCast_1);
};

}


