#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x520 - 0x408)
// BlueprintGeneratedClass Peak53GameState.Peak53GameState_C
class APeak53GameState_C : public APKGameState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AGameManager_C*                        GameManagerRef;                                    // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RoundTimer;                                        // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ConnectedPlayers;                                  // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3917[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GameManagerMessage;                                // 0x430(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	double                                       StartCountdown;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SealsScore;                                        // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InsurgentsScore;                                   // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          PrematchTimer;                                     // 0x458(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        PrematchTime;                                      // 0x460(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameIsActive;                                      // 0x464(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3918[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MatchTime;                                         // 0x468(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3919[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          MatchTimer;                                        // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        RoundHardReset;                                    // 0x478(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRoundEnding_;                                     // 0x47C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRoundEnded;                                      // 0x47D(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DisconnectTime;                                    // 0x480(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GameTimer;                                         // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Kill_Confirmed_Cue;                                // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SealsVictoriousCue;                                // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Insurgents_Victorious_Cue;                         // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HQ_Draw_Cue;                                       // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Unable_To_Plant_The_Bomb_Cue;                      // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        BreachActors;                                      // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class APlayerController*>             ReadyPlayers;                                      // 0x4C0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         GameIsInWarmup;                                    // 0x4D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        MapRotation;                                       // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsBombPlanted_;                                    // 0x4E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldLookForDraw_;                               // 0x4E9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentVoteYes;                                    // 0x4EC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentVoteNo;                                     // 0x4F0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentVoteMembers;                                // 0x4F4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APeak53PlayerState_C*                  CurrentVotePlayerObject;                           // 0x4F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVoteInUse;                                       // 0x500(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPeak53Teams                      CurrentVoteTeam;                                   // 0x501(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerController*>             PlayersAlreadyVoted;                               // 0x508(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	class USoundBase*                            Begin_Round_Warning_Cue;                           // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APeak53GameState_C* GetDefaultObj();

	void AddPlayerToReadyList(class APlayerController*& NewItem, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void ResetBreachActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
	void CheckFFA(bool* FFA_, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue);
	void OnRep_GameManagerMessage(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void CallVoteForPlayer(enum class EPeak53Teams Team, class APeak53PlayerState_C* CurrentPlayerPlayerstate);
	void VoteYes(class APlayerController*& ItemToFind);
	void VoteNo(class APlayerController*& ItemToFind);
	void AddPlayerToLobby(TArray<class APlayerController*>& PlayerListGamemode);
	void AddScoreScoreboardServer(bool SealsTrue);
	void AddScoreMulticast(bool SealsTrue);
	void AddDeathsServer(class APeak53PlayerState_C* PlayerState);
	void AddKillsServer(class APeak53PlayerState_C* PlayerState, bool IsTeamMember);
	void AddScorePlayerServer(class APeak53PlayerState_C* PlayerState, enum class ENU_ScoreCategory ScoreCategory);
	void DecrementPrematchTimer();
	void DecrementMatchTimer();
	void ReceiveBeginPlay();
	void NextRoundGameState();
	void ResetScoresServer();
	void CheckHardReset();
	void LateJoinersServer();
	void StartGameTimer();
	void MulticastSound(class USoundBase* Sound);
	void PlaySound(class USoundBase* Sound);
	void HQ_Kill_Confirmed(class USoundBase* Sound);
	void SealsVictorious(class USoundBase* Sound);
	void Insurgents_Victorious(class USoundBase* Sound);
	void HQ_Draw(class USoundBase* Sound);
	void Unable_To_Plant(class USoundBase* Sound);
	void StartGame();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Peak53GameState(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_7, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_8, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_9, int32 Temp_int_Loop_Counter_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_10, int32 Temp_int_Loop_Counter_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_8, enum class EPeak53Teams K2Node_CustomEvent_Team, class APeak53PlayerState_C* K2Node_CustomEvent_CurrentPlayerPlayerstate, bool CallFunc_IsServer_ReturnValue, class APlayerController* K2Node_CustomEvent_ItemToFind_1, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* K2Node_CustomEvent_ItemToFind, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 Temp_int_Loop_Counter_Variable_9, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_10, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_13, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, TArray<class AGameManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class APlayerController*>& K2Node_CustomEvent_PlayerListGamemode, class AGameManager_C* CallFunc_Array_Get_Item_1, class APlayerController* CallFunc_Array_Get_Item_2, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_2, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_14, bool K2Node_CustomEvent_SealsTrue_1, bool K2Node_CustomEvent_SealsTrue, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_16, class APeak53PlayerState_C* K2Node_CustomEvent_PlayerState_2, class APeak53PlayerState_C* K2Node_CustomEvent_PlayerState_1, bool K2Node_CustomEvent_isTeamMember, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_3, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_17, class FText CallFunc_Conv_IntToText_ReturnValue_1, class APeak53PlayerState_C* K2Node_CustomEvent_PlayerState, enum class ENU_ScoreCategory K2Node_CustomEvent_ScoreCategory, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Conv_StringToInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_18, class FText CallFunc_Conv_IntToText_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_4, bool K2Node_DynamicCast_bSuccess_5, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_5, bool K2Node_DynamicCast_bSuccess_6, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_6, bool K2Node_DynamicCast_bSuccess_7, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_7, bool K2Node_DynamicCast_bSuccess_8, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_8, bool K2Node_DynamicCast_bSuccess_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 Temp_int_Array_Index_Variable_11, int32 CallFunc_Conv_StringToInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_12, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item_3, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_1, bool K2Node_DynamicCast_bSuccess_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_9, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode, bool K2Node_DynamicCast_bSuccess_12, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable_12, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_19, int32 Temp_int_Loop_Counter_Variable_13, int32 CallFunc_Add_IntInt_ReturnValue_20, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, int32 CallFunc_Array_Length_ReturnValue_9, int32 Temp_int_Array_Index_Variable_13, bool CallFunc_Less_IntInt_ReturnValue_4, class APlayerState* CallFunc_Array_Get_Item_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerState* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_10, bool K2Node_DynamicCast_bSuccess_13, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess_14, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_WithEditor_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess_1, int32 Temp_int_Array_Index_Variable_14, class APlayerState* CallFunc_Array_Get_Item_6, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_2, bool K2Node_DynamicCast_bSuccess_15, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_11, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_21, int32 Temp_int_Loop_Counter_Variable_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_22, bool CallFunc_GetScoreValue_sucess, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo, bool CallFunc_GetScoreValue_sucess_1, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_1, int32 CallFunc_Add_IntInt_ReturnValue_23, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_24, class FText CallFunc_Conv_IntToText_ReturnValue_4, bool CallFunc_GetScoreValue_sucess_2, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_2, int32 Temp_int_Array_Index_Variable_15, class APlayerState* CallFunc_Array_Get_Item_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_12, bool K2Node_DynamicCast_bSuccess_17, int32 CallFunc_Add_IntInt_ReturnValue_25, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_5, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_1, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_GetScoreValue_sucess_3, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_3, bool CallFunc_GetScoreValue_sucess_4, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_4, int32 CallFunc_Add_IntInt_ReturnValue_26, class FText CallFunc_Conv_IntToText_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_27, class FText CallFunc_Conv_IntToText_ReturnValue_7, class USoundBase* K2Node_CustomEvent_Sound_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound_5, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* K2Node_CustomEvent_Sound_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class ABombItem_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABombItem_C* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_7, class ABP_SGKController_C* CallFunc_Array_Get_Item_9, class ABP_SGKController_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_12, int32 CallFunc_Array_Length_ReturnValue_13, int32 CallFunc_Array_Length_ReturnValue_14, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_15, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class ABombItem_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, TArray<class APlantedBomb_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, class ABombItem_C* CallFunc_Array_Get_Item_11, class APlantedBomb_C* CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue_16, int32 CallFunc_Array_Length_ReturnValue_17, bool CallFunc_Less_IntInt_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_9, int32 Temp_int_Variable_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess_19, class APlayerState* CallFunc_Array_Get_Item_13, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_3, bool K2Node_DynamicCast_bSuccess_20, int32 CallFunc_Array_Length_ReturnValue_18, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_10, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_13, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_CheckFFA_FFA_, bool CallFunc_BooleanOR_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_15, class USoundBase* K2Node_CustomEvent_Sound_2, bool CallFunc_Less_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_28, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class USoundBase* K2Node_CustomEvent_Sound_1, bool CallFunc_CheckFFA_FFA__1, class USoundBase* K2Node_CustomEvent_Sound, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, int32 Temp_int_Array_Index_Variable_16, class APlayerState* CallFunc_Array_Get_Item_14, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_4, bool K2Node_DynamicCast_bSuccess_22, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_14, bool K2Node_DynamicCast_bSuccess_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class APlayerState* CallFunc_Array_Get_Item_15, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode_1, bool K2Node_DynamicCast_bSuccess_24, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_19, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_15, bool K2Node_DynamicCast_bSuccess_25, bool CallFunc_Less_IntInt_ReturnValue_12, TArray<class AGameManager_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, class AGameManager_C* CallFunc_Array_Get_Item_16, int32 CallFunc_Array_Length_ReturnValue_20, TArray<class ABP_Claymore_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, bool CallFunc_Less_IntInt_ReturnValue_13, class ABP_Claymore_C* CallFunc_Array_Get_Item_17, bool CallFunc_BooleanAND_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_21, TArray<class ABP_Landmine_C*>& CallFunc_GetAllActorsOfClass_OutActors_6, bool CallFunc_Less_IntInt_ReturnValue_14, class ABP_Landmine_C* CallFunc_Array_Get_Item_18, int32 CallFunc_Array_Length_ReturnValue_22, bool CallFunc_Less_IntInt_ReturnValue_15, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 Temp_int_Variable_3, int32 Temp_int_Loop_Counter_Variable_16, bool CallFunc_Less_IntInt_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_29);
};

}

