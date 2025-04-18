#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Text_Button

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "S_TextButtonInfo_structs.hpp"
#include "SlateCore_structs.hpp"
#include "WB_Base_Button_classes.hpp"
#include "EGlobalColors_structs.hpp"
#include "ECommonButtonState_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Text_Button.WB_Text_Button_C
// 0x01A0 (0x1690 - 0x14F0)
class UWB_Text_Button_C final : public UWB_Base_Button_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                B_InputAction;                                     // 0x14F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                b_TextColor;                                       // 0x1500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ButtonText;                                        // 0x1508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       NewsIndicator;                                     // 0x1510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x1518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_InputActionWidget;                              // 0x1520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_NewsIndicator;                                  // 0x1528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x1530(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bIsDesignTime;                                     // 0x1548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Action_Widget;                                // 0x1549(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34FF[0x6];                                     // 0x154A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Action_Widget_Scale_Size;                          // 0x1550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Action_Widget_Color_Override;                      // 0x1558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFocusMakesSelection;                              // 0x1568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Display_News_Indicator;                            // 0x1569(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RemoveNewsIndicatorOnClicked;                      // 0x156A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3500[0x5];                                     // 0x156B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            NewsIndicatorBrush;                                // 0x1570(0x00D0)(Edit, BlueprintVisible)
	bool                                          NewsIndicator_UseGlobalColor;                      // 0x1640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGlobalColors                                 NewsIndicator_GlobalColorType;                     // 0x1641(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3501[0x6];                                     // 0x1642(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NewsIndicator_Size;                                // 0x1648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotIndex;                                         // 0x1650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3502[0x4];                                     // 0x1654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        Neighbours;                                        // 0x1658(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_TextButtonInfo                      TextColorOverrides;                                // 0x1668(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ActionWidget_ShowAlways;                           // 0x1674(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseSelectionGroup;                                // 0x1675(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3503[0x2];                                     // 0x1676(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectionGroup;                                    // 0x1678(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAlignLeft;                                        // 0x167C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3504[0x3];                                     // 0x167D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MyWeaponId;                                        // 0x1680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Text_Button_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void DisplayInputAction(bool bShow);
	void DisplayNewsIndicator(bool bDisplayNewsIndicator);
	void ExecuteUbergraph_WB_Text_Button(int32 EntryPoint);
	class FText GetButtonText();
	bool GetHasTextOverride();
	bool GetHasTriggeringInputAction();
	void GetInputAction_DisplayName(class FText* DisplayName);
	bool GetInputActionWidgetHasInput();
	void OnCurrentTextStyleChanged();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void SetButtonState(ECommonButtonState State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Text_Button_C">();
	}
	static class UWB_Text_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Text_Button_C>();
	}
};
static_assert(alignof(UWB_Text_Button_C) == 0x000010, "Wrong alignment on UWB_Text_Button_C");
static_assert(sizeof(UWB_Text_Button_C) == 0x001690, "Wrong size on UWB_Text_Button_C");
static_assert(offsetof(UWB_Text_Button_C, UberGraphFrame) == 0x0014F0, "Member 'UWB_Text_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, B_InputAction) == 0x0014F8, "Member 'UWB_Text_Button_C::B_InputAction' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, b_TextColor) == 0x001500, "Member 'UWB_Text_Button_C::b_TextColor' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, ButtonText) == 0x001508, "Member 'UWB_Text_Button_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, NewsIndicator) == 0x001510, "Member 'UWB_Text_Button_C::NewsIndicator' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, Overlay_0) == 0x001518, "Member 'UWB_Text_Button_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, SB_InputActionWidget) == 0x001520, "Member 'UWB_Text_Button_C::SB_InputActionWidget' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, SB_NewsIndicator) == 0x001528, "Member 'UWB_Text_Button_C::SB_NewsIndicator' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, InText) == 0x001530, "Member 'UWB_Text_Button_C::InText' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, bIsDesignTime) == 0x001548, "Member 'UWB_Text_Button_C::bIsDesignTime' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, Show_Action_Widget) == 0x001549, "Member 'UWB_Text_Button_C::Show_Action_Widget' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, Action_Widget_Scale_Size) == 0x001550, "Member 'UWB_Text_Button_C::Action_Widget_Scale_Size' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, Action_Widget_Color_Override) == 0x001558, "Member 'UWB_Text_Button_C::Action_Widget_Color_Override' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, bFocusMakesSelection) == 0x001568, "Member 'UWB_Text_Button_C::bFocusMakesSelection' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, Display_News_Indicator) == 0x001569, "Member 'UWB_Text_Button_C::Display_News_Indicator' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, RemoveNewsIndicatorOnClicked) == 0x00156A, "Member 'UWB_Text_Button_C::RemoveNewsIndicatorOnClicked' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, NewsIndicatorBrush) == 0x001570, "Member 'UWB_Text_Button_C::NewsIndicatorBrush' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, NewsIndicator_UseGlobalColor) == 0x001640, "Member 'UWB_Text_Button_C::NewsIndicator_UseGlobalColor' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, NewsIndicator_GlobalColorType) == 0x001641, "Member 'UWB_Text_Button_C::NewsIndicator_GlobalColorType' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, NewsIndicator_Size) == 0x001648, "Member 'UWB_Text_Button_C::NewsIndicator_Size' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, SlotIndex) == 0x001650, "Member 'UWB_Text_Button_C::SlotIndex' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, Neighbours) == 0x001658, "Member 'UWB_Text_Button_C::Neighbours' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, TextColorOverrides) == 0x001668, "Member 'UWB_Text_Button_C::TextColorOverrides' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, ActionWidget_ShowAlways) == 0x001674, "Member 'UWB_Text_Button_C::ActionWidget_ShowAlways' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, bUseSelectionGroup) == 0x001675, "Member 'UWB_Text_Button_C::bUseSelectionGroup' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, SelectionGroup) == 0x001678, "Member 'UWB_Text_Button_C::SelectionGroup' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, bAlignLeft) == 0x00167C, "Member 'UWB_Text_Button_C::bAlignLeft' has a wrong offset!");
static_assert(offsetof(UWB_Text_Button_C, MyWeaponId) == 0x001680, "Member 'UWB_Text_Button_C::MyWeaponId' has a wrong offset!");

}

