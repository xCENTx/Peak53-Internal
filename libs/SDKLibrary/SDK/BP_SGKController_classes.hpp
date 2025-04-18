#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SGKController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_AttachmentType_structs.hpp"
#include "SteamCore_structs.hpp"
#include "E_EquipmentType_structs.hpp"
#include "Peak53_classes.hpp"
#include "Peak53Teams_structs.hpp"
#include "E_Sounds_structs.hpp"
#include "E_WeaponSlots_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SGKController.BP_SGKController_C
// 0x0308 (0x0BB8 - 0x08B0)
class ABP_SGKController_C final : public APKPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PlayerBuildingComponent_C*          BP_PlayerBuildingComponent;                        // 0x08B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                  BP_PlayerInventory;                                // 0x08C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryHUD_C*                     PlayerHUD;                                         // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_InGameMenu_C*                       EscMenu;                                           // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             MasterCharacter;                                   // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Name_BP_SGKController_C;                           // 0x08E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UInputMappingContext*                   Mapping_Context;                                   // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Action;                                            // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPeak53MainWidget_C*                    Peak53MainWidget;                                  // 0x0908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   PlayerTag;                                         // 0x0910(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                   PlayerName;                                        // 0x0928(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	EPeak53Teams                                  PlayerTeam;                                        // 0x0940(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F96[0x7];                                     // 0x0941(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PlayerKills;                                       // 0x0948(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                   PlayerDeaths;                                      // 0x0960(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                   PlayerScore;                                       // 0x0978(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UScoreboard_C*                          ScoreboardRef;                                     // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   MessageToBeSendFeedController;                     // 0x0998(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UClass*                                 Loadout;                                           // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxIndex;                                          // 0x09B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CameraIndex;                                       // 0x09BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bScoreboardActive;                                 // 0x09C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F97[0x7];                                     // 0x09C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBombsiteInteractionWidget_C*           BombsiteWidgetRef;                                 // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasBomb_;                                         // 0x09D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanDefuse_;                                       // 0x09D1(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanPlant_;                                        // 0x09D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F98[0x5];                                     // 0x09D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBombDefuseWidget_C*                    DefuseWidgetRef;                                   // 0x09D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_game_end_C*                          W_game_ende;                                       // 0x09E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         SpectatorMaxIndex;                                 // 0x09E8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpectatorIndex;                                    // 0x09EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                    SpectatorPlayer;                                   // 0x09F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AGameManager_C*                         MyGameManager;                                     // 0x09F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVaultWidget_C*                         VaultWidgetRef;                                    // 0x0A00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBreachWidget_C*                        BreachWidgetRef;                                   // 0x0A08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_game_choose_team_C*                  W_game_choose_team;                                // 0x0A10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_game_warmup_info_C*                  W_game_warmup_info;                                // 0x0A18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   SenderText;                                        // 0x0A20(0x0018)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                   SenderName;                                        // 0x0A38(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Bomb_Pickup_Sound_Cue;                             // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Bomb_Dropped_Sound_Cue;                            // 0x0A58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Bomb_Planted_Sound_Cue;                            // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Bomb_Defused_SEALS_Sound_Cue;                      // 0x0A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Bomb_Defused_INS_Sound_Cue;                        // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CrosshairUpValue;                                  // 0x0A78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnToggleChat;                                      // 0x0A80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAnimMontage*                           TEMP_BombMontage;                                  // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SpectatingRotation;                                // 0x0A98(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanSpectate_;                                     // 0x0AA0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F99[0x7];                                     // 0x0AA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CH_Cross_hairSlot_As_CanvasSlot;                   // 0x0AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_development_tools_C*                 W_development_tools;                               // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ChatVisible_;                                      // 0x0AB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelectedLoadout_;                                 // 0x0AB9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9A[0x6];                                     // 0x0ABA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 SessionAuthTicket;                                 // 0x0AC0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSteamTicketHandle                     TicketHandel;                                      // 0x0AD0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9B[0x4];                                     // 0x0AD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamID                               SteamID;                                           // 0x0AD8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UW_vote_kick_menu_C*                    W_kick_menu;                                       // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_vote_kick_for_player_C*              W_vote_kick_for_player;                            // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoKickTimerIsRunning;                            // 0x0AF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9C[0x3];                                     // 0x0AF1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AutoKickTimer;                                     // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamKillsCounter;                                  // 0x0AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamKillsMax;                                      // 0x0AFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Vote_cooldown;                                     // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Vote_cooldown_active;                              // 0x0B08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9D[0x7];                                     // 0x0B09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCompassHUD_C*                          CompassRef;                                        // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UCompassIcon_C*>                 CompassObjects;                                    // 0x0B18(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUserWidget*>                    MyOnscreenMarker;                                  // 0x0B28(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                           BanPulse;                                          // 0x0B38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         BannedIDs;                                         // 0x0B40(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                          bHasFlag_;                                         // 0x0B50(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanBreach_;                                       // 0x0B51(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRunLocalClanFinder_;                              // 0x0B52(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9E[0x5];                                     // 0x0B53(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int64, class FString>                    LocalClansMap;                                     // 0x0B58(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UScopeWidget_C*                         ScopeRef;                                          // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          SettingsOpen;                                      // 0x0BB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void One23();
	void Two312();
	void AddDefuseWidget();
	void AddEquipmentComponent();
	void AddGrenadesToQuickSlots();
	void AddHitIndicatorwidget();
	void AddHitmarkerWidget();
	void AddOnScreenMarker(class AActor* Target);
	void AddSpectatorScreenForNewcomers();
	void BannedPlayerQuit();
	void BeginPlayController();
	void Bomb_Defused_INS_Sound();
	void Bomb_Defused_SEALS_Sound();
	void Bomb_Dropped_Sound();
	void Bomb_Pickup_Sound();
	void Bomb_Planted_Sound();
	void BombsiteInteractionWidgetEvent();
	void BombsiteRemoveWidget();
	void BreachMulticast(bool Param_bCanBreach_);
	void BreachServer(bool Param_bCanBreach_);
	void CameraFollowTeammateBackwards();
	void CameraFollowTeammateForward();
	void ChangeTeamMulticast(EPeak53Teams Param_PlayerTeam);
	void ChangeTeamServer(EPeak53Teams Param_PlayerTeam);
	void CheckFFA(bool* FFA_);
	void CheckIfActorHasOnScreenMarker(class UObject* TargetActor, bool* Result);
	void ClientEnableInput();
	void ClientInGameLoad();
	void ClientInitialize();
	void ClientPlaySound2d(class USoundBase* Sound);
	void ClientPossess();
	void ClientRespawn();
	void ClientSpectatePlayer(class AActor* NewViewTarget);
	void CloseRequested();
	void CMDAddOnScreenMarker(class AActor* Target);
	void CMDAddTeamKill();
	void CMDCallAddToPlayerReadyList();
	void CMDCallVoteForKick(EPeak53Teams Team, class APeak53PlayerState_C* CurrentPlayerPlayerstate);
	void CMDRemoveOnScreenMarker(class AActor* TargetActor);
	void CMDServerAuth(TArray<uint8>& Param_SessionAuthTicket, const class FString& Value);
	void CMDStartAutoKickTimer();
	void CMDVoteForVoteableMap(int32 LevelIndex);
	void CMDVoteYesOrNo(bool Yes);
	void ControllerRefreshScoreboard(EPeak53Teams Team);
	void ControllerSendMessage(const class FText& MessageFeedVar, ETextJustify Justification, const struct FSlateColor& In_Color_and_Opacity, int32 In_Font_Info_Size);
	void ControllerSpectateRotationTimer();
	void CrosshairHop(double CounterBounce);
	void CrosshairReset();
	void DisableInputClient();
	void DoPlantDefuseBomb();
	void EnableInputClient();
	void ExecuteUbergraph_BP_SGKController(int32 EntryPoint);
	void FFA_Players_Alive_Timer_Event();
	void FinishDefusingBombMulticast();
	void FinishDefusingBombServer();
	void GetBanlist();
	void GetPlayerName(class FText* Param_PlayerName);
	void HideKnife();
	void HideMeshes(bool NewHidden);
	void HQ_Voice_Start_INS();
	void HQ_Voice_Start_SEALS();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_DropBomb_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_F3_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_GlobalChat_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_M_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_N_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_OpenSettings_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_PlantBomb_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Shift_Eight_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Shift_Nine_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_TeamChat_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Y_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void JumpFromCamerasBackwards();
	void JumpFromCamerasForward();
	void MulticastApplyClan(const class FString& Clan);
	void MulticastSetBannedIDs(TArray<class FString>& Param_BannedIDs);
	void OnRep_bCanSpectate_();
	void OnRep_bHasBomb_();
	void OnRep_bHasFlag_();
	void OnToggleChat__DelegateSignature(bool bIsTeamChat);
	void OpenEmoteMenu();
	void OWNAddPlayerControllerQueue();
	void OWNAddScoreInfo(const struct FS_ScoreValues& ScoreInfo);
	void OWNCallDisconnect();
	void OWNCallSetLodoutServer();
	void OWNCallVoteForKick(EPeak53Teams Team, class APeak53PlayerState_C* CurrentPlayerPlayerstate);
	void OWNDisableShowJoinUi();
	void OWNShowJoinUi(bool CalledFromGameMode);
	void OWNStartAuth(const struct FSteamID& Param_SteamID);
	void OWNToggleShowJoinUi(bool CalledFromGameMode);
	void OWNToggleShowKickMenu(bool ForceClose);
	void OWNToggleVoteForKick(class APeak53PlayerState_C* CurrentPlayerPlayerstate);
	void OWNVoteForVoteableMap(int32 LevelIndex);
	void OWNVoteYesOrNo(bool Yes);
	void DefuseBomb();
	void DefuseFollowUp();
	void PlayersAlive(int32* PlayersLeftAlive);
	void PlayersAliveClient(int32 InInt);
	void PlayersAliveServer();
	void PlayerSelectedLoadoutServer();
	void QuitGameClient();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReloadControllerCharacter(class UBP_SGKSaveGame_C* Save);
	void RemoveBreachWidget();
	void RemoveDefuseWidget();
	void RemoveOnScreenMarker(class AActor* TargetActor);
	void RemoveVaultWidget();
	void ResetHighlights();
	void ScopeWidget(bool bActivate);
	void SendMessageFeedMulticast(const class FText& Param_MessageToBeSendFeedController);
	void SendMessageFeedServer(const class FText& Param_MessageToBeSendFeedController);
	void SensitivityChanged(float NewValue);
	void ServerInitPlayerInventory();
	void ServerRespawn();
	void ServerUpdateCharacterYaw(class APawn* Param_Pawn);
	void SetBombServer(bool Param_bHasBomb_);
	void SetClanLocallyClient(const int64& Key);
	void SetClanLocallyServer(const int64& Key);
	void SetFlagScoreAdd();
	void SetFlagServer(bool Param_bHasFlag_);
	void SetLoadoutServer(class UClass* Param_Loadout, TArray<struct FS_StartingWeaponItem>& WeaponsPrimary, TArray<struct FS_StartingWeaponItem>& WeaponsSecondary, TArray<struct FS_CraftingCost>& WeaponsTool1, TArray<struct FS_CraftingCost>& WeaponsTool2);
	void SetPlayerDeathsMulticast(const class FText& Param_PlayerDeaths);
	void SetPlayerDeathsServer(const class FText& Param_PlayerDeaths);
	void SetPlayerKillsMulticast(const class FText& Param_PlayerKills);
	void SetPlayerKillsServer(const class FText& Param_PlayerKills);
	void SetPlayerNameMulticast(const class FText& Param_PlayerName);
	void SetPlayerNameServer(const class FText& Param_PlayerName);
	void SetPlayerScoreMulticast(const class FText& Score);
	void SetPlayerScoreServer(const class FText& Score);
	void SGK_AllowStartingItems(bool* AllowStartingItems);
	void SGK_DestroyWeaponAttachments();
	void SGK_ItemMovedInInventory();
	void SGK_ItemSound(class FName ItemId, E_Sounds SoundType);
	void SGK_LoadWeaponAttachments(bool Visible);
	void SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot);
	void SGK_RemoveAttachment(E_AttachmentType Attachment);
	void SGK_SelfItem(struct FS_InvItem* SelfItem);
	void SGK_ShowAttachments();
	void SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem);
	void SGK_ToggleComponent();
	void SGK_UpdateAllAttachments();
	void SGK_UpdateCharacterYaw(class APawn* Param_Pawn);
	void SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot);
	void ShowKnife();
	void SpawnBreachWidget();
	void SpawnPlantedBombActor(const struct FTransform& SpawnTransform, EPeak53Teams Team);
	void SpawnVaultWidget();
	void SpectatorRotation();
	void StartBanTracker();
	void ToggleDebugWindow();
	void ToggleInGameMenu();
	void ToggleTooltip();
	void Ui_remove_game_end_screen();
	void Ui_toggle_game_end_screen(class AActor* Param_MyGameManager, int32 Param_PlayerScore, int32 Param_PlayerKills, int32 PlayerDeath, int32 MVPScore, int32 MVPKills, int32 MVPDeaths, const class FString& MVPName, int32 SealsScoreGlobal, int32 SealsKillsGlobal, int32 SealsDeathsGlobal, int32 InsurgentsScoreGlobal, int32 InsurgentsKillsGlobal, int32 InsurgentsDeathsGlobal, EPeak53Teams WinnerTeam, int32 UnlockedItem);
	void UnequipWeapon(const struct FS_WeaponSlot& S_WeaponSlot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SGKController_C">();
	}
	static class ABP_SGKController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SGKController_C>();
	}
};
static_assert(alignof(ABP_SGKController_C) == 0x000008, "Wrong alignment on ABP_SGKController_C");
static_assert(sizeof(ABP_SGKController_C) == 0x000BB8, "Wrong size on ABP_SGKController_C");
static_assert(offsetof(ABP_SGKController_C, UberGraphFrame) == 0x0008B0, "Member 'ABP_SGKController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, BP_PlayerBuildingComponent) == 0x0008B8, "Member 'ABP_SGKController_C::BP_PlayerBuildingComponent' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, BP_PlayerInventory) == 0x0008C0, "Member 'ABP_SGKController_C::BP_PlayerInventory' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, PlayerHUD) == 0x0008C8, "Member 'ABP_SGKController_C::PlayerHUD' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, EscMenu) == 0x0008D0, "Member 'ABP_SGKController_C::EscMenu' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, MasterCharacter) == 0x0008D8, "Member 'ABP_SGKController_C::MasterCharacter' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Name_BP_SGKController_C) == 0x0008E0, "Member 'ABP_SGKController_C::Name_BP_SGKController_C' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Mapping_Context) == 0x0008F8, "Member 'ABP_SGKController_C::Mapping_Context' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Action) == 0x000900, "Member 'ABP_SGKController_C::Action' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Peak53MainWidget) == 0x000908, "Member 'ABP_SGKController_C::Peak53MainWidget' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, PlayerTag) == 0x000910, "Member 'ABP_SGKController_C::PlayerTag' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, PlayerName) == 0x000928, "Member 'ABP_SGKController_C::PlayerName' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, PlayerTeam) == 0x000940, "Member 'ABP_SGKController_C::PlayerTeam' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, PlayerKills) == 0x000948, "Member 'ABP_SGKController_C::PlayerKills' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, PlayerDeaths) == 0x000960, "Member 'ABP_SGKController_C::PlayerDeaths' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, PlayerScore) == 0x000978, "Member 'ABP_SGKController_C::PlayerScore' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, ScoreboardRef) == 0x000990, "Member 'ABP_SGKController_C::ScoreboardRef' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, MessageToBeSendFeedController) == 0x000998, "Member 'ABP_SGKController_C::MessageToBeSendFeedController' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Loadout) == 0x0009B0, "Member 'ABP_SGKController_C::Loadout' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, MaxIndex) == 0x0009B8, "Member 'ABP_SGKController_C::MaxIndex' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, CameraIndex) == 0x0009BC, "Member 'ABP_SGKController_C::CameraIndex' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bScoreboardActive) == 0x0009C0, "Member 'ABP_SGKController_C::bScoreboardActive' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, BombsiteWidgetRef) == 0x0009C8, "Member 'ABP_SGKController_C::BombsiteWidgetRef' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bHasBomb_) == 0x0009D0, "Member 'ABP_SGKController_C::bHasBomb_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bCanDefuse_) == 0x0009D1, "Member 'ABP_SGKController_C::bCanDefuse_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bCanPlant_) == 0x0009D2, "Member 'ABP_SGKController_C::bCanPlant_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, DefuseWidgetRef) == 0x0009D8, "Member 'ABP_SGKController_C::DefuseWidgetRef' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, W_game_ende) == 0x0009E0, "Member 'ABP_SGKController_C::W_game_ende' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SpectatorMaxIndex) == 0x0009E8, "Member 'ABP_SGKController_C::SpectatorMaxIndex' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SpectatorIndex) == 0x0009EC, "Member 'ABP_SGKController_C::SpectatorIndex' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SpectatorPlayer) == 0x0009F0, "Member 'ABP_SGKController_C::SpectatorPlayer' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, MyGameManager) == 0x0009F8, "Member 'ABP_SGKController_C::MyGameManager' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, VaultWidgetRef) == 0x000A00, "Member 'ABP_SGKController_C::VaultWidgetRef' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, BreachWidgetRef) == 0x000A08, "Member 'ABP_SGKController_C::BreachWidgetRef' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, W_game_choose_team) == 0x000A10, "Member 'ABP_SGKController_C::W_game_choose_team' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, W_game_warmup_info) == 0x000A18, "Member 'ABP_SGKController_C::W_game_warmup_info' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SenderText) == 0x000A20, "Member 'ABP_SGKController_C::SenderText' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SenderName) == 0x000A38, "Member 'ABP_SGKController_C::SenderName' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Bomb_Pickup_Sound_Cue) == 0x000A50, "Member 'ABP_SGKController_C::Bomb_Pickup_Sound_Cue' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Bomb_Dropped_Sound_Cue) == 0x000A58, "Member 'ABP_SGKController_C::Bomb_Dropped_Sound_Cue' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Bomb_Planted_Sound_Cue) == 0x000A60, "Member 'ABP_SGKController_C::Bomb_Planted_Sound_Cue' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Bomb_Defused_SEALS_Sound_Cue) == 0x000A68, "Member 'ABP_SGKController_C::Bomb_Defused_SEALS_Sound_Cue' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Bomb_Defused_INS_Sound_Cue) == 0x000A70, "Member 'ABP_SGKController_C::Bomb_Defused_INS_Sound_Cue' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, CrosshairUpValue) == 0x000A78, "Member 'ABP_SGKController_C::CrosshairUpValue' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, OnToggleChat) == 0x000A80, "Member 'ABP_SGKController_C::OnToggleChat' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, TEMP_BombMontage) == 0x000A90, "Member 'ABP_SGKController_C::TEMP_BombMontage' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SpectatingRotation) == 0x000A98, "Member 'ABP_SGKController_C::SpectatingRotation' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bCanSpectate_) == 0x000AA0, "Member 'ABP_SGKController_C::bCanSpectate_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, CH_Cross_hairSlot_As_CanvasSlot) == 0x000AA8, "Member 'ABP_SGKController_C::CH_Cross_hairSlot_As_CanvasSlot' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, W_development_tools) == 0x000AB0, "Member 'ABP_SGKController_C::W_development_tools' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, ChatVisible_) == 0x000AB8, "Member 'ABP_SGKController_C::ChatVisible_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bSelectedLoadout_) == 0x000AB9, "Member 'ABP_SGKController_C::bSelectedLoadout_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SessionAuthTicket) == 0x000AC0, "Member 'ABP_SGKController_C::SessionAuthTicket' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, TicketHandel) == 0x000AD0, "Member 'ABP_SGKController_C::TicketHandel' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SteamID) == 0x000AD8, "Member 'ABP_SGKController_C::SteamID' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, W_kick_menu) == 0x000AE0, "Member 'ABP_SGKController_C::W_kick_menu' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, W_vote_kick_for_player) == 0x000AE8, "Member 'ABP_SGKController_C::W_vote_kick_for_player' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, AutoKickTimerIsRunning) == 0x000AF0, "Member 'ABP_SGKController_C::AutoKickTimerIsRunning' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, AutoKickTimer) == 0x000AF4, "Member 'ABP_SGKController_C::AutoKickTimer' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, TeamKillsCounter) == 0x000AF8, "Member 'ABP_SGKController_C::TeamKillsCounter' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, TeamKillsMax) == 0x000AFC, "Member 'ABP_SGKController_C::TeamKillsMax' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Vote_cooldown) == 0x000B00, "Member 'ABP_SGKController_C::Vote_cooldown' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, Vote_cooldown_active) == 0x000B08, "Member 'ABP_SGKController_C::Vote_cooldown_active' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, CompassRef) == 0x000B10, "Member 'ABP_SGKController_C::CompassRef' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, CompassObjects) == 0x000B18, "Member 'ABP_SGKController_C::CompassObjects' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, MyOnscreenMarker) == 0x000B28, "Member 'ABP_SGKController_C::MyOnscreenMarker' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, BanPulse) == 0x000B38, "Member 'ABP_SGKController_C::BanPulse' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, BannedIDs) == 0x000B40, "Member 'ABP_SGKController_C::BannedIDs' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bHasFlag_) == 0x000B50, "Member 'ABP_SGKController_C::bHasFlag_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bCanBreach_) == 0x000B51, "Member 'ABP_SGKController_C::bCanBreach_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, bRunLocalClanFinder_) == 0x000B52, "Member 'ABP_SGKController_C::bRunLocalClanFinder_' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, LocalClansMap) == 0x000B58, "Member 'ABP_SGKController_C::LocalClansMap' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, ScopeRef) == 0x000BA8, "Member 'ABP_SGKController_C::ScopeRef' has a wrong offset!");
static_assert(offsetof(ABP_SGKController_C, SettingsOpen) == 0x000BB0, "Member 'ABP_SGKController_C::SettingsOpen' has a wrong offset!");

}

