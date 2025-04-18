#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Keybind

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EnhancedInput_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Keybind.BP_Keybind_C
// 0x0150 (0x03C8 - 0x0278)
class UBP_Keybind_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BindNameText;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                      KeySelector1;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                      KeySelector2;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsAxisBind;                                        // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55FF[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   BindName;                                          // 0x029C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeySelect1;                                        // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeySelect2;                                        // 0x02A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5600[0x2];                                     // 0x02A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           Action;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UInputMappingContext*                   Mapping;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FEnhancedActionKeyMapping              Key1;                                              // 0x02B8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnhancedActionKeyMapping              Key2;                                              // 0x0340(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void ExecuteUbergraph_BP_Keybind(int32 EntryPoint);
	void Find_Action_Keys(TArray<struct FEnhancedActionKeyMapping>* ActionKeys);
	void FindActionBind(class FName ActionBindName, int32 BindIndex, bool* BindFound, struct FInputActionKeyMapping* ActionBind);
	void FindAxisBind(class FName ActionBindName, int32 BindIndex, bool* BindFound, struct FInputAxisKeyMapping* ActionBind);
	void InitializeKeybind(class FName Param_BindName, bool IsAxis, class UInputAction* Param_Action, class UInputMappingContext* Param_Mapping);
	void KeySelect1Scroll(bool Up);
	void KeySelect2Scroll(bool Up);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void RebindAction(const struct FInputChord& Key, int32 RebindIndex);
	void RebindAxis(const struct FInputChord& Key, int32 RebindIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Keybind_C">();
	}
	static class UBP_Keybind_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Keybind_C>();
	}
};
static_assert(alignof(UBP_Keybind_C) == 0x000008, "Wrong alignment on UBP_Keybind_C");
static_assert(sizeof(UBP_Keybind_C) == 0x0003C8, "Wrong size on UBP_Keybind_C");
static_assert(offsetof(UBP_Keybind_C, UberGraphFrame) == 0x000278, "Member 'UBP_Keybind_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, BindNameText) == 0x000280, "Member 'UBP_Keybind_C::BindNameText' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, KeySelector1) == 0x000288, "Member 'UBP_Keybind_C::KeySelector1' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, KeySelector2) == 0x000290, "Member 'UBP_Keybind_C::KeySelector2' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, IsAxisBind) == 0x000298, "Member 'UBP_Keybind_C::IsAxisBind' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, BindName) == 0x00029C, "Member 'UBP_Keybind_C::BindName' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, KeySelect1) == 0x0002A4, "Member 'UBP_Keybind_C::KeySelect1' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, KeySelect2) == 0x0002A5, "Member 'UBP_Keybind_C::KeySelect2' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, Action) == 0x0002A8, "Member 'UBP_Keybind_C::Action' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, Mapping) == 0x0002B0, "Member 'UBP_Keybind_C::Mapping' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, Key1) == 0x0002B8, "Member 'UBP_Keybind_C::Key1' has a wrong offset!");
static_assert(offsetof(UBP_Keybind_C, Key2) == 0x000340, "Member 'UBP_Keybind_C::Key2' has a wrong offset!");

}

