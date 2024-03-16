#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_vote_kick_for_player.w_vote_kick_for_player_C
// (None)

class UClass* UW_vote_kick_for_player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_vote_kick_for_player_C");

	return Clss;
}


// w_vote_kick_for_player_C w_vote_kick_for_player.Default__w_vote_kick_for_player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_vote_kick_for_player_C* UW_vote_kick_for_player_C::GetDefaultObj()
{
	static class UW_vote_kick_for_player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_vote_kick_for_player_C*>(UW_vote_kick_for_player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_vote_kick_for_player.w_vote_kick_for_player_C.Get_ButtonText_5_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UW_vote_kick_for_player_C::Get_ButtonText_5_Text_0(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_vote_kick_for_player_C", "Get_ButtonText_5_Text_0");

	Params::UW_vote_kick_for_player_C_Get_ButtonText_5_Text_0_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_vote_kick_for_player.w_vote_kick_for_player_C.Get_ButtonText_5_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UW_vote_kick_for_player_C::Get_ButtonText_5_Text(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_vote_kick_for_player_C", "Get_ButtonText_5_Text");

	Params::UW_vote_kick_for_player_C_Get_ButtonText_5_Text_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_vote_kick_for_player.w_vote_kick_for_player_C.BndEvt__w_vote_kick_for_player_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_vote_kick_for_player_C::BndEvt__w_vote_kick_for_player_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_vote_kick_for_player_C", "BndEvt__w_vote_kick_for_player_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_vote_kick_for_player.w_vote_kick_for_player_C.BndEvt__w_vote_kick_for_player_Button_No_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_vote_kick_for_player_C::BndEvt__w_vote_kick_for_player_Button_No_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_vote_kick_for_player_C", "BndEvt__w_vote_kick_for_player_Button_No_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_vote_kick_for_player.w_vote_kick_for_player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_vote_kick_for_player_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_vote_kick_for_player_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_vote_kick_for_player.w_vote_kick_for_player_C.ExecuteUbergraph_w_vote_kick_for_player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_vote_kick_for_player_C::ExecuteUbergraph_w_vote_kick_for_player(int32 EntryPoint, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_vote_kick_for_player_C", "ExecuteUbergraph_w_vote_kick_for_player");

	Params::UW_vote_kick_for_player_C_ExecuteUbergraph_w_vote_kick_for_player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


