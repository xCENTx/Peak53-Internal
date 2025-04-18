#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Peak53Teams_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GameManager.GameManager_C
// 0x00F8 (0x0388 - 0x0290)
class AGameManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentRoundTimer;                                 // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxRoundTimer;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        GameTimer;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SGKController_C*>            Seals;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_SGKController_C*>            Insurgents;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                           RoundTimer;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        RoundCountdown;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPeak53Teams                                  WinnerTeam;                                        // 0x02F0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDemolition_;                                      // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_44EA[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlantedBomb_C*                         BombRef;                                           // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        BombLocations;                                     // 0x0300(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int32                                         DisconnectTimer;                                   // 0x0310(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44EB[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   MVPRoundEndName;                                   // 0x0318(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int32                                         MVPRoundEndScore;                                  // 0x0330(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MVPRoundEndKills;                                  // 0x0334(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MVPRoundEndDeaths;                                 // 0x0338(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SealsScore;                                        // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SealsKills;                                        // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SealsDeaths;                                       // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InsurgentsScore;                                   // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InsurgentsKills;                                   // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InsurgentsDeaths;                                  // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFFA;                                              // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_44EC[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SGKController_C*>            FFA;                                               // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          PauseRoundEndChecks;                               // 0x0368(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44ED[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempItemUnlockID;                                  // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Bomb_Planted;                                   // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BombDefusedCheck;                                  // 0x0371(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBombExploded;                                     // 0x0372(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCTF_;                                             // 0x0373(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bFlagVictory;                                      // 0x0374(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44EE[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        FlagLocations;                                     // 0x0378(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

public:
	void BeginRoundServer();
	void BombDefusedManagerMulticast(bool SealsTrue, bool bExploded_);
	void BombDefusedManagerServer(bool SealsTrue, bool bExploded_);
	void CheckFFA(bool* FFA_);
	void CheckRoundFinishMulticast();
	void CheckRoundFinishServer();
	void ExecuteUbergraph_GameManager(int32 EntryPoint);
	void FlagVictoryMulticast(bool SealsTrue);
	void FlagVictoryServer(bool SealsTrue);
	void GameEnd();
	void GetBombPlantedState(bool* BombState);
	void GetGameEndMVP(class FText* MVPName1, int32* CurrentHightScore1, int32* Currentkills1, int32* Currentdeaths1);
	void GetTeamStats(EPeak53Teams B, int32* CurrentHightScore1, int32* Currentkills1, int32* Currentdeaths1);
	void LateJoiners();
	void ReceiveBeginPlay();
	void ResetBombsMC(TArray<struct FVector>& Array);
	void ResetBombsSV(TArray<struct FVector>& Array);
	void ResetDoOnce();
	void ResetFlagMC(TArray<struct FVector>& Array, int32 RandomInt);
	void SendFeedMessage(const class FText& MessageFeedVar, ETextJustify Justification, const struct FSlateColor& In_Color_and_Opacity, int32 In_Font_Info_Size);
	void SendFeedMessageMC(const class FText& MessageFeedVar, ETextJustify Justification, const struct FSlateColor& In_Color_and_Opacity, int32 In_Font_Info_Size);
	void SetBombPlantedState(bool IsBombPlanted);
	void SetFlagVictoryServer(bool Param_bFlagVictory);
	void SetRoundEndCheckServer(bool Param_PauseRoundEndChecks);
	void SetRoundEndChecksMC(bool Param_PauseRoundEndChecks);
	void SetRoundTimerClients(double Param_CurrentRoundTimer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameManager_C">();
	}
	static class AGameManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameManager_C>();
	}
};
static_assert(alignof(AGameManager_C) == 0x000008, "Wrong alignment on AGameManager_C");
static_assert(sizeof(AGameManager_C) == 0x000388, "Wrong size on AGameManager_C");
static_assert(offsetof(AGameManager_C, UberGraphFrame) == 0x000290, "Member 'AGameManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGameManager_C, Cube) == 0x000298, "Member 'AGameManager_C::Cube' has a wrong offset!");
static_assert(offsetof(AGameManager_C, DefaultSceneRoot) == 0x0002A0, "Member 'AGameManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGameManager_C, CurrentRoundTimer) == 0x0002A8, "Member 'AGameManager_C::CurrentRoundTimer' has a wrong offset!");
static_assert(offsetof(AGameManager_C, MaxRoundTimer) == 0x0002B0, "Member 'AGameManager_C::MaxRoundTimer' has a wrong offset!");
static_assert(offsetof(AGameManager_C, GameTimer) == 0x0002B8, "Member 'AGameManager_C::GameTimer' has a wrong offset!");
static_assert(offsetof(AGameManager_C, Seals) == 0x0002C0, "Member 'AGameManager_C::Seals' has a wrong offset!");
static_assert(offsetof(AGameManager_C, Insurgents) == 0x0002D0, "Member 'AGameManager_C::Insurgents' has a wrong offset!");
static_assert(offsetof(AGameManager_C, RoundTimer) == 0x0002E0, "Member 'AGameManager_C::RoundTimer' has a wrong offset!");
static_assert(offsetof(AGameManager_C, RoundCountdown) == 0x0002E8, "Member 'AGameManager_C::RoundCountdown' has a wrong offset!");
static_assert(offsetof(AGameManager_C, WinnerTeam) == 0x0002F0, "Member 'AGameManager_C::WinnerTeam' has a wrong offset!");
static_assert(offsetof(AGameManager_C, bDemolition_) == 0x0002F1, "Member 'AGameManager_C::bDemolition_' has a wrong offset!");
static_assert(offsetof(AGameManager_C, BombRef) == 0x0002F8, "Member 'AGameManager_C::BombRef' has a wrong offset!");
static_assert(offsetof(AGameManager_C, BombLocations) == 0x000300, "Member 'AGameManager_C::BombLocations' has a wrong offset!");
static_assert(offsetof(AGameManager_C, DisconnectTimer) == 0x000310, "Member 'AGameManager_C::DisconnectTimer' has a wrong offset!");
static_assert(offsetof(AGameManager_C, MVPRoundEndName) == 0x000318, "Member 'AGameManager_C::MVPRoundEndName' has a wrong offset!");
static_assert(offsetof(AGameManager_C, MVPRoundEndScore) == 0x000330, "Member 'AGameManager_C::MVPRoundEndScore' has a wrong offset!");
static_assert(offsetof(AGameManager_C, MVPRoundEndKills) == 0x000334, "Member 'AGameManager_C::MVPRoundEndKills' has a wrong offset!");
static_assert(offsetof(AGameManager_C, MVPRoundEndDeaths) == 0x000338, "Member 'AGameManager_C::MVPRoundEndDeaths' has a wrong offset!");
static_assert(offsetof(AGameManager_C, SealsScore) == 0x00033C, "Member 'AGameManager_C::SealsScore' has a wrong offset!");
static_assert(offsetof(AGameManager_C, SealsKills) == 0x000340, "Member 'AGameManager_C::SealsKills' has a wrong offset!");
static_assert(offsetof(AGameManager_C, SealsDeaths) == 0x000344, "Member 'AGameManager_C::SealsDeaths' has a wrong offset!");
static_assert(offsetof(AGameManager_C, InsurgentsScore) == 0x000348, "Member 'AGameManager_C::InsurgentsScore' has a wrong offset!");
static_assert(offsetof(AGameManager_C, InsurgentsKills) == 0x00034C, "Member 'AGameManager_C::InsurgentsKills' has a wrong offset!");
static_assert(offsetof(AGameManager_C, InsurgentsDeaths) == 0x000350, "Member 'AGameManager_C::InsurgentsDeaths' has a wrong offset!");
static_assert(offsetof(AGameManager_C, bFFA) == 0x000354, "Member 'AGameManager_C::bFFA' has a wrong offset!");
static_assert(offsetof(AGameManager_C, FFA) == 0x000358, "Member 'AGameManager_C::FFA' has a wrong offset!");
static_assert(offsetof(AGameManager_C, PauseRoundEndChecks) == 0x000368, "Member 'AGameManager_C::PauseRoundEndChecks' has a wrong offset!");
static_assert(offsetof(AGameManager_C, TempItemUnlockID) == 0x00036C, "Member 'AGameManager_C::TempItemUnlockID' has a wrong offset!");
static_assert(offsetof(AGameManager_C, Is_Bomb_Planted) == 0x000370, "Member 'AGameManager_C::Is_Bomb_Planted' has a wrong offset!");
static_assert(offsetof(AGameManager_C, BombDefusedCheck) == 0x000371, "Member 'AGameManager_C::BombDefusedCheck' has a wrong offset!");
static_assert(offsetof(AGameManager_C, bBombExploded) == 0x000372, "Member 'AGameManager_C::bBombExploded' has a wrong offset!");
static_assert(offsetof(AGameManager_C, bCTF_) == 0x000373, "Member 'AGameManager_C::bCTF_' has a wrong offset!");
static_assert(offsetof(AGameManager_C, bFlagVictory) == 0x000374, "Member 'AGameManager_C::bFlagVictory' has a wrong offset!");
static_assert(offsetof(AGameManager_C, FlagLocations) == 0x000378, "Member 'AGameManager_C::FlagLocations' has a wrong offset!");

}

