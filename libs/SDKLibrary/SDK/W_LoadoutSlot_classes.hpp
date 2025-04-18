#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadoutSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LoadoutSlot.W_LoadoutSlot_C
// 0x0080 (0x02F8 - 0x0278)
class UW_LoadoutSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableText*                          EditableText_195;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_GearScore_C*                         W_GearScore;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                      WB_Text_Button;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                      WB_Text_Button_1;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Text_Button_C*                      WB_Text_Button_2;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ButtonHovered;                                     // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ButtonPressed;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Buttonunhovered;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                                IconImage;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void BndEvt__W_LoadoutSlot_EditableText_195_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Param_Text, ETextCommit CommitMethod);
	void BndEvt__W_LoadoutSlot_WB_Text_Button_1_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_LoadoutSlot_WB_Text_Button_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ButtonHovered__DelegateSignature();
	void ButtonPressed__DelegateSignature();
	void Buttonunhovered__DelegateSignature();
	void ExecuteUbergraph_W_LoadoutSlot(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LoadoutSlot_C">();
	}
	static class UW_LoadoutSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LoadoutSlot_C>();
	}
};
static_assert(alignof(UW_LoadoutSlot_C) == 0x000008, "Wrong alignment on UW_LoadoutSlot_C");
static_assert(sizeof(UW_LoadoutSlot_C) == 0x0002F8, "Wrong size on UW_LoadoutSlot_C");
static_assert(offsetof(UW_LoadoutSlot_C, UberGraphFrame) == 0x000278, "Member 'UW_LoadoutSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, EditableText_195) == 0x000280, "Member 'UW_LoadoutSlot_C::EditableText_195' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, W_GearScore) == 0x000288, "Member 'UW_LoadoutSlot_C::W_GearScore' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, WB_Text_Button) == 0x000290, "Member 'UW_LoadoutSlot_C::WB_Text_Button' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, WB_Text_Button_1) == 0x000298, "Member 'UW_LoadoutSlot_C::WB_Text_Button_1' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, WB_Text_Button_2) == 0x0002A0, "Member 'UW_LoadoutSlot_C::WB_Text_Button_2' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, ButtonHovered) == 0x0002A8, "Member 'UW_LoadoutSlot_C::ButtonHovered' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, ButtonPressed) == 0x0002B8, "Member 'UW_LoadoutSlot_C::ButtonPressed' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, Buttonunhovered) == 0x0002C8, "Member 'UW_LoadoutSlot_C::Buttonunhovered' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, IconImage) == 0x0002D8, "Member 'UW_LoadoutSlot_C::IconImage' has a wrong offset!");
static_assert(offsetof(UW_LoadoutSlot_C, Text) == 0x0002E0, "Member 'UW_LoadoutSlot_C::Text' has a wrong offset!");

}

