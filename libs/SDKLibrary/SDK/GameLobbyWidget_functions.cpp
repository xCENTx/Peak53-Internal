#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GameLobbyWidget.GameLobbyWidget_C
// (None)

class UClass* UGameLobbyWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameLobbyWidget_C");

	return Clss;
}


// GameLobbyWidget_C GameLobbyWidget.Default__GameLobbyWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameLobbyWidget_C* UGameLobbyWidget_C::GetDefaultObj()
{
	static class UGameLobbyWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameLobbyWidget_C*>(UGameLobbyWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameLobbyWidget.GameLobbyWidget_C.ForceLobbyToReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameLobbyWidget_C::ForceLobbyToReady(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "ForceLobbyToReady");

	Params::UGameLobbyWidget_C_ForceLobbyToReady_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameLobbyWidget.GameLobbyWidget_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)

class FText UGameLobbyWidget_C::GetText_0(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_BoolToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "GetText_0");

	Params::UGameLobbyWidget_C_GetText_0_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Start_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGameLobbyWidget_C::Get_Start_bIsEnabled(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Start_bIsEnabled");

	Params::UGameLobbyWidget_C_Get_Start_bIsEnabled_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UGameLobbyWidget_C::GetVisibility_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "GetVisibility_1");

	Params::UGameLobbyWidget_C_GetVisibility_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout4_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_lobby_lodout_tooltip_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetLodoutActor_Result1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UWidget* UGameLobbyWidget_C::Get_Btn_Loadout4_ToolTipWidget(class UW_lobby_lodout_tooltip_C* CallFunc_Create_ReturnValue, class UClass* CallFunc_GetLodoutActor_Result1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout4_ToolTipWidget");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout4_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetLodoutActor_Result1 = CallFunc_GetLodoutActor_Result1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout3_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_lobby_lodout_tooltip_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetLodoutActor_Result1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UWidget* UGameLobbyWidget_C::Get_Btn_Loadout3_ToolTipWidget(class UW_lobby_lodout_tooltip_C* CallFunc_Create_ReturnValue, class UClass* CallFunc_GetLodoutActor_Result1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout3_ToolTipWidget");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout3_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetLodoutActor_Result1 = CallFunc_GetLodoutActor_Result1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout2_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_lobby_lodout_tooltip_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetLodoutActor_Result1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UWidget* UGameLobbyWidget_C::Get_Btn_Loadout2_ToolTipWidget(class UW_lobby_lodout_tooltip_C* CallFunc_Create_ReturnValue, class UClass* CallFunc_GetLodoutActor_Result1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout2_ToolTipWidget");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout2_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetLodoutActor_Result1 = CallFunc_GetLodoutActor_Result1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout1_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_lobby_lodout_tooltip_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetLodoutActor_Result1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UWidget* UGameLobbyWidget_C::Get_Btn_Loadout1_ToolTipWidget(class UW_lobby_lodout_tooltip_C* CallFunc_Create_ReturnValue, class UClass* CallFunc_GetLodoutActor_Result1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout1_ToolTipWidget");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout1_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetLodoutActor_Result1 = CallFunc_GetLodoutActor_Result1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.GetLodoutActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Result1                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Result                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_24                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_25                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_26                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_27                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_28                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_29                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_30                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_31                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_32                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_33                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_34                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_35                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_36                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_37                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameLobbyWidget_C::GetLodoutActor(int32 InputPin, class UClass** Result1, class UClass* Result, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5, bool K2Node_SwitchInteger_CmpSuccess_6, bool K2Node_SwitchInteger_CmpSuccess_7, bool K2Node_SwitchInteger_CmpSuccess_8, bool K2Node_SwitchInteger_CmpSuccess_9, bool K2Node_SwitchInteger_CmpSuccess_10, bool K2Node_SwitchInteger_CmpSuccess_11, bool K2Node_SwitchInteger_CmpSuccess_12, bool K2Node_SwitchInteger_CmpSuccess_13, bool K2Node_SwitchInteger_CmpSuccess_14, bool K2Node_SwitchInteger_CmpSuccess_15, bool K2Node_SwitchInteger_CmpSuccess_16, bool K2Node_SwitchInteger_CmpSuccess_17, bool K2Node_SwitchInteger_CmpSuccess_18, bool K2Node_SwitchInteger_CmpSuccess_19, bool K2Node_SwitchInteger_CmpSuccess_20, bool K2Node_SwitchInteger_CmpSuccess_21, bool K2Node_SwitchInteger_CmpSuccess_22, bool K2Node_SwitchInteger_CmpSuccess_23, bool K2Node_SwitchInteger_CmpSuccess_24, bool K2Node_SwitchInteger_CmpSuccess_25, bool K2Node_SwitchInteger_CmpSuccess_26, bool K2Node_SwitchInteger_CmpSuccess_27, bool K2Node_SwitchInteger_CmpSuccess_28, bool K2Node_SwitchInteger_CmpSuccess_29, bool K2Node_SwitchInteger_CmpSuccess_30, bool K2Node_SwitchInteger_CmpSuccess_31, bool K2Node_SwitchInteger_CmpSuccess_32, bool K2Node_SwitchInteger_CmpSuccess_33, bool K2Node_SwitchInteger_CmpSuccess_34, bool K2Node_SwitchInteger_CmpSuccess_35, bool K2Node_SwitchInteger_CmpSuccess_36, bool K2Node_SwitchInteger_CmpSuccess_37, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchString_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "GetLodoutActor");

	Params::UGameLobbyWidget_C_GetLodoutActor_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.Result = Result;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.K2Node_SwitchInteger_CmpSuccess_10 = K2Node_SwitchInteger_CmpSuccess_10;
	Parms.K2Node_SwitchInteger_CmpSuccess_11 = K2Node_SwitchInteger_CmpSuccess_11;
	Parms.K2Node_SwitchInteger_CmpSuccess_12 = K2Node_SwitchInteger_CmpSuccess_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_13 = K2Node_SwitchInteger_CmpSuccess_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_14 = K2Node_SwitchInteger_CmpSuccess_14;
	Parms.K2Node_SwitchInteger_CmpSuccess_15 = K2Node_SwitchInteger_CmpSuccess_15;
	Parms.K2Node_SwitchInteger_CmpSuccess_16 = K2Node_SwitchInteger_CmpSuccess_16;
	Parms.K2Node_SwitchInteger_CmpSuccess_17 = K2Node_SwitchInteger_CmpSuccess_17;
	Parms.K2Node_SwitchInteger_CmpSuccess_18 = K2Node_SwitchInteger_CmpSuccess_18;
	Parms.K2Node_SwitchInteger_CmpSuccess_19 = K2Node_SwitchInteger_CmpSuccess_19;
	Parms.K2Node_SwitchInteger_CmpSuccess_20 = K2Node_SwitchInteger_CmpSuccess_20;
	Parms.K2Node_SwitchInteger_CmpSuccess_21 = K2Node_SwitchInteger_CmpSuccess_21;
	Parms.K2Node_SwitchInteger_CmpSuccess_22 = K2Node_SwitchInteger_CmpSuccess_22;
	Parms.K2Node_SwitchInteger_CmpSuccess_23 = K2Node_SwitchInteger_CmpSuccess_23;
	Parms.K2Node_SwitchInteger_CmpSuccess_24 = K2Node_SwitchInteger_CmpSuccess_24;
	Parms.K2Node_SwitchInteger_CmpSuccess_25 = K2Node_SwitchInteger_CmpSuccess_25;
	Parms.K2Node_SwitchInteger_CmpSuccess_26 = K2Node_SwitchInteger_CmpSuccess_26;
	Parms.K2Node_SwitchInteger_CmpSuccess_27 = K2Node_SwitchInteger_CmpSuccess_27;
	Parms.K2Node_SwitchInteger_CmpSuccess_28 = K2Node_SwitchInteger_CmpSuccess_28;
	Parms.K2Node_SwitchInteger_CmpSuccess_29 = K2Node_SwitchInteger_CmpSuccess_29;
	Parms.K2Node_SwitchInteger_CmpSuccess_30 = K2Node_SwitchInteger_CmpSuccess_30;
	Parms.K2Node_SwitchInteger_CmpSuccess_31 = K2Node_SwitchInteger_CmpSuccess_31;
	Parms.K2Node_SwitchInteger_CmpSuccess_32 = K2Node_SwitchInteger_CmpSuccess_32;
	Parms.K2Node_SwitchInteger_CmpSuccess_33 = K2Node_SwitchInteger_CmpSuccess_33;
	Parms.K2Node_SwitchInteger_CmpSuccess_34 = K2Node_SwitchInteger_CmpSuccess_34;
	Parms.K2Node_SwitchInteger_CmpSuccess_35 = K2Node_SwitchInteger_CmpSuccess_35;
	Parms.K2Node_SwitchInteger_CmpSuccess_36 = K2Node_SwitchInteger_CmpSuccess_36;
	Parms.K2Node_SwitchInteger_CmpSuccess_37 = K2Node_SwitchInteger_CmpSuccess_37;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1 = K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result1 != nullptr)
		*Result1 = Parms.Result1;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_TagNAme_Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UGameLobbyWidget_C::Get_TagNAme_Text(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_TagNAme_Text");

	Params::UGameLobbyWidget_C_Get_TagNAme_Text_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_PlayerName_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UGameLobbyWidget_C::Get_PlayerName_Text_0(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_PlayerName_Text_0");

	Params::UGameLobbyWidget_C_Get_PlayerName_Text_0_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout4_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGameLobbyWidget_C::Get_Btn_Loadout4_bIsEnabled(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout4_bIsEnabled");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout4_bIsEnabled_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout3_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGameLobbyWidget_C::Get_Btn_Loadout3_bIsEnabled(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout3_bIsEnabled");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout3_bIsEnabled_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout2_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGameLobbyWidget_C::Get_Btn_Loadout2_bIsEnabled(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout2_bIsEnabled");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout2_bIsEnabled_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_Btn_Loadout1_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGameLobbyWidget_C::Get_Btn_Loadout1_bIsEnabled(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_Btn_Loadout1_bIsEnabled");

	Params::UGameLobbyWidget_C_Get_Btn_Loadout1_bIsEnabled_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UGameLobbyWidget_C::GetVisibility_0(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "GetVisibility_0");

	Params::UGameLobbyWidget_C_GetVisibility_0_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_LeftPanelBox_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UGameLobbyWidget_C::Get_LeftPanelBox_Visibility(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_LeftPanelBox_Visibility");

	Params::UGameLobbyWidget_C_Get_LeftPanelBox_Visibility_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UGameLobbyWidget_C::GetText(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "GetText");

	Params::UGameLobbyWidget_C_GetText_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_PlayerName_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UGameLobbyWidget_C::Get_PlayerName_Text(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_PlayerName_Text");

	Params::UGameLobbyWidget_C_Get_PlayerName_Text_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Get_PlayerName_1_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UGameLobbyWidget_C::Get_PlayerName_1_Text(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Get_PlayerName_1_Text");

	Params::UGameLobbyWidget_C_Get_PlayerName_1_Text_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameLobbyWidget.GameLobbyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.UpdateLobby
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Name                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<enum class EPeak53Teams>    Team                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                       Ready                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Rank                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameLobbyWidget_C::UpdateLobby(TArray<class FName>& Name, TArray<enum class EPeak53Teams>& Team, TArray<bool>& Ready, TArray<int32>& Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "UpdateLobby");

	Params::UGameLobbyWidget_C_UpdateLobby_Params Parms{};

	Parms.Name = Name;
	Parms.Team = Team;
	Parms.Ready = Ready;
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameLobbyWidget.GameLobbyWidget_C.PressReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::PressReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "PressReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.HandleOnLoadoutSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewLodout                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGameLobbyWidget_C::HandleOnLoadoutSet(class UClass* NewLodout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "HandleOnLoadoutSet");

	Params::UGameLobbyWidget_C_HandleOnLoadoutSet_Params Parms{};

	Parms.NewLodout = NewLodout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameLobbyWidget.GameLobbyWidget_C.ShowFullLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::ShowFullLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "ShowFullLobby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.ShowLoadoutPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::ShowLoadoutPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "ShowLoadoutPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_Loadout1_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_Loadout1_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_Loadout1_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_Loadout2_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_Loadout2_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_Loadout2_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_Loadout3_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_Loadout3_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_Loadout3_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_Loadout4_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_Loadout4_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_Loadout4_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_ready_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_ready_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_ready_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_Start_K2Node_ComponentBoundEvent_14_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_Start_K2Node_ComponentBoundEvent_14_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_Start_K2Node_ComponentBoundEvent_14_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_SwitchTeam_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_SwitchTeam_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_SwitchTeam_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.BndEvt__GameLobbyWidget_Button_MainMenu_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameLobbyWidget_C::BndEvt__GameLobbyWidget_Button_MainMenu_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "BndEvt__GameLobbyWidget_Button_MainMenu_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameLobbyWidget.GameLobbyWidget_C.ExecuteUbergraph_GameLobbyWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Name                                          (ConstParm, ReferenceParm)
// TArray<enum class EPeak53Teams>    K2Node_CustomEvent_Team                                          (ConstParm, ReferenceParm)
// TArray<bool>                       K2Node_CustomEvent_ready                                         (ConstParm, ReferenceParm)
// TArray<int32>                      K2Node_CustomEvent_rank                                          (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameLobbyPlayerWidget_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller_4                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller_5                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuGameState_C*      K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller_6                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_NewLodout                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_SGKMaster_Character                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameLobbyWidget_C::ExecuteUbergraph_GameLobbyWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& K2Node_CustomEvent_Name, TArray<enum class EPeak53Teams>& K2Node_CustomEvent_Team, TArray<bool>& K2Node_CustomEvent_ready, TArray<int32>& K2Node_CustomEvent_rank, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameLobbyPlayerWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller_3, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller_4, bool K2Node_DynamicCast_bSuccess_4, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller_5, bool K2Node_DynamicCast_bSuccess_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State, bool K2Node_DynamicCast_bSuccess_7, class ABP_SGKMenuGameState_C* K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller_6, bool K2Node_DynamicCast_bSuccess_9, class UClass* K2Node_CustomEvent_NewLodout, class UClass* K2Node_ClassDynamicCast_AsBP_SGKMaster_Character, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_OpenSource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameLobbyWidget_C", "ExecuteUbergraph_GameLobbyWidget");

	Params::UGameLobbyWidget_C_ExecuteUbergraph_GameLobbyWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.K2Node_CustomEvent_ready = K2Node_CustomEvent_ready;
	Parms.K2Node_CustomEvent_rank = K2Node_CustomEvent_rank;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller_1 = K2Node_DynamicCast_AsBP_SGKMenu_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller_2 = K2Node_DynamicCast_AsBP_SGKMenu_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller_3 = K2Node_DynamicCast_AsBP_SGKMenu_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_5 = CallFunc_GetOwningPlayer_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller_4 = K2Node_DynamicCast_AsBP_SGKMenu_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller_5 = K2Node_DynamicCast_AsBP_SGKMenu_Controller_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State = K2Node_DynamicCast_AsBP_SGKMenu_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1 = K2Node_DynamicCast_AsBP_SGKMenu_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_6 = CallFunc_GetOwningPlayer_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller_6 = K2Node_DynamicCast_AsBP_SGKMenu_Controller_6;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CustomEvent_NewLodout = K2Node_CustomEvent_NewLodout;
	Parms.K2Node_ClassDynamicCast_AsBP_SGKMaster_Character = K2Node_ClassDynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


