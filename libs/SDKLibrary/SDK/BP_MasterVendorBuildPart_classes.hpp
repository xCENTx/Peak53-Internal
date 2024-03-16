#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x390 - 0x380)
// BlueprintGeneratedClass BP_MasterVendorBuildPart.BP_MasterVendorBuildPart_C
class ABP_MasterVendorBuildPart_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_VendorComponent_C*                 BP_VenderComponent;                                // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterVendorBuildPart_C* GetDefaultObj();

	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, int32 CallFunc_PrepareVenderSaveData_ExtraDataIndex, const struct FS_LevelSaveData& CallFunc_PrepareVenderSaveData_NewLevelSaveData);
	void SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index);
	void ExecuteUbergraph_BP_MasterVendorBuildPart(int32 EntryPoint, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_VendorSave& CallFunc_Array_Get_Item, double K2Node_VariableSet_CurrentRestockTime_ImplicitCast);
};

}


