#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKGameMode.BP_SGKGameMode_C
// (Actor)

class UClass* ABP_SGKGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKGameMode_C");

	return Clss;
}


// BP_SGKGameMode_C BP_SGKGameMode.Default__BP_SGKGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SGKGameMode_C* ABP_SGKGameMode_C::GetDefaultObj()
{
	static class ABP_SGKGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SGKGameMode_C*>(ABP_SGKGameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetInitComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GameModeInitComponent_C* InitComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_GetInitComponent(class UBP_GameModeInitComponent_C** InitComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SGK GetInitComponent");

	Params::ABP_SGKGameMode_C_SGK_GetInitComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InitComponent != nullptr)
		*InitComponent = Parms.InitComponent;

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetResourceManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceManager_C*       ResourceManager                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_GetResourceManager(class ABP_ResourceManager_C** ResourceManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SGK GetResourceManager");

	Params::ABP_SGKGameMode_C_SGK_GetResourceManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ResourceManager != nullptr)
		*ResourceManager = Parms.ResourceManager;

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetSaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*            SaveGame                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_GetSaveGame(class ABP_SaveSystem_C** SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SGK GetSaveGame");

	Params::ABP_SGKGameMode_C_SGK_GetSaveGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK GetGlobalInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GlobalInventoryManager_C*GlobalInventory                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_GetGlobalInventory(class ABP_GlobalInventoryManager_C** GlobalInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SGK GetGlobalInventory");

	Params::ABP_SGKGameMode_C_SGK_GetGlobalInventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlobalInventory != nullptr)
		*GlobalInventory = Parms.GlobalInventory;

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.CheckFFA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               FFA_                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::CheckFFA(bool* FFA_, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "CheckFFA");

	Params::ABP_SGKGameMode_C_CheckFFA_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FFA_ != nullptr)
		*FFA_ = Parms.FFA_;

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.CalculePlayerToolsItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMasterCharacter_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_CraftingCost>     TempArray1                                                       (Parm, OutParm)
// TArray<class FString>              AmmoBuckshotList                                                 (Edit, BlueprintVisible)
// TArray<class FString>              Ammo9MMList                                                      (Edit, BlueprintVisible)
// TArray<class FString>              Ammo7_62List                                                     (Edit, BlueprintVisible)
// int32                              Amount                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_CraftingCost>     TempArray                                                        (Edit, BlueprintVisible)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StartingWeaponItem       CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost                                 (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost_1                               (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost_2                               (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_3                           (NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost_3                               (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_4                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost_4                               (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_5                           (NoDestructor)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost_5                               (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost_6                               (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StartingWeaponItem       CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::CalculePlayerToolsItems(class ABP_SGKMasterCharacter_C* Target, class APeak53PlayerState_C* PlayerState, TArray<struct FS_CraftingCost>* TempArray1, const TArray<class FString>& AmmoBuckshotList, const TArray<class FString>& Ammo9MMList, const TArray<class FString>& Ammo7_62List, int32 Amount, const TArray<struct FS_CraftingCost>& TempArray, TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& K2Node_MakeArray_Array_2, int32 Temp_int_Array_Index_Variable, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FS_StartingWeaponItem& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, int32 CallFunc_Array_Add_ReturnValue, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_2, int32 CallFunc_Array_Add_ReturnValue_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, bool CallFunc_Array_Contains_ReturnValue, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_4, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_4, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_5, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_5, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_2, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_6, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Array_Add_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const struct FS_StartingWeaponItem& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "CalculePlayerToolsItems");

	Params::ABP_SGKGameMode_C_CalculePlayerToolsItems_Params Parms{};

	Parms.Target = Target;
	Parms.PlayerState = PlayerState;
	Parms.AmmoBuckshotList = AmmoBuckshotList;
	Parms.Ammo9MMList = Ammo9MMList;
	Parms.Ammo7_62List = Ammo7_62List;
	Parms.Amount = Amount;
	Parms.TempArray = TempArray;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_S_CraftingCost = K2Node_MakeStruct_S_CraftingCost;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_S_CraftingCost_1 = K2Node_MakeStruct_S_CraftingCost_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.K2Node_MakeStruct_S_CraftingCost_2 = K2Node_MakeStruct_S_CraftingCost_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle_3 = K2Node_MakeStruct_DataTableRowHandle_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_S_CraftingCost_3 = K2Node_MakeStruct_S_CraftingCost_3;
	Parms.K2Node_MakeStruct_DataTableRowHandle_4 = K2Node_MakeStruct_DataTableRowHandle_4;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_CraftingCost_4 = K2Node_MakeStruct_S_CraftingCost_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_5 = K2Node_MakeStruct_DataTableRowHandle_5;
	Parms.K2Node_MakeStruct_S_CraftingCost_5 = K2Node_MakeStruct_S_CraftingCost_5;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_CraftingCost_6 = K2Node_MakeStruct_S_CraftingCost_6;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.CallFunc_Array_Contains_ReturnValue_5 = CallFunc_Array_Contains_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (TempArray1 != nullptr)
		*TempArray1 = std::move(Parms.TempArray1);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.OnRep_PlayerListGameMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::OnRep_PlayerListGameMode(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "OnRep_PlayerListGameMode");

	Params::ABP_SGKGameMode_C_OnRep_PlayerListGameMode_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SpawnDefaultPawnAtTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  SpawnTransform                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  NewSpawnTransformL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerLocation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_FindPlayerLocation_Transform                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SaveSystem_C*            CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_SaveSystem_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_SaveSystem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class APawn* ABP_SGKGameMode_C::SpawnDefaultPawnAtTransform(class AController* NewPlayer, struct FTransform& SpawnTransform, const struct FTransform& NewSpawnTransformL, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_FindPlayerLocation_ReturnValue, const struct FTransform& CallFunc_FindPlayerLocation_Transform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class ABP_SaveSystem_C* CallFunc_FinishSpawningActor_ReturnValue_1, TArray<class ABP_SaveSystem_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_SaveSystem_C* CallFunc_Array_Get_Item, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class APawn* CallFunc_FinishSpawningActor_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SpawnDefaultPawnAtTransform");

	Params::ABP_SGKGameMode_C_SpawnDefaultPawnAtTransform_Params Parms{};

	Parms.NewPlayer = NewPlayer;
	Parms.SpawnTransform = SpawnTransform;
	Parms.NewSpawnTransformL = NewSpawnTransformL;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController_1 = K2Node_DynamicCast_AsBP_SGKController_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FindPlayerLocation_ReturnValue = CallFunc_FindPlayerLocation_ReturnValue;
	Parms.CallFunc_FindPlayerLocation_Transform = CallFunc_FindPlayerLocation_Transform;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK SaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKGameMode_C::SGK_SaveGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SGK SaveGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.HandleStartingNewPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::HandleStartingNewPlayer(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "HandleStartingNewPlayer");

	Params::ABP_SGKGameMode_C_HandleStartingNewPlayer_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.CMDAddPlayerControllerQueue
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::CMDAddPlayerControllerQueue(class APlayerController*& NewItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "CMDAddPlayerControllerQueue");

	Params::ABP_SGKGameMode_C_CMDAddPlayerControllerQueue_Params Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.K2_OnSwapPlayerControllers
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*           OldPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           NewPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "K2_OnSwapPlayerControllers");

	Params::ABP_SGKGameMode_C_K2_OnSwapPlayerControllers_Params Parms{};

	Parms.OldPC = OldPC;
	Parms.NewPC = NewPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "ReceiveTick");

	Params::ABP_SGKGameMode_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "K2_OnLogout");

	Params::ABP_SGKGameMode_C_K2_OnLogout_Params Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "K2_PostLogin");

	Params::ABP_SGKGameMode_C_K2_PostLogin_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.AddPlayersStarts
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKGameMode_C::AddPlayersStarts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "AddPlayersStarts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.RestartPlayerEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::RestartPlayerEvent(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "RestartPlayerEvent");

	Params::ABP_SGKGameMode_C_RestartPlayerEvent_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SGKGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SGK SetSaveSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*            SaveSystem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::SGK_SetSaveSystem(class ABP_SaveSystem_C* SaveSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SGK SetSaveSystem");

	Params::ABP_SGKGameMode_C_SGK_SetSaveSystem_Params Parms{};

	Parms.SaveSystem = SaveSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SpectateTeam
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            PlayerTeam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::SpectateTeam(enum class EPeak53Teams PlayerTeam, class ABP_SGKController_C* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SpectateTeam");

	Params::ABP_SGKGameMode_C_SpectateTeam_Params Parms{};

	Parms.PlayerTeam = PlayerTeam;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.SpawnSpectatorBP
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Parent_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::SpawnSpectatorBP(class AActor* Parent_Actor, class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "SpawnSpectatorBP");

	Params::ABP_SGKGameMode_C_SpawnSpectatorBP_Params Parms{};

	Parms.Parent_Actor = Parent_Actor;
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.LoopThroughTeammates
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            PlayerTeam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::LoopThroughTeammates(enum class EPeak53Teams PlayerTeam, class ABP_SGKController_C* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "LoopThroughTeammates");

	Params::ABP_SGKGameMode_C_LoopThroughTeammates_Params Parms{};

	Parms.PlayerTeam = PlayerTeam;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.ExecuteUbergraph_BP_SGKGameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPlayer_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_NewItem                                       (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_OldPC                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPC                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA_                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_ExitingController                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPlayer                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class APlayerStart*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_4                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_FindPlayerStart_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_5                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_CraftingCost>     CallFunc_CalculePlayerToolsItems_TempArray1                      (ReferenceParm)
// struct FS_ContainerDetails         K2Node_MakeStruct_S_ContainerDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_SaveSystem_C*            K2Node_Event_SaveSystem                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_PlayerTeam_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_CustomEvent_Controller_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Parent_Actor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Owner                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_6                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_7                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASpectatorCharacter_C*       CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_PlayerTeam                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_CustomEvent_Controller                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceManager_C*       CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKGameMode_C::ExecuteUbergraph_BP_SGKGameMode(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APlayerController* K2Node_Event_NewPlayer_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* K2Node_CustomEvent_NewItem, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class APlayerController* Temp_object_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, class APlayerController* K2Node_Event_OldPC, class APlayerController* K2Node_Event_NewPC, int32 CallFunc_Array_Add_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CheckFFA_FFA_, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_Array_Get_Item, class APlayerController* CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable_3, class AController* K2Node_Event_ExitingController, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* K2Node_Event_NewPlayer, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_1, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerStart* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_7, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_1, bool K2Node_DynamicCast_bSuccess_5, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_NotEqual_ClassClass_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_3, bool K2Node_DynamicCast_bSuccess_7, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_4, bool K2Node_DynamicCast_bSuccess_8, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_2, bool K2Node_DynamicCast_bSuccess_9, int32 CallFunc_Array_Find_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_5, class AActor* CallFunc_K2_FindPlayerStart_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_5, bool K2Node_DynamicCast_bSuccess_10, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_8, TArray<struct FS_CraftingCost>& CallFunc_CalculePlayerToolsItems_TempArray1, const struct FS_ContainerDetails& K2Node_MakeStruct_S_ContainerDetails, class ABP_SaveSystem_C* K2Node_Event_SaveSystem, enum class EPeak53Teams K2Node_CustomEvent_PlayerTeam_1, class ABP_SGKController_C* K2Node_CustomEvent_Controller_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class AActor* K2Node_CustomEvent_Parent_Actor, class AActor* K2Node_CustomEvent_Owner, class APlayerController* CallFunc_Array_Get_Item_3, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_6, bool K2Node_DynamicCast_bSuccess_12, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_7, bool K2Node_DynamicCast_bSuccess_13, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_3, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ASpectatorCharacter_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, enum class EPeak53Teams K2Node_CustomEvent_PlayerTeam, class ABP_SGKController_C* K2Node_CustomEvent_Controller, bool K2Node_SwitchEnum_CmpSuccess_1, class APlayerController* CallFunc_Array_Get_Item_4, class APlayerController* CallFunc_Array_Get_Item_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_ResourceManager_C* CallFunc_FinishSpawningActor_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, class APlayerController* CallFunc_Array_Get_Item_6, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_4, bool K2Node_DynamicCast_bSuccess_15, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_1, bool K2Node_DynamicCast_bSuccess_16, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_1, class ABP_GlobalInventoryManager_C* CallFunc_FinishSpawningActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_11, int32 CallFunc_Array_AddUnique_ReturnValue_4, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "ExecuteUbergraph_BP_SGKGameMode");

	Params::ABP_SGKGameMode_C_ExecuteUbergraph_BP_SGKGameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_NewPlayer_1 = K2Node_Event_NewPlayer_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CustomEvent_NewItem = K2Node_CustomEvent_NewItem;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Event_OldPC = K2Node_Event_OldPC;
	Parms.K2Node_Event_NewPC = K2Node_Event_NewPC;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CheckFFA_FFA_ = CallFunc_CheckFFA_FFA_;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_Event_ExitingController = K2Node_Event_ExitingController;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_NewPlayer = K2Node_Event_NewPlayer;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKController_1 = K2Node_DynamicCast_AsBP_SGKController_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State = K2Node_DynamicCast_AsPeak_53Player_State;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_1 = K2Node_DynamicCast_AsPeak_53Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBP_SGKController_2 = K2Node_DynamicCast_AsBP_SGKController_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController_3 = K2Node_DynamicCast_AsBP_SGKController_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController_4 = K2Node_DynamicCast_AsBP_SGKController_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_2 = K2Node_DynamicCast_AsPeak_53Player_State_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_K2_FindPlayerStart_ReturnValue = CallFunc_K2_FindPlayerStart_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController_5 = K2Node_DynamicCast_AsBP_SGKController_5;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_CalculePlayerToolsItems_TempArray1 = CallFunc_CalculePlayerToolsItems_TempArray1;
	Parms.K2Node_MakeStruct_S_ContainerDetails = K2Node_MakeStruct_S_ContainerDetails;
	Parms.K2Node_Event_SaveSystem = K2Node_Event_SaveSystem;
	Parms.K2Node_CustomEvent_PlayerTeam_1 = K2Node_CustomEvent_PlayerTeam_1;
	Parms.K2Node_CustomEvent_Controller_1 = K2Node_CustomEvent_Controller_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_Parent_Actor = K2Node_CustomEvent_Parent_Actor;
	Parms.K2Node_CustomEvent_Owner = K2Node_CustomEvent_Owner;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsBP_SGKController_6 = K2Node_DynamicCast_AsBP_SGKController_6;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsBP_SGKController_7 = K2Node_DynamicCast_AsBP_SGKController_7;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_3 = K2Node_DynamicCast_AsPeak_53Player_State_3;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.K2Node_CustomEvent_PlayerTeam = K2Node_CustomEvent_PlayerTeam;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_4 = K2Node_DynamicCast_AsPeak_53Player_State_4;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_1 = K2Node_DynamicCast_AsPeak_53Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.EndMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKGameMode_C::EndMatch__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "EndMatch__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameMode.BP_SGKGameMode_C.CreateInventory__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKGameMode_C::CreateInventory__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameMode_C", "CreateInventory__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


