#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_FL_PMM_Savegame.BP_FL_PMM_Savegame_C
class UBP_FL_PMM_Savegame_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_FL_PMM_Savegame_C* GetDefaultObj();

	bool Save_Settings_Language(const class FString& Settings_Language, class UObject* __WorldContext, class UBP_PMM_Savegame_C* PMM_SaveGame, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, bool CallFunc_PMM_SaveGame_ReturnValue, class UBP_PMM_Savegame_C* CallFunc_PMM_GetSaveGameObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UBP_PMM_Savegame_C* PMM_GetSaveGameObject(class UObject* __WorldContext, class UBP_PMM_Savegame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_PMM_DoesSaveGameExist_ReturnValue, class UBP_PMM_Savegame_C* CallFunc_PMM_LoadGame_AsBP_PMM_Savegame);
	bool PMM_DoesSaveGameExist(class UObject* __WorldContext, const class FString& CallFunc_GetSavegameSlot_Savegame_Slot, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void PMM_LoadGame(class UObject* __WorldContext, class UBP_PMM_Savegame_C** AsBP_PMM_Savegame, const class FString& CallFunc_GetSavegameSlot_Savegame_Slot, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_PMM_Savegame_C* K2Node_DynamicCast_AsBP_PMM_Savegame, bool K2Node_DynamicCast_bSuccess);
	bool PMM_SaveGame(class UBP_PMM_Savegame_C* SaveGameObject, class UObject* __WorldContext, const class FString& CallFunc_GetSavegameSlot_Savegame_Slot, bool CallFunc_SaveGameToSlot_ReturnValue);
	void GetSavegameSlot(class UObject* __WorldContext, class FString* Savegame_Slot, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance);
};

}


