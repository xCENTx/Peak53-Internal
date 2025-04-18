#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_game_end

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Peak53Teams_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass w_game_end.w_game_end_C
// 0x01D8 (0x0450 - 0x0278)
class UW_game_end_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               GameStats;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_64;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_105;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             InsurgentVictoryText;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_global_insurgents_deaths;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_global_insurgents_kills;                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_global_insurgents_score;                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_global_seals_deaths;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_global_seals_kills;                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_global_seals_score;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_itemUnlocked;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mvp_stats_deaths;                                  // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mvp_stats_deaths_1;                                // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mvp_stats_kills;                                   // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mvp_stats_kills_1;                                 // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mvp_stats_score;                                   // 0x0318(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mvp_stats_score_1;                                 // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SealsVictoryText;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_12;                                      // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_15;                                      // 0x0338(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_19;                                      // 0x0340(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_21;                                      // 0x0348(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_23;                                      // 0x0350(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               VotableMaps;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail;                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_1;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_2;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_3;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_4;                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_5;                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_6;                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_7;                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_8;                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_9;                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_10;                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_11;                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_12;                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_13;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_14;                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VotableLevel_Detail_C*               W_VotableLevel_Detail_15;                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                 MyGameManager;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerScore;                                       // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerKills;                                       // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerDeath;                                       // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MVPScore;                                          // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MVPKills;                                          // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MVPDeaths;                                         // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 MVPName;                                           // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SealsScoreGlobal;                                  // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SealsKillsGlobal;                                  // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SealsDeathsGlobal;                                 // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         InsurgentsScoreGlobal;                             // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         InsurgentsKillsGlobal;                             // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         InsurgentsDeathsGlobal;                            // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EPeak53Teams                                  WinnerTeam;                                        // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4086[0x3];                                     // 0x0429(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UnlockedItem;                                      // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         In_Row;                                            // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         In_Column;                                         // 0x0434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Default;                                           // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4087[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Menu_INK_create_server_C*            MenuWidget;                                        // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxRow;                                            // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CallStartHostServer(class FName LevelName);
	void CheckFFA(bool* FFA_);
	void Construct();
	void Destruct();
	void DisbleAllVoteMapDetailWidget(class UObject* B);
	void ExecuteUbergraph_w_game_end(int32 EntryPoint);
	class FText Get_Disconnect_Time();
	class FText Get_label_insurgents_rounds_won_Text();
	class FText Get_label_seals_rounds_won_Text();
	class FText Get_label_time_played_Text();
	ESlateVisibility Get_MVPName();
	class FText Get_SealsTeam_11_Text();
	class FText Get_WinnerTeam();
	void StartVoteMap();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"w_game_end_C">();
	}
	static class UW_game_end_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_game_end_C>();
	}
};
static_assert(alignof(UW_game_end_C) == 0x000008, "Wrong alignment on UW_game_end_C");
static_assert(sizeof(UW_game_end_C) == 0x000450, "Wrong size on UW_game_end_C");
static_assert(offsetof(UW_game_end_C, UberGraphFrame) == 0x000278, "Member 'UW_game_end_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, FadeIn) == 0x000280, "Member 'UW_game_end_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, GameStats) == 0x000288, "Member 'UW_game_end_C::GameStats' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, GridPanel_64) == 0x000290, "Member 'UW_game_end_C::GridPanel_64' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Image) == 0x000298, "Member 'UW_game_end_C::Image' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Image_1) == 0x0002A0, "Member 'UW_game_end_C::Image_1' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Image_2) == 0x0002A8, "Member 'UW_game_end_C::Image_2' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Image_105) == 0x0002B0, "Member 'UW_game_end_C::Image_105' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, InsurgentVictoryText) == 0x0002B8, "Member 'UW_game_end_C::InsurgentVictoryText' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Label_global_insurgents_deaths) == 0x0002C0, "Member 'UW_game_end_C::Label_global_insurgents_deaths' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Label_global_insurgents_kills) == 0x0002C8, "Member 'UW_game_end_C::Label_global_insurgents_kills' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Label_global_insurgents_score) == 0x0002D0, "Member 'UW_game_end_C::Label_global_insurgents_score' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Label_global_seals_deaths) == 0x0002D8, "Member 'UW_game_end_C::Label_global_seals_deaths' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Label_global_seals_kills) == 0x0002E0, "Member 'UW_game_end_C::Label_global_seals_kills' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Label_global_seals_score) == 0x0002E8, "Member 'UW_game_end_C::Label_global_seals_score' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Label_itemUnlocked) == 0x0002F0, "Member 'UW_game_end_C::Label_itemUnlocked' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Mvp_stats_deaths) == 0x0002F8, "Member 'UW_game_end_C::Mvp_stats_deaths' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Mvp_stats_deaths_1) == 0x000300, "Member 'UW_game_end_C::Mvp_stats_deaths_1' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Mvp_stats_kills) == 0x000308, "Member 'UW_game_end_C::Mvp_stats_kills' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Mvp_stats_kills_1) == 0x000310, "Member 'UW_game_end_C::Mvp_stats_kills_1' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Mvp_stats_score) == 0x000318, "Member 'UW_game_end_C::Mvp_stats_score' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Mvp_stats_score_1) == 0x000320, "Member 'UW_game_end_C::Mvp_stats_score_1' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, SealsVictoryText) == 0x000328, "Member 'UW_game_end_C::SealsVictoryText' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, TextBlock_12) == 0x000330, "Member 'UW_game_end_C::TextBlock_12' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, TextBlock_15) == 0x000338, "Member 'UW_game_end_C::TextBlock_15' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, TextBlock_19) == 0x000340, "Member 'UW_game_end_C::TextBlock_19' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, TextBlock_21) == 0x000348, "Member 'UW_game_end_C::TextBlock_21' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, TextBlock_23) == 0x000350, "Member 'UW_game_end_C::TextBlock_23' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, VotableMaps) == 0x000358, "Member 'UW_game_end_C::VotableMaps' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail) == 0x000360, "Member 'UW_game_end_C::W_VotableLevel_Detail' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_1) == 0x000368, "Member 'UW_game_end_C::W_VotableLevel_Detail_1' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_2) == 0x000370, "Member 'UW_game_end_C::W_VotableLevel_Detail_2' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_3) == 0x000378, "Member 'UW_game_end_C::W_VotableLevel_Detail_3' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_4) == 0x000380, "Member 'UW_game_end_C::W_VotableLevel_Detail_4' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_5) == 0x000388, "Member 'UW_game_end_C::W_VotableLevel_Detail_5' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_6) == 0x000390, "Member 'UW_game_end_C::W_VotableLevel_Detail_6' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_7) == 0x000398, "Member 'UW_game_end_C::W_VotableLevel_Detail_7' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_8) == 0x0003A0, "Member 'UW_game_end_C::W_VotableLevel_Detail_8' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_9) == 0x0003A8, "Member 'UW_game_end_C::W_VotableLevel_Detail_9' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_10) == 0x0003B0, "Member 'UW_game_end_C::W_VotableLevel_Detail_10' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_11) == 0x0003B8, "Member 'UW_game_end_C::W_VotableLevel_Detail_11' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_12) == 0x0003C0, "Member 'UW_game_end_C::W_VotableLevel_Detail_12' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_13) == 0x0003C8, "Member 'UW_game_end_C::W_VotableLevel_Detail_13' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_14) == 0x0003D0, "Member 'UW_game_end_C::W_VotableLevel_Detail_14' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, W_VotableLevel_Detail_15) == 0x0003D8, "Member 'UW_game_end_C::W_VotableLevel_Detail_15' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, MyGameManager) == 0x0003E0, "Member 'UW_game_end_C::MyGameManager' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, PlayerScore) == 0x0003E8, "Member 'UW_game_end_C::PlayerScore' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, PlayerKills) == 0x0003EC, "Member 'UW_game_end_C::PlayerKills' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, PlayerDeath) == 0x0003F0, "Member 'UW_game_end_C::PlayerDeath' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, MVPScore) == 0x0003F4, "Member 'UW_game_end_C::MVPScore' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, MVPKills) == 0x0003F8, "Member 'UW_game_end_C::MVPKills' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, MVPDeaths) == 0x0003FC, "Member 'UW_game_end_C::MVPDeaths' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, MVPName) == 0x000400, "Member 'UW_game_end_C::MVPName' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, SealsScoreGlobal) == 0x000410, "Member 'UW_game_end_C::SealsScoreGlobal' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, SealsKillsGlobal) == 0x000414, "Member 'UW_game_end_C::SealsKillsGlobal' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, SealsDeathsGlobal) == 0x000418, "Member 'UW_game_end_C::SealsDeathsGlobal' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, InsurgentsScoreGlobal) == 0x00041C, "Member 'UW_game_end_C::InsurgentsScoreGlobal' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, InsurgentsKillsGlobal) == 0x000420, "Member 'UW_game_end_C::InsurgentsKillsGlobal' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, InsurgentsDeathsGlobal) == 0x000424, "Member 'UW_game_end_C::InsurgentsDeathsGlobal' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, WinnerTeam) == 0x000428, "Member 'UW_game_end_C::WinnerTeam' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, UnlockedItem) == 0x00042C, "Member 'UW_game_end_C::UnlockedItem' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, In_Row) == 0x000430, "Member 'UW_game_end_C::In_Row' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, In_Column) == 0x000434, "Member 'UW_game_end_C::In_Column' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, Default) == 0x000438, "Member 'UW_game_end_C::Default' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, MenuWidget) == 0x000440, "Member 'UW_game_end_C::MenuWidget' has a wrong offset!");
static_assert(offsetof(UW_game_end_C, MaxRow) == 0x000448, "Member 'UW_game_end_C::MaxRow' has a wrong offset!");

}

