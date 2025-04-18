#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ingame_loadout_screen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Peak53Teams_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass w_ingame_loadout_screen.w_ingame_loadout_screen_C
// 0x0080 (0x02F8 - 0x0278)
class UW_ingame_loadout_screen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonHierarchicalScrollBox*           Loadouts;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SelectedCatagoryTitle;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SelectedCatagoryTitle_2;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_1;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_2;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_3;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_4;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_5;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_6;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_7;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                      W_loadout_slot_8;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPeak53Teams                                  PeakTeam;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_35EB[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             LoadoutChoosen;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CustomEvent(const class FString& CurrentEquipment);
	void ExecuteUbergraph_w_ingame_loadout_screen(int32 EntryPoint);
	class FText Get_CurrentTeam_Text();
	void LoadoutChoosen__DelegateSignature(const class FString& Equipment);
	void UpdateUi();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"w_ingame_loadout_screen_C">();
	}
	static class UW_ingame_loadout_screen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ingame_loadout_screen_C>();
	}
};
static_assert(alignof(UW_ingame_loadout_screen_C) == 0x000008, "Wrong alignment on UW_ingame_loadout_screen_C");
static_assert(sizeof(UW_ingame_loadout_screen_C) == 0x0002F8, "Wrong size on UW_ingame_loadout_screen_C");
static_assert(offsetof(UW_ingame_loadout_screen_C, UberGraphFrame) == 0x000278, "Member 'UW_ingame_loadout_screen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, Loadouts) == 0x000280, "Member 'UW_ingame_loadout_screen_C::Loadouts' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, SelectedCatagoryTitle) == 0x000288, "Member 'UW_ingame_loadout_screen_C::SelectedCatagoryTitle' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, SelectedCatagoryTitle_2) == 0x000290, "Member 'UW_ingame_loadout_screen_C::SelectedCatagoryTitle_2' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot) == 0x000298, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_1) == 0x0002A0, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_1' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_2) == 0x0002A8, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_2' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_3) == 0x0002B0, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_3' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_4) == 0x0002B8, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_4' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_5) == 0x0002C0, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_5' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_6) == 0x0002C8, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_6' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_7) == 0x0002D0, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_7' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, W_loadout_slot_8) == 0x0002D8, "Member 'UW_ingame_loadout_screen_C::W_loadout_slot_8' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, PeakTeam) == 0x0002E0, "Member 'UW_ingame_loadout_screen_C::PeakTeam' has a wrong offset!");
static_assert(offsetof(UW_ingame_loadout_screen_C, LoadoutChoosen) == 0x0002E8, "Member 'UW_ingame_loadout_screen_C::LoadoutChoosen' has a wrong offset!");

}

