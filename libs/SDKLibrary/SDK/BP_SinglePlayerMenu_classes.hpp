#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x428 - 0x300)
// WidgetBlueprintGeneratedClass BP_SinglePlayerMenu.BP_SinglePlayerMenu_C
class UBP_SinglePlayerMenu_C : public UBP_MasterMenuPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Backround;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuButton_C*                      BP_WidgetToggleButton;                             // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuButton_C*                      BP_WidgetToggleButton_2;                           // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuButton_C*                      BP_WidgetToggleButton_149;                         // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Subtitle;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          BackroundColor;                                    // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SubtitleText;                                      // 0x348(0x18)(Edit, BlueprintVisible)
	class FText                                  TitleText;                                         // 0x360(0x18)(Edit, BlueprintVisible)
	struct FSlateFontInfo                        SubtitleFont;                                      // 0x378(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        TitleFont;                                         // 0x3D0(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_SinglePlayerMenu_C* GetDefaultObj();

	void BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType);
	void BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_149_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType);
	void BindOnClicked(enum class E_WidgetToggleType WidgetToggleType);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_SinglePlayerMenu(int32 EntryPoint, enum class E_WidgetToggleType K2Node_ComponentBoundEvent_WidgetToggleType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_WidgetToggleType K2Node_ComponentBoundEvent_WidgetToggleType_1, enum class E_WidgetToggleType K2Node_CustomEvent_WidgetToggleType, bool K2Node_Event_IsDesignTime);
};

}


