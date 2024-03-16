#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VendorComponent.BP_VendorComponent_C
// (None)

class UClass* UBP_VendorComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VendorComponent_C");

	return Clss;
}


// BP_VendorComponent_C BP_VendorComponent.Default__BP_VendorComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VendorComponent_C* UBP_VendorComponent_C::GetDefaultObj()
{
	static class UBP_VendorComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VendorComponent_C*>(UBP_VendorComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VendorComponent.BP_VendorComponent_C.SaveVenderData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_PrepareVenderSaveData_ExtraDataIndex                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_PrepareVenderSaveData_NewLevelSaveData                  (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_VendorComponent_C::SaveVenderData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_PrepareVenderSaveData_ExtraDataIndex, const struct FS_LevelSaveData& CallFunc_PrepareVenderSaveData_NewLevelSaveData, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "SaveVenderData");

	Params::UBP_VendorComponent_C_SaveVenderData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_PrepareVenderSaveData_ExtraDataIndex = CallFunc_PrepareVenderSaveData_ExtraDataIndex;
	Parms.CallFunc_PrepareVenderSaveData_NewLevelSaveData = CallFunc_PrepareVenderSaveData_NewLevelSaveData;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendorComponent.BP_VendorComponent_C.LoadComponentData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               LoadComplete                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindVenderSaveData_SaveFound                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorSave               CallFunc_FindVenderSaveData_Array_Element                        (ContainsInstancedReference, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentRestockTime_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_FindVenderSaveData_SaveFound, const struct FS_VendorSave& CallFunc_FindVenderSaveData_Array_Element, double K2Node_VariableSet_CurrentRestockTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "LoadComponentData");

	Params::UBP_VendorComponent_C_LoadComponentData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_FindVenderSaveData_SaveFound = CallFunc_FindVenderSaveData_SaveFound;
	Parms.CallFunc_FindVenderSaveData_Array_Element = CallFunc_FindVenderSaveData_Array_Element;
	Parms.K2Node_VariableSet_CurrentRestockTime_ImplicitCast = K2Node_VariableSet_CurrentRestockTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadComplete != nullptr)
		*LoadComplete = Parms.LoadComplete;

}


// Function BP_VendorComponent.BP_VendorComponent_C.RestockCheckTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorBuy                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::RestockCheckTimer(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double Temp_real_Variable, const struct FS_VendorBuy& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "RestockCheckTimer");

	Params::UBP_VendorComponent_C_RestockCheckTimer_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendorComponent.BP_VendorComponent_C.StockLimitCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorBuy                BuyListing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               RemoveStock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FoundAmount                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValueL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveL                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FoundL                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ArrayIndexL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorBuy                ArrayElementL                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorBuy                CallFunc_Array_Get_Item_3                                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_VendorComponent_C::StockLimitCheck(const struct FS_VendorBuy& BuyListing, bool RemoveStock, int32 Amount, int32* FoundAmount, bool ReturnValueL, bool RemoveL, int32 FoundL, int32 ArrayIndexL, const struct FS_VendorBuy& ArrayElementL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Array_Get_Item, bool Temp_bool_Variable, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FS_VendorBuy& CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "StockLimitCheck");

	Params::UBP_VendorComponent_C_StockLimitCheck_Params Parms{};

	Parms.BuyListing = BuyListing;
	Parms.RemoveStock = RemoveStock;
	Parms.Amount = Amount;
	Parms.ReturnValueL = ReturnValueL;
	Parms.RemoveL = RemoveL;
	Parms.FoundL = FoundL;
	Parms.ArrayIndexL = ArrayIndexL;
	Parms.ArrayElementL = ArrayElementL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundAmount != nullptr)
		*FoundAmount = Parms.FoundAmount;

	return Parms.ReturnValue;

}


// Function BP_VendorComponent.BP_VendorComponent_C.SellVenderItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorSell               SellListing                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RemainingL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_CraftingCost             AddingItemL                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          InvSlotsL                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory_1                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItem_RemainingItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AttemptToAddItem_RemainingInvItem                       (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AttemptToAddItem_NewItemSlot                            (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem_1                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItem_RemainingItem_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AttemptToAddItem_RemainingInvItem_1                     (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AttemptToAddItem_NewItemSlot_1                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchPlayerInventoryForItem_ItemsFound                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchPlayerInventoryForItem_InvSlots                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SearchPlayerInventoryForItem_AllInvSlots                (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::SellVenderItem(const struct FS_VendorSell& SellListing, class UBP_PlayerInventory_C* PlayerInventory, int32 Amount, double RemainingL, bool LastIndexL, const struct FS_ItemDetails& ItemDetailsL, const struct FS_CraftingCost& AddingItemL, const TArray<struct FS_InvSlot>& InvSlotsL, bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 K2Node_Select_Default, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, bool CallFunc_AttemptToAddItem_RemainingItem, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, bool CallFunc_AttemptToAddItem_RemainingItem_1, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem_1, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot_1, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_SearchPlayerInventoryForItem_ItemsFound, const struct FS_InvSlot& CallFunc_SearchPlayerInventoryForItem_InvSlots, TArray<struct FS_InvSlot>& CallFunc_SearchPlayerInventoryForItem_AllInvSlots, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "SellVenderItem");

	Params::UBP_VendorComponent_C_SellVenderItem_Params Parms{};

	Parms.SellListing = SellListing;
	Parms.PlayerInventory = PlayerInventory;
	Parms.Amount = Amount;
	Parms.RemainingL = RemainingL;
	Parms.LastIndexL = LastIndexL;
	Parms.ItemDetailsL = ItemDetailsL;
	Parms.AddingItemL = AddingItemL;
	Parms.InvSlotsL = InvSlotsL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory_1 = CallFunc_SGK_GetGlobalInventory_GlobalInventory_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_AttemptToAddItem_RemainingItem = CallFunc_AttemptToAddItem_RemainingItem;
	Parms.CallFunc_AttemptToAddItem_RemainingInvItem = CallFunc_AttemptToAddItem_RemainingInvItem;
	Parms.CallFunc_AttemptToAddItem_NewItemSlot = CallFunc_AttemptToAddItem_NewItemSlot;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_CreateNewItem_NewItem_1 = CallFunc_CreateNewItem_NewItem_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_AttemptToAddItem_RemainingItem_1 = CallFunc_AttemptToAddItem_RemainingItem_1;
	Parms.CallFunc_AttemptToAddItem_RemainingInvItem_1 = CallFunc_AttemptToAddItem_RemainingInvItem_1;
	Parms.CallFunc_AttemptToAddItem_NewItemSlot_1 = CallFunc_AttemptToAddItem_NewItemSlot_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_SearchPlayerInventoryForItem_ItemsFound = CallFunc_SearchPlayerInventoryForItem_ItemsFound;
	Parms.CallFunc_SearchPlayerInventoryForItem_InvSlots = CallFunc_SearchPlayerInventoryForItem_InvSlots;
	Parms.CallFunc_SearchPlayerInventoryForItem_AllInvSlots = CallFunc_SearchPlayerInventoryForItem_AllInvSlots;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_FMod_Divisor_ImplicitCast = CallFunc_FMod_Divisor_ImplicitCast;
	Parms.CallFunc_FMod_Dividend_ImplicitCast = CallFunc_FMod_Dividend_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendorComponent.BP_VendorComponent_C.BuyVenderItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorBuy                BuyListing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorBuy                NewLocalVar_0                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              ItemAmountL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RemainderL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory_1                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory_2                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItem_RemainingItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AttemptToAddItem_RemainingInvItem                       (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AttemptToAddItem_NewItemSlot                            (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem_1                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItem_RemainingItem_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AttemptToAddItem_RemainingInvItem_1                     (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AttemptToAddItem_NewItemSlot_1                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_1                        (HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StockLimitCheck_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_StockLimitCheck_FoundAmount                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem_2                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_BuyCostCheck_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItem_RemainingItem_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AttemptToAddItem_RemainingInvItem_2                     (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AttemptToAddItem_NewItemSlot_2                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_StockLimitCheck_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_StockLimitCheck_FoundAmount_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::BuyVenderItem(const struct FS_VendorBuy& BuyListing, class UBP_PlayerInventory_C* PlayerInventory, int32 Amount, const struct FS_VendorBuy& NewLocalVar_0, int32 ItemAmountL, double RemainderL, bool LastIndexL, const struct FS_ItemDetails& ItemDetailsL, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory_2, int32 CallFunc_FFloor_ReturnValue, int32 K2Node_Select_Default, int32 Temp_int_Variable_1, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_AttemptToAddItem_RemainingItem, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem_1, int32 CallFunc_Multiply_IntInt_ReturnValue_2, bool CallFunc_AttemptToAddItem_RemainingItem_1, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem_1, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, int32 CallFunc_Multiply_IntInt_ReturnValue_3, bool CallFunc_StockLimitCheck_ReturnValue, int32 CallFunc_StockLimitCheck_FoundAmount, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem_2, bool CallFunc_BuyCostCheck_ReturnValue, bool CallFunc_AttemptToAddItem_RemainingItem_2, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem_2, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot_2, bool CallFunc_StockLimitCheck_ReturnValue_1, int32 CallFunc_StockLimitCheck_FoundAmount_1, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "BuyVenderItem");

	Params::UBP_VendorComponent_C_BuyVenderItem_Params Parms{};

	Parms.BuyListing = BuyListing;
	Parms.PlayerInventory = PlayerInventory;
	Parms.Amount = Amount;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.ItemAmountL = ItemAmountL;
	Parms.RemainderL = RemainderL;
	Parms.LastIndexL = LastIndexL;
	Parms.ItemDetailsL = ItemDetailsL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory_1 = CallFunc_SGK_GetGlobalInventory_GlobalInventory_1;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory_2 = CallFunc_SGK_GetGlobalInventory_GlobalInventory_2;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_AttemptToAddItem_RemainingItem = CallFunc_AttemptToAddItem_RemainingItem;
	Parms.CallFunc_AttemptToAddItem_RemainingInvItem = CallFunc_AttemptToAddItem_RemainingInvItem;
	Parms.CallFunc_AttemptToAddItem_NewItemSlot = CallFunc_AttemptToAddItem_NewItemSlot;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_CreateNewItem_NewItem_1 = CallFunc_CreateNewItem_NewItem_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_2 = CallFunc_Multiply_IntInt_ReturnValue_2;
	Parms.CallFunc_AttemptToAddItem_RemainingItem_1 = CallFunc_AttemptToAddItem_RemainingItem_1;
	Parms.CallFunc_AttemptToAddItem_RemainingInvItem_1 = CallFunc_AttemptToAddItem_RemainingInvItem_1;
	Parms.CallFunc_AttemptToAddItem_NewItemSlot_1 = CallFunc_AttemptToAddItem_NewItemSlot_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.K2Node_MakeStruct_S_NotificationDetails_1 = K2Node_MakeStruct_S_NotificationDetails_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_3 = CallFunc_Multiply_IntInt_ReturnValue_3;
	Parms.CallFunc_StockLimitCheck_ReturnValue = CallFunc_StockLimitCheck_ReturnValue;
	Parms.CallFunc_StockLimitCheck_FoundAmount = CallFunc_StockLimitCheck_FoundAmount;
	Parms.CallFunc_CreateNewItem_NewItem_2 = CallFunc_CreateNewItem_NewItem_2;
	Parms.CallFunc_BuyCostCheck_ReturnValue = CallFunc_BuyCostCheck_ReturnValue;
	Parms.CallFunc_AttemptToAddItem_RemainingItem_2 = CallFunc_AttemptToAddItem_RemainingItem_2;
	Parms.CallFunc_AttemptToAddItem_RemainingInvItem_2 = CallFunc_AttemptToAddItem_RemainingInvItem_2;
	Parms.CallFunc_AttemptToAddItem_NewItemSlot_2 = CallFunc_AttemptToAddItem_NewItemSlot_2;
	Parms.CallFunc_StockLimitCheck_ReturnValue_1 = CallFunc_StockLimitCheck_ReturnValue_1;
	Parms.CallFunc_StockLimitCheck_FoundAmount_1 = CallFunc_StockLimitCheck_FoundAmount_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_FMod_Divisor_ImplicitCast = CallFunc_FMod_Divisor_ImplicitCast;
	Parms.CallFunc_FMod_Dividend_ImplicitCast = CallFunc_FMod_Dividend_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendorComponent.BP_VendorComponent_C.BuyCostCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorBuy                BuyListing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveItems                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          InvSlotsL                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchPlayerInventoryForItem_ItemsFound                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchPlayerInventoryForItem_InvSlots                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SearchPlayerInventoryForItem_AllInvSlots                (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchPlayerInventoryForItem_ItemsFound_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchPlayerInventoryForItem_InvSlots_1                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SearchPlayerInventoryForItem_AllInvSlots_1              (ReferenceParm, ContainsInstancedReference)

bool UBP_VendorComponent_C::BuyCostCheck(const struct FS_VendorBuy& BuyListing, class UBP_PlayerInventory_C* PlayerInventory, bool RemoveItems, int32 Amount, const TArray<struct FS_InvSlot>& InvSlotsL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SearchPlayerInventoryForItem_ItemsFound, const struct FS_InvSlot& CallFunc_SearchPlayerInventoryForItem_InvSlots, TArray<struct FS_InvSlot>& CallFunc_SearchPlayerInventoryForItem_AllInvSlots, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_CraftingCost& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_SearchPlayerInventoryForItem_ItemsFound_1, const struct FS_InvSlot& CallFunc_SearchPlayerInventoryForItem_InvSlots_1, TArray<struct FS_InvSlot>& CallFunc_SearchPlayerInventoryForItem_AllInvSlots_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "BuyCostCheck");

	Params::UBP_VendorComponent_C_BuyCostCheck_Params Parms{};

	Parms.BuyListing = BuyListing;
	Parms.PlayerInventory = PlayerInventory;
	Parms.RemoveItems = RemoveItems;
	Parms.Amount = Amount;
	Parms.InvSlotsL = InvSlotsL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SearchPlayerInventoryForItem_ItemsFound = CallFunc_SearchPlayerInventoryForItem_ItemsFound;
	Parms.CallFunc_SearchPlayerInventoryForItem_InvSlots = CallFunc_SearchPlayerInventoryForItem_InvSlots;
	Parms.CallFunc_SearchPlayerInventoryForItem_AllInvSlots = CallFunc_SearchPlayerInventoryForItem_AllInvSlots;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_SearchPlayerInventoryForItem_ItemsFound_1 = CallFunc_SearchPlayerInventoryForItem_ItemsFound_1;
	Parms.CallFunc_SearchPlayerInventoryForItem_InvSlots_1 = CallFunc_SearchPlayerInventoryForItem_InvSlots_1;
	Parms.CallFunc_SearchPlayerInventoryForItem_AllInvSlots_1 = CallFunc_SearchPlayerInventoryForItem_AllInvSlots_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VendorComponent.BP_VendorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VendorComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VendorComponent.BP_VendorComponent_C.ServerBuyVenderItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorBuy                VenderBuyListing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::ServerBuyVenderItem(const struct FS_VendorBuy& VenderBuyListing, class UBP_PlayerInventory_C* PlayerInventory, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "ServerBuyVenderItem");

	Params::UBP_VendorComponent_C_ServerBuyVenderItem_Params Parms{};

	Parms.VenderBuyListing = VenderBuyListing;
	Parms.PlayerInventory = PlayerInventory;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendorComponent.BP_VendorComponent_C.ServerSellVenderItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorSell               VenderSellListing                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::ServerSellVenderItem(const struct FS_VendorSell& VenderSellListing, class UBP_PlayerInventory_C* PlayerInventory, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "ServerSellVenderItem");

	Params::UBP_VendorComponent_C_ServerSellVenderItem_Params Parms{};

	Parms.VenderSellListing = VenderSellListing;
	Parms.PlayerInventory = PlayerInventory;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendorComponent.BP_VendorComponent_C.SaveComponentData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "SaveComponentData");

	Params::UBP_VendorComponent_C_SaveComponentData_Params Parms{};

	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendorComponent.BP_VendorComponent_C.ExecuteUbergraph_BP_VendorComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorBuy                K2Node_CustomEvent_VenderBuyListing                              (HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_CustomEvent_PlayerInventory_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorBuy                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FS_VendorSell               K2Node_CustomEvent_VenderSellListing                             (HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_CustomEvent_PlayerInventory                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorComponent_C::ExecuteUbergraph_BP_VendorComponent(int32 EntryPoint, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_VendorBuy& K2Node_CustomEvent_VenderBuyListing, class UBP_PlayerInventory_C* K2Node_CustomEvent_PlayerInventory_1, int32 K2Node_CustomEvent_Amount_1, int32 Temp_int_Array_Index_Variable, const struct FS_VendorBuy& CallFunc_Array_Get_Item, const struct FS_VendorSell& K2Node_CustomEvent_VenderSellListing, class UBP_PlayerInventory_C* K2Node_CustomEvent_PlayerInventory, int32 K2Node_CustomEvent_Amount, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorComponent_C", "ExecuteUbergraph_BP_VendorComponent");

	Params::UBP_VendorComponent_C_ExecuteUbergraph_BP_VendorComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_VenderBuyListing = K2Node_CustomEvent_VenderBuyListing;
	Parms.K2Node_CustomEvent_PlayerInventory_1 = K2Node_CustomEvent_PlayerInventory_1;
	Parms.K2Node_CustomEvent_Amount_1 = K2Node_CustomEvent_Amount_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_VenderSellListing = K2Node_CustomEvent_VenderSellListing;
	Parms.K2Node_CustomEvent_PlayerInventory = K2Node_CustomEvent_PlayerInventory;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


