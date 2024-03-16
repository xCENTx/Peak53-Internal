#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlotPole.BP_PlotPole_C
// (Actor)

class UClass* ABP_PlotPole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlotPole_C");

	return Clss;
}


// BP_PlotPole_C BP_PlotPole.Default__BP_PlotPole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlotPole_C* ABP_PlotPole_C::GetDefaultObj()
{
	static class ABP_PlotPole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlotPole_C*>(ABP_PlotPole_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlotPole.BP_PlotPole_C.HasMaxOwners
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PlotPole_C::HasMaxOwners(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlotPole_C", "HasMaxOwners");

	Params::ABP_PlotPole_C_HasMaxOwners_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlotPole.BP_PlotPole_C.UpdateBuildPartsOwners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clear                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_ComponentOverlapActors_OutActors                        (ReferenceParm)
// bool                               CallFunc_ComponentOverlapActors_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKBuildingInterface_C>K2Node_DynamicCast_AsBP_SGKBuilding_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_AddMultipleOwners_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKBuildingInterface_C>K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ClearOwners_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterBuildPart_C*       K2Node_DynamicCast_AsBP_Master_Build_Part                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlotPole_C::UpdateBuildPartsOwners(bool Clear, int32 Temp_int_Array_Index_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, TArray<class AActor*>& CallFunc_ComponentOverlapActors_OutActors, bool CallFunc_ComponentOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_AddMultipleOwners_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_ClearOwners_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_MasterBuildPart_C* K2Node_DynamicCast_AsBP_Master_Build_Part, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlotPole_C", "UpdateBuildPartsOwners");

	Params::ABP_PlotPole_C_UpdateBuildPartsOwners_Params Parms{};

	Parms.Clear = Clear;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_ComponentOverlapActors_OutActors = CallFunc_ComponentOverlapActors_OutActors;
	Parms.CallFunc_ComponentOverlapActors_ReturnValue = CallFunc_ComponentOverlapActors_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKBuilding_Interface = K2Node_DynamicCast_AsBP_SGKBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_AddMultipleOwners_ReturnValue = CallFunc_SGK_AddMultipleOwners_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1 = K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_ClearOwners_ReturnValue = CallFunc_SGK_ClearOwners_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Build_Part = K2Node_DynamicCast_AsBP_Master_Build_Part;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlotPole.BP_PlotPole_C.SGK PossibleActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ActionsFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      PossibleActions                                                  (Parm, OutParm)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction                                  (HasGetValueTypeHash)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction_1                                (HasGetValueTypeHash)
// struct FS_WorldAction              K2Node_MakeStruct_S_WorldAction_2                                (HasGetValueTypeHash)
// bool                               CallFunc_SGK_PossibleActions_ActionsFound                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      CallFunc_SGK_PossibleActions_PossibleActions                     (ReferenceParm)
// TArray<struct FS_WorldAction>      K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_PlotPole_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_1, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_2, bool CallFunc_SGK_PossibleActions_ActionsFound, TArray<struct FS_WorldAction>& CallFunc_SGK_PossibleActions_PossibleActions, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlotPole_C", "SGK PossibleActions");

	Params::ABP_PlotPole_C_SGK_PossibleActions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.K2Node_MakeStruct_S_WorldAction = K2Node_MakeStruct_S_WorldAction;
	Parms.K2Node_MakeStruct_S_WorldAction_1 = K2Node_MakeStruct_S_WorldAction_1;
	Parms.K2Node_MakeStruct_S_WorldAction_2 = K2Node_MakeStruct_S_WorldAction_2;
	Parms.CallFunc_SGK_PossibleActions_ActionsFound = CallFunc_SGK_PossibleActions_ActionsFound;
	Parms.CallFunc_SGK_PossibleActions_PossibleActions = CallFunc_SGK_PossibleActions_PossibleActions;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionsFound != nullptr)
		*ActionsFound = Parms.ActionsFound;

	if (PossibleActions != nullptr)
		*PossibleActions = std::move(Parms.PossibleActions);

}


// Function BP_PlotPole.BP_PlotPole_C.SGK AllowInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowInteraction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlotPole_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlotPole_C", "SGK AllowInteraction");

	Params::ABP_PlotPole_C_SGK_AllowInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowInteraction != nullptr)
		*AllowInteraction = Parms.AllowInteraction;

}


// Function BP_PlotPole.BP_PlotPole_C.SGK Interact
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldActions          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMaxOwners_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_1                        (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_2                        (HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_3                        (HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_4                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ClearOwners_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_AddOwner_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PlotPole_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool CallFunc_HasMaxOwners_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_2, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_3, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_SGK_ClearOwners_ReturnValue, bool CallFunc_SGK_AddOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlotPole_C", "SGK Interact");

	Params::ABP_PlotPole_C_SGK_Interact_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;
	Parms.CallFunc_HasMaxOwners_ReturnValue = CallFunc_HasMaxOwners_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.K2Node_MakeStruct_S_NotificationDetails_1 = K2Node_MakeStruct_S_NotificationDetails_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails_2 = K2Node_MakeStruct_S_NotificationDetails_2;
	Parms.K2Node_MakeStruct_S_NotificationDetails_3 = K2Node_MakeStruct_S_NotificationDetails_3;
	Parms.K2Node_MakeStruct_S_NotificationDetails_4 = K2Node_MakeStruct_S_NotificationDetails_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_SGK_ClearOwners_ReturnValue = CallFunc_SGK_ClearOwners_ReturnValue;
	Parms.CallFunc_SGK_AddOwner_ReturnValue = CallFunc_SGK_AddOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlotPole.BP_PlotPole_C.SGK BuildPartPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               FromSaveGame                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlotPole_C::SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlotPole_C", "SGK BuildPartPlaced");

	Params::ABP_PlotPole_C_SGK_BuildPartPlaced_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.FromSaveGame = FromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlotPole.BP_PlotPole_C.ExecuteUbergraph_BP_PlotPole
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_Event_PlayerInventory                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FromSaveGame                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_ComponentOverlapActors_OutActors                        (ReferenceParm)
// bool                               CallFunc_ComponentOverlapActors_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKBuildingInterface_C>K2Node_DynamicCast_AsBP_SGKBuilding_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKBuildingInterface_C>K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ClearOwners_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterBuildPart_C*       K2Node_DynamicCast_AsBP_Master_Build_Part                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_AddMultipleOwners_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlotPole_C::ExecuteUbergraph_BP_PlotPole(int32 EntryPoint, class UBP_PlayerInventory_C* K2Node_Event_PlayerInventory, bool K2Node_Event_FromSaveGame, int32 Temp_int_Array_Index_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_ComponentOverlapActors_OutActors, bool CallFunc_ComponentOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_ClearOwners_ReturnValue, class ABP_MasterBuildPart_C* K2Node_DynamicCast_AsBP_Master_Build_Part, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_SGK_AddMultipleOwners_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlotPole_C", "ExecuteUbergraph_BP_PlotPole");

	Params::ABP_PlotPole_C_ExecuteUbergraph_BP_PlotPole_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerInventory = K2Node_Event_PlayerInventory;
	Parms.K2Node_Event_FromSaveGame = K2Node_Event_FromSaveGame;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_ComponentOverlapActors_OutActors = CallFunc_ComponentOverlapActors_OutActors;
	Parms.CallFunc_ComponentOverlapActors_ReturnValue = CallFunc_ComponentOverlapActors_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKBuilding_Interface = K2Node_DynamicCast_AsBP_SGKBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1 = K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_ClearOwners_ReturnValue = CallFunc_SGK_ClearOwners_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Build_Part = K2Node_DynamicCast_AsBP_Master_Build_Part;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_SGK_AddMultipleOwners_ReturnValue = CallFunc_SGK_AddMultipleOwners_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


