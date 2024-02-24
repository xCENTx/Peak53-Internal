#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4B4 (0x72C - 0x278)
// WidgetBlueprintGeneratedClass BP_MenuButton.BP_MenuButton_C
class UBP_MenuButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      TextPulse;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               RootButton;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_WidgetToggleType                ToggleType;                                        // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonText;                                        // 0x2A0(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_3B12[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          ButtonStyle;                                       // 0x2D0(0x3F0)(Edit, BlueprintVisible)
	struct FSlateFontInfo                        TextFont;                                          // 0x6C0(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                           TextColor;                                         // 0x718(0x14)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_MenuButton_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__RootButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_MenuButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType);
};

}


