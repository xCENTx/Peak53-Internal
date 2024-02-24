#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKController.BP_SGKController_C
// (Actor, PlayerController)

class UClass* ABP_SGKController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKController_C");

	return Clss;
}


// BP_SGKController_C BP_SGKController.Default__BP_SGKController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SGKController_C* ABP_SGKController_C::GetDefaultObj()
{
	static class ABP_SGKController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SGKController_C*>(ABP_SGKController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKController.BP_SGKController_C.SGK AllowStartingItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowStartingItems                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK AllowStartingItems");

	Params::ABP_SGKController_C_SGK_AllowStartingItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = Parms.AllowStartingItems;

}


// Function BP_SGKController.BP_SGKController_C.SGK SelfItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  SelfItem                                                         (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK SelfItem");

	Params::ABP_SGKController_C_SGK_SelfItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelfItem != nullptr)
		*SelfItem = std::move(Parms.SelfItem);

}


// Function BP_SGKController.BP_SGKController_C.OnRep_bCanSpectate?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OnRep_bCanSpectate_(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OnRep_bCanSpectate?");

	Params::ABP_SGKController_C_OnRep_bCanSpectate__Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.GetPlayerName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (Parm, OutParm)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_SGKController_C::GetPlayerName(class FText* PlayerName, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "GetPlayerName");

	Params::ABP_SGKController_C_GetPlayerName_Params Parms{};

	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerName != nullptr)
		*PlayerName = Parms.PlayerName;

}


// Function BP_SGKController.BP_SGKController_C.CheckFFA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               FFA_                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::CheckFFA(bool* FFA_, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CheckFFA");

	Params::ABP_SGKController_C_CheckFFA_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FFA_ != nullptr)
		*FFA_ = Parms.FFA_;

}


// Function BP_SGKController.BP_SGKController_C.PlayersAlive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PlayersLeftAlive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_SGKController_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_SGKController_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::PlayersAlive(int32* PlayersLeftAlive, int32 Value, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class ABP_SGKController_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_SGKController_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "PlayersAlive");

	Params::ABP_SGKController_C_PlayersAlive_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayersLeftAlive != nullptr)
		*PlayersLeftAlive = Parms.PlayersLeftAlive;

}


// Function BP_SGKController.BP_SGKController_C.OnRep_bHasBomb?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OnRep_bHasBomb_(class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OnRep_bHasBomb?");

	Params::ABP_SGKController_C_OnRep_bHasBomb__Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_1 = K2Node_DynamicCast_AsBP_SGKMaster_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ToggleInGameMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InGameMenu_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ToggleInGameMenu(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UBP_InGameMenu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ToggleInGameMenu");

	Params::ABP_SGKController_C_ToggleInGameMenu_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ReloadControllerCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           Save                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               LocationFoundL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  SpawnL                                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       NewCharacterL                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               PlayerSaveL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class APawn*                       OldPawnL                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerStart*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerSave_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               CallFunc_FindPlayerSave_PlayerSave                               (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ReloadControllerCharacter(class UBP_SGKSaveGame_C* Save, bool LocationFoundL, const struct FTransform& SpawnL, class APawn* NewCharacterL, const struct FS_PlayerSave& PlayerSaveL, class APawn* OldPawnL, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class APlayerStart* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_FindPlayerSave_ReturnValue, const struct FS_PlayerSave& CallFunc_FindPlayerSave_PlayerSave, bool CallFunc_Greater_IntInt_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_FinishSpawningActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ReloadControllerCharacter");

	Params::ABP_SGKController_C_ReloadControllerCharacter_Params Parms{};

	Parms.Save = Save;
	Parms.LocationFoundL = LocationFoundL;
	Parms.SpawnL = SpawnL;
	Parms.NewCharacterL = NewCharacterL;
	Parms.PlayerSaveL = PlayerSaveL;
	Parms.OldPawnL = OldPawnL;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FindPlayerSave_ReturnValue = CallFunc_FindPlayerSave_ReturnValue;
	Parms.CallFunc_FindPlayerSave_PlayerSave = CallFunc_FindPlayerSave_PlayerSave;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.AddEquipmentComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ContainerDetails         InvDetailsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_CharacterComponent_C*    CharacterCompL                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WeaponSlots           WeaponSlotL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_EquipmentType         EquipmentSlotL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_EquipmentInventory_C*    NewEquipmentInvL                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_CraftingCost>     K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID_1                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue_1                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentSlotID          K2Node_MakeStruct_S_EquipmentSlotID                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EquipmentSlot            CallFunc_SelectEquipmentSlot_ReturnValue                         (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_CheckEquipmentSlot_SlotFull                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentSlotID          K2Node_MakeStruct_S_EquipmentSlotID_1                            (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EquipItem_ItemEquipped                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_EquipmentInventory_C*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::AddEquipmentComponent(const struct FS_ContainerDetails& InvDetailsL, class UBP_CharacterComponent_C* CharacterCompL, enum class E_WeaponSlots WeaponSlotL, enum class E_EquipmentType EquipmentSlotL, class UBP_EquipmentInventory_C* NewEquipmentInvL, const struct FTransform& Temp_struct_Variable, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, TArray<struct FS_CraftingCost>& K2Node_MakeArray_Array, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const struct FS_InvItem& K2Node_SetFieldsInStruct_StructOut, uint8 CallFunc_GetValidValue_ReturnValue_1, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_1, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FS_EquipmentSlotID& K2Node_MakeStruct_S_EquipmentSlotID, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, bool CallFunc_CheckEquipmentSlot_SlotFull, const struct FS_EquipmentSlotID& K2Node_MakeStruct_S_EquipmentSlotID_1, bool CallFunc_EquipItem_ItemEquipped, class UBP_EquipmentInventory_C* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "AddEquipmentComponent");

	Params::ABP_SGKController_C_AddEquipmentComponent_Params Parms{};

	Parms.InvDetailsL = InvDetailsL;
	Parms.CharacterCompL = CharacterCompL;
	Parms.WeaponSlotL = WeaponSlotL;
	Parms.EquipmentSlotL = EquipmentSlotL;
	Parms.NewEquipmentInvL = NewEquipmentInvL;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_WeaponSlotID = K2Node_MakeStruct_S_WeaponSlotID;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue = CallFunc_SelectedWeaponSlot_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_WeaponSlotID_1 = K2Node_MakeStruct_S_WeaponSlotID_1;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue_1 = CallFunc_SelectedWeaponSlot_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_EquipmentSlotID = K2Node_MakeStruct_S_EquipmentSlotID;
	Parms.CallFunc_SelectEquipmentSlot_ReturnValue = CallFunc_SelectEquipmentSlot_ReturnValue;
	Parms.CallFunc_CheckEquipmentSlot_SlotFull = CallFunc_CheckEquipmentSlot_SlotFull;
	Parms.K2Node_MakeStruct_S_EquipmentSlotID_1 = K2Node_MakeStruct_S_EquipmentSlotID_1;
	Parms.CallFunc_EquipItem_ItemEquipped = CallFunc_EquipItem_ItemEquipped;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_NumPadFive_K2Node_InputKeyEvent_9");

	Params::ABP_SGKController_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_GlobalChat_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_GlobalChat_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_GlobalChat_K2Node_InputActionEvent_1");

	Params::ABP_SGKController_C_InpActEvt_GlobalChat_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_TeamChat_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_TeamChat_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_TeamChat_K2Node_InputActionEvent_0");

	Params::ABP_SGKController_C_InpActEvt_TeamChat_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_4");

	Params::ABP_SGKController_C_InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_4_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_3");

	Params::ABP_SGKController_C_InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_3_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_2");

	Params::ABP_SGKController_C_InpActEvt_Scoreboard_K2Node_EnhancedInputActionEvent_2_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_V_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_V_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_V_K2Node_InputKeyEvent_8");

	Params::ABP_SGKController_C_InpActEvt_V_K2Node_InputKeyEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_N_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_N_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_N_K2Node_InputKeyEvent_7");

	Params::ABP_SGKController_C_InpActEvt_N_K2Node_InputKeyEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_Y_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_Y_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_Y_K2Node_InputKeyEvent_6");

	Params::ABP_SGKController_C_InpActEvt_Y_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_F3_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_F3_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_F3_K2Node_InputKeyEvent_5");

	Params::ABP_SGKController_C_InpActEvt_F3_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_H_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_H_K2Node_InputKeyEvent_4");

	Params::ABP_SGKController_C_InpActEvt_H_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_F2_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_F2_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_F2_K2Node_InputKeyEvent_3");

	Params::ABP_SGKController_C_InpActEvt_F2_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_F1_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_F1_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_F1_K2Node_InputKeyEvent_2");

	Params::ABP_SGKController_C_InpActEvt_F1_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_1");

	Params::ABP_SGKController_C_InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_1_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_0");

	Params::ABP_SGKController_C_InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_0_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_Escape_K2Node_InputKeyEvent_1");

	Params::ABP_SGKController_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.InpActEvt_M_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SGKController_C::InpActEvt_M_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "InpActEvt_M_K2Node_InputKeyEvent_0");

	Params::ABP_SGKController_C_InpActEvt_M_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SGK LoadWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK LoadWeaponAttachments");

	Params::ABP_SGKController_C_SGK_LoadWeaponAttachments_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SGK ShowAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SGK_ShowAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK ShowAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SGK RemoveAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AttachmentType        Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_RemoveAttachment(enum class E_AttachmentType Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK RemoveAttachment");

	Params::ABP_SGKController_C_SGK_RemoveAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SGK ItemMovedInInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SGK_ItemMovedInInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK ItemMovedInInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SGK UpdateSpecialSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK UpdateSpecialSlot");

	Params::ABP_SGKController_C_SGK_UpdateSpecialSlot_Params Parms{};

	Parms.InvSlot = InvSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SGK ToggleComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SGK_ToggleComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK ToggleComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SGK RemoveAdditionalChecks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK RemoveAdditionalChecks");

	Params::ABP_SGKController_C_SGK_RemoveAdditionalChecks_Params Parms{};

	Parms.InvSlot = InvSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SGK ItemSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Sounds                SoundType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_ItemSound(class FName ItemId, enum class E_Sounds SoundType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK ItemSound");

	Params::ABP_SGKController_C_SGK_ItemSound_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.SoundType = SoundType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SGK UpdateAllAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SGK_UpdateAllAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK UpdateAllAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SGK DestroyWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SGK_DestroyWeaponAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK DestroyWeaponAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ToggleDebugWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ToggleDebugWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ToggleDebugWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ui_toggle_game_end_screen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyGameManager                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerScore                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerKills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerDeath                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MVPScore                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MVPKills                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MVPDeaths                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MVPName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              SealsScoreGlobal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SealsKillsGlobal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SealsDeathsGlobal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InsurgentsScoreGlobal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InsurgentsKillsGlobal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InsurgentsDeathsGlobal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            WinnerTeam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UnlockedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::Ui_toggle_game_end_screen(class AActor* MyGameManager, int32 PlayerScore, int32 PlayerKills, int32 PlayerDeath, int32 MVPScore, int32 MVPKills, int32 MVPDeaths, const class FString& MVPName, int32 SealsScoreGlobal, int32 SealsKillsGlobal, int32 SealsDeathsGlobal, int32 InsurgentsScoreGlobal, int32 InsurgentsKillsGlobal, int32 InsurgentsDeathsGlobal, enum class EPeak53Teams WinnerTeam, int32 UnlockedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ui_toggle_game_end_screen");

	Params::ABP_SGKController_C_Ui_toggle_game_end_screen_Params Parms{};

	Parms.MyGameManager = MyGameManager;
	Parms.PlayerScore = PlayerScore;
	Parms.PlayerKills = PlayerKills;
	Parms.PlayerDeath = PlayerDeath;
	Parms.MVPScore = MVPScore;
	Parms.MVPKills = MVPKills;
	Parms.MVPDeaths = MVPDeaths;
	Parms.MVPName = MVPName;
	Parms.SealsScoreGlobal = SealsScoreGlobal;
	Parms.SealsKillsGlobal = SealsKillsGlobal;
	Parms.SealsDeathsGlobal = SealsDeathsGlobal;
	Parms.InsurgentsScoreGlobal = InsurgentsScoreGlobal;
	Parms.InsurgentsKillsGlobal = InsurgentsKillsGlobal;
	Parms.InsurgentsDeathsGlobal = InsurgentsDeathsGlobal;
	Parms.WinnerTeam = WinnerTeam;
	Parms.UnlockedItem = UnlockedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNCallDisconnect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::OWNCallDisconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNCallDisconnect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerNameServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerNameServer(class FText PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerNameServer");

	Params::ABP_SGKController_C_SetPlayerNameServer_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerNameMulticast
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerNameMulticast(class FText PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerNameMulticast");

	Params::ABP_SGKController_C_SetPlayerNameMulticast_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerScoreServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerScoreServer(class FText Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerScoreServer");

	Params::ABP_SGKController_C_SetPlayerScoreServer_Params Parms{};

	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerScoreMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerScoreMulticast(class FText Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerScoreMulticast");

	Params::ABP_SGKController_C_SetPlayerScoreMulticast_Params Parms{};

	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ControllerRefreshScoreboard
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ControllerRefreshScoreboard(enum class EPeak53Teams Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ControllerRefreshScoreboard");

	Params::ABP_SGKController_C_ControllerRefreshScoreboard_Params Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ChangeTeamServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            PlayerTeam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ChangeTeamServer(enum class EPeak53Teams PlayerTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ChangeTeamServer");

	Params::ABP_SGKController_C_ChangeTeamServer_Params Parms{};

	Parms.PlayerTeam = PlayerTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ChangeTeamMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            PlayerTeam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ChangeTeamMulticast(enum class EPeak53Teams PlayerTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ChangeTeamMulticast");

	Params::ABP_SGKController_C_ChangeTeamMulticast_Params Parms{};

	Parms.PlayerTeam = PlayerTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ControllerSendMessage
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MessageFeedVar                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETextJustify            Justification                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 In_Color_and_Opacity                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              In_Font_Info_Size                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ControllerSendMessage(class FText MessageFeedVar, enum class ETextJustify Justification, const struct FSlateColor& In_Color_and_Opacity, int32 In_Font_Info_Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ControllerSendMessage");

	Params::ABP_SGKController_C_ControllerSendMessage_Params Parms{};

	Parms.MessageFeedVar = MessageFeedVar;
	Parms.Justification = Justification;
	Parms.In_Color_and_Opacity = In_Color_and_Opacity;
	Parms.In_Font_Info_Size = In_Font_Info_Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerKillsServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerKills                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerKillsServer(class FText PlayerKills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerKillsServer");

	Params::ABP_SGKController_C_SetPlayerKillsServer_Params Parms{};

	Parms.PlayerKills = PlayerKills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerKillsMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerKills                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerKillsMulticast(class FText PlayerKills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerKillsMulticast");

	Params::ABP_SGKController_C_SetPlayerKillsMulticast_Params Parms{};

	Parms.PlayerKills = PlayerKills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerDeathsServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerDeaths                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerDeathsServer(class FText PlayerDeaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerDeathsServer");

	Params::ABP_SGKController_C_SetPlayerDeathsServer_Params Parms{};

	Parms.PlayerDeaths = PlayerDeaths;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SetPlayerDeathsMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerDeaths                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SetPlayerDeathsMulticast(class FText PlayerDeaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetPlayerDeathsMulticast");

	Params::ABP_SGKController_C_SetPlayerDeathsMulticast_Params Parms{};

	Parms.PlayerDeaths = PlayerDeaths;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SendMessageFeedServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MessageToBeSendFeedController                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SendMessageFeedServer(class FText MessageToBeSendFeedController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SendMessageFeedServer");

	Params::ABP_SGKController_C_SendMessageFeedServer_Params Parms{};

	Parms.MessageToBeSendFeedController = MessageToBeSendFeedController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.SendMessageFeedMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MessageToBeSendFeedController                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SGKController_C::SendMessageFeedMulticast(class FText MessageToBeSendFeedController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SendMessageFeedMulticast");

	Params::ABP_SGKController_C_SendMessageFeedMulticast_Params Parms{};

	Parms.MessageToBeSendFeedController = MessageToBeSendFeedController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.UnequipWeapon
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WeaponSlot               S_WeaponSlot                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_SGKController_C::UnequipWeapon(struct FS_WeaponSlot& S_WeaponSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "UnequipWeapon");

	Params::ABP_SGKController_C_UnequipWeapon_Params Parms{};

	Parms.S_WeaponSlot = S_WeaponSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.AddGrenadesToQuickSlots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::AddGrenadesToQuickSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "AddGrenadesToQuickSlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ResetHighlights
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ResetHighlights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ResetHighlights");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.JumpFromCamerasForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::JumpFromCamerasForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "JumpFromCamerasForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.JumpFromCamerasBackwards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::JumpFromCamerasBackwards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "JumpFromCamerasBackwards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SetLoadoutServer
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_StartingWeaponItem>WeaponsPrimary                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_StartingWeaponItem>WeaponsSecondary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_CraftingCost>     WeaponsTool1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_CraftingCost>     WeaponsTool2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_SGKController_C::SetLoadoutServer(class UClass* Loadout, TArray<struct FS_StartingWeaponItem>& WeaponsPrimary, TArray<struct FS_StartingWeaponItem>& WeaponsSecondary, TArray<struct FS_CraftingCost>& WeaponsTool1, TArray<struct FS_CraftingCost>& WeaponsTool2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetLoadoutServer");

	Params::ABP_SGKController_C_SetLoadoutServer_Params Parms{};

	Parms.Loadout = Loadout;
	Parms.WeaponsPrimary = WeaponsPrimary;
	Parms.WeaponsSecondary = WeaponsSecondary;
	Parms.WeaponsTool1 = WeaponsTool1;
	Parms.WeaponsTool2 = WeaponsTool2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.BombsiteInteractionWidgetEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::BombsiteInteractionWidgetEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "BombsiteInteractionWidgetEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.BombsiteRemoveWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::BombsiteRemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "BombsiteRemoveWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.DefuseBomb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::DefuseBomb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "DefuseBomb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SpawnPlantedBombActor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::SpawnPlantedBombActor(const struct FTransform& SpawnTransform, enum class EPeak53Teams Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SpawnPlantedBombActor");

	Params::ABP_SGKController_C_SpawnPlantedBombActor_Params Parms{};

	Parms.SpawnTransform = SpawnTransform;
	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.AddDefuseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::AddDefuseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "AddDefuseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.RemoveDefuseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::RemoveDefuseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "RemoveDefuseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.FinishDefusingBombServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::FinishDefusingBombServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "FinishDefusingBombServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.FinishDefusingBombMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::FinishDefusingBombMulticast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "FinishDefusingBombMulticast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SetBombServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasBomb_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::SetBombServer(bool bHasBomb_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SetBombServer");

	Params::ABP_SGKController_C_SetBombServer_Params Parms{};

	Parms.bHasBomb_ = bHasBomb_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNCallSetLodoutServer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::OWNCallSetLodoutServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNCallSetLodoutServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.DefuseFollowUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::DefuseFollowUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "DefuseFollowUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.PlayersAliveServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::PlayersAliveServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "PlayersAliveServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.PlayersAliveClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InInt                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::PlayersAliveClient(int32 InInt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "PlayersAliveClient");

	Params::ABP_SGKController_C_PlayersAliveClient_Params Parms{};

	Parms.InInt = InInt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ClientPlaySound2d
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ClientPlaySound2d(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ClientPlaySound2d");

	Params::ABP_SGKController_C_ClientPlaySound2d_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.CrosshairHop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CounterBounce                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::CrosshairHop(double CounterBounce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CrosshairHop");

	Params::ABP_SGKController_C_CrosshairHop_Params Parms{};

	Parms.CounterBounce = CounterBounce;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.CrosshairReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::CrosshairReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CrosshairReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SpawnVaultWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SpawnVaultWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SpawnVaultWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.RemoveVaultWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::RemoveVaultWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "RemoveVaultWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SpawnBreachWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SpawnBreachWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SpawnBreachWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.RemoveBreachWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::RemoveBreachWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "RemoveBreachWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.OWNAddPlayerControllerQueue
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::OWNAddPlayerControllerQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNAddPlayerControllerQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ClientSpectatePlayer
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewViewTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ClientSpectatePlayer(class AActor* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ClientSpectatePlayer");

	Params::ABP_SGKController_C_ClientSpectatePlayer_Params Parms{};

	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.Bomb Pickup Sound
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::Bomb_Pickup_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "Bomb Pickup Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.Bomb Dropped Sound
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::Bomb_Dropped_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "Bomb Dropped Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.Bomb Planted Sound
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::Bomb_Planted_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "Bomb Planted Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.Bomb Defused SEALS Sound
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::Bomb_Defused_SEALS_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "Bomb Defused SEALS Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.Bomb Defused INS Sound
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::Bomb_Defused_INS_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "Bomb Defused INS Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.CameraFollowTeammateForward
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::CameraFollowTeammateForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CameraFollowTeammateForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.CameraFollowTeammateBackwards
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::CameraFollowTeammateBackwards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CameraFollowTeammateBackwards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ControllerSpectateRotationTimer
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ControllerSpectateRotationTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ControllerSpectateRotationTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SpectatorRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::SpectatorRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SpectatorRotation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.DoPlantDefuseBomb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::DoPlantDefuseBomb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "DoPlantDefuseBomb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.AddHitmarkerWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::AddHitmarkerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "AddHitmarkerWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.PlayerSelectedLoadoutServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::PlayerSelectedLoadoutServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "PlayerSelectedLoadoutServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.AddHitIndicatorwidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::AddHitIndicatorwidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "AddHitIndicatorwidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.CMDAddTeamKill
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::CMDAddTeamKill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CMDAddTeamKill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.CMDStartAutoKickTimer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::CMDStartAutoKickTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CMDStartAutoKickTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.CMDVoteYesOrNo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Yes                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::CMDVoteYesOrNo(bool Yes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CMDVoteYesOrNo");

	Params::ABP_SGKController_C_CMDVoteYesOrNo_Params Parms{};

	Parms.Yes = Yes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNVoteYesOrNo
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Yes                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNVoteYesOrNo(bool Yes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNVoteYesOrNo");

	Params::ABP_SGKController_C_OWNVoteYesOrNo_Params Parms{};

	Parms.Yes = Yes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNToggleVoteForKick
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APeak53PlayerState_C*        CurrentPlayerPlayerstate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNToggleVoteForKick(class APeak53PlayerState_C* CurrentPlayerPlayerstate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNToggleVoteForKick");

	Params::ABP_SGKController_C_OWNToggleVoteForKick_Params Parms{};

	Parms.CurrentPlayerPlayerstate = CurrentPlayerPlayerstate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.CMDCallVoteForKick
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        CurrentPlayerPlayerstate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::CMDCallVoteForKick(enum class EPeak53Teams Team, class APeak53PlayerState_C* CurrentPlayerPlayerstate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CMDCallVoteForKick");

	Params::ABP_SGKController_C_CMDCallVoteForKick_Params Parms{};

	Parms.Team = Team;
	Parms.CurrentPlayerPlayerstate = CurrentPlayerPlayerstate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNCallVoteForKick
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        CurrentPlayerPlayerstate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNCallVoteForKick(enum class EPeak53Teams Team, class APeak53PlayerState_C* CurrentPlayerPlayerstate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNCallVoteForKick");

	Params::ABP_SGKController_C_OWNCallVoteForKick_Params Parms{};

	Parms.Team = Team;
	Parms.CurrentPlayerPlayerstate = CurrentPlayerPlayerstate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNToggleShowKickMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceClose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNToggleShowKickMenu(bool ForceClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNToggleShowKickMenu");

	Params::ABP_SGKController_C_OWNToggleShowKickMenu_Params Parms{};

	Parms.ForceClose = ForceClose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.CMDServerAuth
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                      SessionAuthTicket                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SGKController_C::CMDServerAuth(TArray<uint8>& SessionAuthTicket, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CMDServerAuth");

	Params::ABP_SGKController_C_CMDServerAuth_Params Parms{};

	Parms.SessionAuthTicket = SessionAuthTicket;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNStartAuth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                    SteamID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNStartAuth(const struct FSteamID& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNStartAuth");

	Params::ABP_SGKController_C_OWNStartAuth_Params Parms{};

	Parms.SteamID = SteamID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.AddSpectatorScreenForNewcomers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::AddSpectatorScreenForNewcomers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "AddSpectatorScreenForNewcomers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.2312
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::Two312()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "2312");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.123
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::One23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "123");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.CMDCallAddToPlayerReadyList
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::CMDCallAddToPlayerReadyList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "CMDCallAddToPlayerReadyList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.OWNToggleShowJoinUi
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CalledFromGameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNToggleShowJoinUi(bool CalledFromGameMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNToggleShowJoinUi");

	Params::ABP_SGKController_C_OWNToggleShowJoinUi_Params Parms{};

	Parms.CalledFromGameMode = CalledFromGameMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OWNDisableShowJoinUi
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::OWNDisableShowJoinUi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNDisableShowJoinUi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.OWNShowJoinUi
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CalledFromGameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNShowJoinUi(bool CalledFromGameMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNShowJoinUi");

	Params::ABP_SGKController_C_OWNShowJoinUi_Params Parms{};

	Parms.CalledFromGameMode = CalledFromGameMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.FFA Players Alive Timer Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::FFA_Players_Alive_Timer_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "FFA Players Alive Timer Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.OWNAddScoreInfo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ScoreValues              ScoreInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_SGKController_C::OWNAddScoreInfo(const struct FS_ScoreValues& ScoreInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OWNAddScoreInfo");

	Params::ABP_SGKController_C_OWNAddScoreInfo_Params Parms{};

	Parms.ScoreInfo = ScoreInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.EnableInputClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::EnableInputClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "EnableInputClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.DisableInputClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::DisableInputClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "DisableInputClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.HQ Voice Start INS
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::HQ_Voice_Start_INS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "HQ Voice Start INS");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.HQ Voice Start SEALS
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::HQ_Voice_Start_SEALS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "HQ Voice Start SEALS");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.BeginPlayController
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::BeginPlayController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "BeginPlayController");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ServerInitPlayerInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ServerInitPlayerInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ServerInitPlayerInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ClientInitialize
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ClientInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ClientInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SGK UpdateCharacterYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_UpdateCharacterYaw(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK UpdateCharacterYaw");

	Params::ABP_SGKController_C_SGK_UpdateCharacterYaw_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ServerUpdateCharacterYaw
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ServerUpdateCharacterYaw(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ServerUpdateCharacterYaw");

	Params::ABP_SGKController_C_ServerUpdateCharacterYaw_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ReceiveEndPlay");

	Params::ABP_SGKController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ClientPossess
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ClientPossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ClientPossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ClientEnableInput
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ClientEnableInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ClientEnableInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ReceivePossess");

	Params::ABP_SGKController_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.ClientRespawn
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ClientRespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ClientRespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ServerRespawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ServerRespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ServerRespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ClientInGameLoad
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ClientInGameLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ClientInGameLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.SGK SpawnOverflowItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_SGKController_C::SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "SGK SpawnOverflowItems");

	Params::ABP_SGKController_C_SGK_SpawnOverflowItems_Params Parms{};

	Parms.InvItem = InvItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.QuitGameClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::QuitGameClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "QuitGameClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_SGKController_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKController.BP_SGKController_C.ExecuteUbergraph_BP_SGKController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AttachmentType        K2Node_Event_Attachment                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_Event_InvSlot_1                                           (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_Event_InvSlot                                             (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class FName                        K2Node_Event_ItemID                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Sounds                K2Node_Event_SoundType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_7                                       (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isSteamLoggedIn_NewParam                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSteamID_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_MyGameManager                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerScore                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerKills_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerDeath                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MVPScore                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MVPKills                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MVPDeaths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_MVPName                                       (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SealsScoreGlobal                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SealsKillsGlobal                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SealsDeathsGlobal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InsurgentsScoreGlobal                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InsurgentsKillsGlobal                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InsurgentsDeathsGlobal                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_WinnerTeam                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_UnlockedItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_8                                       (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PlayerName_1                                  (None)
// class FText                        K2Node_CustomEvent_PlayerName                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Score_1                                       (None)
// class FText                        K2Node_CustomEvent_Score                                         (None)
// enum class EPeak53Teams            K2Node_CustomEvent_Team_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_PlayerTeam_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_PlayerTeam                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_MessageFeedVar                                (None)
// enum class ETextJustify            K2Node_CustomEvent_Justification                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_CustomEvent_In_Color_and_Opacity                          (None)
// int32                              K2Node_CustomEvent_In_Font_Info_Size                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PlayerKills_1                                 (None)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PlayerKills                                   (None)
// class FText                        K2Node_CustomEvent_PlayerDeaths_1                                (None)
// class FText                        K2Node_CustomEvent_PlayerDeaths                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_MessageToBeSendFeedController_1               (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_MessageToBeSendFeedController                 (None)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindEmptySlots_SpaceFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindEmptySlots_Rotated                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_FindEmptySlots_FoundSlots                               (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlot               K2Node_CustomEvent_S_WeaponSlot                                  (ConstParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID_1                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayIntro_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACineCameraActor*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class ACineCameraActor*>    CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Temp_object_Variable_2                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loadout                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_StartingWeaponItem>K2Node_CustomEvent_WeaponsPrimary                                (ReferenceParm)
// TArray<struct FS_StartingWeaponItem>K2Node_CustomEvent_WeaponsSecondary                              (ReferenceParm)
// TArray<struct FS_CraftingCost>     K2Node_CustomEvent_WeaponsTool1                                  (ReferenceParm)
// TArray<struct FS_CraftingCost>     K2Node_CustomEvent_WeaponsTool2                                  (ReferenceParm)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterRangeWeapon_C*     K2Node_DynamicCast_AsBP_Master_Range_Weapon                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScoreboard_C*>       CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UScoreboard_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBombsiteInteractionWidget_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlantedBomb_C*              K2Node_DynamicCast_AsPlanted_Bomb                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_SpawnTransform                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_Team_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlantedBomb_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBombDefuseWidget_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlantedBomb_C*>      CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bHasBomb_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingNetworkedRootMotionMontage_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScoreboard_C*               CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMapIntroSettings_bFound                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPKMapIntroSettings         CallFunc_GetMapIntroSettings_OutSettings                         (NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UEnhancedInputLocalPlayerSubsystem*CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_10                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FModifyContextOptions       Temp_struct_Variable                                             (ConstParm, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnhancedInputSubsystemInterface>CallFunc_AddPlayerMappableConfig_self_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_11                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_12                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PlayersAlive_PlayersLeftAlive                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_13                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InInt                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA_                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA__1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA__2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA__3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_CounterBounce                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue                      (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction                     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_InputActionValueToAxis1D_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaultWidget_C*              CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBreachWidget_C*             CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKGameMode_C*           K2Node_DynamicCast_AsBP_SGKGame_Mode                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_5                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID_2                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID_3                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_NewViewTarget                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_6                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_6                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA__4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA__5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKGameMode_C*           K2Node_DynamicCast_AsBP_SGKGame_Mode_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_14                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASpectatorCharacter_C*       K2Node_DynamicCast_AsSpectator_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKGameMode_C*           K2Node_DynamicCast_AsBP_SGKGame_Mode_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_15                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_7                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_7                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_8                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_8                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_4                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_5                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_6                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_40                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_7                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_41                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameManager_C*              CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_1                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_1                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_2                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_2                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompassHUD_C*               CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_3                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_3                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_5                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_2                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_9                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_9                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_42                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_10                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_11                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_10                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_43                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_11                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_44                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Yes_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Yes                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_12                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_vote_kick_for_player_C*   CallFunc_Create_ReturnValue_7                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_12                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_45                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_CustomEvent_CurrentPlayerPlayerstate_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_Team_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_CustomEvent_CurrentPlayerPlayerstate_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPeak53Teams            K2Node_CustomEvent_Team                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_CustomEvent_CurrentPlayerPlayerstate                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_vote_kick_menu_C*         CallFunc_Create_ReturnValue_8                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ForceClose                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_13                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_4                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_4                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_13                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_46                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USteamGameServer*            CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      K2Node_CustomEvent_SessionAuthTicket                             (ReferenceParm)
// class FString                      K2Node_CustomEvent_Value                                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FSteamID                    CallFunc_MakeSteamID_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamID                    K2Node_CustomEvent_SteamID                                       (NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      CallFunc_GetAuthSessionTicket_Ticket                             (ReferenceParm)
// struct FSteamTicketHandle          CallFunc_GetAuthSessionTicket_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_DeathScreen_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class APlantedBomb_C*              CallFunc_Array_Get_Item_6                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DeathScreen_C*           CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item_8                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_14                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_14                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_47                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_15                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State_15                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_48                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_calledFromGameMode_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_calledFromGameMode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_game_choose_team_C*       CallFunc_Create_ReturnValue_9                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// TArray<class UBombsiteInteractionWidget_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// class UBombsiteInteractionWidget_C*CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFFA_FFA__6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ScoreValues              K2Node_CustomEvent_scoreInfo                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Temp_object_Variable_6                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// class UW_game_end_C*               CallFunc_Create_ReturnValue_10                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item_10                                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSteamID_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_8                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_49                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State_16                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_50                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USteamGameServer*            CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESteamBeginAuthSessionResultCallFunc_BeginAuthSession_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPeak53MainWidget_C*         CallFunc_Create_ReturnValue_11                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryHUD_C*          CallFunc_Create_ReturnValue_12                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// class APawn*                       K2Node_Event_Pawn                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_16                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_Pawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_11                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_51                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isSteamLoggedIn_NewParam_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StartingWeaponItem       CallFunc_Array_Get_Item_12                                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_52                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_AllWeaponActors_Actors                                  (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_13                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_53                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_54                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_8                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterComponent_C*    CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_9                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_10                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterComponent_C*    CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StartingWeaponItem       CallFunc_Array_Get_Item_14                                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_11                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_55                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_12                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter_3                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_56                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// class UBP_InventoryHUD_C*          CallFunc_Create_ReturnValue_13                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_13                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_development_tools_C*      CallFunc_Create_ReturnValue_14                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter_4                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_57                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_9                                       (HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_Event_InvItem                                             (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_58                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_4                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_59                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentSlot            CallFunc_SelectEquipmentSlot_ReturnValue                         (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory_1                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_37                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_5                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKGameMode_C*           K2Node_DynamicCast_AsBP_SGKGame_Mode_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_60                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::ExecuteUbergraph_BP_SGKController(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* Temp_object_Variable, class APlayerController* Temp_object_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_Visible, enum class E_AttachmentType K2Node_Event_Attachment, const struct FS_InvSlot& K2Node_Event_InvSlot_1, const struct FS_InvSlot& K2Node_Event_InvSlot, class FName K2Node_Event_ItemID, enum class E_Sounds K2Node_Event_SoundType, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& K2Node_InputKeyEvent_Key_7, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_isSteamLoggedIn_NewParam, const class FString& CallFunc_BreakSteamID_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, class AActor* K2Node_CustomEvent_MyGameManager, int32 K2Node_CustomEvent_PlayerScore, int32 K2Node_CustomEvent_PlayerKills_2, int32 K2Node_CustomEvent_PlayerDeath, int32 K2Node_CustomEvent_MVPScore, int32 K2Node_CustomEvent_MVPKills, int32 K2Node_CustomEvent_MVPDeaths, const class FString& K2Node_CustomEvent_MVPName, int32 K2Node_CustomEvent_SealsScoreGlobal, int32 K2Node_CustomEvent_SealsKillsGlobal, int32 K2Node_CustomEvent_SealsDeathsGlobal, int32 K2Node_CustomEvent_InsurgentsScoreGlobal, int32 K2Node_CustomEvent_InsurgentsKillsGlobal, int32 K2Node_CustomEvent_InsurgentsDeathsGlobal, enum class EPeak53Teams K2Node_CustomEvent_WinnerTeam, int32 K2Node_CustomEvent_UnlockedItem, const struct FKey& K2Node_InputKeyEvent_Key_8, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_CustomEvent_PlayerName_1, class FText K2Node_CustomEvent_PlayerName, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FText K2Node_CustomEvent_Score_1, class FText K2Node_CustomEvent_Score, enum class EPeak53Teams K2Node_CustomEvent_Team_3, enum class EPeak53Teams K2Node_CustomEvent_PlayerTeam_1, bool CallFunc_IsValid_ReturnValue_4, enum class EPeak53Teams K2Node_CustomEvent_PlayerTeam, class FText K2Node_CustomEvent_MessageFeedVar, enum class ETextJustify K2Node_CustomEvent_Justification, const struct FSlateColor& K2Node_CustomEvent_In_Color_and_Opacity, int32 K2Node_CustomEvent_In_Font_Info_Size, class FText K2Node_CustomEvent_PlayerKills_1, bool CallFunc_IsValid_ReturnValue_5, class FText K2Node_CustomEvent_PlayerKills, class FText K2Node_CustomEvent_PlayerDeaths_1, class FText K2Node_CustomEvent_PlayerDeaths, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_MessageToBeSendFeedController_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText K2Node_CustomEvent_MessageToBeSendFeedController, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess_2, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_1, bool K2Node_DynamicCast_bSuccess_3, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_2, bool K2Node_DynamicCast_bSuccess_4, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_3, bool K2Node_DynamicCast_bSuccess_5, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_4, bool K2Node_DynamicCast_bSuccess_6, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_5, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_FindEmptySlots_SpaceFound, bool CallFunc_FindEmptySlots_Rotated, TArray<struct FS_InvSlot>& CallFunc_FindEmptySlots_FoundSlots, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, const struct FS_WeaponSlot& K2Node_CustomEvent_S_WeaponSlot, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_1, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_5, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_ShouldPlayIntro_ReturnValue, TArray<class ACineCameraActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, class ACineCameraActor* CallFunc_Array_Get_Item_1, uint8 CallFunc_GetValidValue_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, TArray<class ACineCameraActor*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue_2, class ACineCameraActor* CallFunc_Array_Get_Item_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class APlayerController* Temp_object_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_6, class UClass* K2Node_CustomEvent_Loadout, TArray<struct FS_StartingWeaponItem>& K2Node_CustomEvent_WeaponsPrimary, TArray<struct FS_StartingWeaponItem>& K2Node_CustomEvent_WeaponsSecondary, TArray<struct FS_CraftingCost>& K2Node_CustomEvent_WeaponsTool1, TArray<struct FS_CraftingCost>& K2Node_CustomEvent_WeaponsTool2, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_6, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_6, class ABP_MasterRangeWeapon_C* K2Node_DynamicCast_AsBP_Master_Range_Weapon, bool K2Node_DynamicCast_bSuccess_9, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, TArray<class UScoreboard_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UScoreboard_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, class UBombsiteInteractionWidget_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlantedBomb_C* K2Node_DynamicCast_AsPlanted_Bomb, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_7, bool K2Node_DynamicCast_bSuccess_11, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_8, bool K2Node_DynamicCast_bSuccess_12, const struct FTransform& K2Node_CustomEvent_SpawnTransform, enum class EPeak53Teams K2Node_CustomEvent_Team_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlantedBomb_C* CallFunc_FinishSpawningActor_ReturnValue, class UBombDefuseWidget_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, TArray<class APlantedBomb_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 CallFunc_Array_Length_ReturnValue_9, bool K2Node_CustomEvent_bHasBomb_, bool CallFunc_IsPlayingNetworkedRootMotionMontage_ReturnValue, int32 Temp_int_Array_Index_Variable_4, class UScoreboard_C* CallFunc_Array_Get_Item_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_13, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, bool CallFunc_EqualEqual_TextText_ReturnValue_4, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_GetMapIntroSettings_bFound, const struct FPKMapIntroSettings& CallFunc_GetMapIntroSettings_OutSettings, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key_1, int32 Temp_int_Loop_Counter_Variable_4, class UUserWidget* CallFunc_Create_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue_2, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_9, bool K2Node_DynamicCast_bSuccess_14, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_8, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_10, bool K2Node_DynamicCast_bSuccess_15, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FModifyContextOptions& Temp_struct_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue_1, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddPlayerMappableConfig_self_CastInput, int32 CallFunc_Add_IntInt_ReturnValue_9, class FText CallFunc_Conv_IntToText_ReturnValue_1, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_11, bool K2Node_DynamicCast_bSuccess_16, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess_17, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_12, bool K2Node_DynamicCast_bSuccess_18, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_1, bool K2Node_DynamicCast_bSuccess_19, int32 CallFunc_PlayersAlive_PlayersLeftAlive, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_13, bool K2Node_DynamicCast_bSuccess_20, int32 K2Node_CustomEvent_InInt, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_CheckFFA_FFA_, bool CallFunc_CheckFFA_FFA__1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, bool CallFunc_CheckFFA_FFA__2, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_2, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_CheckFFA_FFA__3, bool CallFunc_Greater_IntInt_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound, double Temp_real_Variable, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, double K2Node_CustomEvent_CounterBounce, double Temp_real_Variable_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, double Temp_real_Variable_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UInputAction* Temp_object_Variable_3, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess_22, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, double Temp_real_Variable_2, double Temp_real_Variable_1, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, class UVaultWidget_C* CallFunc_Create_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, class UBreachWidget_C* CallFunc_Create_ReturnValue_5, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode, bool K2Node_DynamicCast_bSuccess_23, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_3, bool K2Node_DynamicCast_bSuccess_24, class AGameStateBase* CallFunc_GetGameState_ReturnValue_4, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_4, bool K2Node_DynamicCast_bSuccess_25, class AGameStateBase* CallFunc_GetGameState_ReturnValue_5, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_5, bool K2Node_DynamicCast_bSuccess_26, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_2, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_3, class AActor* K2Node_CustomEvent_NewViewTarget, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_1, bool K2Node_DynamicCast_bSuccess_27, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, class AGameStateBase* CallFunc_GetGameState_ReturnValue_6, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_6, bool K2Node_DynamicCast_bSuccess_28, bool CallFunc_CheckFFA_FFA__4, bool CallFunc_CheckFFA_FFA__5, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode_1, bool K2Node_DynamicCast_bSuccess_29, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_14, bool K2Node_DynamicCast_bSuccess_30, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ASpectatorCharacter_C* K2Node_DynamicCast_AsSpectator_Character, bool K2Node_DynamicCast_bSuccess_31, int32 CallFunc_Add_IntInt_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode_2, bool K2Node_DynamicCast_bSuccess_32, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_15, bool K2Node_DynamicCast_bSuccess_33, bool CallFunc_Greater_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_7, const struct FTransform& CallFunc_GetTransform_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_7, bool K2Node_DynamicCast_bSuccess_34, double Temp_real_Variable_3, const struct FVector2D& CallFunc_GetPosition_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_17, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_18, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, double Temp_real_Variable_4, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double Temp_real_Variable_5, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, bool CallFunc_InRange_FloatFloat_ReturnValue, class UInputAction* Temp_object_Variable_4, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_11, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_2, bool K2Node_DynamicCast_bSuccess_35, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_3, bool K2Node_DynamicCast_bSuccess_36, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_8, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_8, bool K2Node_DynamicCast_bSuccess_37, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_4, bool K2Node_DynamicCast_bSuccess_38, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_5, bool K2Node_DynamicCast_bSuccess_39, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_6, bool K2Node_DynamicCast_bSuccess_40, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_7, bool K2Node_DynamicCast_bSuccess_41, class AGameManager_C* CallFunc_GetActorOfClass_ReturnValue, bool Temp_bool_Variable_1, double Temp_real_Variable_6, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_5, double Temp_real_Variable_4, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1, double Temp_real_Variable_7, class UInputAction* Temp_object_Variable_5, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, bool Temp_bool_True_if_break_was_hit_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_3, double Temp_real_Variable_7, bool CallFunc_BooleanAND_ReturnValue_2, double Temp_real_Variable_6, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_19, class UCompassHUD_C* CallFunc_Create_ReturnValue_6, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, double Temp_real_Variable_7, double Temp_real_Variable_6, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_21, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, const struct FS_InvSlot& CallFunc_Array_Get_Item_5, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue_9, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_9, bool K2Node_DynamicCast_bSuccess_42, int32 CallFunc_Add_IntInt_ReturnValue_12, bool CallFunc_IsServer_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_10, class AGameStateBase* CallFunc_GetGameState_ReturnValue_11, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_10, bool K2Node_DynamicCast_bSuccess_43, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_11, bool K2Node_DynamicCast_bSuccess_44, bool CallFunc_IsServer_ReturnValue_2, bool K2Node_CustomEvent_Yes_1, bool K2Node_CustomEvent_Yes, bool CallFunc_IsValid_ReturnValue_22, class AGameStateBase* CallFunc_GetGameState_ReturnValue_12, class UW_vote_kick_for_player_C* CallFunc_Create_ReturnValue_7, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_12, bool K2Node_DynamicCast_bSuccess_45, class APeak53PlayerState_C* K2Node_CustomEvent_CurrentPlayerPlayerstate_2, bool CallFunc_IsServer_ReturnValue_3, enum class EPeak53Teams K2Node_CustomEvent_Team_1, class APeak53PlayerState_C* K2Node_CustomEvent_CurrentPlayerPlayerstate_1, enum class EPeak53Teams K2Node_CustomEvent_Team, class APeak53PlayerState_C* K2Node_CustomEvent_CurrentPlayerPlayerstate, bool CallFunc_IsValid_ReturnValue_23, bool CallFunc_IsValid_ReturnValue_24, class UW_vote_kick_menu_C* CallFunc_Create_ReturnValue_8, bool K2Node_CustomEvent_ForceClose, class AGameStateBase* CallFunc_GetGameState_ReturnValue_13, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_13, bool K2Node_DynamicCast_bSuccess_46, double Temp_real_Variable_7, double Temp_real_Variable_6, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, class USteamGameServer* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_6, TArray<uint8>& K2Node_CustomEvent_SessionAuthTicket, const class FString& K2Node_CustomEvent_Value, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSteamID& CallFunc_MakeSteamID_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_13, const struct FSteamID& K2Node_CustomEvent_SteamID, TArray<uint8>& CallFunc_GetAuthSessionTicket_Ticket, const struct FSteamTicketHandle& CallFunc_GetAuthSessionTicket_ReturnValue, int32 Temp_int_Array_Index_Variable_6, TArray<class UBP_DeathScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class APlantedBomb_C* CallFunc_Array_Get_Item_6, class UBP_DeathScreen_C* CallFunc_Array_Get_Item_7, bool CallFunc_IsValid_ReturnValue_25, int32 Temp_int_Array_Index_Variable_7, const struct FS_CraftingCost& CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_14, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_14, bool K2Node_DynamicCast_bSuccess_47, class AGameStateBase* CallFunc_GetGameState_ReturnValue_15, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State_15, bool K2Node_DynamicCast_bSuccess_48, bool K2Node_CustomEvent_calledFromGameMode_1, bool CallFunc_IsValid_ReturnValue_26, bool K2Node_CustomEvent_calledFromGameMode, class UW_game_choose_team_C* CallFunc_Create_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, TArray<class UBombsiteInteractionWidget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UBombsiteInteractionWidget_C* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_CheckFFA_FFA__6, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FS_ScoreValues& K2Node_CustomEvent_scoreInfo, const struct FKey& K2Node_InputKeyEvent_Key_2, int32 Temp_int_Variable_4, class APlayerController* Temp_object_Variable_6, const struct FKey& K2Node_InputKeyEvent_Key_3, int32 Temp_int_Variable_5, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_14, const struct FKey& K2Node_InputKeyEvent_Key_4, class UW_game_end_C* CallFunc_Create_ReturnValue_10, int32 Temp_int_Array_Index_Variable_8, const struct FS_CraftingCost& CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& CallFunc_BreakSteamID_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_IsValid_ReturnValue_28, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchString_CmpSuccess_1, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_8, bool K2Node_DynamicCast_bSuccess_49, int32 Temp_int_Variable_6, bool CallFunc_IsValid_ReturnValue_29, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_16, bool K2Node_DynamicCast_bSuccess_50, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_30, class USteamGameServer* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, enum class ESteamBeginAuthSessionResult CallFunc_BeginAuthSession_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_31, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_32, int32 Temp_int_Loop_Counter_Variable_8, bool CallFunc_IsValid_ReturnValue_33, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_15, class UPeak53MainWidget_C* CallFunc_Create_ReturnValue_11, class UBP_InventoryHUD_C* CallFunc_Create_ReturnValue_12, const struct FKey& K2Node_InputKeyEvent_Key_5, class APawn* K2Node_Event_Pawn, class AGameStateBase* CallFunc_GetGameState_ReturnValue_16, class APawn* K2Node_CustomEvent_Pawn, class APlayerState* CallFunc_Array_Get_Item_11, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_34, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_35, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_3, bool K2Node_DynamicCast_bSuccess_51, bool CallFunc_isSteamLoggedIn_NewParam_1, bool CallFunc_IsLocalPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable_9, const struct FS_StartingWeaponItem& CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Add_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_4, bool K2Node_DynamicCast_bSuccess_52, int32 Temp_int_Variable_7, TArray<class AActor*>& CallFunc_AllWeaponActors_Actors, class AActor* CallFunc_Array_Get_Item_13, int32 CallFunc_Array_Length_ReturnValue_12, bool CallFunc_Less_IntInt_ReturnValue_9, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 Temp_int_Loop_Counter_Variable_9, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_16, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_53, class APawn* CallFunc_K2_GetPawn_ReturnValue_7, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_54, class APawn* CallFunc_K2_GetPawn_ReturnValue_8, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_9, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_10, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, int32 Temp_int_Array_Index_Variable_10, const struct FS_StartingWeaponItem& CallFunc_Array_Get_Item_14, int32 CallFunc_Array_Add_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_11, class ACharacter* K2Node_DynamicCast_AsCharacter_2, bool K2Node_DynamicCast_bSuccess_55, class APawn* CallFunc_K2_GetPawn_ReturnValue_12, class ACharacter* K2Node_DynamicCast_AsCharacter_3, bool K2Node_DynamicCast_bSuccess_56, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_1, class UBP_InventoryHUD_C* CallFunc_Create_ReturnValue_13, class APawn* CallFunc_K2_GetPawn_ReturnValue_13, class UW_development_tools_C* CallFunc_Create_ReturnValue_14, class ACharacter* K2Node_DynamicCast_AsCharacter_4, bool K2Node_DynamicCast_bSuccess_57, const struct FKey& K2Node_InputKeyEvent_Key_9, const struct FS_InvItem& K2Node_Event_InvItem, const class FString& CallFunc_GetDisplayName_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_58, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_36, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1, bool K2Node_DynamicCast_bSuccess_59, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory_1, int32 Temp_int_Loop_Counter_Variable_10, bool CallFunc_IsValid_ReturnValue_37, bool CallFunc_Less_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_17, bool CallFunc_IsStandalone_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_13, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_5, class ABP_SGKGameMode_C* K2Node_DynamicCast_AsBP_SGKGame_Mode_3, bool K2Node_DynamicCast_bSuccess_60, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "ExecuteUbergraph_BP_SGKController");

	Params::ABP_SGKController_C_ExecuteUbergraph_BP_SGKController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_Visible = K2Node_Event_Visible;
	Parms.K2Node_Event_Attachment = K2Node_Event_Attachment;
	Parms.K2Node_Event_InvSlot_1 = K2Node_Event_InvSlot_1;
	Parms.K2Node_Event_InvSlot = K2Node_Event_InvSlot;
	Parms.K2Node_Event_ItemID = K2Node_Event_ItemID;
	Parms.K2Node_Event_SoundType = K2Node_Event_SoundType;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.K2Node_InputKeyEvent_Key_7 = K2Node_InputKeyEvent_Key_7;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_isSteamLoggedIn_NewParam = CallFunc_isSteamLoggedIn_NewParam;
	Parms.CallFunc_BreakSteamID_ReturnValue = CallFunc_BreakSteamID_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CustomEvent_MyGameManager = K2Node_CustomEvent_MyGameManager;
	Parms.K2Node_CustomEvent_PlayerScore = K2Node_CustomEvent_PlayerScore;
	Parms.K2Node_CustomEvent_PlayerKills_2 = K2Node_CustomEvent_PlayerKills_2;
	Parms.K2Node_CustomEvent_PlayerDeath = K2Node_CustomEvent_PlayerDeath;
	Parms.K2Node_CustomEvent_MVPScore = K2Node_CustomEvent_MVPScore;
	Parms.K2Node_CustomEvent_MVPKills = K2Node_CustomEvent_MVPKills;
	Parms.K2Node_CustomEvent_MVPDeaths = K2Node_CustomEvent_MVPDeaths;
	Parms.K2Node_CustomEvent_MVPName = K2Node_CustomEvent_MVPName;
	Parms.K2Node_CustomEvent_SealsScoreGlobal = K2Node_CustomEvent_SealsScoreGlobal;
	Parms.K2Node_CustomEvent_SealsKillsGlobal = K2Node_CustomEvent_SealsKillsGlobal;
	Parms.K2Node_CustomEvent_SealsDeathsGlobal = K2Node_CustomEvent_SealsDeathsGlobal;
	Parms.K2Node_CustomEvent_InsurgentsScoreGlobal = K2Node_CustomEvent_InsurgentsScoreGlobal;
	Parms.K2Node_CustomEvent_InsurgentsKillsGlobal = K2Node_CustomEvent_InsurgentsKillsGlobal;
	Parms.K2Node_CustomEvent_InsurgentsDeathsGlobal = K2Node_CustomEvent_InsurgentsDeathsGlobal;
	Parms.K2Node_CustomEvent_WinnerTeam = K2Node_CustomEvent_WinnerTeam;
	Parms.K2Node_CustomEvent_UnlockedItem = K2Node_CustomEvent_UnlockedItem;
	Parms.K2Node_InputKeyEvent_Key_8 = K2Node_InputKeyEvent_Key_8;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_PlayerName_1 = K2Node_CustomEvent_PlayerName_1;
	Parms.K2Node_CustomEvent_PlayerName = K2Node_CustomEvent_PlayerName;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Score_1 = K2Node_CustomEvent_Score_1;
	Parms.K2Node_CustomEvent_Score = K2Node_CustomEvent_Score;
	Parms.K2Node_CustomEvent_Team_3 = K2Node_CustomEvent_Team_3;
	Parms.K2Node_CustomEvent_PlayerTeam_1 = K2Node_CustomEvent_PlayerTeam_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_PlayerTeam = K2Node_CustomEvent_PlayerTeam;
	Parms.K2Node_CustomEvent_MessageFeedVar = K2Node_CustomEvent_MessageFeedVar;
	Parms.K2Node_CustomEvent_Justification = K2Node_CustomEvent_Justification;
	Parms.K2Node_CustomEvent_In_Color_and_Opacity = K2Node_CustomEvent_In_Color_and_Opacity;
	Parms.K2Node_CustomEvent_In_Font_Info_Size = K2Node_CustomEvent_In_Font_Info_Size;
	Parms.K2Node_CustomEvent_PlayerKills_1 = K2Node_CustomEvent_PlayerKills_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_PlayerKills = K2Node_CustomEvent_PlayerKills;
	Parms.K2Node_CustomEvent_PlayerDeaths_1 = K2Node_CustomEvent_PlayerDeaths_1;
	Parms.K2Node_CustomEvent_PlayerDeaths = K2Node_CustomEvent_PlayerDeaths;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_MessageToBeSendFeedController_1 = K2Node_CustomEvent_MessageToBeSendFeedController_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_MessageToBeSendFeedController = K2Node_CustomEvent_MessageToBeSendFeedController;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State = K2Node_DynamicCast_AsPeak_53Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_1 = K2Node_DynamicCast_AsPeak_53Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_2 = K2Node_DynamicCast_AsPeak_53Player_State_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_3 = K2Node_DynamicCast_AsPeak_53Player_State_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_4 = K2Node_DynamicCast_AsPeak_53Player_State_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_5 = K2Node_DynamicCast_AsPeak_53Player_State_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_FindEmptySlots_SpaceFound = CallFunc_FindEmptySlots_SpaceFound;
	Parms.CallFunc_FindEmptySlots_Rotated = CallFunc_FindEmptySlots_Rotated;
	Parms.CallFunc_FindEmptySlots_FoundSlots = CallFunc_FindEmptySlots_FoundSlots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_S_WeaponSlot = K2Node_CustomEvent_S_WeaponSlot;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.K2Node_MakeStruct_S_WeaponSlotID = K2Node_MakeStruct_S_WeaponSlotID;
	Parms.K2Node_MakeStruct_S_WeaponSlotID_1 = K2Node_MakeStruct_S_WeaponSlotID_1;
	Parms.K2Node_MakeStruct_S_InvSlotID_1 = K2Node_MakeStruct_S_InvSlotID_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_ShouldPlayIntro_ReturnValue = CallFunc_ShouldPlayIntro_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue_1 = CallFunc_SpawnSoundAtLocation_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;
	Parms.K2Node_CustomEvent_WeaponsPrimary = K2Node_CustomEvent_WeaponsPrimary;
	Parms.K2Node_CustomEvent_WeaponsSecondary = K2Node_CustomEvent_WeaponsSecondary;
	Parms.K2Node_CustomEvent_WeaponsTool1 = K2Node_CustomEvent_WeaponsTool1;
	Parms.K2Node_CustomEvent_WeaponsTool2 = K2Node_CustomEvent_WeaponsTool2;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_6 = K2Node_DynamicCast_AsPeak_53Player_State_6;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_Master_Range_Weapon = K2Node_DynamicCast_AsBP_Master_Range_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlanted_Bomb = K2Node_DynamicCast_AsPlanted_Bomb;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_7 = K2Node_DynamicCast_AsPeak_53Player_State_7;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_8 = K2Node_DynamicCast_AsPeak_53Player_State_8;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_CustomEvent_SpawnTransform = K2Node_CustomEvent_SpawnTransform;
	Parms.K2Node_CustomEvent_Team_2 = K2Node_CustomEvent_Team_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.K2Node_CustomEvent_bHasBomb_ = K2Node_CustomEvent_bHasBomb_;
	Parms.CallFunc_IsPlayingNetworkedRootMotionMontage_ReturnValue = CallFunc_IsPlayingNetworkedRootMotionMontage_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_2 = CallFunc_EqualEqual_TextText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_3 = CallFunc_EqualEqual_TextText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_4 = CallFunc_EqualEqual_TextText_ReturnValue_4;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetMapIntroSettings_bFound = CallFunc_GetMapIntroSettings_bFound;
	Parms.CallFunc_GetMapIntroSettings_OutSettings = CallFunc_GetMapIntroSettings_OutSettings;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_9 = K2Node_DynamicCast_AsPeak_53Player_State_9;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_10 = K2Node_DynamicCast_AsPeak_53Player_State_10;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_AddPlayerMappableConfig_self_CastInput = CallFunc_AddPlayerMappableConfig_self_CastInput;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_11 = K2Node_DynamicCast_AsPeak_53Player_State_11;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_12 = K2Node_DynamicCast_AsPeak_53Player_State_12;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_1 = K2Node_DynamicCast_AsPeak_53Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_PlayersAlive_PlayersLeftAlive = CallFunc_PlayersAlive_PlayersLeftAlive;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_13 = K2Node_DynamicCast_AsPeak_53Player_State_13;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.K2Node_CustomEvent_InInt = K2Node_CustomEvent_InInt;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_CheckFFA_FFA_ = CallFunc_CheckFFA_FFA_;
	Parms.CallFunc_CheckFFA_FFA__1 = CallFunc_CheckFFA_FFA__1;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.CallFunc_CheckFFA_FFA__2 = CallFunc_CheckFFA_FFA__2;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_2 = K2Node_DynamicCast_AsPeak_53Game_State_2;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_CheckFFA_FFA__3 = CallFunc_CheckFFA_FFA__3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_CustomEvent_CounterBounce = K2Node_CustomEvent_CounterBounce;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = K2Node_EnhancedInputActionEvent_ActionValue;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Conv_InputActionValueToAxis1D_ReturnValue = CallFunc_Conv_InputActionValueToAxis1D_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode = K2Node_DynamicCast_AsBP_SGKGame_Mode;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_GetGameState_ReturnValue_3 = CallFunc_GetGameState_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_3 = K2Node_DynamicCast_AsPeak_53Game_State_3;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_GetGameState_ReturnValue_4 = CallFunc_GetGameState_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_4 = K2Node_DynamicCast_AsPeak_53Game_State_4;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_GetGameState_ReturnValue_5 = CallFunc_GetGameState_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_5 = K2Node_DynamicCast_AsPeak_53Game_State_5;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.K2Node_MakeStruct_S_WeaponSlotID_2 = K2Node_MakeStruct_S_WeaponSlotID_2;
	Parms.K2Node_MakeStruct_S_WeaponSlotID_3 = K2Node_MakeStruct_S_WeaponSlotID_3;
	Parms.K2Node_CustomEvent_NewViewTarget = K2Node_CustomEvent_NewViewTarget;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_1 = K2Node_DynamicCast_AsBP_SGKMaster_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_GetGameState_ReturnValue_6 = CallFunc_GetGameState_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_6 = K2Node_DynamicCast_AsPeak_53Game_State_6;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.CallFunc_CheckFFA_FFA__4 = CallFunc_CheckFFA_FFA__4;
	Parms.CallFunc_CheckFFA_FFA__5 = CallFunc_CheckFFA_FFA__5;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_1;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_14 = K2Node_DynamicCast_AsPeak_53Player_State_14;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSpectator_Character = K2Node_DynamicCast_AsSpectator_Character;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_2 = K2Node_DynamicCast_AsBP_SGKGame_Mode_2;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_15 = K2Node_DynamicCast_AsPeak_53Player_State_15;
	Parms.K2Node_DynamicCast_bSuccess_33 = K2Node_DynamicCast_bSuccess_33;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue_7 = CallFunc_GetGameState_ReturnValue_7;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_7 = K2Node_DynamicCast_AsPeak_53Game_State_7;
	Parms.K2Node_DynamicCast_bSuccess_34 = K2Node_DynamicCast_bSuccess_34;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetPosition_ReturnValue_1 = CallFunc_GetPosition_ReturnValue_1;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_2 = K2Node_DynamicCast_AsBP_SGKMaster_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_35 = K2Node_DynamicCast_bSuccess_35;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_3 = K2Node_DynamicCast_AsBP_SGKMaster_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_36 = K2Node_DynamicCast_bSuccess_36;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue_8 = CallFunc_GetGameState_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_8 = K2Node_DynamicCast_AsPeak_53Game_State_8;
	Parms.K2Node_DynamicCast_bSuccess_37 = K2Node_DynamicCast_bSuccess_37;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_4 = K2Node_DynamicCast_AsBP_SGKMaster_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_38 = K2Node_DynamicCast_bSuccess_38;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_5 = K2Node_DynamicCast_AsBP_SGKMaster_Character_5;
	Parms.K2Node_DynamicCast_bSuccess_39 = K2Node_DynamicCast_bSuccess_39;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_6 = K2Node_DynamicCast_AsBP_SGKMaster_Character_6;
	Parms.K2Node_DynamicCast_bSuccess_40 = K2Node_DynamicCast_bSuccess_40;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_7 = K2Node_DynamicCast_AsBP_SGKMaster_Character_7;
	Parms.K2Node_DynamicCast_bSuccess_41 = K2Node_DynamicCast_bSuccess_41;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_1 = K2Node_EnhancedInputActionEvent_ActionValue_1;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_1 = K2Node_EnhancedInputActionEvent_ElapsedTime_1;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_1 = K2Node_EnhancedInputActionEvent_TriggeredTime_1;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_1 = K2Node_EnhancedInputActionEvent_SourceAction_1;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1 = CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_2 = K2Node_EnhancedInputActionEvent_ActionValue_2;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_2 = K2Node_EnhancedInputActionEvent_ElapsedTime_2;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_2 = K2Node_EnhancedInputActionEvent_TriggeredTime_2;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_2 = K2Node_EnhancedInputActionEvent_SourceAction_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_3 = K2Node_EnhancedInputActionEvent_ActionValue_3;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_3 = K2Node_EnhancedInputActionEvent_ElapsedTime_3;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_3 = K2Node_EnhancedInputActionEvent_TriggeredTime_3;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_3 = K2Node_EnhancedInputActionEvent_SourceAction_3;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_1 = CallFunc_Conv_InputActionValueToBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_MakeStruct_S_InvSlotID_2 = K2Node_MakeStruct_S_InvSlotID_2;
	Parms.CallFunc_GetGameState_ReturnValue_9 = CallFunc_GetGameState_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_9 = K2Node_DynamicCast_AsPeak_53Game_State_9;
	Parms.K2Node_DynamicCast_bSuccess_42 = K2Node_DynamicCast_bSuccess_42;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue_10 = CallFunc_GetGameState_ReturnValue_10;
	Parms.CallFunc_GetGameState_ReturnValue_11 = CallFunc_GetGameState_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_10 = K2Node_DynamicCast_AsPeak_53Game_State_10;
	Parms.K2Node_DynamicCast_bSuccess_43 = K2Node_DynamicCast_bSuccess_43;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_11 = K2Node_DynamicCast_AsPeak_53Game_State_11;
	Parms.K2Node_DynamicCast_bSuccess_44 = K2Node_DynamicCast_bSuccess_44;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.K2Node_CustomEvent_Yes_1 = K2Node_CustomEvent_Yes_1;
	Parms.K2Node_CustomEvent_Yes = K2Node_CustomEvent_Yes;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_GetGameState_ReturnValue_12 = CallFunc_GetGameState_ReturnValue_12;
	Parms.CallFunc_Create_ReturnValue_7 = CallFunc_Create_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_12 = K2Node_DynamicCast_AsPeak_53Game_State_12;
	Parms.K2Node_DynamicCast_bSuccess_45 = K2Node_DynamicCast_bSuccess_45;
	Parms.K2Node_CustomEvent_CurrentPlayerPlayerstate_2 = K2Node_CustomEvent_CurrentPlayerPlayerstate_2;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.K2Node_CustomEvent_Team_1 = K2Node_CustomEvent_Team_1;
	Parms.K2Node_CustomEvent_CurrentPlayerPlayerstate_1 = K2Node_CustomEvent_CurrentPlayerPlayerstate_1;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.K2Node_CustomEvent_CurrentPlayerPlayerstate = K2Node_CustomEvent_CurrentPlayerPlayerstate;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_Create_ReturnValue_8 = CallFunc_Create_ReturnValue_8;
	Parms.K2Node_CustomEvent_ForceClose = K2Node_CustomEvent_ForceClose;
	Parms.CallFunc_GetGameState_ReturnValue_13 = CallFunc_GetGameState_ReturnValue_13;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_4 = K2Node_EnhancedInputActionEvent_ActionValue_4;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_4 = K2Node_EnhancedInputActionEvent_ElapsedTime_4;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_4 = K2Node_EnhancedInputActionEvent_TriggeredTime_4;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_4 = K2Node_EnhancedInputActionEvent_SourceAction_4;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_13 = K2Node_DynamicCast_AsPeak_53Game_State_13;
	Parms.K2Node_DynamicCast_bSuccess_46 = K2Node_DynamicCast_bSuccess_46;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_2 = CallFunc_Conv_InputActionValueToBool_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.K2Node_CustomEvent_SessionAuthTicket = K2Node_CustomEvent_SessionAuthTicket;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeSteamID_ReturnValue = CallFunc_MakeSteamID_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.K2Node_CustomEvent_SteamID = K2Node_CustomEvent_SteamID;
	Parms.CallFunc_GetAuthSessionTicket_Ticket = CallFunc_GetAuthSessionTicket_Ticket;
	Parms.CallFunc_GetAuthSessionTicket_ReturnValue = CallFunc_GetAuthSessionTicket_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_14 = CallFunc_GetGameState_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_14 = K2Node_DynamicCast_AsPeak_53Game_State_14;
	Parms.K2Node_DynamicCast_bSuccess_47 = K2Node_DynamicCast_bSuccess_47;
	Parms.CallFunc_GetGameState_ReturnValue_15 = CallFunc_GetGameState_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State_15 = K2Node_DynamicCast_AsPeak_53Game_State_15;
	Parms.K2Node_DynamicCast_bSuccess_48 = K2Node_DynamicCast_bSuccess_48;
	Parms.K2Node_CustomEvent_calledFromGameMode_1 = K2Node_CustomEvent_calledFromGameMode_1;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.K2Node_CustomEvent_calledFromGameMode = K2Node_CustomEvent_calledFromGameMode;
	Parms.CallFunc_Create_ReturnValue_9 = CallFunc_Create_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_CheckFFA_FFA__6 = CallFunc_CheckFFA_FFA__6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_scoreInfo = K2Node_CustomEvent_scoreInfo;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.CallFunc_Create_ReturnValue_10 = CallFunc_Create_ReturnValue_10;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_BreakSteamID_ReturnValue_1 = CallFunc_BreakSteamID_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_2 = CallFunc_GetCurrentLevelName_ReturnValue_2;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_8 = K2Node_DynamicCast_AsBP_SGKMaster_Character_8;
	Parms.K2Node_DynamicCast_bSuccess_49 = K2Node_DynamicCast_bSuccess_49;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State_16 = K2Node_DynamicCast_AsPeak_53Player_State_16;
	Parms.K2Node_DynamicCast_bSuccess_50 = K2Node_DynamicCast_bSuccess_50;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_BeginAuthSession_ReturnValue = CallFunc_BeginAuthSession_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_Create_ReturnValue_11 = CallFunc_Create_ReturnValue_11;
	Parms.CallFunc_Create_ReturnValue_12 = CallFunc_Create_ReturnValue_12;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.CallFunc_GetGameState_ReturnValue_16 = CallFunc_GetGameState_ReturnValue_16;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_3 = K2Node_DynamicCast_AsBP_SGKGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_51 = K2Node_DynamicCast_bSuccess_51;
	Parms.CallFunc_isSteamLoggedIn_NewParam_1 = CallFunc_isSteamLoggedIn_NewParam_1;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_4 = K2Node_DynamicCast_AsBP_SGKGame_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_52 = K2Node_DynamicCast_bSuccess_52;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_AllWeaponActors_Actors = CallFunc_AllWeaponActors_Actors;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_53 = K2Node_DynamicCast_bSuccess_53;
	Parms.CallFunc_K2_GetPawn_ReturnValue_7 = CallFunc_K2_GetPawn_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsCharacter_1 = K2Node_DynamicCast_AsCharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_54 = K2Node_DynamicCast_bSuccess_54;
	Parms.CallFunc_K2_GetPawn_ReturnValue_8 = CallFunc_K2_GetPawn_ReturnValue_8;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_9 = CallFunc_K2_GetPawn_ReturnValue_9;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue_10 = CallFunc_K2_GetPawn_ReturnValue_10;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_11 = CallFunc_K2_GetPawn_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsCharacter_2 = K2Node_DynamicCast_AsCharacter_2;
	Parms.K2Node_DynamicCast_bSuccess_55 = K2Node_DynamicCast_bSuccess_55;
	Parms.CallFunc_K2_GetPawn_ReturnValue_12 = CallFunc_K2_GetPawn_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsCharacter_3 = K2Node_DynamicCast_AsCharacter_3;
	Parms.K2Node_DynamicCast_bSuccess_56 = K2Node_DynamicCast_bSuccess_56;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_Create_ReturnValue_13 = CallFunc_Create_ReturnValue_13;
	Parms.CallFunc_K2_GetPawn_ReturnValue_13 = CallFunc_K2_GetPawn_ReturnValue_13;
	Parms.CallFunc_Create_ReturnValue_14 = CallFunc_Create_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsCharacter_4 = K2Node_DynamicCast_AsCharacter_4;
	Parms.K2Node_DynamicCast_bSuccess_57 = K2Node_DynamicCast_bSuccess_57;
	Parms.K2Node_InputKeyEvent_Key_9 = K2Node_InputKeyEvent_Key_9;
	Parms.K2Node_Event_InvItem = K2Node_Event_InvItem;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_3 = CallFunc_GetGameMode_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess_58 = K2Node_DynamicCast_bSuccess_58;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue = CallFunc_SelectedWeaponSlot_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_GetGameMode_ReturnValue_4 = CallFunc_GetGameMode_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_59 = K2Node_DynamicCast_bSuccess_59;
	Parms.CallFunc_SelectEquipmentSlot_ReturnValue = CallFunc_SelectEquipmentSlot_ReturnValue;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory_1 = CallFunc_SGK_GetGlobalInventory_GlobalInventory_1;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_IsValid_ReturnValue_37 = CallFunc_IsValid_ReturnValue_37;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.CallFunc_GetGameMode_ReturnValue_5 = CallFunc_GetGameMode_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_3 = K2Node_DynamicCast_AsBP_SGKGame_Mode_3;
	Parms.K2Node_DynamicCast_bSuccess_60 = K2Node_DynamicCast_bSuccess_60;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKController.BP_SGKController_C.OnToggleChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTeamChat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SGKController_C::OnToggleChat__DelegateSignature(bool bIsTeamChat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKController_C", "OnToggleChat__DelegateSignature");

	Params::ABP_SGKController_C_OnToggleChat__DelegateSignature_Params Parms{};

	Parms.bIsTeamChat = bIsTeamChat;

	UObject::ProcessEvent(Func, &Parms);

}

}


