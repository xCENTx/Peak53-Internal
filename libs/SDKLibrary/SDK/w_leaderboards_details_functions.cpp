#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_leaderboards_details.w_leaderboards_details_C
// (None)

class UClass* UW_leaderboards_details_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_leaderboards_details_C");

	return Clss;
}


// w_leaderboards_details_C w_leaderboards_details.Default__w_leaderboards_details_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_leaderboards_details_C* UW_leaderboards_details_C::GetDefaultObj()
{
	static class UW_leaderboards_details_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_leaderboards_details_C*>(UW_leaderboards_details_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_leaderboards_details.w_leaderboards_details_C.Get_RankName_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGlobalRankInformation_sucess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GlobalRank               CallFunc_GetGlobalRankInformation_ResultRankInformation          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UW_leaderboards_details_C::Get_RankName_Text(const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_leaderboards_details_C", "Get_RankName_Text");

	Params::UW_leaderboards_details_C_Get_RankName_Text_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetGlobalRankInformation_sucess = CallFunc_GetGlobalRankInformation_sucess;
	Parms.CallFunc_GetGlobalRankInformation_ResultRankInformation = CallFunc_GetGlobalRankInformation_ResultRankInformation;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_leaderboards_details.w_leaderboards_details_C.Get_Insignia_Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGlobalRankInformation_sucess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GlobalRank               CallFunc_GetGlobalRankInformation_ResultRankInformation          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)

struct FSlateBrush UW_leaderboards_details_C::Get_Insignia_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_leaderboards_details_C", "Get_Insignia_Brush");

	Params::UW_leaderboards_details_C_Get_Insignia_Brush_Params Parms{};

	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetGlobalRankInformation_sucess = CallFunc_GetGlobalRankInformation_sucess;
	Parms.CallFunc_GetGlobalRankInformation_ResultRankInformation = CallFunc_GetGlobalRankInformation_ResultRankInformation;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_leaderboards_details.w_leaderboards_details_C.OnCallback_21F3C685470459C24F2FC3B140CE5300
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_leaderboards_details_C::OnCallback_21F3C685470459C24F2FC3B140CE5300()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_leaderboards_details_C", "OnCallback_21F3C685470459C24F2FC3B140CE5300");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards_details.w_leaderboards_details_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_leaderboards_details_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_leaderboards_details_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards_details.w_leaderboards_details_C.PersonaStateChange_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPersonaStateChange         Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_leaderboards_details_C::PersonaStateChange_Event_0(struct FPersonaStateChange& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_leaderboards_details_C", "PersonaStateChange_Event_0");

	Params::UW_leaderboards_details_C_PersonaStateChange_Event_0_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_leaderboards_details.w_leaderboards_details_C.UpdateEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_leaderboards_details_C::UpdateEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_leaderboards_details_C", "UpdateEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_leaderboards_details.w_leaderboards_details_C.ExecuteUbergraph_w_leaderboards_details
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriends*                    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPersonaStateChange         K2Node_CustomEvent_data                                          (ConstParm)
// class USteamCoreFriendsAsyncActionRequestUserInformation*CallFunc_RequestUserInformationAsync_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FString                      CallFunc_GetFriendPersonaName_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFriends*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_leaderboards_details_C::ExecuteUbergraph_w_leaderboards_details(int32 EntryPoint, class UFriends* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FPersonaStateChange& K2Node_CustomEvent_data, class USteamCoreFriendsAsyncActionRequestUserInformation* CallFunc_RequestUserInformationAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const class FString& CallFunc_GetFriendPersonaName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFriends* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchString_CmpSuccess, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_leaderboards_details_C", "ExecuteUbergraph_w_leaderboards_details");

	Params::UW_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_data = K2Node_CustomEvent_data;
	Parms.CallFunc_RequestUserInformationAsync_ReturnValue = CallFunc_RequestUserInformationAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_GetFriendPersonaName_ReturnValue = CallFunc_GetFriendPersonaName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


