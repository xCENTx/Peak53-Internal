#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Infofield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Infofield.WB_Infofield_C
// 0x0018 (0x02B8 - 0x02A0)
class UWB_Infofield_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Text_Body;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Head;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_Infofield(int32 EntryPoint);
	void SetInfo(const class FText& Head, const class FText& Body);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Infofield_C">();
	}
	static class UWB_Infofield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Infofield_C>();
	}
};
static_assert(alignof(UWB_Infofield_C) == 0x000008, "Wrong alignment on UWB_Infofield_C");
static_assert(sizeof(UWB_Infofield_C) == 0x0002B8, "Wrong size on UWB_Infofield_C");
static_assert(offsetof(UWB_Infofield_C, UberGraphFrame) == 0x0002A0, "Member 'UWB_Infofield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Infofield_C, Text_Body) == 0x0002A8, "Member 'UWB_Infofield_C::Text_Body' has a wrong offset!");
static_assert(offsetof(UWB_Infofield_C, Text_Head) == 0x0002B0, "Member 'UWB_Infofield_C::Text_Head' has a wrong offset!");

}

