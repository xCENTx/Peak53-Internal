#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2D8 - 0x2A0)
// WidgetBlueprintGeneratedClass WB_BackgroundBlur.WB_BackgroundBlur_C
class UWB_BackgroundBlur_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_Background_Color;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_Grunge_Background;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       Blur;                                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFadeCompleted;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_BackgroundBlur_C* GetDefaultObj();

	void FadeIn(double PlaybackSpeed);
	void FadeOut(double PlaybackSpeed);
	void PreConstruct(bool IsDesignTime);
	void OnFadeInFinished();
	void OnFadeOutFinished();
	void ExecuteUbergraph_WB_BackgroundBlur(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_3, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EUMGSequencePlayMode K2Node_Select_Default_2, double K2Node_CustomEvent_PlaybackSpeed_1, double K2Node_CustomEvent_PlaybackSpeed, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1);
	void OnFadeCompleted__DelegateSignature();
};

}


