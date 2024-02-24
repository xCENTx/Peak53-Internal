#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ScoreboardPlayer.ScoreboardPlayer_C
// (None)

class UClass* UScoreboardPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoreboardPlayer_C");

	return Clss;
}


// ScoreboardPlayer_C ScoreboardPlayer.Default__ScoreboardPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoreboardPlayer_C* UScoreboardPlayer_C::GetDefaultObj()
{
	static class UScoreboardPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoreboardPlayer_C*>(UScoreboardPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_Rank_Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               CallFunc_GetGlobalRankInformation_sucess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GlobalRank               CallFunc_GetGlobalRankInformation_ResultRankInformation          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)

struct FSlateBrush UScoreboardPlayer_C::Get_Rank_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_Rank_Brush");

	Params::UScoreboardPlayer_C_Get_Rank_Brush_Params Parms{};

	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetGlobalRankInformation_sucess = CallFunc_GetGlobalRankInformation_sucess;
	Parms.CallFunc_GetGlobalRankInformation_ResultRankInformation = CallFunc_GetGlobalRankInformation_ResultRankInformation;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerTag_ColorAndOpacity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

struct FSlateColor UScoreboardPlayer_C::Get_PlayerTag_ColorAndOpacity(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_PlayerTag_ColorAndOpacity");

	Params::UScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UScoreboardPlayer_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "GetVisibility_0");

	Params::UScoreboardPlayer_C_GetVisibility_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerMVP_Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UScoreboardPlayer_C::Get_PlayerMVP_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_PlayerMVP_Text");

	Params::UScoreboardPlayer_C_Get_PlayerMVP_Text_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerTag_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UScoreboardPlayer_C::Get_PlayerTag_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_PlayerTag_Text_0");

	Params::UScoreboardPlayer_C_Get_PlayerTag_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerKills_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UScoreboardPlayer_C::Get_PlayerKills_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_PlayerKills_Text_0");

	Params::UScoreboardPlayer_C_Get_PlayerKills_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerDeaths_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UScoreboardPlayer_C::Get_PlayerDeaths_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_PlayerDeaths_Text_0");

	Params::UScoreboardPlayer_C_Get_PlayerDeaths_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerScore_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UScoreboardPlayer_C::Get_PlayerScore_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_PlayerScore_Text_0");

	Params::UScoreboardPlayer_C_Get_PlayerScore_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerName_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UScoreboardPlayer_C::Get_PlayerName_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Get_PlayerName_Text_0");

	Params::UScoreboardPlayer_C_Get_PlayerName_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreboardPlayer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "PreConstruct");

	Params::UScoreboardPlayer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UScoreboardPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScoreboardPlayer.ScoreboardPlayer_C.ExecuteUbergraph_ScoreboardPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreboardPlayer_C::ExecuteUbergraph_ScoreboardPlayer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreboardPlayer_C", "ExecuteUbergraph_ScoreboardPlayer");

	Params::UScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


