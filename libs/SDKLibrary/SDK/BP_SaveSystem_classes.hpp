#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x460 - 0x290)
// BlueprintGeneratedClass BP_SaveSystem.BP_SaveSystem_C
class ABP_SaveSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadSaveOnBeginPlay;                               // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SlotName;                                          // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash)
	bool                                         Show_Debug_Text;                                   // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Debug_Text_Time;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SaveData;                                          // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LoadData;                                          // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         FirstLoadDone;                                     // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AutoSaveTimer;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKSaveGame_C*                     SaveGameData;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKSaveGame_C*                     LoadedSaveGameData;                                // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoSave;                                          // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AutoSaveTime;                                      // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Loading;                                           // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeAutoSaveSlotOnSave;                          // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B99[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SaveLevel;                                         // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         PlayerLoadSave;                                    // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorComponent*>               SaveComponents;                                    // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                SavingSlot;                                        // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_LevelSaveData                      CurrentLevelSave;                                  // 0x358(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         InSave;                                            // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        TempActors;                                        // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UActorComponent*>               TempComponents;                                    // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        SaveActors;                                        // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_SaveSystem_C* GetDefaultObj();

	void SaveGame(const class FString& SaveSlotName, const struct FS_LevelSaveData& SaveL, const class FString& SaveSlotL, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, class UBP_SGKSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, const class FString& K2Node_Select_Default, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void ItemSpawnSaveData(class ABP_MasterItemSpawner_C* ItemSpawner, class UBP_SGKSaveGame_C* SaveGame, bool* SaveFound, struct FS_MasterItemSave* ItemSave, const struct FS_LevelSaveData& LevelSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, bool CallFunc_FindItemSpawnerSaveData_ReturnValue, const struct FS_MasterItemSave& CallFunc_FindItemSpawnerSaveData_Item);
	void DeleteMetaData(const class FString& SlotName, int32 MetaDataIndexL, class UBP_SGKSaveGameMetaData_C* SaveGameMetaDataL, int32 Temp_int_Array_Index_Variable, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess);
	void SaveMetaData(const class FString& SaveSlotName, int32 SaveMetaDataIndexL, const struct FS_SaveMetaData& SaveMetaDataL, class UBP_SGKSaveGameMetaData_C* SaveGameMetaDataL, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue_1, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FS_SaveMetaData& K2Node_MakeStruct_S_SaveMetaData, int32 CallFunc_Array_Add_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, class UBP_SGKSaveGameMetaData_C* CallFunc_CreateSaveGameObject_ReturnValue, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void DebugText(const class FString& DebugText, const struct FLinearColor& TextColour, float CallFunc_PrintString_Duration_ImplicitCast);
	void LoadSave(bool InGameLoad, const class FString& SaveSlotName, const class FString& LevelName, const class FString& SlotNameL, class UBP_SGKSaveGame_C* Save, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, const class FString& K2Node_Select_Default, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_2, bool CallFunc_SelectLevelSaveData_SaveFound_1, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData_1, const class FString& K2Node_Select_Default_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	bool FindPlayerLocation(class FText PlayerName, struct FTransform* Transform, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, const struct FS_PlayerSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SGK_GetLoadSaveGame_LoadSaveGame, bool CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel);
	void LoadBuildParts(class AActor* NewBuildPartL, const struct FS_BuildPartSave& BuildPartDataL, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBP_SGKDamageInterface_C> K2Node_DynamicCast_AsBP_SGKDamage_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_SGK_SetCurrentHealth_ReturnValue, bool CallFunc_SGK_AddMultipleOwners_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 CallFunc_Array_Length_ReturnValue_2, const struct FS_BuildPartSave& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
	void LoadSavedItems(const struct FS_InvItem& NewItemL, class ABP_GlobalInventoryManager_C* GlobalInventoryL, class AActor* NewSpawnedItemL, const struct FS_MasterItemSave& ItemSaveDataL, int32 Temp_int_Array_Index_Variable, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_ItemConsumableDetails_ItemFound, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, bool CallFunc_SGK_DropItem_ReturnValue, const struct FS_MasterItemSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_IsValidClass_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_3, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, const struct FS_InvItem& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_IsValid_ReturnValue_1, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory_1, bool K2Node_DynamicCast_bSuccess_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, double K2Node_VariableSet_CurrentWeight_ImplicitCast);
	void Completed_A03379DA470360706C4BD1BF93C92FA9(class USaveGame* SaveGame, bool bSuccess);
	void Completed_E4E68CAB46C23F15046FDB8C35460535(class USaveGame* SaveGame, bool bSuccess);
	void LoadAllBuildParts();
	void CallSaveEvents(const class FString& SaveSlot);
	void ServerSaveGame(const class FString& SaveSlotName);
	void StartAutoSaveTimer();
	void AutoSaveGame();
	void SaveDataToSlot(const class FString& SlotName, class USaveGame* SaveGameObject);
	void UpdatePlayerSave(const class FString& SaveName, class UBP_PlayerInventory_C* PlayerInventory);
	void DeleteSettingsSave();
	void DeletePlayerSave(class FText PlayerSave, const class FString& SlotName, class FText RespawnName);
	void DeleteSave();
	void ReceiveBeginPlay();
	void InitializeSaveSystem();
	void ExecuteUbergraph_BP_SaveSystem(int32 EntryPoint, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Delay_Loop_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBP_SGKSaveInterface_C> K2Node_DynamicCast_AsBP_SGKSave_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, const class FString& K2Node_CustomEvent_SaveSlot, bool Temp_bool_Variable_2, const class FString& K2Node_CustomEvent_SaveSlotName, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& K2Node_Select_Default, const class FString& K2Node_CustomEvent_SlotName_1, class USaveGame* K2Node_CustomEvent_SaveGameObject, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class USaveGame* Temp_object_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, const class FString& K2Node_CustomEvent_SaveName, class UBP_PlayerInventory_C* K2Node_CustomEvent_PlayerInventory, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_DeleteGameInSlot_ReturnValue, const class FString& K2Node_Select_Default_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UBP_SGKSaveGame_C* K2Node_DynamicCast_AsBP_SGKSave_Game_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SaveGameToSlot_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText K2Node_CustomEvent_PlayerSave, const class FString& K2Node_CustomEvent_SlotName, class FText K2Node_CustomEvent_RespawnName, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_DeleteGameInSlot_ReturnValue_1, const class FString& K2Node_Select_Default_2, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue_1, int32 Temp_int_Delay_Loop_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_SGK_GetMenuOpenedLevel_MenuOpenedLevel, const class FString& CallFunc_SGK_GetSaveGameSlotName_SaveGameSlotName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3, bool K2Node_DynamicCast_bSuccess_6, class UActorComponent* CallFunc_Array_Get_Item_1, bool CallFunc_SGK_GetLoadSaveGame_LoadSaveGame, TScriptInterface<class IBP_SGKSaveInterface_C> K2Node_DynamicCast_AsBP_SGKSave_Interface_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void LoadData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame);
	void SaveData__DelegateSignature(class UBP_SGKSaveGame_C* SaveGame);
};

}

