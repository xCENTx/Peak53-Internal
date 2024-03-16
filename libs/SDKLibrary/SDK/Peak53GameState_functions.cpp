#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Peak53GameState.Peak53GameState_C
// (Actor)

class UClass* APeak53GameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Peak53GameState_C");

	return Clss;
}


// Peak53GameState_C Peak53GameState.Default__Peak53GameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APeak53GameState_C* APeak53GameState_C::GetDefaultObj()
{
	static class APeak53GameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APeak53GameState_C*>(APeak53GameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53GameState.Peak53GameState_C.AddPlayerToReadyList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKGameMode_C*           K2Node_DynamicCast_AsBP_SGKGame_Mode                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::AddPlayerToReadyList(class APlayerController*& NewItem, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "AddPlayerToReadyList");

	Params::APeak53GameState_C_AddPlayerToReadyList_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode = K2Node_DynamicCast_AsBP_SGKGame_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.ResetBreachActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::ResetBreachActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "ResetBreachActors");

	Params::APeak53GameState_C_ResetBreachActors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.CheckFFA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               FFA_                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::CheckFFA(bool* FFA_, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "CheckFFA");

	Params::APeak53GameState_C_CheckFFA_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FFA_ != nullptr)
		*FFA_ = Parms.FFA_;

}


// Function Peak53GameState.Peak53GameState_C.OnRep_GameManagerMessage
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::OnRep_GameManagerMessage(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "OnRep_GameManagerMessage");

	Params::APeak53GameState_C_OnRep_GameManagerMessage_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.CallVoteForPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        CurrentPlayerPlayerstate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::CallVoteForPlayer(enum class EPeak53Teams Team, class APeak53PlayerState_C* CurrentPlayerPlayerstate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "CallVoteForPlayer");

	Params::APeak53GameState_C_CallVoteForPlayer_Params Parms{};

	Parms.Team = Team;
	Parms.CurrentPlayerPlayerstate = CurrentPlayerPlayerstate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.VoteYes
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::VoteYes(class APlayerController*& ItemToFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "VoteYes");

	Params::APeak53GameState_C_VoteYes_Params Parms{};

	Parms.ItemToFind = ItemToFind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.VoteNo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::VoteNo(class APlayerController*& ItemToFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "VoteNo");

	Params::APeak53GameState_C_VoteNo_Params Parms{};

	Parms.ItemToFind = ItemToFind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.AddPlayerToLobby
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerController*>   PlayerListGamemode                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APeak53GameState_C::AddPlayerToLobby(TArray<class APlayerController*>& PlayerListGamemode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "AddPlayerToLobby");

	Params::APeak53GameState_C_AddPlayerToLobby_Params Parms{};

	Parms.PlayerListGamemode = PlayerListGamemode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.AddScoreScoreboardServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SealsTrue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::AddScoreScoreboardServer(bool SealsTrue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "AddScoreScoreboardServer");

	Params::APeak53GameState_C_AddScoreScoreboardServer_Params Parms{};

	Parms.SealsTrue = SealsTrue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.AddScoreMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SealsTrue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::AddScoreMulticast(bool SealsTrue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "AddScoreMulticast");

	Params::APeak53GameState_C_AddScoreMulticast_Params Parms{};

	Parms.SealsTrue = SealsTrue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.AddDeathsServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APeak53PlayerState_C*        PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::AddDeathsServer(class APeak53PlayerState_C* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "AddDeathsServer");

	Params::APeak53GameState_C_AddDeathsServer_Params Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.AddKillsServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APeak53PlayerState_C*        PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsTeamMember                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::AddKillsServer(class APeak53PlayerState_C* PlayerState, bool IsTeamMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "AddKillsServer");

	Params::APeak53GameState_C_AddKillsServer_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.IsTeamMember = IsTeamMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.AddScorePlayerServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APeak53PlayerState_C*        PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENU_ScoreCategory       ScoreCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::AddScorePlayerServer(class APeak53PlayerState_C* PlayerState, enum class ENU_ScoreCategory ScoreCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "AddScorePlayerServer");

	Params::APeak53GameState_C_AddScorePlayerServer_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ScoreCategory = ScoreCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.DecrementPrematchTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::DecrementPrematchTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "DecrementPrematchTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.DecrementMatchTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::DecrementMatchTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "DecrementMatchTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APeak53GameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.NextRoundGameState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::NextRoundGameState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "NextRoundGameState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.ResetScoresServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::ResetScoresServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "ResetScoresServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.CheckHardReset
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::CheckHardReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "CheckHardReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.LateJoinersServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::LateJoinersServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "LateJoinersServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.StartGameTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::StartGameTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "StartGameTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.MulticastSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::MulticastSound(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "MulticastSound");

	Params::APeak53GameState_C_MulticastSound_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.PlaySound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::PlaySound(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "PlaySound");

	Params::APeak53GameState_C_PlaySound_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.HQ Kill Confirmed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::HQ_Kill_Confirmed(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "HQ Kill Confirmed");

	Params::APeak53GameState_C_HQ_Kill_Confirmed_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.SealsVictorious
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::SealsVictorious(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "SealsVictorious");

	Params::APeak53GameState_C_SealsVictorious_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.Insurgents Victorious
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::Insurgents_Victorious(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "Insurgents Victorious");

	Params::APeak53GameState_C_Insurgents_Victorious_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.HQ Draw
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::HQ_Draw(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "HQ Draw");

	Params::APeak53GameState_C_HQ_Draw_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.Unable To Plant
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::Unable_To_Plant(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "Unable To Plant");

	Params::APeak53GameState_C_Unable_To_Plant_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.StartGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APeak53GameState_C::StartGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "StartGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53GameState.Peak53GameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "ReceiveTick");

	Params::APeak53GameState_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53GameState.Peak53GameState_C.ExecuteUbergraph_Peak53GameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_Team                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_CustomEvent_CurrentPlayerPlayerstate                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_ItemToFind_1                                  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_ItemToFind                                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGameManager_C*>      CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// TArray<class APlayerController*>   K2Node_CustomEvent_PlayerListGamemode                            (ConstParm, ReferenceParm)
// class AGameManager_C*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SealsTrue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SealsTrue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_CustomEvent_PlayerState_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_CustomEvent_PlayerState_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isTeamMember                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class APeak53PlayerState_C*        K2Node_CustomEvent_PlayerState                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENU_ScoreCategory       K2Node_CustomEvent_ScoreCategory                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_4                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_5                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_6                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_7                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_8                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_9                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKGameMode_C*           K2Node_DynamicCast_AsBP_SGKGame_Mode                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_4                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_5                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_10                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_11                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetScoreValue_sucess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ScoreValues              CallFunc_GetScoreValue_resultInfo                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetScoreValue_sucess_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ScoreValues              CallFunc_GetScoreValue_resultInfo_1                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_24                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// bool                               CallFunc_GetScoreValue_sucess_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ScoreValues              CallFunc_GetScoreValue_resultInfo_2                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_7                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_12                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_25                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetScoreValue_sucess_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ScoreValues              CallFunc_GetScoreValue_resultInfo_3                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetScoreValue_sucess_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ScoreValues              CallFunc_GetScoreValue_resultInfo_4                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_26                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_6                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_27                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_7                            (None)
// class USoundBase*                  K2Node_CustomEvent_Sound_6                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound_5                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound_4                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABombItem_C*>         CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class ABombItem_C*                 CallFunc_Array_Get_Item_8                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         CallFunc_Array_Get_Item_9                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         CallFunc_Array_Get_Item_10                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABombItem_C*>         CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// TArray<class APlantedBomb_C*>      CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm)
// class ABombItem_C*                 CallFunc_Array_Get_Item_11                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlantedBomb_C*              CallFunc_Array_Get_Item_12                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_16                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_17                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_13                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_18                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_13                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA_                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound_3                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_28                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA__1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_14                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_14                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_15                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKGameMode_C*           K2Node_DynamicCast_AsBP_SGKGame_Mode_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_19                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_15                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGameManager_C*>      CallFunc_GetAllActorsOfClass_OutActors_4                         (ReferenceParm)
// class AGameManager_C*              CallFunc_Array_Get_Item_16                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_20                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Claymore_C*>      CallFunc_GetAllActorsOfClass_OutActors_5                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Claymore_C*              CallFunc_Array_Get_Item_17                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_21                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Landmine_C*>      CallFunc_GetAllActorsOfClass_OutActors_6                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Landmine_C*              CallFunc_Array_Get_Item_18                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_22                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_29                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APeak53GameState_C::ExecuteUbergraph_Peak53GameState(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_7, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_8, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_9, int32 Temp_int_Loop_Counter_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_10, int32 Temp_int_Loop_Counter_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_8, enum class EPeak53Teams K2Node_CustomEvent_Team, class APeak53PlayerState_C* K2Node_CustomEvent_CurrentPlayerPlayerstate, bool CallFunc_IsServer_ReturnValue, class APlayerController* K2Node_CustomEvent_ItemToFind_1, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* K2Node_CustomEvent_ItemToFind, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 Temp_int_Loop_Counter_Variable_9, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_10, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_13, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, TArray<class AGameManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class APlayerController*>& K2Node_CustomEvent_PlayerListGamemode, class AGameManager_C* CallFunc_Array_Get_Item_1, class APlayerController* CallFunc_Array_Get_Item_2, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_2, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_14, bool K2Node_CustomEvent_SealsTrue_1, bool K2Node_CustomEvent_SealsTrue, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_16, class APeak53PlayerState_C* K2Node_CustomEvent_PlayerState_2, class APeak53PlayerState_C* K2Node_CustomEvent_PlayerState_1, bool K2Node_CustomEvent_isTeamMember, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_3, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_17, class FText CallFunc_Conv_IntToText_ReturnValue_1, class APeak53PlayerState_C* K2Node_CustomEvent_PlayerState, enum class ENU_ScoreCategory K2Node_CustomEvent_ScoreCategory, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Conv_StringToInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_18, class FText CallFunc_Conv_IntToText_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_4, bool K2Node_DynamicCast_bSuccess_5, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_5, bool K2Node_DynamicCast_bSuccess_6, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_6, bool K2Node_DynamicCast_bSuccess_7, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_7, bool K2Node_DynamicCast_bSuccess_8, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_8, bool K2Node_DynamicCast_bSuccess_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 Temp_int_Array_Index_Variable_11, int32 CallFunc_Conv_StringToInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_12, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item_3, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_1, bool K2Node_DynamicCast_bSuccess_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_9, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode, bool K2Node_DynamicCast_bSuccess_12, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable_12, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_19, int32 Temp_int_Loop_Counter_Variable_13, int32 CallFunc_Add_IntInt_ReturnValue_20, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, int32 CallFunc_Array_Length_ReturnValue_9, int32 Temp_int_Array_Index_Variable_13, bool CallFunc_Less_IntInt_ReturnValue_4, class APlayerState* CallFunc_Array_Get_Item_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerState* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_10, bool K2Node_DynamicCast_bSuccess_13, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess_14, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_WithEditor_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess_1, int32 Temp_int_Array_Index_Variable_14, class APlayerState* CallFunc_Array_Get_Item_6, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_2, bool K2Node_DynamicCast_bSuccess_15, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_11, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_21, int32 Temp_int_Loop_Counter_Variable_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_22, bool CallFunc_GetScoreValue_sucess, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo, bool CallFunc_GetScoreValue_sucess_1, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_1, int32 CallFunc_Add_IntInt_ReturnValue_23, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_24, class FText CallFunc_Conv_IntToText_ReturnValue_4, bool CallFunc_GetScoreValue_sucess_2, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_2, int32 Temp_int_Array_Index_Variable_15, class APlayerState* CallFunc_Array_Get_Item_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_12, bool K2Node_DynamicCast_bSuccess_17, int32 CallFunc_Add_IntInt_ReturnValue_25, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_5, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_1, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_GetScoreValue_sucess_3, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_3, bool CallFunc_GetScoreValue_sucess_4, const struct FS_ScoreValues& CallFunc_GetScoreValue_resultInfo_4, int32 CallFunc_Add_IntInt_ReturnValue_26, class FText CallFunc_Conv_IntToText_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_27, class FText CallFunc_Conv_IntToText_ReturnValue_7, class USoundBase* K2Node_CustomEvent_Sound_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound_5, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* K2Node_CustomEvent_Sound_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class ABombItem_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABombItem_C* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_7, class ABP_SGKController_C* CallFunc_Array_Get_Item_9, class ABP_SGKController_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_12, int32 CallFunc_Array_Length_ReturnValue_13, int32 CallFunc_Array_Length_ReturnValue_14, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_15, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class ABombItem_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, TArray<class APlantedBomb_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, class ABombItem_C* CallFunc_Array_Get_Item_11, class APlantedBomb_C* CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue_16, int32 CallFunc_Array_Length_ReturnValue_17, bool CallFunc_Less_IntInt_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_9, int32 Temp_int_Variable_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess_19, class APlayerState* CallFunc_Array_Get_Item_13, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_3, bool K2Node_DynamicCast_bSuccess_20, int32 CallFunc_Array_Length_ReturnValue_18, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_10, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_13, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_CheckFFA_FFA_, bool CallFunc_BooleanOR_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_15, class USoundBase* K2Node_CustomEvent_Sound_2, bool CallFunc_Less_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_28, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class USoundBase* K2Node_CustomEvent_Sound_1, bool CallFunc_CheckFFA_FFA__1, class USoundBase* K2Node_CustomEvent_Sound, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, int32 Temp_int_Array_Index_Variable_16, class APlayerState* CallFunc_Array_Get_Item_14, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_4, bool K2Node_DynamicCast_bSuccess_22, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_14, bool K2Node_DynamicCast_bSuccess_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class APlayerState* CallFunc_Array_Get_Item_15, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode_1, bool K2Node_DynamicCast_bSuccess_24, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_19, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_15, bool K2Node_DynamicCast_bSuccess_25, bool CallFunc_Less_IntInt_ReturnValue_12, TArray<class AGameManager_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, class AGameManager_C* CallFunc_Array_Get_Item_16, int32 CallFunc_Array_Length_ReturnValue_20, TArray<class ABP_Claymore_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, bool CallFunc_Less_IntInt_ReturnValue_13, class ABP_Claymore_C* CallFunc_Array_Get_Item_17, bool CallFunc_BooleanAND_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_21, TArray<class ABP_Landmine_C*>& CallFunc_GetAllActorsOfClass_OutActors_6, bool CallFunc_Less_IntInt_ReturnValue_14, class ABP_Landmine_C* CallFunc_Array_Get_Item_18, int32 CallFunc_Array_Length_ReturnValue_22, bool CallFunc_Less_IntInt_ReturnValue_15, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 Temp_int_Variable_3, int32 Temp_int_Loop_Counter_Variable_16, bool CallFunc_Less_IntInt_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_29)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Peak53GameState_C", "ExecuteUbergraph_Peak53GameState");

	Params::APeak53GameState_C_ExecuteUbergraph_Peak53GameState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.K2Node_CustomEvent_CurrentPlayerPlayerstate = K2Node_CustomEvent_CurrentPlayerPlayerstate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_ItemToFind_1 = K2Node_CustomEvent_ItemToFind_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State = K2Node_DynamicCast_AsPeak_53Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_ItemToFind = K2Node_CustomEvent_ItemToFind;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKController_1 = K2Node_DynamicCast_AsBP_SGKController_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CustomEvent_PlayerListGamemode = K2Node_CustomEvent_PlayerListGamemode;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsBP_SGKController_2 = K2Node_DynamicCast_AsBP_SGKController_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.K2Node_CustomEvent_SealsTrue_1 = K2Node_CustomEvent_SealsTrue_1;
	Parms.K2Node_CustomEvent_SealsTrue = K2Node_CustomEvent_SealsTrue;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.K2Node_CustomEvent_PlayerState_2 = K2Node_CustomEvent_PlayerState_2;
	Parms.K2Node_CustomEvent_PlayerState_1 = K2Node_CustomEvent_PlayerState_1;
	Parms.K2Node_CustomEvent_isTeamMember = K2Node_CustomEvent_isTeamMember;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKController_3 = K2Node_DynamicCast_AsBP_SGKController_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayerState = K2Node_CustomEvent_PlayerState;
	Parms.K2Node_CustomEvent_ScoreCategory = K2Node_CustomEvent_ScoreCategory;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController_4 = K2Node_DynamicCast_AsBP_SGKController_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKController_5 = K2Node_DynamicCast_AsBP_SGKController_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsBP_SGKController_6 = K2Node_DynamicCast_AsBP_SGKController_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKController_7 = K2Node_DynamicCast_AsBP_SGKController_7;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBP_SGKController_8 = K2Node_DynamicCast_AsBP_SGKController_8;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_3 = CallFunc_Conv_StringToInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_12 = Temp_int_Array_Index_Variable_12;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_1 = K2Node_DynamicCast_AsPeak_53Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKController_9 = K2Node_DynamicCast_AsBP_SGKController_9;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode = K2Node_DynamicCast_AsBP_SGKGame_Mode;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_12 = Temp_int_Loop_Counter_Variable_12;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_19 = CallFunc_Add_IntInt_ReturnValue_19;
	Parms.Temp_int_Loop_Counter_Variable_13 = Temp_int_Loop_Counter_Variable_13;
	Parms.CallFunc_Add_IntInt_ReturnValue_20 = CallFunc_Add_IntInt_ReturnValue_20;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.Temp_int_Array_Index_Variable_13 = Temp_int_Array_Index_Variable_13;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_SGKController_10 = K2Node_DynamicCast_AsBP_SGKController_10;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.Temp_int_Array_Index_Variable_14 = Temp_int_Array_Index_Variable_14;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_2 = K2Node_DynamicCast_AsPeak_53Player_State_2;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_SGKController_11 = K2Node_DynamicCast_AsBP_SGKController_11;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_21 = CallFunc_Add_IntInt_ReturnValue_21;
	Parms.Temp_int_Loop_Counter_Variable_14 = Temp_int_Loop_Counter_Variable_14;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_22 = CallFunc_Add_IntInt_ReturnValue_22;
	Parms.CallFunc_GetScoreValue_sucess = CallFunc_GetScoreValue_sucess;
	Parms.CallFunc_GetScoreValue_resultInfo = CallFunc_GetScoreValue_resultInfo;
	Parms.CallFunc_GetScoreValue_sucess_1 = CallFunc_GetScoreValue_sucess_1;
	Parms.CallFunc_GetScoreValue_resultInfo_1 = CallFunc_GetScoreValue_resultInfo_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_23 = CallFunc_Add_IntInt_ReturnValue_23;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_24 = CallFunc_Add_IntInt_ReturnValue_24;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_GetScoreValue_sucess_2 = CallFunc_GetScoreValue_sucess_2;
	Parms.CallFunc_GetScoreValue_resultInfo_2 = CallFunc_GetScoreValue_resultInfo_2;
	Parms.Temp_int_Array_Index_Variable_15 = Temp_int_Array_Index_Variable_15;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_SGKController_12 = K2Node_DynamicCast_AsBP_SGKController_12;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_Add_IntInt_ReturnValue_25 = CallFunc_Add_IntInt_ReturnValue_25;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_1 = K2Node_DynamicCast_AsBP_SGKMaster_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetScoreValue_sucess_3 = CallFunc_GetScoreValue_sucess_3;
	Parms.CallFunc_GetScoreValue_resultInfo_3 = CallFunc_GetScoreValue_resultInfo_3;
	Parms.CallFunc_GetScoreValue_sucess_4 = CallFunc_GetScoreValue_sucess_4;
	Parms.CallFunc_GetScoreValue_resultInfo_4 = CallFunc_GetScoreValue_resultInfo_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_26 = CallFunc_Add_IntInt_ReturnValue_26;
	Parms.CallFunc_Conv_IntToText_ReturnValue_6 = CallFunc_Conv_IntToText_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_27 = CallFunc_Add_IntInt_ReturnValue_27;
	Parms.CallFunc_Conv_IntToText_ReturnValue_7 = CallFunc_Conv_IntToText_ReturnValue_7;
	Parms.K2Node_CustomEvent_Sound_6 = K2Node_CustomEvent_Sound_6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Sound_5 = K2Node_CustomEvent_Sound_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Sound_4 = K2Node_CustomEvent_Sound_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_Array_Length_ReturnValue_13 = CallFunc_Array_Length_ReturnValue_13;
	Parms.CallFunc_Array_Length_ReturnValue_14 = CallFunc_Array_Length_ReturnValue_14;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_15 = CallFunc_Array_Length_ReturnValue_15;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_5 = CallFunc_Greater_IntInt_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_6 = CallFunc_Greater_IntInt_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Length_ReturnValue_16 = CallFunc_Array_Length_ReturnValue_16;
	Parms.CallFunc_Array_Length_ReturnValue_17 = CallFunc_Array_Length_ReturnValue_17;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_3 = K2Node_DynamicCast_AsPeak_53Player_State_3;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_Array_Length_ReturnValue_18 = CallFunc_Array_Length_ReturnValue_18;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsBP_SGKController_13 = K2Node_DynamicCast_AsBP_SGKController_13;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_CheckFFA_FFA_ = CallFunc_CheckFFA_FFA_;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_Sound_3 = K2Node_CustomEvent_Sound_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_15 = Temp_int_Loop_Counter_Variable_15;
	Parms.K2Node_CustomEvent_Sound_2 = K2Node_CustomEvent_Sound_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_28 = CallFunc_Add_IntInt_ReturnValue_28;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.K2Node_CustomEvent_Sound_1 = K2Node_CustomEvent_Sound_1;
	Parms.CallFunc_CheckFFA_FFA__1 = CallFunc_CheckFFA_FFA__1;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_16 = Temp_int_Array_Index_Variable_16;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_4 = K2Node_DynamicCast_AsPeak_53Player_State_4;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsBP_SGKController_14 = K2Node_DynamicCast_AsBP_SGKController_14;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_1;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_Array_Length_ReturnValue_19 = CallFunc_Array_Length_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsBP_SGKController_15 = K2Node_DynamicCast_AsBP_SGKController_15;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_4 = CallFunc_GetAllActorsOfClass_OutActors_4;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_Array_Length_ReturnValue_20 = CallFunc_Array_Length_ReturnValue_20;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_5 = CallFunc_GetAllActorsOfClass_OutActors_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_21 = CallFunc_Array_Length_ReturnValue_21;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_6 = CallFunc_GetAllActorsOfClass_OutActors_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_14 = CallFunc_Less_IntInt_ReturnValue_14;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_Array_Length_ReturnValue_22 = CallFunc_Array_Length_ReturnValue_22;
	Parms.CallFunc_Less_IntInt_ReturnValue_15 = CallFunc_Less_IntInt_ReturnValue_15;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_16 = Temp_int_Loop_Counter_Variable_16;
	Parms.CallFunc_Less_IntInt_ReturnValue_16 = CallFunc_Less_IntInt_ReturnValue_16;
	Parms.CallFunc_Add_IntInt_ReturnValue_29 = CallFunc_Add_IntInt_ReturnValue_29;

	UObject::ProcessEvent(Func, &Parms);

}

}


