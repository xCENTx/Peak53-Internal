#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodWindowShutters.BP_WoodWindowShutters_C
// (Actor)

class UClass* ABP_WoodWindowShutters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodWindowShutters_C");

	return Clss;
}


// BP_WoodWindowShutters_C BP_WoodWindowShutters.Default__BP_WoodWindowShutters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodWindowShutters_C* ABP_WoodWindowShutters_C::GetDefaultObj()
{
	static class ABP_WoodWindowShutters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodWindowShutters_C*>(ABP_WoodWindowShutters_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.CheckLocks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowOpen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterLock_C*            K2Node_DynamicCast_AsBP_Master_Lock                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CanOpen_AllowOpen                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayerFindKeyItem_Found                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodWindowShutters_C::CheckLocks(bool* AllowOpen, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_MasterLock_C* K2Node_DynamicCast_AsBP_Master_Lock, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_CanOpen_AllowOpen, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_PlayerFindKeyItem_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "CheckLocks");

	Params::ABP_WoodWindowShutters_C_CheckLocks_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Lock = K2Node_DynamicCast_AsBP_Master_Lock;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_CanOpen_AllowOpen = CallFunc_CanOpen_AllowOpen;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_PlayerFindKeyItem_Found = CallFunc_PlayerFindKeyItem_Found;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowOpen != nullptr)
		*AllowOpen = Parms.AllowOpen;

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.SGK InteractName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InteractName                                                     (Parm, OutParm)

void ABP_WoodWindowShutters_C::SGK_InteractName(class FText* InteractName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "SGK InteractName");

	Params::ABP_WoodWindowShutters_C_SGK_InteractName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractName != nullptr)
		*InteractName = Parms.InteractName;

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.SGK PossibleActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ActionsFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      PossibleActions                                                  (Parm, OutParm)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction                                  (HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_WoodWindowShutters_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "SGK PossibleActions");

	Params::ABP_WoodWindowShutters_C_SGK_PossibleActions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.K2Node_MakeStruct_S_WorldAction = K2Node_MakeStruct_S_WorldAction;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionsFound != nullptr)
		*ActionsFound = Parms.ActionsFound;

	if (PossibleActions != nullptr)
		*PossibleActions = std::move(Parms.PossibleActions);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.SGK AllowInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowInteraction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodWindowShutters_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "SGK AllowInteraction");

	Params::ABP_WoodWindowShutters_C_SGK_AllowInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowInteraction != nullptr)
		*AllowInteraction = Parms.AllowInteraction;

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.SGK Interact
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldActions          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_WoodWindowShutters_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "SGK Interact");

	Params::ABP_WoodWindowShutters_C_SGK_Interact_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.Close Animation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_WoodWindowShutters_C::Close_Animation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "Close Animation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.Close Animation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_WoodWindowShutters_C::Close_Animation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "Close Animation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WoodWindowShutters_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.MulticastWindowAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WoodWindowShutters_C::MulticastWindowAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "MulticastWindowAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.SGK BuildPartPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               FromSaveGame                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodWindowShutters_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "SGK BuildPartPlaced");

	Params::ABP_WoodWindowShutters_C_SGK_BuildPartPlaced_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.FromSaveGame = FromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WoodWindowShutters_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.Interact
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WoodWindowShutters_C::Interact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "Interact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodWindowShutters.BP_WoodWindowShutters_C.ExecuteUbergraph_BP_WoodWindowShutters
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UBP_PlayerInventory_C*       K2Node_Event_PlayerInventory                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FromSaveGame                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckLocks_AllowOpen                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// TArray<class AActor*>              CallFunc_FilterArray_FilteredArray                               (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodWindowShutters_C::ExecuteUbergraph_BP_WoodWindowShutters(int32 EntryPoint, bool Temp_bool_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class UBP_PlayerInventory_C* K2Node_Event_PlayerInventory, bool K2Node_Event_FromSaveGame, bool CallFunc_CheckLocks_AllowOpen, bool Temp_bool_Variable_1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_FilterArray_FilteredArray, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodWindowShutters_C", "ExecuteUbergraph_BP_WoodWindowShutters");

	Params::ABP_WoodWindowShutters_C_ExecuteUbergraph_BP_WoodWindowShutters_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.K2Node_Event_PlayerInventory = K2Node_Event_PlayerInventory;
	Parms.K2Node_Event_FromSaveGame = K2Node_Event_FromSaveGame;
	Parms.CallFunc_CheckLocks_AllowOpen = CallFunc_CheckLocks_AllowOpen;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_FilterArray_FilteredArray = CallFunc_FilterArray_FilteredArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


