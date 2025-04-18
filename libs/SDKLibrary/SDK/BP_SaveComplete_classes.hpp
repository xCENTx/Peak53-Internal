#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SaveComplete

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_SaveComplete.BP_SaveComplete_C
// 0x0038 (0x02B0 - 0x0278)
class UBP_SaveComplete_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Backround;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SaveDescriptionText;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WarningTitleText;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                YesButton;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           BackroundColor;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_SaveComplete(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SaveComplete_C">();
	}
	static class UBP_SaveComplete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SaveComplete_C>();
	}
};
static_assert(alignof(UBP_SaveComplete_C) == 0x000008, "Wrong alignment on UBP_SaveComplete_C");
static_assert(sizeof(UBP_SaveComplete_C) == 0x0002B0, "Wrong size on UBP_SaveComplete_C");
static_assert(offsetof(UBP_SaveComplete_C, UberGraphFrame) == 0x000278, "Member 'UBP_SaveComplete_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SaveComplete_C, Backround) == 0x000280, "Member 'UBP_SaveComplete_C::Backround' has a wrong offset!");
static_assert(offsetof(UBP_SaveComplete_C, SaveDescriptionText) == 0x000288, "Member 'UBP_SaveComplete_C::SaveDescriptionText' has a wrong offset!");
static_assert(offsetof(UBP_SaveComplete_C, WarningTitleText) == 0x000290, "Member 'UBP_SaveComplete_C::WarningTitleText' has a wrong offset!");
static_assert(offsetof(UBP_SaveComplete_C, YesButton) == 0x000298, "Member 'UBP_SaveComplete_C::YesButton' has a wrong offset!");
static_assert(offsetof(UBP_SaveComplete_C, BackroundColor) == 0x0002A0, "Member 'UBP_SaveComplete_C::BackroundColor' has a wrong offset!");

}

