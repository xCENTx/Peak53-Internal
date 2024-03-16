#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3A8 - 0x380)
// BlueprintGeneratedClass BP_MasterRespawnPoint.BP_MasterRespawnPoint_C
class ABP_MasterRespawnPoint_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       RespawnLocation;                                   // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  RespawnPointName;                                  // 0x390(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_MasterRespawnPoint_C* GetDefaultObj();

	void SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, const struct FS_LevelSaveData& CallFunc_PrepareRespawnNameData_SaveData, int32 CallFunc_PrepareRespawnNameData_SaveIndex);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array);
	void ReceiveDestroyed();
	void SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index);
	void ExecuteUbergraph_BP_MasterRespawnPoint(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, class FText CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
};

}


