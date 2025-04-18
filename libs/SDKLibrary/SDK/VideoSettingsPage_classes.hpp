#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VideoSettingsPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C
// 0x0040 (0x02B8 - 0x0278)
class UVideoSettingsPage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ApplyButton;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              AutoApplyCheckbox;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                AutoDetectButton;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              AutoSaveCheckbox;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CancelButton;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SaveButton;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          AutoSave;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoApply;                                         // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AutoApplyCheckbox_K2Node_ComponentBoundEvent_336_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AutoSaveCheckbox_K2Node_ComponentBoundEvent_40_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_VideoSettingsPage(int32 EntryPoint);
	bool Get_ApplyButton_bIsEnabled_0();
	bool Get_AutoApplyCheckbox_bIsEnabled_0();
	bool Get_SaveButton_bIsEnabled_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VideoSettingsPage_C">();
	}
	static class UVideoSettingsPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoSettingsPage_C>();
	}
};
static_assert(alignof(UVideoSettingsPage_C) == 0x000008, "Wrong alignment on UVideoSettingsPage_C");
static_assert(sizeof(UVideoSettingsPage_C) == 0x0002B8, "Wrong size on UVideoSettingsPage_C");
static_assert(offsetof(UVideoSettingsPage_C, UberGraphFrame) == 0x000278, "Member 'UVideoSettingsPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, ApplyButton) == 0x000280, "Member 'UVideoSettingsPage_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoApplyCheckbox) == 0x000288, "Member 'UVideoSettingsPage_C::AutoApplyCheckbox' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoDetectButton) == 0x000290, "Member 'UVideoSettingsPage_C::AutoDetectButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoSaveCheckbox) == 0x000298, "Member 'UVideoSettingsPage_C::AutoSaveCheckbox' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, CancelButton) == 0x0002A0, "Member 'UVideoSettingsPage_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, SaveButton) == 0x0002A8, "Member 'UVideoSettingsPage_C::SaveButton' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoSave) == 0x0002B0, "Member 'UVideoSettingsPage_C::AutoSave' has a wrong offset!");
static_assert(offsetof(UVideoSettingsPage_C, AutoApply) == 0x0002B1, "Member 'UVideoSettingsPage_C::AutoApply' has a wrong offset!");

}

