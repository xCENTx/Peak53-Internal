#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scoreboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Peak53Teams_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Scoreboard.Scoreboard_C
// 0x0118 (0x0390 - 0x0278)
class UScoreboard_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       InsurgentsScore;                                   // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           InsurgentsTeamBox;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_1;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_2;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_3;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_4;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_5;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_6;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_7;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_8;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_9;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_10;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_11;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_12;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_13;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_14;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_15;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_16;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_17;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_18;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_19;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_20;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_21;                               // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_22;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_23;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_24;                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_25;                               // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_26;                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayer_C*                    ScoreboardPlayer_27;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SealsScore;                                        // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SEALsTeamBox;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_Scoreboard(int32 EntryPoint);
	void FadeAnimations(ESlateVisibility InVisibility);
	class FText Get_InsurgentsScore_Text_0();
	class FText Get_SealsScore_Text_0();
	void Refresh();
	void RefreshScoreboardFunction(EPeak53Teams Team);
	void Scoreboard_AutoGenFunc(class UObject* ObjectA, class UObject* ObjectB, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scoreboard_C">();
	}
	static class UScoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreboard_C>();
	}
};
static_assert(alignof(UScoreboard_C) == 0x000008, "Wrong alignment on UScoreboard_C");
static_assert(sizeof(UScoreboard_C) == 0x000390, "Wrong size on UScoreboard_C");
static_assert(offsetof(UScoreboard_C, UberGraphFrame) == 0x000278, "Member 'UScoreboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, FadeIn) == 0x000280, "Member 'UScoreboard_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, Image) == 0x000288, "Member 'UScoreboard_C::Image' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, InsurgentsScore) == 0x000290, "Member 'UScoreboard_C::InsurgentsScore' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, InsurgentsTeamBox) == 0x000298, "Member 'UScoreboard_C::InsurgentsTeamBox' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer) == 0x0002A0, "Member 'UScoreboard_C::ScoreboardPlayer' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_1) == 0x0002A8, "Member 'UScoreboard_C::ScoreboardPlayer_1' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_2) == 0x0002B0, "Member 'UScoreboard_C::ScoreboardPlayer_2' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_3) == 0x0002B8, "Member 'UScoreboard_C::ScoreboardPlayer_3' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_4) == 0x0002C0, "Member 'UScoreboard_C::ScoreboardPlayer_4' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_5) == 0x0002C8, "Member 'UScoreboard_C::ScoreboardPlayer_5' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_6) == 0x0002D0, "Member 'UScoreboard_C::ScoreboardPlayer_6' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_7) == 0x0002D8, "Member 'UScoreboard_C::ScoreboardPlayer_7' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_8) == 0x0002E0, "Member 'UScoreboard_C::ScoreboardPlayer_8' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_9) == 0x0002E8, "Member 'UScoreboard_C::ScoreboardPlayer_9' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_10) == 0x0002F0, "Member 'UScoreboard_C::ScoreboardPlayer_10' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_11) == 0x0002F8, "Member 'UScoreboard_C::ScoreboardPlayer_11' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_12) == 0x000300, "Member 'UScoreboard_C::ScoreboardPlayer_12' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_13) == 0x000308, "Member 'UScoreboard_C::ScoreboardPlayer_13' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_14) == 0x000310, "Member 'UScoreboard_C::ScoreboardPlayer_14' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_15) == 0x000318, "Member 'UScoreboard_C::ScoreboardPlayer_15' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_16) == 0x000320, "Member 'UScoreboard_C::ScoreboardPlayer_16' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_17) == 0x000328, "Member 'UScoreboard_C::ScoreboardPlayer_17' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_18) == 0x000330, "Member 'UScoreboard_C::ScoreboardPlayer_18' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_19) == 0x000338, "Member 'UScoreboard_C::ScoreboardPlayer_19' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_20) == 0x000340, "Member 'UScoreboard_C::ScoreboardPlayer_20' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_21) == 0x000348, "Member 'UScoreboard_C::ScoreboardPlayer_21' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_22) == 0x000350, "Member 'UScoreboard_C::ScoreboardPlayer_22' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_23) == 0x000358, "Member 'UScoreboard_C::ScoreboardPlayer_23' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_24) == 0x000360, "Member 'UScoreboard_C::ScoreboardPlayer_24' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_25) == 0x000368, "Member 'UScoreboard_C::ScoreboardPlayer_25' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_26) == 0x000370, "Member 'UScoreboard_C::ScoreboardPlayer_26' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, ScoreboardPlayer_27) == 0x000378, "Member 'UScoreboard_C::ScoreboardPlayer_27' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, SealsScore) == 0x000380, "Member 'UScoreboard_C::SealsScore' has a wrong offset!");
static_assert(offsetof(UScoreboard_C, SEALsTeamBox) == 0x000388, "Member 'UScoreboard_C::SEALsTeamBox' has a wrong offset!");

}

