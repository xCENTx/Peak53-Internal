#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Button_State

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "S_ButtonTextInfo_PMM_structs.hpp"
#include "ECommonButtonState_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Button_State.WB_Button_State_C
// 0x02C0 (0x17B0 - 0x14F0)
class UWB_Button_State_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_State_Arrow_C*               B_Left;                                            // 0x14F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_State_Arrow_C*               B_Right;                                           // 0x1500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Icon_Left;                                         // 0x1508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Icon_Right;                                        // 0x1510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputDetector;                                     // 0x1518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_L;                                              // 0x1520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_R;                                              // 0x1528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_States;                                         // 0x1530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Text;                                           // 0x1538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*                Switch_L;                                          // 0x1540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*                Switch_R;                                          // 0x1548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Button;                                       // 0x1550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_State;                                        // 0x1558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text_Button_Text;                                  // 0x1560(0x0018)(Edit, BlueprintVisible)
	class FText                                   Text_Button_Description;                           // 0x1578(0x0018)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                  Text_Button_Info;                                  // 0x1590(0x00F0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           Text_States;                                       // 0x1680(0x0010)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                  Text_State_Info;                                   // 0x1690(0x00F0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          bUsingGamepad;                                     // 0x1780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B85[0x3];                                     // 0x1781(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Current_State;                                     // 0x1784(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDesignTime;                                     // 0x1788(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B86[0x7];                                     // 0x1789(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnStateChanged;                                    // 0x1790(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSkipCallback;                                     // 0x17A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AlignStateTextWidth();
	void BndEvt__WB_Button_State_B_Left_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_Button_State_B_Right_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WB_Button_State_InputDetector_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool Param_bUsingGamepad);
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	int32 ClampStateIndex(int32 Value);
	void Construct();
	void ExecuteUbergraph_WB_Button_State(int32 EntryPoint);
	struct FS_TextInfo_PMM FindTextInfoByButtonState(ECommonButtonState State, const struct FS_ButtonTextInfo_PMM& S_ButtonTextInfo_PMM);
	class FText GetCurrentStateText();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnLeftExecute();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnRightExecute();
	void OnStateChanged__DelegateSignature(class UWB_Button_State_C* Button, int32 NewState);
	void PreConstruct(bool IsDesignTime);
	void SetButtonText(const class FText& InText);
	void SetButtonTextInfo(ECommonButtonState InState);
	void SetCurrentState(int32 InState, bool SkipCallback);
	void SetInputSwitcherGamepad(bool IsGamepad);
	void SetInputSwitcherVisibility(bool bVisible);
	void SetStateText(const class FText& InText);
	void SetTextInfo(class UCommonTextBlock* InText, const struct FS_TextInfo_PMM& TextInfo);
	void SetTextVisibility(class UWidget* InText, bool bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Button_State_C">();
	}
	static class UWB_Button_State_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Button_State_C>();
	}
};
static_assert(alignof(UWB_Button_State_C) == 0x000010, "Wrong alignment on UWB_Button_State_C");
static_assert(sizeof(UWB_Button_State_C) == 0x0017B0, "Wrong size on UWB_Button_State_C");
static_assert(offsetof(UWB_Button_State_C, UberGraphFrame) == 0x0014F0, "Member 'UWB_Button_State_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, B_Left) == 0x0014F8, "Member 'UWB_Button_State_C::B_Left' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, B_Right) == 0x001500, "Member 'UWB_Button_State_C::B_Right' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Icon_Left) == 0x001508, "Member 'UWB_Button_State_C::Icon_Left' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Icon_Right) == 0x001510, "Member 'UWB_Button_State_C::Icon_Right' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, InputDetector) == 0x001518, "Member 'UWB_Button_State_C::InputDetector' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, SB_L) == 0x001520, "Member 'UWB_Button_State_C::SB_L' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, SB_R) == 0x001528, "Member 'UWB_Button_State_C::SB_R' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, SB_States) == 0x001530, "Member 'UWB_Button_State_C::SB_States' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, SB_Text) == 0x001538, "Member 'UWB_Button_State_C::SB_Text' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Switch_L) == 0x001540, "Member 'UWB_Button_State_C::Switch_L' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Switch_R) == 0x001548, "Member 'UWB_Button_State_C::Switch_R' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Text_Button) == 0x001550, "Member 'UWB_Button_State_C::Text_Button' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Text_State) == 0x001558, "Member 'UWB_Button_State_C::Text_State' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Text_Button_Text) == 0x001560, "Member 'UWB_Button_State_C::Text_Button_Text' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Text_Button_Description) == 0x001578, "Member 'UWB_Button_State_C::Text_Button_Description' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Text_Button_Info) == 0x001590, "Member 'UWB_Button_State_C::Text_Button_Info' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Text_States) == 0x001680, "Member 'UWB_Button_State_C::Text_States' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Text_State_Info) == 0x001690, "Member 'UWB_Button_State_C::Text_State_Info' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, bUsingGamepad) == 0x001780, "Member 'UWB_Button_State_C::bUsingGamepad' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, Current_State) == 0x001784, "Member 'UWB_Button_State_C::Current_State' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, bIsDesignTime) == 0x001788, "Member 'UWB_Button_State_C::bIsDesignTime' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, OnStateChanged) == 0x001790, "Member 'UWB_Button_State_C::OnStateChanged' has a wrong offset!");
static_assert(offsetof(UWB_Button_State_C, bSkipCallback) == 0x0017A0, "Member 'UWB_Button_State_C::bSkipCallback' has a wrong offset!");

}

