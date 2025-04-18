#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VotableLevel_Detail

#include "Basic.hpp"

#include "S_VotableLevels_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_VotableLevel_Detail.W_VotableLevel_Detail_C
// 0x0088 (0x0300 - 0x0278)
class UW_VotableLevel_Detail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border;                                            // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_level_icon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_levelName;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_VotableLevels                       MyLevelDetails;                                    // 0x02A8(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MyMapIndex;                                        // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_41E4[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_game_end_C*                          MyGameEnd;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           DisabledTint;                                      // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisabled;                                        // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Default;                                           // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_VotableLevel_Detail_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void DisableWidget();
	void ExecuteUbergraph_W_VotableLevel_Detail(int32 EntryPoint);
	class FText GetText();
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_VotableLevel_Detail_C">();
	}
	static class UW_VotableLevel_Detail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_VotableLevel_Detail_C>();
	}
};
static_assert(alignof(UW_VotableLevel_Detail_C) == 0x000008, "Wrong alignment on UW_VotableLevel_Detail_C");
static_assert(sizeof(UW_VotableLevel_Detail_C) == 0x000300, "Wrong size on UW_VotableLevel_Detail_C");
static_assert(offsetof(UW_VotableLevel_Detail_C, UberGraphFrame) == 0x000278, "Member 'UW_VotableLevel_Detail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, Border) == 0x000280, "Member 'UW_VotableLevel_Detail_C::Border' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, Button_0) == 0x000288, "Member 'UW_VotableLevel_Detail_C::Button_0' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, Img_level_icon) == 0x000290, "Member 'UW_VotableLevel_Detail_C::Img_level_icon' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, Label_levelName) == 0x000298, "Member 'UW_VotableLevel_Detail_C::Label_levelName' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, TextBlock) == 0x0002A0, "Member 'UW_VotableLevel_Detail_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, MyLevelDetails) == 0x0002A8, "Member 'UW_VotableLevel_Detail_C::MyLevelDetails' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, MyMapIndex) == 0x0002D8, "Member 'UW_VotableLevel_Detail_C::MyMapIndex' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, MyGameEnd) == 0x0002E0, "Member 'UW_VotableLevel_Detail_C::MyGameEnd' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, DisabledTint) == 0x0002E8, "Member 'UW_VotableLevel_Detail_C::DisabledTint' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, IsDisabled) == 0x0002F8, "Member 'UW_VotableLevel_Detail_C::IsDisabled' has a wrong offset!");
static_assert(offsetof(UW_VotableLevel_Detail_C, Default) == 0x0002F9, "Member 'UW_VotableLevel_Detail_C::Default' has a wrong offset!");

}

