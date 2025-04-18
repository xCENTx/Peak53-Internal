#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputSettingsPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InputSettingsPage.InputSettingsPage_C
// 0x0018 (0x0290 - 0x0278)
class UInputSettingsPage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalRadioSelect_C*               PresetSelector;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                          SettingRow;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void Construct();
	void ExecuteUbergraph_InputSettingsPage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InputSettingsPage_C">();
	}
	static class UInputSettingsPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputSettingsPage_C>();
	}
};
static_assert(alignof(UInputSettingsPage_C) == 0x000008, "Wrong alignment on UInputSettingsPage_C");
static_assert(sizeof(UInputSettingsPage_C) == 0x000290, "Wrong size on UInputSettingsPage_C");
static_assert(offsetof(UInputSettingsPage_C, UberGraphFrame) == 0x000278, "Member 'UInputSettingsPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInputSettingsPage_C, PresetSelector) == 0x000280, "Member 'UInputSettingsPage_C::PresetSelector' has a wrong offset!");
static_assert(offsetof(UInputSettingsPage_C, SettingRow) == 0x000288, "Member 'UInputSettingsPage_C::SettingRow' has a wrong offset!");

}

