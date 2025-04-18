#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StyledBindCaptureButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AutoSettingsInput_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StyledBindCaptureButton.StyledBindCaptureButton_C
// 0x0018 (0x02C0 - 0x02A8)
class UStyledBindCaptureButton_C final : public UBindCaptureButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_StyledBindCaptureButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StyledBindCaptureButton_C">();
	}
	static class UStyledBindCaptureButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStyledBindCaptureButton_C>();
	}
};
static_assert(alignof(UStyledBindCaptureButton_C) == 0x000008, "Wrong alignment on UStyledBindCaptureButton_C");
static_assert(sizeof(UStyledBindCaptureButton_C) == 0x0002C0, "Wrong size on UStyledBindCaptureButton_C");
static_assert(offsetof(UStyledBindCaptureButton_C, UberGraphFrame) == 0x0002A8, "Member 'UStyledBindCaptureButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStyledBindCaptureButton_C, Button_0) == 0x0002B0, "Member 'UStyledBindCaptureButton_C::Button_0' has a wrong offset!");
static_assert(offsetof(UStyledBindCaptureButton_C, Content) == 0x0002B8, "Member 'UStyledBindCaptureButton_C::Content' has a wrong offset!");

}

