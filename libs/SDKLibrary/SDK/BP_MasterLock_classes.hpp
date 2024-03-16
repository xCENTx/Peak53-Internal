#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x52 (0x3D2 - 0x380)
// BlueprintGeneratedClass BP_MasterLock.BP_MasterLock_C
class ABP_MasterLock_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  Code;                                              // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x3A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3997[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          VerifiedPlayers;                                   // 0x3A8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class USoundBase*                            UnlockSound;                                       // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LockSound;                                         // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ErrorSound;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveVerifiedPlayersOnCodeChange;                 // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OpenLockPadUI;                                     // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterLock_C* GetDefaultObj();

	void RandomCode(bool SameCodeFoundL, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_MasterLock_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_MasterLock_C* CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, int32 CallFunc_SaveLockData_ReturnValue, const struct FS_LevelSaveData& CallFunc_SaveLockData_NewLevelSaveData);
	bool SGK_AddMultipleOwners(TArray<class FText>& Owners, bool CallFunc_SGK_AddMultipleOwners_ReturnValue);
	bool SGK_AddOwner(class FText PlayerName, bool CallFunc_SGK_AddOwner_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	bool SGK_UpdateCode(class FText Code);
	void SGK_CodeCheck(class FText Code, bool* CodeAccepted, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void OnRep_Locked();
	int32 SaveLockData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, struct FS_LevelSaveData* NewLevelSaveData, const struct FVector& LocationL, const struct FS_LevelSaveData& LevelSaveDataL, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FS_LockSave& K2Node_MakeStruct_S_LockSave, int32 CallFunc_Array_Add_ReturnValue);
	void LoadLockData(class UBP_SGKSaveGame_C* SaveGame, int32 Index, struct FVector* OwnerLocation, const struct FS_LevelSaveData& LevelSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LockSave& CallFunc_Array_Get_Item, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData);
	bool SGK_VerifyPlayer(class FText Text, int32 CallFunc_Array_AddUnique_ReturnValue);
	void IsVerifiedPlayer(class FText PlayerName, bool* IsVerified, bool CallFunc_Array_Contains_ReturnValue);
	void CanOpen(class FText Name, bool* AllowOpen, bool CallFunc_IsVerifiedPlayer_IsVerified, bool CallFunc_IsOwner_ReturnValue);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, bool VerifiedL, bool IsOwnerL, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable_1, bool CallFunc_IsOwner_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_1, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_1, class FText K2Node_Select_Default, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_2, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue, class FText K2Node_Select_Default_1, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_3, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array_2);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOwner_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class USoundBase* K2Node_Select_Default, bool CallFunc_IsOwner_ReturnValue_1, bool CallFunc_IsVerifiedPlayer_IsVerified);
	void LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index);
	void LockEffects(bool Locked);
	void SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame);
	void ExecuteUbergraph_BP_MasterLock(int32 EntryPoint, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, const struct FVector& CallFunc_LoadLockData_OwnerLocation, bool K2Node_CustomEvent_Locked, class UBP_PlayerInventory_C* K2Node_Event_PlayerInventory, bool K2Node_Event_FromSaveGame);
};

}


