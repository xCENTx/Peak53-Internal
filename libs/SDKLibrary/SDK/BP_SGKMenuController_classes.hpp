#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x888 - 0x850)
// BlueprintGeneratedClass BP_SGKMenuController.BP_SGKMenuController_C
class ABP_SGKMenuController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x850(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                MenuWidget;                                        // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           MainMenu_Widget;                                   // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGameLobbyWidget_C*                    LobyMenuWidget;                                    // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Lodout;                                            // 0x870(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLodoutSet;                                       // 0x878(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_SGKMenuController_C* GetDefaultObj();

	void InpActEvt_F2_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void CMDForcePlayerReady();
	void OWNUpdatePlayerRank();
	void CMDUpdatePlayerRank(int32 SteamGlobalRank);
	void CMDForceSetPlayerReady();
	void PlayReadySound();
	void CMDSetPlayerLodout(int32 Lodout);
	void SetPlayerLodout(class UClass* Loadout);
	void RemoveLobbyScreen();
	void CMDSwitchTeams();
	void CMDSetPlayerReady();
	void UpdateLobbyUI(TArray<class FName>& Name, TArray<enum class EPeak53Teams>& Team, TArray<bool>& Ready, TArray<int32>& Rank);
	void SetTeamForPlayer(enum class EPeak53Teams PlayerTeam);
	void ShowLobbyMenu();
	void ShowMainMenu();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SGKMenuController(int32 EntryPoint, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess, const struct FModifyContextOptions& Temp_struct_Variable, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddPlayerMappableConfig_self_CastInput, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 K2Node_CustomEvent_SteamGlobalRank, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, int32 K2Node_CustomEvent_Lodout, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_2, bool K2Node_DynamicCast_bSuccess_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_6, class UClass* K2Node_CustomEvent_Loadout, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_3, bool K2Node_DynamicCast_bSuccess_7, class AGameStateBase* CallFunc_GetGameState_ReturnValue_4, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_4, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& K2Node_CustomEvent_Name, TArray<enum class EPeak53Teams>& K2Node_CustomEvent_Team, TArray<bool>& K2Node_CustomEvent_ready, TArray<int32>& K2Node_CustomEvent_rank, int32 CallFunc_Array_Length_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_3, bool K2Node_DynamicCast_bSuccess_9, enum class EPeak53Teams K2Node_CustomEvent_PlayerTeam, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_4, bool K2Node_DynamicCast_bSuccess_10, class ABP_SGKMenuController_C* Temp_object_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_1, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_5, bool K2Node_DynamicCast_bSuccess_11, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_5, bool K2Node_DynamicCast_bSuccess_12, class UGameLobbyWidget_C* CallFunc_Create_ReturnValue, class ABP_SGKMenuController_C* Temp_object_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_6, bool K2Node_DynamicCast_bSuccess_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsLocalController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void OnLodoutSet__DelegateSignature(class UClass* NewLodout);
};

}


