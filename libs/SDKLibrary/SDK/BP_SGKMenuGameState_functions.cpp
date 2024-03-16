#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKMenuGameState.BP_SGKMenuGameState_C
// (Actor)

class UClass* ABP_SGKMenuGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKMenuGameState_C");

	return Clss;
}


// BP_SGKMenuGameState_C BP_SGKMenuGameState.Default__BP_SGKMenuGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SGKMenuGameState_C* ABP_SGKMenuGameState_C::GetDefaultObj()
{
	static class ABP_SGKMenuGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SGKMenuGameState_C*>(ABP_SGKMenuGameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.ForcePlayerReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::ForcePlayerReady(class ABP_SGKMenuController_C* Object, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "ForcePlayerReady");

	Params::ABP_SGKMenuGameState_C_ForcePlayerReady_Params Parms{};

	Parms.Object = Object;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.ForcePlayerReadyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::ForcePlayerReadyState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "ForcePlayerReadyState");

	Params::ABP_SGKMenuGameState_C_ForcePlayerReadyState_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::RemovePlayer(class ABP_SGKMenuController_C* Controller, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess, int32 CallFunc_FindPlayerIndex_index_1, bool CallFunc_FindPlayerIndex_sucess_1, int32 CallFunc_FindPlayerIndex_index_2, bool CallFunc_FindPlayerIndex_sucess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "RemovePlayer");

	Params::ABP_SGKMenuGameState_C_RemovePlayer_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;
	Parms.CallFunc_FindPlayerIndex_index_1 = CallFunc_FindPlayerIndex_index_1;
	Parms.CallFunc_FindPlayerIndex_sucess_1 = CallFunc_FindPlayerIndex_sucess_1;
	Parms.CallFunc_FindPlayerIndex_index_2 = CallFunc_FindPlayerIndex_index_2;
	Parms.CallFunc_FindPlayerIndex_sucess_2 = CallFunc_FindPlayerIndex_sucess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.FindPlayerIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_SGKMenuController_C*>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_SGKMenuController_C*     Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sucess                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::FindPlayerIndex(TArray<class ABP_SGKMenuController_C*>& Array, class ABP_SGKMenuController_C* Controller, int32* Index, bool* Sucess, int32 Result, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class ABP_SGKMenuController_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "FindPlayerIndex");

	Params::ABP_SGKMenuGameState_C_FindPlayerIndex_Params Parms{};

	Parms.Array = Array;
	Parms.Controller = Controller;
	Parms.Result = Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Sucess != nullptr)
		*Sucess = Parms.Sucess;

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.F Set Player Lodout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Lodout                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Result                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::F_Set_Player_Lodout(int32 Lodout, class APlayerController* Controller, class UClass* Result, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5, bool K2Node_SwitchInteger_CmpSuccess_6, bool K2Node_SwitchInteger_CmpSuccess_7, bool K2Node_SwitchInteger_CmpSuccess_8, bool K2Node_SwitchInteger_CmpSuccess_9, bool K2Node_SwitchInteger_CmpSuccess_10, bool K2Node_SwitchInteger_CmpSuccess_11, bool K2Node_SwitchInteger_CmpSuccess_12, bool K2Node_SwitchInteger_CmpSuccess_13, bool K2Node_SwitchInteger_CmpSuccess_14, bool K2Node_SwitchInteger_CmpSuccess_15, bool K2Node_SwitchInteger_CmpSuccess_16, bool K2Node_SwitchInteger_CmpSuccess_17, bool K2Node_SwitchInteger_CmpSuccess_18, bool K2Node_SwitchInteger_CmpSuccess_19, bool K2Node_SwitchInteger_CmpSuccess_20, bool K2Node_SwitchInteger_CmpSuccess_21, bool K2Node_SwitchInteger_CmpSuccess_22, bool K2Node_SwitchInteger_CmpSuccess_23, bool K2Node_SwitchInteger_CmpSuccess_24, bool K2Node_SwitchInteger_CmpSuccess_25, bool K2Node_SwitchInteger_CmpSuccess_26, bool K2Node_SwitchInteger_CmpSuccess_27, bool K2Node_SwitchInteger_CmpSuccess_28, bool K2Node_SwitchInteger_CmpSuccess_29, bool K2Node_SwitchInteger_CmpSuccess_30, bool K2Node_SwitchInteger_CmpSuccess_31, bool K2Node_SwitchInteger_CmpSuccess_32, bool K2Node_SwitchInteger_CmpSuccess_33, bool K2Node_SwitchInteger_CmpSuccess_34, bool K2Node_SwitchInteger_CmpSuccess_35, bool K2Node_SwitchInteger_CmpSuccess_36, bool K2Node_SwitchInteger_CmpSuccess_37, bool K2Node_SwitchString_CmpSuccess, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess, bool K2Node_SwitchString_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "F Set Player Lodout");

	Params::ABP_SGKMenuGameState_C_F_Set_Player_Lodout_Params Parms{};

	Parms.Lodout = Lodout;
	Parms.Controller = Controller;
	Parms.Result = Result;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
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
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.Remove Lobby Screen for All Players
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::Remove_Lobby_Screen_for_All_Players(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "Remove Lobby Screen for All Players");

	Params::ABP_SGKMenuGameState_C_Remove_Lobby_Screen_for_All_Players_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.CheckIfAllPlayersAreReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::CheckIfAllPlayersAreReady(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "CheckIfAllPlayersAreReady");

	Params::ABP_SGKMenuGameState_C_CheckIfAllPlayersAreReady_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.SwitchTeams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::SwitchTeams(class ABP_SGKMenuController_C*& ItemToFind, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "SwitchTeams");

	Params::ABP_SGKMenuGameState_C_SwitchTeams_Params Parms{};

	Parms.ItemToFind = ItemToFind;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.TogglePlayerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::TogglePlayerReady(class ABP_SGKMenuController_C*& ItemToFind, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "TogglePlayerReady");

	Params::ABP_SGKMenuGameState_C_TogglePlayerReady_Params Parms{};

	Parms.ItemToFind = ItemToFind;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.RemovePlayerFromReadyList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::RemovePlayerFromReadyList(class ABP_SGKMenuController_C*& NewItem, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "RemovePlayerFromReadyList");

	Params::ABP_SGKMenuGameState_C_RemovePlayerFromReadyList_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.AddPlayerToReadyList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::AddPlayerToReadyList(class ABP_SGKMenuController_C*& NewItem, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "AddPlayerToReadyList");

	Params::ABP_SGKMenuGameState_C_AddPlayerToReadyList_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.Update Lobby for All Clients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Ranks                                                            (Edit, BlueprintVisible)
// TArray<bool>                       Ready                                                            (Edit, BlueprintVisible)
// TArray<enum class EPeak53Teams>    Team                                                             (Edit, BlueprintVisible)
// TArray<class FName>                Names                                                            (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::Update_Lobby_for_All_Clients(const TArray<int32>& Ranks, const TArray<bool>& Ready, const TArray<enum class EPeak53Teams>& Team, const TArray<class FName>& Names, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, enum class EPeak53Teams Temp_byte_Variable, enum class EPeak53Teams Temp_byte_Variable_1, enum class EPeak53Teams CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, class APlayerState* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_FindPlayerIndex_index_1, bool CallFunc_FindPlayerIndex_sucess_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, class APlayerState* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "Update Lobby for All Clients");

	Params::ABP_SGKMenuGameState_C_Update_Lobby_for_All_Clients_Params Parms{};

	Parms.Ranks = Ranks;
	Parms.Ready = Ready;
	Parms.Team = Team;
	Parms.Names = Names;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State = K2Node_DynamicCast_AsPeak_53Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_FindPlayerIndex_index_1 = CallFunc_FindPlayerIndex_index_1;
	Parms.CallFunc_FindPlayerIndex_sucess_1 = CallFunc_FindPlayerIndex_sucess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller_1 = K2Node_DynamicCast_AsBP_SGKMenu_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.AddToInsurgents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::AddToInsurgents(class ABP_SGKMenuController_C*& NewItem, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "AddToInsurgents");

	Params::ABP_SGKMenuGameState_C_AddToInsurgents_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.AddToSeals
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerIndex_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerIndex_sucess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::AddToSeals(class ABP_SGKMenuController_C*& Player, int32 CallFunc_FindPlayerIndex_index, bool CallFunc_FindPlayerIndex_sucess, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "AddToSeals");

	Params::ABP_SGKMenuGameState_C_AddToSeals_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_FindPlayerIndex_index = CallFunc_FindPlayerIndex_index;
	Parms.CallFunc_FindPlayerIndex_sucess = CallFunc_FindPlayerIndex_sucess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.AutoTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMenuController_C*     Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::AutoTeam(class ABP_SGKMenuController_C*& Player, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "AutoTeam");

	Params::ABP_SGKMenuGameState_C_AutoTeam_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.SetServerMapName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::SetServerMapName(const class FString& MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "SetServerMapName");

	Params::ABP_SGKMenuGameState_C_SetServerMapName_Params Parms{};

	Parms.MapName = MapName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.SetServerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::SetServerName(const class FString& ServerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "SetServerName");

	Params::ABP_SGKMenuGameState_C_SetServerName_Params Parms{};

	Parms.ServerName = ServerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.AllPlayersReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuGameState_C::AllPlayersReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "AllPlayersReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKMenuGameState_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKMenuGameState.BP_SGKMenuGameState_C.ExecuteUbergraph_BP_SGKMenuGameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_MapName                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ServerName                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMenuController_C*     K2Node_DynamicCast_AsBP_SGKMenu_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKMenuGameState_C::ExecuteUbergraph_BP_SGKMenuGameState(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& K2Node_CustomEvent_MapName, const class FString& K2Node_CustomEvent_ServerName, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_IsClosed_Variable, class APlayerState* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_SGKMenuController_C* K2Node_DynamicCast_AsBP_SGKMenu_Controller, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKMenuGameState_C", "ExecuteUbergraph_BP_SGKMenuGameState");

	Params::ABP_SGKMenuGameState_C_ExecuteUbergraph_BP_SGKMenuGameState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_MapName = K2Node_CustomEvent_MapName;
	Parms.K2Node_CustomEvent_ServerName = K2Node_CustomEvent_ServerName;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMenu_Controller = K2Node_DynamicCast_AsBP_SGKMenu_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


