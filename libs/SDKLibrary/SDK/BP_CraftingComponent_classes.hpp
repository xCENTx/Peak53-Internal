#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x2F8 - 0x28C)
// BlueprintGeneratedClass BP_CraftingComponent.BP_CraftingComponent_C
class UBP_CraftingComponent_C : public UBP_MasterInventory_C
{
public:
	uint8                                        Pad_3BBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        NumberOfFuelSlots;                                 // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoSwitchOn;                                      // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequireFuel;                                       // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BC0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           FuelItems;                                         // 0x2A0(0x10)(Edit, BlueprintVisible)
	struct FTimerHandle                          FuelTimer;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ConvertTimer;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        DummySlots;                                        // 0x2C0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SwitchedOn;                                        // 0x2C4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            ReturnFuelItem;                                    // 0x2C8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CraftingComponent_C* GetDefaultObj();

	void Add_Burnt_Fuel_Item(const struct FS_InvItem& RemainingInvItemL, const struct FS_InvItem& NewItemL, const struct FS_CraftingCost& BurnReturnItemL, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_DropItem_ReturnValue, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound_2, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_2);
	void IsFuelItem(class FName ItemId, bool* IsFuelItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	bool UpdateFuelBurn(bool ReturnValueL, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_GetFuelSlots_ReturnValue, TArray<struct FS_InvSlot>& CallFunc_GetFuelSlots_FuelSlots, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_SGK_InvSlotAmount_ItemValid, int32 CallFunc_SGK_InvSlotAmount_Amount, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BurnFuel(bool ReturnValueL, const struct FS_InvSlot& ArrayElementL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_SGK_InvSlotAmount_ItemValid, int32 CallFunc_SGK_InvSlotAmount_Amount, bool CallFunc_SGK_InvSlotAmount_ItemValid_1, int32 CallFunc_SGK_InvSlotAmount_Amount_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetFuelSlots_ReturnValue, TArray<struct FS_InvSlot>& CallFunc_GetFuelSlots_FuelSlots, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_ServerBurnFuel_Time_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	bool GetFuelSlots(TArray<struct FS_InvSlot>* FuelSlots, const TArray<struct FS_InvSlot>& FuelSlotsL, int32 ArrayIndexL, int32 LastIndexL, int32 StartIndexL, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue);
	void IsIndexFuelSlot(int32 Index, bool* IsFuelSlot, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SaveCraftingData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_PrepareCraftingSaveData_ExtraDataIndex, const struct FS_LevelSaveData& CallFunc_PrepareCraftingSaveData_NewLevelSaveData, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData);
	void LoadCraftingData(const struct FS_StorageSave& StorageSave, const TArray<struct FS_InvSlot>& FoundSlotsL, const struct FS_InvItem& InvItemL, const struct FS_InvSaveSlot& InvSaveSlotL, const struct FS_StorageSave& CookingSaveDataL, int32 Temp_int_Array_Index_Variable, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, bool CallFunc_IsValid_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, int32 CallFunc_SGK_ItemSize_Height, int32 CallFunc_SGK_ItemSize_Width, TArray<struct FS_InvSlot>& CallFunc_SGK_SlotFinder_FoundSlots, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item_2, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, const struct FS_InvItem& K2Node_SetFieldsInStruct_StructOut, TArray<struct FS_InvSlot>& CallFunc_UpdateInvSlots_UpdatedSlots, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FS_InvSaveSlot& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double K2Node_VariableSet_CurrentWeight_ImplicitCast, double K2Node_VariableSet_CurrentWeight_ImplicitCast_1);
	void LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_FindCraftingSaveData_SaveFound, const struct FS_CraftingSave& CallFunc_FindCraftingSaveData_Array_Element);
	void ConstructContainsSlots(int32 ExtraSlotsL, int32 IndexL, int32 Bop, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FS_InvSlot& K2Node_MakeStruct_S_InvSlot, int32 Temp_int_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FS_InvSlot& K2Node_MakeStruct_S_InvSlot_1, int32 CallFunc_Add_IntInt_ReturnValue_6, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue_2, const struct FS_InvSlot& K2Node_MakeStruct_S_InvSlot_2, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast);
	bool GetContentsSlots(TArray<struct FS_InvSlot>* ContentsSlots, const TArray<struct FS_InvSlot>& ContentsSlotsL, int32 ArrayIndexL, const struct FS_InvSlot& ArrayElementL, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ConstructSlots();
	void SaveComponentData(class UBP_SGKSaveGame_C* SaveGame);
	void LoadInventoryData(struct FS_StorageSave& S_StorageSave);
	void SGK_ItemMovedInInventory();
	void ServerBurnFuel(double Time);
	void ServerTurnOn();
	void ServerPauseBurnFuel();
	void ServerStartFuelBurn();
	void ServerStopBurningFuel();
	void SGK_ToggleComponent();
	void ServerPauseCraftingListing();
	void ServerResumeCraftingListing();
	void ExecuteUbergraph_BP_CraftingComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, const struct FS_StorageSave& K2Node_Event_S_StorageSave, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, double K2Node_CustomEvent_Time, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_UpdateFuelBurn_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}

