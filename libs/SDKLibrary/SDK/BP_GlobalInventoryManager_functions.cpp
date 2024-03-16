#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GlobalInventoryManager.BP_GlobalInventoryManager_C
// (Actor)

class UClass* ABP_GlobalInventoryManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GlobalInventoryManager_C");

	return Clss;
}


// BP_GlobalInventoryManager_C BP_GlobalInventoryManager.Default__BP_GlobalInventoryManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GlobalInventoryManager_C* ABP_GlobalInventoryManager_C::GetDefaultObj()
{
	static class ABP_GlobalInventoryManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GlobalInventoryManager_C*>(ABP_GlobalInventoryManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.DestroyItemInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       MasterInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::DestroyItemInventory(class UBP_MasterInventory_C* MasterInventory, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "DestroyItemInventory");

	Params::ABP_GlobalInventoryManager_C_DestroyItemInventory_Params Parms{};

	Parms.MasterInventory = MasterInventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_SelectAttachmentItem_IsValid = CallFunc_SelectAttachmentItem_IsValid;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue = CallFunc_SelectAttachmentItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ClearContainerInventories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::ClearContainerInventories(int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UBP_MasterInventory_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_MasterInventory_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "ClearContainerInventories");

	Params::ABP_GlobalInventoryManager_C_ClearContainerInventories_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddDefaults                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddStartingItems                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rotated                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Replicated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  NewItem                                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  CreatedItemL                                                     (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CallFunc_CreateNewInventory_Inventory                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemConsumableDetails_ItemFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConsumableDetails        CallFunc_SGK_ItemConsumableDetails_ItemDetails                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemContainerDetails_ItemFound                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         CallFunc_SGK_ItemContainerDetails_ItemContainerDetails           (ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CallFunc_CreateNewInventory_Inventory_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       CallFunc_CreateNewWeaponInventory_WeaponInventory                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails                 (HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::CreateNewItem(class FName ItemId, int32 Amount, bool AddDefaults, bool AddStartingItems, bool Rotated, bool Replicated, struct FS_InvItem* NewItem, const struct FS_InvItem& CreatedItemL, const struct FS_ItemDetails& ItemDetailsL, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool Temp_bool_Variable, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, class UBP_MasterInventory_C* CallFunc_CreateNewInventory_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_ItemConsumableDetails_ItemFound, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails, bool CallFunc_SGK_ItemContainerDetails_ItemFound, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails, class UBP_MasterInventory_C* CallFunc_CreateNewInventory_Inventory_1, bool CallFunc_IsValid_ReturnValue_1, class UBP_WeaponInventory_C* CallFunc_CreateNewWeaponInventory_WeaponInventory, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "CreateNewItem");

	Params::ABP_GlobalInventoryManager_C_CreateNewItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.AddDefaults = AddDefaults;
	Parms.AddStartingItems = AddStartingItems;
	Parms.Rotated = Rotated;
	Parms.Replicated = Replicated;
	Parms.CreatedItemL = CreatedItemL;
	Parms.ItemDetailsL = ItemDetailsL;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_CreateNewInventory_Inventory = CallFunc_CreateNewInventory_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemFound = CallFunc_SGK_ItemConsumableDetails_ItemFound;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemDetails = CallFunc_SGK_ItemConsumableDetails_ItemDetails;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemFound = CallFunc_SGK_ItemContainerDetails_ItemFound;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemContainerDetails = CallFunc_SGK_ItemContainerDetails_ItemContainerDetails;
	Parms.CallFunc_CreateNewInventory_Inventory_1 = CallFunc_CreateNewInventory_Inventory_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateNewWeaponInventory_WeaponInventory = CallFunc_CreateNewWeaponInventory_WeaponInventory;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound = CallFunc_SGK_DurabilityDetails_ItemFound;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails = CallFunc_SGK_DurabilityDetails_DurabilityDetails;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewItem != nullptr)
		*NewItem = std::move(Parms.NewItem);

}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewWeaponInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Replicate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowStartingItems                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       WeaponInventory                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         WeaponInvDetailsL                                                (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       NewWeaponInventoryL                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::CreateNewWeaponInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_WeaponInventory_C** WeaponInventory, const struct FS_ContainerDetails& WeaponInvDetailsL, class UBP_WeaponInventory_C* NewWeaponInventoryL, const struct FTransform& Temp_struct_Variable, class UBP_WeaponInventory_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 CallFunc_Array_Add_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "CreateNewWeaponInventory");

	Params::ABP_GlobalInventoryManager_C_CreateNewWeaponInventory_Params Parms{};

	Parms.Item = Item;
	Parms.Replicate = Replicate;
	Parms.AllowStartingItems = AllowStartingItems;
	Parms.WeaponInvDetailsL = WeaponInvDetailsL;
	Parms.NewWeaponInventoryL = NewWeaponInventoryL;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon = K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponInventory != nullptr)
		*WeaponInventory = Parms.WeaponInventory;

}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Replicate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowStartingItems                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       Inventory                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         ContainerDetailsL                                                (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       NewInvL                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::CreateNewInventory(const struct FS_InvItem& Item, bool Replicate, bool AllowStartingItems, class UBP_MasterInventory_C** Inventory, const struct FS_ContainerDetails& ContainerDetailsL, class UBP_MasterInventory_C* NewInvL, const struct FTransform& Temp_struct_Variable, class UBP_MasterItemInventory_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "CreateNewInventory");

	Params::ABP_GlobalInventoryManager_C_CreateNewInventory_Params Parms{};

	Parms.Item = Item;
	Parms.Replicate = Replicate;
	Parms.AllowStartingItems = AllowStartingItems;
	Parms.ContainerDetailsL = ContainerDetailsL;
	Parms.NewInvL = NewInvL;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Inventory != nullptr)
		*Inventory = Parms.Inventory;

}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.InitializeGlobalInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GlobalInventoryManager_C::InitializeGlobalInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "InitializeGlobalInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.LoadSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::LoadSave(class UBP_SGKSaveGame_C* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "LoadSave");

	Params::ABP_GlobalInventoryManager_C_LoadSave_Params Parms{};

	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ExecuteUbergraph_BP_GlobalInventoryManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SaveSystem_C*            CallFunc_SGK_GetSaveGame_SaveGame                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalInventoryManager_C::ExecuteUbergraph_BP_GlobalInventoryManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class UBP_SGKSaveGame_C* K2Node_CustomEvent_SaveGame, class ABP_SaveSystem_C* CallFunc_SGK_GetSaveGame_SaveGame, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlobalInventoryManager_C", "ExecuteUbergraph_BP_GlobalInventoryManager");

	Params::ABP_GlobalInventoryManager_C_ExecuteUbergraph_BP_GlobalInventoryManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.CallFunc_SGK_GetSaveGame_SaveGame = CallFunc_SGK_GetSaveGame_SaveGame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


