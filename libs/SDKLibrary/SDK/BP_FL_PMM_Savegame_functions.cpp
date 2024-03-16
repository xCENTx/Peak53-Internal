#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C
// (None)

class UClass* UBP_FL_PMM_Savegame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FL_PMM_Savegame_C");

	return Clss;
}


// BP_FL_PMM_Savegame_C BP_FL_PMM_Savegame.Default__BP_FL_PMM_Savegame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FL_PMM_Savegame_C* UBP_FL_PMM_Savegame_C::GetDefaultObj()
{
	static class UBP_FL_PMM_Savegame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FL_PMM_Savegame_C*>(UBP_FL_PMM_Savegame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C.Save_Settings_Language
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Settings_Language                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          PMM_SaveGame                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PMM_SaveGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          CallFunc_PMM_GetSaveGameObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_FL_PMM_Savegame_C::Save_Settings_Language(const class FString& Settings_Language, class UObject* __WorldContext, class UBP_PMM_Savegame_C* PMM_SaveGame, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, bool CallFunc_PMM_SaveGame_ReturnValue, class UBP_PMM_Savegame_C* CallFunc_PMM_GetSaveGameObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_PMM_Savegame_C", "Save_Settings_Language");

	Params::UBP_FL_PMM_Savegame_C_Save_Settings_Language_Params Parms{};

	Parms.Settings_Language = Settings_Language;
	Parms.__WorldContext = __WorldContext;
	Parms.PMM_SaveGame = PMM_SaveGame;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;
	Parms.CallFunc_PMM_SaveGame_ReturnValue = CallFunc_PMM_SaveGame_ReturnValue;
	Parms.CallFunc_PMM_GetSaveGameObject_ReturnValue = CallFunc_PMM_GetSaveGameObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C.PMM_GetSaveGameObject
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PMM_DoesSaveGameExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          CallFunc_PMM_LoadGame_AsBP_PMM_Savegame                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UBP_PMM_Savegame_C* UBP_FL_PMM_Savegame_C::PMM_GetSaveGameObject(class UObject* __WorldContext, class UBP_PMM_Savegame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_PMM_DoesSaveGameExist_ReturnValue, class UBP_PMM_Savegame_C* CallFunc_PMM_LoadGame_AsBP_PMM_Savegame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_PMM_Savegame_C", "PMM_GetSaveGameObject");

	Params::UBP_FL_PMM_Savegame_C_PMM_GetSaveGameObject_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_PMM_DoesSaveGameExist_ReturnValue = CallFunc_PMM_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_PMM_LoadGame_AsBP_PMM_Savegame = CallFunc_PMM_LoadGame_AsBP_PMM_Savegame;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C.PMM_DoesSaveGameExist
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSavegameSlot_Savegame_Slot                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_FL_PMM_Savegame_C::PMM_DoesSaveGameExist(class UObject* __WorldContext, const class FString& CallFunc_GetSavegameSlot_Savegame_Slot, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_PMM_Savegame_C", "PMM_DoesSaveGameExist");

	Params::UBP_FL_PMM_Savegame_C_PMM_DoesSaveGameExist_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetSavegameSlot_Savegame_Slot = CallFunc_GetSavegameSlot_Savegame_Slot;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C.PMM_LoadGame
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          AsBP_PMM_Savegame                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSavegameSlot_Savegame_Slot                           (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          K2Node_DynamicCast_AsBP_PMM_Savegame                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FL_PMM_Savegame_C::PMM_LoadGame(class UObject* __WorldContext, class UBP_PMM_Savegame_C** AsBP_PMM_Savegame, const class FString& CallFunc_GetSavegameSlot_Savegame_Slot, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_PMM_Savegame_C* K2Node_DynamicCast_AsBP_PMM_Savegame, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_PMM_Savegame_C", "PMM_LoadGame");

	Params::UBP_FL_PMM_Savegame_C_PMM_LoadGame_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetSavegameSlot_Savegame_Slot = CallFunc_GetSavegameSlot_Savegame_Slot;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PMM_Savegame = K2Node_DynamicCast_AsBP_PMM_Savegame;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_PMM_Savegame != nullptr)
		*AsBP_PMM_Savegame = Parms.AsBP_PMM_Savegame;

}


// Function BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C.PMM_SaveGame
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PMM_Savegame_C*          SaveGameObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSavegameSlot_Savegame_Slot                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_FL_PMM_Savegame_C::PMM_SaveGame(class UBP_PMM_Savegame_C* SaveGameObject, class UObject* __WorldContext, const class FString& CallFunc_GetSavegameSlot_Savegame_Slot, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_PMM_Savegame_C", "PMM_SaveGame");

	Params::UBP_FL_PMM_Savegame_C_PMM_SaveGame_Params Parms{};

	Parms.SaveGameObject = SaveGameObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetSavegameSlot_Savegame_Slot = CallFunc_GetSavegameSlot_Savegame_Slot;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C.GetSavegameSlot
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Savegame_Slot                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPMM_Instance_C*             CallFunc_Get_PMM_Instance_AsPMM_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FL_PMM_Savegame_C::GetSavegameSlot(class UObject* __WorldContext, class FString* Savegame_Slot, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_PMM_Savegame_C", "GetSavegameSlot");

	Params::UBP_FL_PMM_Savegame_C_GetSavegameSlot_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_PMM_Instance_AsPMM_Instance = CallFunc_Get_PMM_Instance_AsPMM_Instance;

	UObject::ProcessEvent(Func, &Parms);

	if (Savegame_Slot != nullptr)
		*Savegame_Slot = std::move(Parms.Savegame_Slot);

}

}


