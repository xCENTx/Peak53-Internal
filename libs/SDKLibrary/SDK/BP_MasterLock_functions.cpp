#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterLock.BP_MasterLock_C
// (Actor)

class UClass* ABP_MasterLock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterLock_C");

	return Clss;
}


// BP_MasterLock_C BP_MasterLock.Default__BP_MasterLock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterLock_C* ABP_MasterLock_C::GetDefaultObj()
{
	static class ABP_MasterLock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterLock_C*>(ABP_MasterLock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterLock.BP_MasterLock_C.RandomCode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SameCodeFoundL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterLock_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterLock_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::RandomCode(bool SameCodeFoundL, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_MasterLock_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_MasterLock_C* CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "RandomCode");

	Params::ABP_MasterLock_C_RandomCode_Params Parms{};

	Parms.SameCodeFoundL = SameCodeFoundL;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterLock.BP_MasterLock_C.SaveExtraData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ExtraDataIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SaveLockData_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SaveLockData_NewLevelSaveData                           (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_MasterLock_C::SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, int32 CallFunc_SaveLockData_ReturnValue, const struct FS_LevelSaveData& CallFunc_SaveLockData_NewLevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SaveExtraData");

	Params::ABP_MasterLock_C_SaveExtraData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.LevelSaveData = LevelSaveData;
	Parms.CallFunc_SaveLockData_ReturnValue = CallFunc_SaveLockData_ReturnValue;
	Parms.CallFunc_SaveLockData_NewLevelSaveData = CallFunc_SaveLockData_NewLevelSaveData;

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

}


// Function BP_MasterLock.BP_MasterLock_C.SGK AddMultipleOwners
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Owners                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_AddMultipleOwners_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_AddMultipleOwners(TArray<class FText>& Owners, bool CallFunc_SGK_AddMultipleOwners_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK AddMultipleOwners");

	Params::ABP_MasterLock_C_SGK_AddMultipleOwners_Params Parms{};

	Parms.Owners = Owners;
	Parms.CallFunc_SGK_AddMultipleOwners_ReturnValue = CallFunc_SGK_AddMultipleOwners_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterLock.BP_MasterLock_C.SGK AddOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_AddOwner_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_AddOwner(class FText PlayerName, bool CallFunc_SGK_AddOwner_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK AddOwner");

	Params::ABP_MasterLock_C_SGK_AddOwner_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.CallFunc_SGK_AddOwner_ReturnValue = CallFunc_SGK_AddOwner_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterLock.BP_MasterLock_C.SGK UpdateCode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_UpdateCode(class FText Code)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK UpdateCode");

	Params::ABP_MasterLock_C_SGK_UpdateCode_Params Parms{};

	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterLock.BP_MasterLock_C.SGK CodeCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CodeAccepted                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::SGK_CodeCheck(class FText Code, bool* CodeAccepted, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK CodeCheck");

	Params::ABP_MasterLock_C_SGK_CodeCheck_Params Parms{};

	Parms.Code = Code;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CodeAccepted != nullptr)
		*CodeAccepted = Parms.CodeAccepted;

}


// Function BP_MasterLock.BP_MasterLock_C.OnRep_Locked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterLock_C::OnRep_Locked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "OnRep_Locked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterLock.BP_MasterLock_C.SaveLockData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FVector                     LocationL                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LockSave                 K2Node_MakeStruct_S_LockSave                                     (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_MasterLock_C::SaveLockData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, struct FS_LevelSaveData* NewLevelSaveData, const struct FVector& LocationL, const struct FS_LevelSaveData& LevelSaveDataL, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FS_LockSave& K2Node_MakeStruct_S_LockSave, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SaveLockData");

	Params::ABP_MasterLock_C_SaveLockData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.LevelSaveData = LevelSaveData;
	Parms.LocationL = LocationL;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_S_LockSave = K2Node_MakeStruct_S_LockSave;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

	return Parms.ReturnValue;

}


// Function BP_MasterLock.BP_MasterLock_C.LoadLockData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OwnerLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_LockSave                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_MasterLock_C::LoadLockData(class UBP_SGKSaveGame_C* SaveGame, int32 Index, struct FVector* OwnerLocation, const struct FS_LevelSaveData& LevelSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LockSave& CallFunc_Array_Get_Item, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "LoadLockData");

	Params::ABP_MasterLock_C_LoadLockData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.Index = Index;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerLocation != nullptr)
		*OwnerLocation = std::move(Parms.OwnerLocation);

}


// Function BP_MasterLock.BP_MasterLock_C.SGK VerifyPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_VerifyPlayer(class FText Text, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK VerifyPlayer");

	Params::ABP_MasterLock_C_SGK_VerifyPlayer_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterLock.BP_MasterLock_C.IsVerifiedPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsVerified                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::IsVerifiedPlayer(class FText PlayerName, bool* IsVerified, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "IsVerifiedPlayer");

	Params::ABP_MasterLock_C_IsVerifiedPlayer_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVerified != nullptr)
		*IsVerified = Parms.IsVerified;

}


// Function BP_MasterLock.BP_MasterLock_C.CanOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               AllowOpen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVerifiedPlayer_IsVerified                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwner_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::CanOpen(class FText Name, bool* AllowOpen, bool CallFunc_IsVerifiedPlayer_IsVerified, bool CallFunc_IsOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "CanOpen");

	Params::ABP_MasterLock_C_CanOpen_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_IsVerifiedPlayer_IsVerified = CallFunc_IsVerifiedPlayer_IsVerified;
	Parms.CallFunc_IsOwner_ReturnValue = CallFunc_IsOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowOpen != nullptr)
		*AllowOpen = Parms.AllowOpen;

}


// Function BP_MasterLock.BP_MasterLock_C.SGK PossibleActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ActionsFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      PossibleActions                                                  (Parm, OutParm)
// bool                               VerifiedL                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOwnerL                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_IsOwner_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction                                  (HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction_1                                (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction_2                                (HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction_3                                (HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      K2Node_MakeArray_Array_2                                         (ReferenceParm)

void ABP_MasterLock_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, bool VerifiedL, bool IsOwnerL, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable_1, bool CallFunc_IsOwner_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_1, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_1, class FText K2Node_Select_Default, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_2, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue, class FText K2Node_Select_Default_1, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_3, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK PossibleActions");

	Params::ABP_MasterLock_C_SGK_PossibleActions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.VerifiedL = VerifiedL;
	Parms.IsOwnerL = IsOwnerL;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsOwner_ReturnValue = CallFunc_IsOwner_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeStruct_S_WorldAction = K2Node_MakeStruct_S_WorldAction;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_S_WorldAction_1 = K2Node_MakeStruct_S_WorldAction_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_S_WorldAction_2 = K2Node_MakeStruct_S_WorldAction_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_S_WorldAction_3 = K2Node_MakeStruct_S_WorldAction_3;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionsFound != nullptr)
		*ActionsFound = Parms.ActionsFound;

	if (PossibleActions != nullptr)
		*PossibleActions = std::move(Parms.PossibleActions);

}


// Function BP_MasterLock.BP_MasterLock_C.SGK AllowInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowInteraction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK AllowInteraction");

	Params::ABP_MasterLock_C_SGK_AllowInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowInteraction != nullptr)
		*AllowInteraction = Parms.AllowInteraction;

}


// Function BP_MasterLock.BP_MasterLock_C.SGK Interact
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldActions          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwner_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwner_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVerifiedPlayer_IsVerified                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterLock_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOwner_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class USoundBase* K2Node_Select_Default, bool CallFunc_IsOwner_ReturnValue_1, bool CallFunc_IsVerifiedPlayer_IsVerified)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK Interact");

	Params::ABP_MasterLock_C_SGK_Interact_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsOwner_ReturnValue = CallFunc_IsOwner_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsOwner_ReturnValue_1 = CallFunc_IsOwner_ReturnValue_1;
	Parms.CallFunc_IsVerifiedPlayer_IsVerified = CallFunc_IsVerifiedPlayer_IsVerified;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterLock.BP_MasterLock_C.LoadExtraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "LoadExtraData");

	Params::ABP_MasterLock_C_LoadExtraData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterLock.BP_MasterLock_C.LockEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::LockEffects(bool Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "LockEffects");

	Params::ABP_MasterLock_C_LockEffects_Params Parms{};

	Parms.Locked = Locked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterLock.BP_MasterLock_C.SGK BuildPartPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               FromSaveGame                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "SGK BuildPartPlaced");

	Params::ABP_MasterLock_C_SGK_BuildPartPlaced_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.FromSaveGame = FromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterLock.BP_MasterLock_C.ExecuteUbergraph_BP_MasterLock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LoadLockData_OwnerLocation                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Locked                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_Event_PlayerInventory                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FromSaveGame                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterLock_C::ExecuteUbergraph_BP_MasterLock(int32 EntryPoint, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, const struct FVector& CallFunc_LoadLockData_OwnerLocation, bool K2Node_CustomEvent_Locked, class UBP_PlayerInventory_C* K2Node_Event_PlayerInventory, bool K2Node_Event_FromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterLock_C", "ExecuteUbergraph_BP_MasterLock");

	Params::ABP_MasterLock_C_ExecuteUbergraph_BP_MasterLock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_LoadLockData_OwnerLocation = CallFunc_LoadLockData_OwnerLocation;
	Parms.K2Node_CustomEvent_Locked = K2Node_CustomEvent_Locked;
	Parms.K2Node_Event_PlayerInventory = K2Node_Event_PlayerInventory;
	Parms.K2Node_Event_FromSaveGame = K2Node_Event_FromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}

}


