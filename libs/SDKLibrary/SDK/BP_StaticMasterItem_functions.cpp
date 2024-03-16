#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StaticMasterItem.BP_StaticMasterItem_C
// (Actor)

class UClass* ABP_StaticMasterItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StaticMasterItem_C");

	return Clss;
}


// BP_StaticMasterItem_C BP_StaticMasterItem.Default__BP_StaticMasterItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StaticMasterItem_C* ABP_StaticMasterItem_C::GetDefaultObj()
{
	static class ABP_StaticMasterItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StaticMasterItem_C*>(ABP_StaticMasterItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK GetVerifiedPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                VerifiedPlayers                                                  (Parm, OutParm)

void ABP_StaticMasterItem_C::SGK_GetVerifiedPlayers(TArray<class FText>* VerifiedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK GetVerifiedPlayers");

	Params::ABP_StaticMasterItem_C_SGK_GetVerifiedPlayers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VerifiedPlayers != nullptr)
		*VerifiedPlayers = std::move(Parms.VerifiedPlayers);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK UpdateCode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_StaticMasterItem_C::SGK_UpdateCode(class FText Code)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK UpdateCode");

	Params::ABP_StaticMasterItem_C_SGK_UpdateCode_Params Parms{};

	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK VerifyPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_StaticMasterItem_C::SGK_VerifyPlayer(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK VerifyPlayer");

	Params::ABP_StaticMasterItem_C_SGK_VerifyPlayer_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK CodeCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CodeAccepted                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_CodeCheck(class FText Code, bool* CodeAccepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK CodeCheck");

	Params::ABP_StaticMasterItem_C_SGK_CodeCheck_Params Parms{};

	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

	if (CodeAccepted != nullptr)
		*CodeAccepted = Parms.CodeAccepted;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK Mesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_Mesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK Mesh");

	Params::ABP_StaticMasterItem_C_SGK_Mesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK ItemAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_ItemAmount(int32* Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK ItemAmount");

	Params::ABP_StaticMasterItem_C_SGK_ItemAmount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK EndInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_StaticMasterItem_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK EndInteraction");

	Params::ABP_StaticMasterItem_C_SGK_EndInteraction_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK InvItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsItem                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  InvItem                                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  CombineItemsL                                                    (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem, const struct FS_InvItem& CombineItemsL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK InvItem");

	Params::ABP_StaticMasterItem_C_SGK_InvItem_Params Parms{};

	Parms.CombineItemsL = CombineItemsL;

	UObject::ProcessEvent(Func, &Parms);

	if (IsItem != nullptr)
		*IsItem = Parms.IsItem;

	if (InvItem != nullptr)
		*InvItem = std::move(Parms.InvItem);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK DropItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Dropped                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Spawned                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SaveLoaded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  ItemL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_StaticMasterItem_C::SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded, const struct FS_InvItem& ItemL, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStandalone_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK DropItem");

	Params::ABP_StaticMasterItem_C_SGK_DropItem_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.Dropped = Dropped;
	Parms.Spawned = Spawned;
	Parms.SaveLoaded = SaveLoaded;
	Parms.ItemL = ItemL;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue_1 = CallFunc_IsStandalone_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK InteractName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InteractName                                                     (Parm, OutParm)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_InteractName(class FText* InteractName, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK InteractName");

	Params::ABP_StaticMasterItem_C_SGK_InteractName_Params Parms{};

	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractName != nullptr)
		*InteractName = Parms.InteractName;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK PossibleActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ActionsFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      PossibleActions                                                  (Parm, OutParm)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK PossibleActions");

	Params::ABP_StaticMasterItem_C_SGK_PossibleActions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionsFound != nullptr)
		*ActionsFound = Parms.ActionsFound;

	if (PossibleActions != nullptr)
		*PossibleActions = std::move(Parms.PossibleActions);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK AllowInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowInteraction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_AllowInteraction(bool* AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK AllowInteraction");

	Params::ABP_StaticMasterItem_C_SGK_AllowInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowInteraction != nullptr)
		*AllowInteraction = Parms.AllowInteraction;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK Interact
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldActions          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_StaticMasterItem_C::SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK Interact");

	Params::ABP_StaticMasterItem_C_SGK_Interact_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.OnRep_Mesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::OnRep_Mesh(bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "OnRep_Mesh");

	Params::ABP_StaticMasterItem_C_OnRep_Mesh_Params Parms{};

	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.ItemDecay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_DecayDetails             DecayDetailsL                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory_1                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory_2                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInteractionInterface_C>K2Node_DynamicCast_AsBP_SGKInteraction_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DropItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_2                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails                 (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::ItemDecay(const struct FS_DecayDetails& DecayDetailsL, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory_2, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SGK_DropItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound_2, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_2, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "ItemDecay");

	Params::ABP_StaticMasterItem_C_ItemDecay_Params Parms{};

	Parms.DecayDetailsL = DecayDetailsL;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory_1 = CallFunc_SGK_GetGlobalInventory_GlobalInventory_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory_2 = CallFunc_SGK_GetGlobalInventory_GlobalInventory_2;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKInteraction_Interface = K2Node_DynamicCast_AsBP_SGKInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SGK_DropItem_ReturnValue = CallFunc_SGK_DropItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_2 = CallFunc_SGK_ItemDetails_ItemFound_2;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_2 = CallFunc_SGK_ItemDetails_ItemDetails_2;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound = CallFunc_SGK_DurabilityDetails_ItemFound;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails = CallFunc_SGK_DurabilityDetails_DurabilityDetails;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.ActionCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_WorldAction>      ItemActons                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class E_WorldActions          ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WorldAction              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_StaticMasterItem_C::ActionCheck(TArray<struct FS_WorldAction>& ItemActons, enum class E_WorldActions ActionType, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_WorldAction& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "ActionCheck");

	Params::ABP_StaticMasterItem_C_ActionCheck_Params Parms{};

	Parms.ItemActons = ItemActons;
	Parms.ActionType = ActionType;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.ItemOffsets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TransformTransform_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::ItemOffsets(const struct FS_ItemDetails& ItemDetailsL, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_EqualEqual_TransformTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "ItemOffsets");

	Params::ABP_StaticMasterItem_C_ItemOffsets_Params Parms{};

	Parms.ItemDetailsL = ItemDetailsL;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_EqualEqual_TransformTransform_ReturnValue = CallFunc_EqualEqual_TransformTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.InteractActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldActions          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartAmountL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_ActionCheck_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_2                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InAction_InAction                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::InteractActions(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, int32 StartAmountL, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_ActionCheck_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound_2, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_InAction_InAction, bool CallFunc_IsStandalone_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "InteractActions");

	Params::ABP_StaticMasterItem_C_InteractActions_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Action = Action;
	Parms.StartAmountL = StartAmountL;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_ActionCheck_ReturnValue = CallFunc_ActionCheck_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_2 = CallFunc_SGK_ItemDetails_ItemFound_2;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_2 = CallFunc_SGK_ItemDetails_ItemDetails_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_InAction_InAction = CallFunc_InAction_InAction;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.Hold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToPickupHold_ItemHeld                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToPickupHold_ItemAdded                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::Hold(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_AttemptToPickupHold_ItemHeld, bool CallFunc_AttemptToPickupHold_ItemAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "Hold");

	Params::ABP_StaticMasterItem_C_Hold_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_AttemptToPickupHold_ItemHeld = CallFunc_AttemptToPickupHold_ItemHeld;
	Parms.CallFunc_AttemptToPickupHold_ItemAdded = CallFunc_AttemptToPickupHold_ItemAdded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.Learn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemRecipeDetails_ItemFound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RecipeDetails            CallFunc_SGK_ItemRecipeDetails_ItemRecipeDetails                 (HasGetValueTypeHash)
// bool                               CallFunc_LearnAllItemRecipes_RecipeLearnt                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::Learn(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_SGK_ItemRecipeDetails_ItemFound, const struct FS_RecipeDetails& CallFunc_SGK_ItemRecipeDetails_ItemRecipeDetails, bool CallFunc_LearnAllItemRecipes_RecipeLearnt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "Learn");

	Params::ABP_StaticMasterItem_C_Learn_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_SGK_ItemRecipeDetails_ItemFound = CallFunc_SGK_ItemRecipeDetails_ItemFound;
	Parms.CallFunc_SGK_ItemRecipeDetails_ItemRecipeDetails = CallFunc_SGK_ItemRecipeDetails_ItemRecipeDetails;
	Parms.CallFunc_LearnAllItemRecipes_RecipeLearnt = CallFunc_LearnAllItemRecipes_RecipeLearnt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.Consume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  ConsumedItemL                                                    (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemConsumableDetails_ItemFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConsumableDetails        CallFunc_SGK_ItemConsumableDetails_ItemDetails                   (NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInteractionInterface_C>K2Node_DynamicCast_AsBP_SGKInteraction_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DropItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemConsumableDetails_ItemFound_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConsumableDetails        CallFunc_SGK_ItemConsumableDetails_ItemDetails_1                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConsumeItem_Consumed                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateItemUseAmount_ItemEmpty                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_UpdateItemUseAmount_ItemOut                             (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::Consume(class UBP_PlayerInventory_C* PlayerInventory, const struct FS_InvItem& ConsumedItemL, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, bool CallFunc_SGK_ItemConsumableDetails_ItemFound, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_DropItem_ReturnValue, bool CallFunc_SGK_ItemConsumableDetails_ItemFound_1, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_ConsumeItem_Consumed, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_UpdateItemUseAmount_ItemEmpty, const struct FS_InvItem& CallFunc_UpdateItemUseAmount_ItemOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "Consume");

	Params::ABP_StaticMasterItem_C_Consume_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.ConsumedItemL = ConsumedItemL;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemFound = CallFunc_SGK_ItemConsumableDetails_ItemFound;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemDetails = CallFunc_SGK_ItemConsumableDetails_ItemDetails;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKInteraction_Interface = K2Node_DynamicCast_AsBP_SGKInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_DropItem_ReturnValue = CallFunc_SGK_DropItem_ReturnValue;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemFound_1 = CallFunc_SGK_ItemConsumableDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemDetails_1 = CallFunc_SGK_ItemConsumableDetails_ItemDetails_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_ConsumeItem_Consumed = CallFunc_ConsumeItem_Consumed;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_UpdateItemUseAmount_ItemEmpty = CallFunc_UpdateItemUseAmount_ItemEmpty;
	Parms.CallFunc_UpdateItemUseAmount_ItemOut = CallFunc_UpdateItemUseAmount_ItemOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::Open(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "Open");

	Params::ABP_StaticMasterItem_C_Open_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.EquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToEquipWeapon_WeaponEquipped                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WeaponSlots           CallFunc_AttemptToEquipWeapon_ItemWeaponSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::EquipWeapon(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AttemptToEquipWeapon_WeaponEquipped, enum class E_WeaponSlots CallFunc_AttemptToEquipWeapon_ItemWeaponSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "EquipWeapon");

	Params::ABP_StaticMasterItem_C_EquipWeapon_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AttemptToEquipWeapon_WeaponEquipped = CallFunc_AttemptToEquipWeapon_WeaponEquipped;
	Parms.CallFunc_AttemptToEquipWeapon_ItemWeaponSlot = CallFunc_AttemptToEquipWeapon_ItemWeaponSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.EquipClothing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToEquipItem_ItemEquipped                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::EquipClothing(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AttemptToEquipItem_ItemEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "EquipClothing");

	Params::ABP_StaticMasterItem_C_EquipClothing_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AttemptToEquipItem_ItemEquipped = CallFunc_AttemptToEquipItem_ItemEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.Pickup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              StartAmountL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_ItemSound_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_ItemSound_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItem_RemainingItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AttemptToAddItem_RemainingInvItem                       (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AttemptToAddItem_NewItemSlot                            (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::Pickup(class UBP_PlayerInventory_C* PlayerInventory, int32 StartAmountL, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_ItemSound_self_CastInput, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_ItemSound_self_CastInput_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_AttemptToAddItem_RemainingItem, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "Pickup");

	Params::ABP_StaticMasterItem_C_Pickup_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.StartAmountL = StartAmountL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SGK_ItemSound_self_CastInput = CallFunc_SGK_ItemSound_self_CastInput;
	Parms.CallFunc_SGK_ItemSound_self_CastInput_1 = CallFunc_SGK_ItemSound_self_CastInput_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_AttemptToAddItem_RemainingItem = CallFunc_AttemptToAddItem_RemainingItem;
	Parms.CallFunc_AttemptToAddItem_RemainingInvItem = CallFunc_AttemptToAddItem_RemainingInvItem;
	Parms.CallFunc_AttemptToAddItem_NewItemSlot = CallFunc_AttemptToAddItem_NewItemSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::Interact(class UBP_PlayerInventory_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "Interact");

	Params::ABP_StaticMasterItem_C_Interact_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::UserConstructionScript(bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "UserConstructionScript");

	Params::ABP_StaticMasterItem_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK SetVerifiedPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                VerifiedPlayers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_StaticMasterItem_C::SGK_SetVerifiedPlayers(TArray<class FText>& VerifiedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK SetVerifiedPlayers");

	Params::ABP_StaticMasterItem_C_SGK_SetVerifiedPlayers_Params Parms{};

	Parms.VerifiedPlayers = VerifiedPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK TurnedOnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnedOn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK TurnedOnEffect");

	Params::ABP_StaticMasterItem_C_SGK_TurnedOnEffect_Params Parms{};

	Parms.TurnedOn = TurnedOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StaticMasterItem_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK PlayerOutProximity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StaticMasterItem_C::SGK_PlayerOutProximity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK PlayerOutProximity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGK PlayerInProximity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StaticMasterItem_C::SGK_PlayerInProximity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGK PlayerInProximity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.CreateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GlobalInventoryManager_C*InventoryManager                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::CreateItem(class ABP_GlobalInventoryManager_C* InventoryManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "CreateItem");

	Params::ABP_StaticMasterItem_C_CreateItem_Params Parms{};

	Parms.InventoryManager = InventoryManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SaveNotValid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StaticMasterItem_C::SaveNotValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SaveNotValid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.LoadItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::LoadItem(class UBP_SGKSaveGame_C* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "LoadItem");

	Params::ABP_StaticMasterItem_C_LoadItem_Params Parms{};

	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StaticMasterItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.DropDestroyTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StaticMasterItem_C::DropDestroyTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "DropDestroyTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.SGKSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           Save                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "SGKSave");

	Params::ABP_StaticMasterItem_C_SGKSave_Params Parms{};

	Parms.Save = Save;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StaticMasterItem.BP_StaticMasterItem_C.ExecuteUbergraph_BP_StaticMasterItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               K2Node_Event_TurnedOn                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*K2Node_CustomEvent_InventoryManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails                 (HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_Event_VerifiedPlayers                                     (ReferenceParm)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_SaveSystem_C*            CallFunc_SGK_GetSaveGame_SaveGame                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameModeInitComponent_C* CallFunc_SGK_GetInitComponent_InitComponent                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_Event_Save                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StaticMasterItem_C::ExecuteUbergraph_BP_StaticMasterItem(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, bool K2Node_Event_TurnedOn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class ABP_GlobalInventoryManager_C* K2Node_CustomEvent_InventoryManager, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TArray<class FText>& K2Node_Event_VerifiedPlayers, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_IsStandalone_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UBP_SGKSaveGame_C* K2Node_CustomEvent_SaveGame, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, class ABP_SaveSystem_C* CallFunc_SGK_GetSaveGame_SaveGame, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class UBP_GameModeInitComponent_C* CallFunc_SGK_GetInitComponent_InitComponent, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UBP_SGKSaveGame_C* K2Node_Event_Save, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StaticMasterItem_C", "ExecuteUbergraph_BP_StaticMasterItem");

	Params::ABP_StaticMasterItem_C_ExecuteUbergraph_BP_StaticMasterItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Event_TurnedOn = K2Node_Event_TurnedOn;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_InventoryManager = K2Node_CustomEvent_InventoryManager;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound = CallFunc_SGK_DurabilityDetails_ItemFound;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails = CallFunc_SGK_DurabilityDetails_DurabilityDetails;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_VerifiedPlayers = K2Node_Event_VerifiedPlayers;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue_1 = CallFunc_IsStandalone_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_GetSaveGame_SaveGame = CallFunc_SGK_GetSaveGame_SaveGame;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SGK_GetInitComponent_InitComponent = CallFunc_SGK_GetInitComponent_InitComponent;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_Save = K2Node_Event_Save;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


