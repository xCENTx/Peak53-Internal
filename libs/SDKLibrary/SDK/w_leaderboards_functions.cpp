#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_leaderboards.W_LeaderBoards_C
// (None)

class UClass* UW_LeaderBoards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LeaderBoards_C");

	return Clss;
}


// W_LeaderBoards_C w_leaderboards.Default__w_leaderboards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LeaderBoards_C* UW_LeaderBoards_C::GetDefaultObj()
{
	static class UW_LeaderBoards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LeaderBoards_C*>(UW_LeaderBoards_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_leaderboards.W_LeaderBoards_C.OnSelectedButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_LeaderBoards_C::OnSelectedButton(class UTextBlock* Text, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "OnSelectedButton");

	Params::UW_LeaderBoards_C_OnSelectedButton_Params Parms{};

	Parms.Text = Text;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_leaderboards.W_LeaderBoards_C.SetDefaultButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_LeaderBoards_C::SetDefaultButtons(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "SetDefaultButtons");

	Params::UW_LeaderBoards_C_SetDefaultButtons_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_leaderboards.W_LeaderBoards_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_LeaderBoards_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "GetVisibility_0");

	Params::UW_LeaderBoards_C_GetVisibility_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_leaderboards.W_LeaderBoards_C.OnCallback_5E109FDD4E144CEB5F8EEEA4EEB22B21
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloadedData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LeaderBoards_C::OnCallback_5E109FDD4E144CEB5F8EEEA4EEB22B21(struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "OnCallback_5E109FDD4E144CEB5F8EEEA4EEB22B21");

	Params::UW_LeaderBoards_C_OnCallback_5E109FDD4E144CEB5F8EEEA4EEB22B21_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_leaderboards.W_LeaderBoards_C.OnCallback_303D4D734E4DBA287AF310A2F20F1E4D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardFindResult      Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LeaderBoards_C::OnCallback_303D4D734E4DBA287AF310A2F20F1E4D(struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "OnCallback_303D4D734E4DBA287AF310A2F20F1E4D");

	Params::UW_LeaderBoards_C_OnCallback_303D4D734E4DBA287AF310A2F20F1E4D_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_leaderboards.W_LeaderBoards_C.GetLeaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::GetLeaderboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "GetLeaderboard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Deaths_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Deaths_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Deaths_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Kills_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Kills_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Kills_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Kill_Death_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Kill_Death_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Kill_Death_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Won_Lost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Won_Lost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Won_Lost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Bomb_Defused_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Bomb_Defused_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Bomb_Defused_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Bomb_Planted_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Bomb_Planted_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Bomb_Planted_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Headshots_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Headshots_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Headshots_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_MVP_Awards_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_MVP_Awards_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_MVP_Awards_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_GlobalScore_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_GlobalScore_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_GlobalScore_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Rank_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Rank_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Rank_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Games_Won_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Games_Won_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Games_Won_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.BndEvt__w_leaderboards_Btn_Games_lost_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LeaderBoards_C::BndEvt__w_leaderboards_Btn_Games_lost_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "BndEvt__w_leaderboards_Btn_Games_lost_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards.W_LeaderBoards_C.ExecuteUbergraph_w_leaderboards
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardScoresDownloadedK2Node_CustomEvent_data_1                                        (ConstParm, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardScoresDownloadedTemp_struct_Variable                                             (NoDestructor)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FLeaderboardFindResult      K2Node_CustomEvent_data                                          (ConstParm, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FLeaderboardFindResult      Temp_struct_Variable_1                                           (NoDestructor)
// class UW_leaderboards_details_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries*CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USteamCoreUserStatsAsyncActionFindLeaderboard*CallFunc_FindLeaderboardAsync_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isSteamLoggedIn_NewParam                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamLeaderboardEntry      CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry          (NoDestructor)
// TArray<int32>                      CallFunc_GetDownloadedLeaderboardEntry_outDetails                (ReferenceParm)
// bool                               CallFunc_GetDownloadedLeaderboardEntry_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_leaderboards_details_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LeaderBoards_C::ExecuteUbergraph_w_leaderboards(int32 EntryPoint, const struct FLeaderboardScoresDownloaded& K2Node_CustomEvent_data_1, bool K2Node_CustomEvent_bWasSuccessful_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, const struct FLeaderboardScoresDownloaded& Temp_struct_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FLeaderboardFindResult& K2Node_CustomEvent_data, bool K2Node_CustomEvent_bWasSuccessful, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FLeaderboardFindResult& Temp_struct_Variable_1, class UW_leaderboards_details_C* CallFunc_Create_ReturnValue, class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue, class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_isSteamLoggedIn_NewParam, int32 Temp_int_Variable, const struct FSteamLeaderboardEntry& CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry, TArray<int32>& CallFunc_GetDownloadedLeaderboardEntry_outDetails, bool CallFunc_GetDownloadedLeaderboardEntry_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_leaderboards_details_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LeaderBoards_C", "ExecuteUbergraph_w_leaderboards");

	Params::UW_LeaderBoards_C_ExecuteUbergraph_w_leaderboards_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_data_1 = K2Node_CustomEvent_data_1;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_data = K2Node_CustomEvent_data;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue = CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue;
	Parms.CallFunc_FindLeaderboardAsync_ReturnValue = CallFunc_FindLeaderboardAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_isSteamLoggedIn_NewParam = CallFunc_isSteamLoggedIn_NewParam;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry = CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry;
	Parms.CallFunc_GetDownloadedLeaderboardEntry_outDetails = CallFunc_GetDownloadedLeaderboardEntry_outDetails;
	Parms.CallFunc_GetDownloadedLeaderboardEntry_ReturnValue = CallFunc_GetDownloadedLeaderboardEntry_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


