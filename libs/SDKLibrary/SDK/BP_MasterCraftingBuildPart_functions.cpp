#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C
// (Actor)

class UClass* ABP_MasterCraftingBuildPart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterCraftingBuildPart_C");

	return Clss;
}


// BP_MasterCraftingBuildPart_C BP_MasterCraftingBuildPart.Default__BP_MasterCraftingBuildPart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterCraftingBuildPart_C* ABP_MasterCraftingBuildPart_C::GetDefaultObj()
{
	static class ABP_MasterCraftingBuildPart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterCraftingBuildPart_C*>(ABP_MasterCraftingBuildPart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SGK EndInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterCraftingBuildPart_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SGK EndInteraction");

	Params::ABP_MasterCraftingBuildPart_C_SGK_EndInteraction_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SGK PossibleActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ActionsFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      PossibleActions                                                  (Parm, OutParm)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction                                  (HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_MasterCraftingBuildPart_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SGK PossibleActions");

	Params::ABP_MasterCraftingBuildPart_C_SGK_PossibleActions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.K2Node_MakeStruct_S_WorldAction = K2Node_MakeStruct_S_WorldAction;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionsFound != nullptr)
		*ActionsFound = Parms.ActionsFound;

	if (PossibleActions != nullptr)
		*PossibleActions = std::move(Parms.PossibleActions);

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SGK AllowInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowInteraction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterCraftingBuildPart_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SGK AllowInteraction");

	Params::ABP_MasterCraftingBuildPart_C_SGK_AllowInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowInteraction != nullptr)
		*AllowInteraction = Parms.AllowInteraction;

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SGK Interact
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldActions          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MasterCraftingBuildPart_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SGK Interact");

	Params::ABP_MasterCraftingBuildPart_C_SGK_Interact_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SaveExtraData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ExtraDataIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_PrepareCraftingSaveData_ExtraDataIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_PrepareCraftingSaveData_NewLevelSaveData                (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_MasterCraftingBuildPart_C::SaveExtraData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, int32 CallFunc_PrepareCraftingSaveData_ExtraDataIndex, const struct FS_LevelSaveData& CallFunc_PrepareCraftingSaveData_NewLevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SaveExtraData");

	Params::ABP_MasterCraftingBuildPart_C_SaveExtraData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.LevelSaveData = LevelSaveData;
	Parms.CallFunc_PrepareCraftingSaveData_ExtraDataIndex = CallFunc_PrepareCraftingSaveData_ExtraDataIndex;
	Parms.CallFunc_PrepareCraftingSaveData_NewLevelSaveData = CallFunc_PrepareCraftingSaveData_NewLevelSaveData;

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SGK LoadExtraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterCraftingBuildPart_C::SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SGK LoadExtraData");

	Params::ABP_MasterCraftingBuildPart_C_SGK_LoadExtraData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SGK PlayerOutProximity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterCraftingBuildPart_C::SGK_PlayerOutProximity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SGK PlayerOutProximity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.SGK PlayerInProximity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterCraftingBuildPart_C::SGK_PlayerInProximity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "SGK PlayerInProximity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterCraftingBuildPart.BP_MasterCraftingBuildPart_C.ExecuteUbergraph_BP_MasterCraftingBuildPart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class UBP_SGKSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingSave             CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterCraftingBuildPart_C::ExecuteUbergraph_BP_MasterCraftingBuildPart(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class UBP_SGKSaveGame_C* K2Node_Event_SaveGame, int32 K2Node_Event_Index, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, const struct FS_CraftingSave& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterCraftingBuildPart_C", "ExecuteUbergraph_BP_MasterCraftingBuildPart");

	Params::ABP_MasterCraftingBuildPart_C_ExecuteUbergraph_BP_MasterCraftingBuildPart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


