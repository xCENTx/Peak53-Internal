#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SaveSystem.BP_SaveSystem_C
// (Actor)

class UClass* ABP_SaveSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SaveSystem_C");

	return Clss;
}


// BP_SaveSystem_C BP_SaveSystem.Default__BP_SaveSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SaveSystem_C* ABP_SaveSystem_C::GetDefaultObj()
{
	static class ABP_SaveSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SaveSystem_C*>(ABP_SaveSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SaveSystem.BP_SaveSystem_C.SaveGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            SaveL                                                            (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      SaveSlotL                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_DynamicCast_AsBP_SGKSave_Game                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveGame(const class FString& SaveSlotName, const struct FS_LevelSaveData& SaveL, const class FString& SaveSlotL, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, class UBP_SGKSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, const class FString& K2Node_Select_Default, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "SaveGame");

	Params::ABP_SaveSystem_C_SaveGame_Params Parms{};

	Parms.SaveSlotName = SaveSlotName;
	Parms.SaveL = SaveL;
	Parms.SaveSlotL = SaveSlotL;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game = K2Node_DynamicCast_AsBP_SGKSave_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.ItemSpawnSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterItemSpawner_C*     ItemSpawner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MasterItemSave           ItemSave                                                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_FindItemSpawnerSaveData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MasterItemSave           CallFunc_FindItemSpawnerSaveData_Item                            (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_SaveSystem_C::ItemSpawnSaveData(class ABP_MasterItemSpawner_C* ItemSpawner, class UBP_SGKSaveGame_C* SaveGame, bool* SaveFound, struct FS_MasterItemSave* ItemSave, const struct FS_LevelSaveData& LevelSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, bool CallFunc_FindItemSpawnerSaveData_ReturnValue, const struct FS_MasterItemSave& CallFunc_FindItemSpawnerSaveData_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "ItemSpawnSaveData");

	Params::ABP_SaveSystem_C_ItemSpawnSaveData_Params Parms{};

	Parms.ItemSpawner = ItemSpawner;
	Parms.SaveGame = SaveGame;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.CallFunc_FindItemSpawnerSaveData_ReturnValue = CallFunc_FindItemSpawnerSaveData_ReturnValue;
	Parms.CallFunc_FindItemSpawnerSaveData_Item = CallFunc_FindItemSpawnerSaveData_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (ItemSave != nullptr)
		*ItemSave = std::move(Parms.ItemSave);

}


// Function BP_SaveSystem.BP_SaveSystem_C.DeleteMetaData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              MetaDataIndexL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   SaveGameMetaDataL                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SaveMetaData             CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::DeleteMetaData(const class FString& SlotName, int32 MetaDataIndexL, class UBP_SGKSaveGameMetaData_C* SaveGameMetaDataL, int32 Temp_int_Array_Index_Variable, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "DeleteMetaData");

	Params::ABP_SaveSystem_C_DeleteMetaData_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.MetaDataIndexL = MetaDataIndexL;
	Parms.SaveGameMetaDataL = SaveGameMetaDataL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data = K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.SaveMetaData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              SaveMetaDataIndexL                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SaveMetaData             SaveMetaDataL                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   SaveGameMetaDataL                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_SaveMetaData             K2Node_MakeStruct_S_SaveMetaData                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_SaveMetaData             CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveMetaData(const class FString& SaveSlotName, int32 SaveMetaDataIndexL, const struct FS_SaveMetaData& SaveMetaDataL, class UBP_SGKSaveGameMetaData_C* SaveGameMetaDataL, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue_1, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FS_SaveMetaData& K2Node_MakeStruct_S_SaveMetaData, int32 CallFunc_Array_Add_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, class UBP_SGKSaveGameMetaData_C* CallFunc_CreateSaveGameObject_ReturnValue, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "SaveMetaData");

	Params::ABP_SaveSystem_C_SaveMetaData_Params Parms{};

	Parms.SaveSlotName = SaveSlotName;
	Parms.SaveMetaDataIndexL = SaveMetaDataIndexL;
	Parms.SaveMetaDataL = SaveMetaDataL;
	Parms.SaveGameMetaDataL = SaveGameMetaDataL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data = K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_1 = CallFunc_SaveGameToSlot_ReturnValue_1;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.K2Node_MakeStruct_S_SaveMetaData = K2Node_MakeStruct_S_SaveMetaData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Now_ReturnValue_1 = CallFunc_Now_ReturnValue_1;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.DebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DebugText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                TextColour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PrintString_Duration_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::DebugText(const class FString& DebugText, const struct FLinearColor& TextColour, float CallFunc_PrintString_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "DebugText");

	Params::ABP_SaveSystem_C_DebugText_Params Parms{};

	Parms.DebugText = DebugText;
	Parms.TextColour = TextColour;
	Parms.CallFunc_PrintString_Duration_ImplicitCast = CallFunc_PrintString_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InGameLoad                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SlotNameL                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           Save                                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData_1                     (ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_DynamicCast_AsBP_SGKSave_Game                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::LoadSave(bool InGameLoad, const class FString& SaveSlotName, const class FString& LevelName, const class FString& SlotNameL, class UBP_SGKSaveGame_C* Save, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, const class FString& K2Node_Select_Default, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_2, bool CallFunc_SelectLevelSaveData_SaveFound_1, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData_1, const class FString& K2Node_Select_Default_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "LoadSave");

	Params::ABP_SaveSystem_C_LoadSave_Params Parms{};

	Parms.InGameLoad = InGameLoad;
	Parms.SaveSlotName = SaveSlotName;
	Parms.LevelName = LevelName;
	Parms.SlotNameL = SlotNameL;
	Parms.Save = Save;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_2 = CallFunc_GetCurrentLevelName_ReturnValue_2;
	Parms.CallFunc_SelectLevelSaveData_SaveFound_1 = CallFunc_SelectLevelSaveData_SaveFound_1;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData_1 = CallFunc_SelectLevelSaveData_LevelSaveData_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game = K2Node_DynamicCast_AsBP_SGKSave_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.FindPlayerLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_DynamicCast_AsBP_SGKSave_Game                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName                (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetLoadSaveGame_LoadSaveGame                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SaveSystem_C::FindPlayerLocation(class FText PlayerName, struct FTransform* Transform, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, const struct FS_PlayerSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SGK_GetLoadSaveGame_LoadSaveGame, bool CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "FindPlayerLocation");

	Params::ABP_SaveSystem_C_FindPlayerLocation_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game = K2Node_DynamicCast_AsBP_SGKSave_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName = CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SGK_GetLoadSaveGame_LoadSaveGame = CallFunc_SGK_GetLoadSaveGame_LoadSaveGame;
	Parms.CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel = CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadBuildParts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewBuildPartL                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartSave            BuildPartDataL                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKBuildingInterface_C>K2Node_DynamicCast_AsBP_SGKBuilding_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKBuildingInterface_C>K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKBuildingInterface_C>K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInteractionInterface_C>K2Node_DynamicCast_AsBP_SGKInteraction_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKDamageInterface_C>K2Node_DynamicCast_AsBP_SGKDamage_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_SetCurrentHealth_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_AddMultipleOwners_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartSave            CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::LoadBuildParts(class AActor* NewBuildPartL, const struct FS_BuildPartSave& BuildPartDataL, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBP_SGKDamageInterface_C> K2Node_DynamicCast_AsBP_SGKDamage_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_SGK_SetCurrentHealth_ReturnValue, bool CallFunc_SGK_AddMultipleOwners_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 CallFunc_Array_Length_ReturnValue_2, const struct FS_BuildPartSave& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "LoadBuildParts");

	Params::ABP_SaveSystem_C_LoadBuildParts_Params Parms{};

	Parms.NewBuildPartL = NewBuildPartL;
	Parms.BuildPartDataL = BuildPartDataL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKBuilding_Interface = K2Node_DynamicCast_AsBP_SGKBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1 = K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2 = K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_SGKInteraction_Interface = K2Node_DynamicCast_AsBP_SGKInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_SGKDamage_Interface = K2Node_DynamicCast_AsBP_SGKDamage_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_SGK_SetCurrentHealth_ReturnValue = CallFunc_SGK_SetCurrentHealth_ReturnValue;
	Parms.CallFunc_SGK_AddMultipleOwners_ReturnValue = CallFunc_SGK_AddMultipleOwners_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadSavedItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  NewItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*GlobalInventoryL                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewSpawnedItemL                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FS_MasterItemSave           ItemSaveDataL                                                    (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemConsumableDetails_ItemFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConsumableDetails        CallFunc_SGK_ItemConsumableDetails_ItemDetails                   (NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInteractionInterface_C>K2Node_DynamicCast_AsBP_SGKInteraction_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DropItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MasterItemSave           CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentWeight_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::LoadSavedItems(const struct FS_InvItem& NewItemL, class ABP_GlobalInventoryManager_C* GlobalInventoryL, class AActor* NewSpawnedItemL, const struct FS_MasterItemSave& ItemSaveDataL, int32 Temp_int_Array_Index_Variable, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_ItemConsumableDetails_ItemFound, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, bool CallFunc_SGK_DropItem_ReturnValue, const struct FS_MasterItemSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_IsValidClass_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_3, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, const struct FS_InvItem& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_IsValid_ReturnValue_1, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory_1, bool K2Node_DynamicCast_bSuccess_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, double K2Node_VariableSet_CurrentWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "LoadSavedItems");

	Params::ABP_SaveSystem_C_LoadSavedItems_Params Parms{};

	Parms.NewItemL = NewItemL;
	Parms.GlobalInventoryL = GlobalInventoryL;
	Parms.NewSpawnedItemL = NewSpawnedItemL;
	Parms.ItemSaveDataL = ItemSaveDataL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemFound = CallFunc_SGK_ItemConsumableDetails_ItemFound;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemDetails = CallFunc_SGK_ItemConsumableDetails_ItemDetails;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBP_SGKInteraction_Interface = K2Node_DynamicCast_AsBP_SGKInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.CallFunc_SGK_DropItem_ReturnValue = CallFunc_SGK_DropItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory_1 = K2Node_DynamicCast_AsBP_Master_Item_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_VariableSet_CurrentWeight_ImplicitCast = K2Node_VariableSet_CurrentWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.Completed_A03379DA470360706C4BD1BF93C92FA9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::Completed_A03379DA470360706C4BD1BF93C92FA9(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "Completed_A03379DA470360706C4BD1BF93C92FA9");

	Params::ABP_SaveSystem_C_Completed_A03379DA470360706C4BD1BF93C92FA9_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.Completed_E4E68CAB46C23F15046FDB8C35460535
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::Completed_E4E68CAB46C23F15046FDB8C35460535(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "Completed_E4E68CAB46C23F15046FDB8C35460535");

	Params::ABP_SaveSystem_C_Completed_E4E68CAB46C23F15046FDB8C35460535_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadAllBuildParts
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SaveSystem_C::LoadAllBuildParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "LoadAllBuildParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveSystem.BP_SaveSystem_C.CallSaveEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::CallSaveEvents(const class FString& SaveSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "CallSaveEvents");

	Params::ABP_SaveSystem_C_CallSaveEvents_Params Parms{};

	Parms.SaveSlot = SaveSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.ServerSaveGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::ServerSaveGame(const class FString& SaveSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "ServerSaveGame");

	Params::ABP_SaveSystem_C_ServerSaveGame_Params Parms{};

	Parms.SaveSlotName = SaveSlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.StartAutoSaveTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SaveSystem_C::StartAutoSaveTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "StartAutoSaveTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveSystem.BP_SaveSystem_C.AutoSaveGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SaveSystem_C::AutoSaveGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "AutoSaveGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveSystem.BP_SaveSystem_C.SaveDataToSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   SaveGameObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveDataToSlot(const class FString& SlotName, class USaveGame* SaveGameObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "SaveDataToSlot");

	Params::ABP_SaveSystem_C_SaveDataToSlot_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.SaveGameObject = SaveGameObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.UpdatePlayerSave
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::UpdatePlayerSave(const class FString& SaveName, class UBP_PlayerInventory_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "UpdatePlayerSave");

	Params::ABP_SaveSystem_C_UpdatePlayerSave_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.DeleteSettingsSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SaveSystem_C::DeleteSettingsSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "DeleteSettingsSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveSystem.BP_SaveSystem_C.DeletePlayerSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerSave                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        RespawnName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaveSystem_C::DeletePlayerSave(class FText PlayerSave, const class FString& SlotName, class FText RespawnName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "DeletePlayerSave");

	Params::ABP_SaveSystem_C_DeletePlayerSave_Params Parms{};

	Parms.PlayerSave = PlayerSave;
	Parms.SlotName = SlotName;
	Parms.RespawnName = RespawnName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.DeleteSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SaveSystem_C::DeleteSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "DeleteSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveSystem.BP_SaveSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SaveSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveSystem.BP_SaveSystem_C.InitializeSaveSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SaveSystem_C::InitializeSaveSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "InitializeSaveSystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveSystem.BP_SaveSystem_C.ExecuteUbergraph_BP_SaveSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_DynamicCast_AsBP_SGKSave_Game                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Delay_Loop_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKSaveInterface_C>K2Node_DynamicCast_AsBP_SGKSave_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SaveSlot                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SaveSlotName                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SlotName_1                                    (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGameObject                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SaveName                                      (ZeroConstructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_CustomEvent_PlayerInventory                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_DynamicCast_AsBP_SGKSave_Game_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PlayerSave                                    (None)
// class FString                      K2Node_CustomEvent_SlotName                                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_RespawnName                                   (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Delay_Loop_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName                (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetLoadSaveGame_LoadSaveGame                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKSaveInterface_C>K2Node_DynamicCast_AsBP_SGKSave_Interface_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::ExecuteUbergraph_BP_SaveSystem(int32 EntryPoint, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Delay_Loop_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBP_SGKSaveInterface_C> K2Node_DynamicCast_AsBP_SGKSave_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, const class FString& K2Node_CustomEvent_SaveSlot, bool Temp_bool_Variable_2, const class FString& K2Node_CustomEvent_SaveSlotName, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& K2Node_Select_Default, const class FString& K2Node_CustomEvent_SlotName_1, class USaveGame* K2Node_CustomEvent_SaveGameObject, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class USaveGame* Temp_object_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, const class FString& K2Node_CustomEvent_SaveName, class UBP_PlayerInventory_C* K2Node_CustomEvent_PlayerInventory, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_DeleteGameInSlot_ReturnValue, const class FString& K2Node_Select_Default_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SaveGameToSlot_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText K2Node_CustomEvent_PlayerSave, const class FString& K2Node_CustomEvent_SlotName, class FText K2Node_CustomEvent_RespawnName, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_DeleteGameInSlot_ReturnValue_1, const class FString& K2Node_Select_Default_2, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue_1, int32 Temp_int_Delay_Loop_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel, const class FString& CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3, bool K2Node_DynamicCast_bSuccess_6, class UActorComponent* CallFunc_Array_Get_Item_1, bool CallFunc_SGK_GetLoadSaveGame_LoadSaveGame, TScriptInterface<class IBP_SGKSaveInterface_C> K2Node_DynamicCast_AsBP_SGKSave_Interface_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "ExecuteUbergraph_BP_SaveSystem");

	Params::ABP_SaveSystem_C_ExecuteUbergraph_BP_SaveSystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game = K2Node_DynamicCast_AsBP_SGKSave_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Delay_Loop_Variable = Temp_int_Delay_Loop_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Interface = K2Node_DynamicCast_AsBP_SGKSave_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.K2Node_CustomEvent_SaveSlot = K2Node_CustomEvent_SaveSlot;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_SaveSlotName = K2Node_CustomEvent_SaveSlotName;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_SlotName_1 = K2Node_CustomEvent_SlotName_1;
	Parms.K2Node_CustomEvent_SaveGameObject = K2Node_CustomEvent_SaveGameObject;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue = CallFunc_AsyncSaveGameToSlot_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.K2Node_CustomEvent_SaveName = K2Node_CustomEvent_SaveName;
	Parms.K2Node_CustomEvent_PlayerInventory = K2Node_CustomEvent_PlayerInventory;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game_1 = K2Node_DynamicCast_AsBP_SGKSave_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_SaveGame_1 = K2Node_CustomEvent_SaveGame_1;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_CustomEvent_PlayerSave = K2Node_CustomEvent_PlayerSave;
	Parms.K2Node_CustomEvent_SlotName = K2Node_CustomEvent_SlotName;
	Parms.K2Node_CustomEvent_RespawnName = K2Node_CustomEvent_RespawnName;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_1 = CallFunc_DeleteGameInSlot_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue = CallFunc_AsyncLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.Temp_int_Delay_Loop_Variable_1 = Temp_int_Delay_Loop_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel = CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel;
	Parms.CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName = CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SGK_GetLoadSaveGame_LoadSaveGame = CallFunc_SGK_GetLoadSaveGame_LoadSaveGame;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Interface_1 = K2Node_DynamicCast_AsBP_SGKSave_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.LoadData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::LoadData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "LoadData__DelegateSignature");

	Params::ABP_SaveSystem_C_LoadData__DelegateSignature_Params Parms{};

	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveSystem.BP_SaveSystem_C.SaveData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SaveSystem_C::SaveData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveSystem_C", "SaveData__DelegateSignature");

	Params::ABP_SaveSystem_C_SaveData__DelegateSignature_Params Parms{};

	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}

}


