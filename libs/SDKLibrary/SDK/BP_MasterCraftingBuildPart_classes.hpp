#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x390 - 0x380)
// BlueprintGeneratedClass BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C
class ABP_MasterCraftingBuildPart_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CraftingComponent_C*               BP_CraftingComponent;                              // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterCraftingBuildPart_C* GetDefaultObj();

	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, int32 CallFunc_PrepareCraftingSaveData_ExtraDataIndex, const struct FS_LevelSaveData& CallFunc_PrepareCraftingSaveData_NewLevelSaveData);
	void SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index);
	void SGK_PlayerOutProximity();
	void SGK_PlayerInProximity();
	void ExecuteUbergraph_BP_MasterCraftingBuildPart(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, const struct FS_CraftingSave& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


