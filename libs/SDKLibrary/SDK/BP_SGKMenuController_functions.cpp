#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKMenuController.BP_SGKMenuController_C
// (Actor, PlayerController)

class UClass* ABP_SGKMenuController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKMenuController_C");

	return Clss;
}


// BP_SGKMenuController_C BP_SGKMenuController.Default__BP_SGKMenuController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SGKMenuController_C* ABP_SGKMenuController_C::GetDefaultObj()
{
	static class ABP_SGKMenuController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SGKMenuController_C*>(ABP_SGKMenuController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKMenuController.BP_SGKMenuController_C.InpActEvt_F2_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKMenuController_C::InpActEvt_F2_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "InpActEvt_F2_K2Node_InputKeyEvent_0");

	Params::ABP_SGKMenuController_C_InpActEvt_F2_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.CMDForcePlayerReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::CMDForcePlayerReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "CMDForcePlayerReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.OWNUpdatePlayerRank
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::OWNUpdatePlayerRank()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "OWNUpdatePlayerRank");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.CMDUpdatePlayerRank
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SteamGlobalRank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuController_C::CMDUpdatePlayerRank(int32 SteamGlobalRank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "CMDUpdatePlayerRank");

	Params::ABP_SGKMenuController_C_CMDUpdatePlayerRank_Params Parms{};

	Parms.SteamGlobalRank = SteamGlobalRank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.CMDForceSetPlayerReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::CMDForceSetPlayerReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "CMDForceSetPlayerReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.PlayReadySound
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::PlayReadySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "PlayReadySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.CMDSetPlayerLodout
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Lodout                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuController_C::CMDSetPlayerLodout(int32 Lodout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "CMDSetPlayerLodout");

	Params::ABP_SGKMenuController_C_CMDSetPlayerLodout_Params Parms{};

	Parms.Lodout = Lodout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.SetPlayerLodout
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuController_C::SetPlayerLodout(class UClass* Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "SetPlayerLodout");

	Params::ABP_SGKMenuController_C_SetPlayerLodout_Params Parms{};

	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.RemoveLobbyScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::RemoveLobbyScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "RemoveLobbyScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.CMDSwitchTeams
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::CMDSwitchTeams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "CMDSwitchTeams");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.CMDSetPlayerReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::CMDSetPlayerReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "CMDSetPlayerReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.UpdateLobbyUI
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Name                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<enum class EPeak53Teams>    Team                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                       Ready                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Rank                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_SGKMenuController_C::UpdateLobbyUI(TArray<class FName>& Name, TArray<enum class EPeak53Teams>& Team, TArray<bool>& Ready, TArray<int32>& Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "UpdateLobbyUI");

	Params::ABP_SGKMenuController_C_UpdateLobbyUI_Params Parms{};

	Parms.Name = Name;
	Parms.Team = Team;
	Parms.Ready = Ready;
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.SetTeamForPlayer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            PlayerTeam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuController_C::SetTeamForPlayer(enum class EPeak53Teams PlayerTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "SetTeamForPlayer");

	Params::ABP_SGKMenuController_C_SetTeamForPlayer_Params Parms{};

	Parms.PlayerTeam = PlayerTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.ShowLobbyMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::ShowLobbyMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "ShowLobbyMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.ShowMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::ShowMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "ShowMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SGKMenuController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.ExecuteUbergraph_BP_SGKMenuController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnhancedInputLocalPlayerSubsystem*CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifyContextOptions       Temp_struct_Variable                                             (ConstParm, NoDestructor)
// TScriptInterface<class IEnhancedInputSubsystemInterface>CallFunc_AddPlayerMappableConfig_self_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              K2Node_CustomEvent_SteamGlobalRank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Lodout                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loadout                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State_4                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Name                                          (ConstParm, ReferenceParm)
// TArray<enum class EPeak53Teams>    K2Node_CustomEvent_Team                                          (ConstParm, ReferenceParm)
// TArray<bool>                       K2Node_CustomEvent_ready                                         (ConstParm, ReferenceParm)
// TArray<int32>                      K2Node_CustomEvent_rank                                          (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_PlayerTeam                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State_5                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameLobbyWidget_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_SGKMenuController_C::ExecuteUbergraph_BP_SGKMenuController(int32 EntryPoint, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess, const struct FModifyContextOptions& Temp_struct_Variable, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddPlayerMappableConfig_self_CastInput, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 K2Node_CustomEvent_SteamGlobalRank, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, int32 K2Node_CustomEvent_Lodout, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_2, bool K2Node_DynamicCast_bSuccess_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_6, class UClass* K2Node_CustomEvent_Loadout, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_3, bool K2Node_DynamicCast_bSuccess_7, class AGameStateBase* CallFunc_GetGameState_ReturnValue_4, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_4, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& K2Node_CustomEvent_Name, TArray<enum class EPeak53Teams>& K2Node_CustomEvent_Team, TArray<bool>& K2Node_CustomEvent_ready, TArray<int32>& K2Node_CustomEvent_rank, int32 CallFunc_Array_Length_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_3, bool K2Node_DynamicCast_bSuccess_9, enum class EPeak53Teams K2Node_CustomEvent_PlayerTeam, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_4, bool K2Node_DynamicCast_bSuccess_10, class ABP_SGKMenuController_C* Temp_object_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_1, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_5, bool K2Node_DynamicCast_bSuccess_11, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_5, bool K2Node_DynamicCast_bSuccess_12, class UGameLobbyWidget_C* CallFunc_Create_ReturnValue, class ABP_SGKMenuController_C* Temp_object_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_6, bool K2Node_DynamicCast_bSuccess_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsLocalController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "ExecuteUbergraph_BP_SGKMenuController");

	Params::ABP_SGKMenuController_C_ExecuteUbergraph_BP_SGKMenuController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddPlayerMappableConfig_self_CastInput = CallFunc_AddPlayerMappableConfig_self_CastInput;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State = K2Node_DynamicCast_AsPeak_53Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_SteamGlobalRank = K2Node_CustomEvent_SteamGlobalRank;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1 = K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.K2Node_CustomEvent_Lodout = K2Node_CustomEvent_Lodout;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State_2 = K2Node_DynamicCast_AsBP_SGKMenu_Game_State_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;
	Parms.CallFunc_GetGameState_ReturnValue_3 = CallFunc_GetGameState_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State_3 = K2Node_DynamicCast_AsBP_SGKMenu_Game_State_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetGameState_ReturnValue_4 = CallFunc_GetGameState_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State_4 = K2Node_DynamicCast_AsBP_SGKMenu_Game_State_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.K2Node_CustomEvent_ready = K2Node_CustomEvent_ready;
	Parms.K2Node_CustomEvent_rank = K2Node_CustomEvent_rank;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_3 = K2Node_DynamicCast_AsBP_SGKGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CustomEvent_PlayerTeam = K2Node_CustomEvent_PlayerTeam;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_4 = K2Node_DynamicCast_AsBP_SGKGame_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetGameState_ReturnValue_5 = CallFunc_GetGameState_ReturnValue_5;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State_5 = K2Node_DynamicCast_AsBP_SGKMenu_Game_State_5;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_5 = K2Node_DynamicCast_AsBP_SGKGame_Instance_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_6 = K2Node_DynamicCast_AsBP_SGKGame_Instance_6;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuController.BP_SGKMenuController_C.OnLodoutSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewLodout                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuController_C::OnLodoutSet__DelegateSignature(class UClass* NewLodout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuController_C", "OnLodoutSet__DelegateSignature");

	Params::ABP_SGKMenuController_C_OnLodoutSet__DelegateSignature_Params Parms{};

	Parms.NewLodout = NewLodout;

	UObject::ProcessEvent(Func, &Parms);

}

}


