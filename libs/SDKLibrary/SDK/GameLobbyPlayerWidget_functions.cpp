#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GameLobbyPlayerWidget.GameLobbyPlayerWidget_C
// (None)

class UClass* UGameLobbyPlayerWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameLobbyPlayerWidget_C");

	return Clss;
}


// GameLobbyPlayerWidget_C GameLobbyPlayerWidget.Default__GameLobbyPlayerWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameLobbyPlayerWidget_C* UGameLobbyPlayerWidget_C::GetDefaultObj()
{
	static class UGameLobbyPlayerWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameLobbyPlayerWidget_C*>(UGameLobbyPlayerWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.Get_PlayerTag_Visibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UGameLobbyPlayerWidget_C::Get_PlayerTag_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "Get_PlayerTag_Visibility");

	Params::UGameLobbyPlayerWidget_C_Get_PlayerTag_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.Get_Insignia_2_Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               CallFunc_GetGlobalRankInformation_sucess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GlobalRank               CallFunc_GetGlobalRankInformation_ResultRankInformation          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)

struct FSlateBrush UGameLobbyPlayerWidget_C::Get_Insignia_2_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "Get_Insignia_2_Brush");

	Params::UGameLobbyPlayerWidget_C_Get_Insignia_2_Brush_Params Parms{};

	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetGlobalRankInformation_sucess = CallFunc_GetGlobalRankInformation_sucess;
	Parms.CallFunc_GetGlobalRankInformation_ResultRankInformation = CallFunc_GetGlobalRankInformation_ResultRankInformation;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.Get_Insignia_1_Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               CallFunc_GetGlobalRankInformation_sucess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GlobalRank               CallFunc_GetGlobalRankInformation_ResultRankInformation          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)

struct FSlateBrush UGameLobbyPlayerWidget_C::Get_Insignia_1_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "Get_Insignia_1_Brush");

	Params::UGameLobbyPlayerWidget_C_Get_Insignia_1_Brush_Params Parms{};

	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetGlobalRankInformation_sucess = CallFunc_GetGlobalRankInformation_sucess;
	Parms.CallFunc_GetGlobalRankInformation_ResultRankInformation = CallFunc_GetGlobalRankInformation_ResultRankInformation;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.Get_Insignia_Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               CallFunc_GetGlobalRankInformation_sucess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GlobalRank               CallFunc_GetGlobalRankInformation_ResultRankInformation          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)

struct FSlateBrush UGameLobbyPlayerWidget_C::Get_Insignia_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "Get_Insignia_Brush");

	Params::UGameLobbyPlayerWidget_C_Get_Insignia_Brush_Params Parms{};

	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetGlobalRankInformation_sucess = CallFunc_GetGlobalRankInformation_sucess;
	Parms.CallFunc_GetGlobalRankInformation_ResultRankInformation = CallFunc_GetGlobalRankInformation_ResultRankInformation;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.Get_PlayerRank_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_GetGlobalRankInformation_sucess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GlobalRank               CallFunc_GetGlobalRankInformation_ResultRankInformation          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UGameLobbyPlayerWidget_C::Get_PlayerRank_Text(bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "Get_PlayerRank_Text");

	Params::UGameLobbyPlayerWidget_C_Get_PlayerRank_Text_Params Parms{};

	Parms.CallFunc_GetGlobalRankInformation_sucess = CallFunc_GetGlobalRankInformation_sucess;
	Parms.CallFunc_GetGlobalRankInformation_ResultRankInformation = CallFunc_GetGlobalRankInformation_ResultRankInformation;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGameLobbyPlayerWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameLobbyPlayerWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "PreConstruct");

	Params::UGameLobbyPlayerWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameLobbyPlayerWidget.GameLobbyPlayerWidget_C.ExecuteUbergraph_GameLobbyPlayerWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGameLobbyPlayerWidget_C::ExecuteUbergraph_GameLobbyPlayerWidget(int32 EntryPoint, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyPlayerWidget_C", "ExecuteUbergraph_GameLobbyPlayerWidget");

	Params::UGameLobbyPlayerWidget_C_ExecuteUbergraph_GameLobbyPlayerWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


