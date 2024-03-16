#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterInventory.BP_MasterInventory_C
// (None)

class UClass* UBP_MasterInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterInventory_C");

	return Clss;
}


// BP_MasterInventory_C BP_MasterInventory.Default__BP_MasterInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MasterInventory_C* UBP_MasterInventory_C::GetDefaultObj()
{
	static class UBP_MasterInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MasterInventory_C*>(UBP_MasterInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK AllowStartingItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowStartingItems                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK AllowStartingItems");

	Params::UBP_MasterInventory_C_SGK_AllowStartingItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = Parms.AllowStartingItems;

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK SelfItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  SelfItem                                                         (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_SelfItem(struct FS_InvItem* SelfItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK SelfItem");

	Params::UBP_MasterInventory_C_SGK_SelfItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelfItem != nullptr)
		*SelfItem = std::move(Parms.SelfItem);

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateItemInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  ItemL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_InventoryItemIcon_C*>CallFunc_FindGridIcon_IconWidget                                 (ReferenceParm, ContainsInstancedReference)
// class UBP_InventoryItemIcon_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateItemInventory(const struct FS_InvItem& ItemL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UBP_InventoryItemIcon_C*>& CallFunc_FindGridIcon_IconWidget, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateItemInventory");

	Params::UBP_MasterInventory_C_UpdateItemInventory_Params Parms{};

	Parms.ItemL = ItemL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindGridIcon_IconWidget = CallFunc_FindGridIcon_IconWidget;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CheckFreeSlotCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FreeSlots                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FreeSlotsL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CheckFreeSlotCount(int32* FreeSlots, int32 FreeSlotsL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CheckFreeSlotCount");

	Params::UBP_MasterInventory_C_CheckFreeSlotCount_Params Parms{};

	Parms.FreeSlotsL = FreeSlotsL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FreeSlots != nullptr)
		*FreeSlots = Parms.FreeSlots;

}


// Function BP_MasterInventory.BP_MasterInventory_C.FindItemWithUseAmountLeft
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemIDs                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               FoundItem                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  ItemSlot                                                         (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::FindItemWithUseAmountLeft(TArray<class FName>& ItemIDs, bool* FoundItem, struct FS_InvSlot* ItemSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "FindItemWithUseAmountLeft");

	Params::UBP_MasterInventory_C_FindItemWithUseAmountLeft_Params Parms{};

	Parms.ItemIDs = ItemIDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundItem != nullptr)
		*FoundItem = Parms.FoundItem;

	if (ItemSlot != nullptr)
		*ItemSlot = std::move(Parms.ItemSlot);

}


// Function BP_MasterInventory.BP_MasterInventory_C.FindNotFullUseAmountItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemIDs                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               FoundItem                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  ItemSlot                                                         (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::FindNotFullUseAmountItems(TArray<class FName>& ItemIDs, bool* FoundItem, struct FS_InvSlot* ItemSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "FindNotFullUseAmountItems");

	Params::UBP_MasterInventory_C_FindNotFullUseAmountItems_Params Parms{};

	Parms.ItemIDs = ItemIDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundItem != nullptr)
		*FoundItem = Parms.FoundItem;

	if (ItemSlot != nullptr)
		*ItemSlot = std::move(Parms.ItemSlot);

}


// Function BP_MasterInventory.BP_MasterInventory_C.FindKeyItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        KeyCode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemConsumableDetails_ItemFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConsumableDetails        CallFunc_SGK_ItemConsumableDetails_ItemDetails                   (NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::FindKeyItem(class FName KeyCode, bool* Found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SGK_ItemConsumableDetails_ItemFound, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "FindKeyItem");

	Params::UBP_MasterInventory_C_FindKeyItem_Params Parms{};

	Parms.KeyCode = KeyCode;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemFound = CallFunc_SGK_ItemConsumableDetails_ItemFound;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemDetails = CallFunc_SGK_ItemConsumableDetails_ItemDetails;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function BP_MasterInventory.BP_MasterInventory_C.ItemDecay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  ItemL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DecayDetails             DecayDetailsL                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  ElementL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>K2Node_DynamicCast_AsBP_SGKInventory_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory_1                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_RemainingItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AddItem_RemainingInvItem                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AddItem_NewItemSlot                                     (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails                 (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ItemDecay(const struct FS_InvItem& ItemL, const struct FS_DecayDetails& DecayDetailsL, const struct FS_InvSlot& ElementL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface, bool K2Node_DynamicCast_bSuccess_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory_1, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ItemDecay");

	Params::UBP_MasterInventory_C_ItemDecay_Params Parms{};

	Parms.ItemL = ItemL;
	Parms.DecayDetailsL = DecayDetailsL;
	Parms.ElementL = ElementL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKInventory_Interface = K2Node_DynamicCast_AsBP_SGKInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory_1 = CallFunc_SGK_GetGlobalInventory_GlobalInventory_1;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_AddItem_RemainingItem = CallFunc_AddItem_RemainingItem;
	Parms.CallFunc_AddItem_RemainingInvItem = CallFunc_AddItem_RemainingInvItem;
	Parms.CallFunc_AddItem_NewItemSlot = CallFunc_AddItem_NewItemSlot;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound = CallFunc_SGK_DurabilityDetails_ItemFound;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails = CallFunc_SGK_DurabilityDetails_DurabilityDetails;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.DestroyContainingInventories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::DestroyContainingInventories(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "DestroyContainingInventories");

	Params::UBP_MasterInventory_C_DestroyContainingInventories_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CloseOtherPlayerTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CloseOtherPlayerTabs(class UBP_PlayerInventory_C* Player, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CloseOtherPlayerTabs");

	Params::UBP_MasterInventory_C_CloseOtherPlayerTabs_Params Parms{};

	Parms.Player = Player;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.StartItemEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::StartItemEquipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "StartItemEquipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ReplicateContainingInventories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Replicate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_AllItems_RootSlots                                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ReplicateContainingInventories(bool Replicate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, TArray<struct FS_InvSlot>& CallFunc_AllItems_RootSlots, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ReplicateContainingInventories");

	Params::UBP_MasterInventory_C_ReplicateContainingInventories_Params Parms{};

	Parms.Replicate = Replicate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_AllItems_RootSlots = CallFunc_AllItems_RootSlots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateInvSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>          InvSlots                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          UpdatedSlots                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FS_InvSlot>          UpdatedSlotsL                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               OccupiedL                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RootL                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ArrayElementL                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_2                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_3                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateInvSlots(TArray<struct FS_InvSlot>& InvSlots, const struct FS_InvItem& InvItem, TArray<struct FS_InvSlot>* UpdatedSlots, const TArray<struct FS_InvSlot>& UpdatedSlotsL, bool OccupiedL, int32 RootL, int32 ArrayElementL, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_2, const struct FS_InvSlot& CallFunc_Array_Get_Item_3, int32 K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateInvSlots");

	Params::UBP_MasterInventory_C_UpdateInvSlots_Params Parms{};

	Parms.InvSlots = InvSlots;
	Parms.InvItem = InvItem;
	Parms.UpdatedSlotsL = UpdatedSlotsL;
	Parms.OccupiedL = OccupiedL;
	Parms.RootL = RootL;
	Parms.ArrayElementL = ArrayElementL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (UpdatedSlots != nullptr)
		*UpdatedSlots = std::move(Parms.UpdatedSlots);

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateAllPlayersRootItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FullUpdate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_PlayerInventory_C*>EffectedPlayers                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FS_InvSlot>          RootSlotsL                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvSlot                  SlotL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_AllItems_RootSlots                                      (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSlot>          CallFunc_AllItems_RootSlots_1                                    (ReferenceParm, ContainsInstancedReference)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateAllPlayersRootItems(bool FullUpdate, class UBP_MasterInventory_C* NewLocalVar_0, const TArray<class UBP_PlayerInventory_C*>& EffectedPlayers, const TArray<struct FS_InvSlot>& RootSlotsL, const struct FS_InvSlot& SlotL, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<struct FS_InvSlot>& CallFunc_AllItems_RootSlots, TArray<struct FS_InvSlot>& CallFunc_AllItems_RootSlots_1, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateAllPlayersRootItems");

	Params::UBP_MasterInventory_C_UpdateAllPlayersRootItems_Params Parms{};

	Parms.FullUpdate = FullUpdate;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.EffectedPlayers = EffectedPlayers;
	Parms.RootSlotsL = RootSlotsL;
	Parms.SlotL = SlotL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_AllItems_RootSlots = CallFunc_AllItems_RootSlots;
	Parms.CallFunc_AllItems_RootSlots_1 = CallFunc_AllItems_RootSlots_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SpawnItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  NewItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              SpawnAmountL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              SpawnItemDetailsL                                                (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              AlwaysSpawnNumOfChecks                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SpawnerList              SpawnItemL                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FS_SpawnerList>      SpawnListL                                                       (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_RemainingItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AddItem_RemainingInvItem                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AddItem_NewItemSlot                                     (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_FindEmptySlots_SpaceFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindEmptySlots_Rotated                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_FindEmptySlots_FoundSlots                               (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_WeightCheck_ExceedsMaxWeight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_1                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_SpawnerList>      CallFunc_ConstructItemSpawnList_SpawnList                        (ReferenceParm)

void UBP_MasterInventory_C::SpawnItems(const struct FS_InvItem& NewItemL, int32 SpawnAmountL, const struct FS_ItemDetails& SpawnItemDetailsL, int32 AlwaysSpawnNumOfChecks, const struct FS_SpawnerList& SpawnItemL, const TArray<struct FS_SpawnerList>& SpawnListL, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_FindEmptySlots_SpaceFound, bool CallFunc_FindEmptySlots_Rotated, TArray<struct FS_InvSlot>& CallFunc_FindEmptySlots_FoundSlots, bool CallFunc_WeightCheck_ExceedsMaxWeight, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, bool CallFunc_RandomBoolWithWeight_ReturnValue, TArray<struct FS_SpawnerList>& CallFunc_ConstructItemSpawnList_SpawnList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SpawnItems");

	Params::UBP_MasterInventory_C_SpawnItems_Params Parms{};

	Parms.NewItemL = NewItemL;
	Parms.SpawnAmountL = SpawnAmountL;
	Parms.SpawnItemDetailsL = SpawnItemDetailsL;
	Parms.AlwaysSpawnNumOfChecks = AlwaysSpawnNumOfChecks;
	Parms.SpawnItemL = SpawnItemL;
	Parms.SpawnListL = SpawnListL;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddItem_RemainingItem = CallFunc_AddItem_RemainingItem;
	Parms.CallFunc_AddItem_RemainingInvItem = CallFunc_AddItem_RemainingInvItem;
	Parms.CallFunc_AddItem_NewItemSlot = CallFunc_AddItem_NewItemSlot;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_FindEmptySlots_SpaceFound = CallFunc_FindEmptySlots_SpaceFound;
	Parms.CallFunc_FindEmptySlots_Rotated = CallFunc_FindEmptySlots_Rotated;
	Parms.CallFunc_FindEmptySlots_FoundSlots = CallFunc_FindEmptySlots_FoundSlots;
	Parms.CallFunc_WeightCheck_ExceedsMaxWeight = CallFunc_WeightCheck_ExceedsMaxWeight;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvItem_1 = K2Node_MakeStruct_S_InvItem_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_ConstructItemSpawnList_SpawnList = CallFunc_ConstructItemSpawnList_SpawnList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SpawnDestructionBag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       InventoryL                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_DestroyedStorageBag_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SpawnDestructionBag(class UBP_MasterInventory_C* InventoryL, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DestroyedStorageBag_C* CallFunc_FinishSpawningActor_ReturnValue, class UBP_MasterInventory_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SpawnDestructionBag");

	Params::UBP_MasterInventory_C_SpawnDestructionBag_Params Parms{};

	Parms.InventoryL = InventoryL;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AddStartingItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_AllowStartingItems_AllowStartingItems               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_RemainingItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AddItem_RemainingInvItem                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AddItem_NewItemSlot                                     (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AddStartingItems(bool* Return, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_SGK_AllowStartingItems_AllowStartingItems, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_CraftingCost& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AddStartingItems");

	Params::UBP_MasterInventory_C_AddStartingItems_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_SGK_AllowStartingItems_AllowStartingItems = CallFunc_SGK_AllowStartingItems_AllowStartingItems;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_AddItem_RemainingItem = CallFunc_AddItem_RemainingItem;
	Parms.CallFunc_AddItem_RemainingInvItem = CallFunc_AddItem_RemainingInvItem;
	Parms.CallFunc_AddItem_NewItemSlot = CallFunc_AddItem_NewItemSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_MasterInventory.BP_MasterInventory_C.AllItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>          RootSlots                                                        (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FS_InvSlot>          RootSlotsL                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvSlot                  SlotL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AllItems(TArray<struct FS_InvSlot>* RootSlots, const TArray<struct FS_InvSlot>& RootSlotsL, const struct FS_InvSlot& SlotL, int32 Temp_int_Array_Index_Variable, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AllItems");

	Params::UBP_MasterInventory_C_AllItems_Params Parms{};

	Parms.RootSlotsL = RootSlotsL;
	Parms.SlotL = SlotL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RootSlots != nullptr)
		*RootSlots = std::move(Parms.RootSlots);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ContainerRestrictionCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Can_Add                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_SelfItem_SelfItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemContainerDetails_ItemFound                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         CallFunc_SGK_ItemContainerDetails_ItemContainerDetails           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_InventoryRestrictionTypeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ContainerRestrictionCheck(class FName ItemId, bool* Can_Add, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_InvItem& CallFunc_SGK_SelfItem_SelfItem, bool CallFunc_SGK_ItemContainerDetails_ItemFound, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_1, enum class E_InventoryRestrictionType K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ContainerRestrictionCheck");

	Params::UBP_MasterInventory_C_ContainerRestrictionCheck_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_SGK_SelfItem_SelfItem = CallFunc_SGK_SelfItem_SelfItem;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemFound = CallFunc_SGK_ItemContainerDetails_ItemFound;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemContainerDetails = CallFunc_SGK_ItemContainerDetails_ItemContainerDetails;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Can_Add != nullptr)
		*Can_Add = Parms.Can_Add;

}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ClearInventory(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ClearInventory");

	Params::UBP_MasterInventory_C_ClearInventory_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.TotalItemAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              TotalAmount                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountL                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  ArrayElementL                                                    (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::TotalItemAmount(const struct FS_InvItem& InvItem, int32* TotalAmount, int32 AmountL, const struct FS_InvSlot& ArrayElementL, int32 Temp_int_Array_Index_Variable, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "TotalItemAmount");

	Params::UBP_MasterInventory_C_TotalItemAmount_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.AmountL = AmountL;
	Parms.ArrayElementL = ArrayElementL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalAmount != nullptr)
		*TotalAmount = Parms.TotalAmount;

}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveItemAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SpecialSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ItemRemoved                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemAmountL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveItemAmount(const struct FS_InvSlot& InvSlot, int32 Amount, bool SpecialSlot, bool* ItemRemoved, int32 ItemAmountL, const struct FS_InvSlot& InvSlotL, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RemoveItemAmount");

	Params::UBP_MasterInventory_C_RemoveItemAmount_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.Amount = Amount;
	Parms.SpecialSlot = SpecialSlot;
	Parms.ItemAmountL = ItemAmountL;
	Parms.InvSlotL = InvSlotL;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRemoved != nullptr)
		*ItemRemoved = Parms.ItemRemoved;

}


// Function BP_MasterInventory.BP_MasterInventory_C.SetNewSlotItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  RootSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               SpecialSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  RootL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_ItemMovedInInventory_self_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_UpdateSpecialSlot_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_ItemMovedInInventory_self_CastInput_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_UpdateSpecialSlot_self_CastInput_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_SlotFinder_FoundSlots                               (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSlot>          CallFunc_UpdateInvSlots_UpdatedSlots                             (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSlot>          CallFunc_UpdateInvSlots_UpdatedSlots_1                           (ReferenceParm, ContainsInstancedReference)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_SlotFinder_FoundSlots_1                             (ReferenceParm, ContainsInstancedReference)

void UBP_MasterInventory_C::SetNewSlotItem(const struct FS_InvSlot& RootSlot, const struct FS_InvItem& NewItem, bool SpecialSlot, const struct FS_InvSlot& RootL, const TArray<struct FS_InvSlot>& FoundSlotsL, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, bool Temp_bool_Variable_3, int32 Temp_int_Variable_3, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_ItemMovedInInventory_self_CastInput, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_UpdateSpecialSlot_self_CastInput, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_ItemMovedInInventory_self_CastInput_1, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_UpdateSpecialSlot_self_CastInput_1, int32 CallFunc_SGK_ItemSize_Height, int32 CallFunc_SGK_ItemSize_Width, int32 CallFunc_SGK_ItemSize_Height_1, int32 CallFunc_SGK_ItemSize_Width_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 CallFunc_SGK_ItemSize_Height_2, int32 CallFunc_SGK_ItemSize_Width_2, int32 K2Node_Select_Default_2, int32 CallFunc_SGK_ItemSize_Height_3, int32 CallFunc_SGK_ItemSize_Width_3, int32 CallFunc_SGK_ItemSize_Height_4, int32 CallFunc_SGK_ItemSize_Width_4, TArray<struct FS_InvSlot>& CallFunc_SGK_SlotFinder_FoundSlots, TArray<struct FS_InvSlot>& CallFunc_UpdateInvSlots_UpdatedSlots, TArray<struct FS_InvSlot>& CallFunc_UpdateInvSlots_UpdatedSlots_1, const struct FS_InvSlot& CallFunc_Array_Get_Item, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_SGK_ItemSize_Height_5, int32 CallFunc_SGK_ItemSize_Width_5, int32 K2Node_Select_Default_3, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FS_InvSlot>& CallFunc_SGK_SlotFinder_FoundSlots_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SetNewSlotItem");

	Params::UBP_MasterInventory_C_SetNewSlotItem_Params Parms{};

	Parms.RootSlot = RootSlot;
	Parms.NewItem = NewItem;
	Parms.SpecialSlot = SpecialSlot;
	Parms.RootL = RootL;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_SGK_ItemMovedInInventory_self_CastInput = CallFunc_SGK_ItemMovedInInventory_self_CastInput;
	Parms.CallFunc_SGK_UpdateSpecialSlot_self_CastInput = CallFunc_SGK_UpdateSpecialSlot_self_CastInput;
	Parms.CallFunc_SGK_ItemMovedInInventory_self_CastInput_1 = CallFunc_SGK_ItemMovedInInventory_self_CastInput_1;
	Parms.CallFunc_SGK_UpdateSpecialSlot_self_CastInput_1 = CallFunc_SGK_UpdateSpecialSlot_self_CastInput_1;
	Parms.CallFunc_SGK_ItemSize_Height = CallFunc_SGK_ItemSize_Height;
	Parms.CallFunc_SGK_ItemSize_Width = CallFunc_SGK_ItemSize_Width;
	Parms.CallFunc_SGK_ItemSize_Height_1 = CallFunc_SGK_ItemSize_Height_1;
	Parms.CallFunc_SGK_ItemSize_Width_1 = CallFunc_SGK_ItemSize_Width_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SGK_ItemSize_Height_2 = CallFunc_SGK_ItemSize_Height_2;
	Parms.CallFunc_SGK_ItemSize_Width_2 = CallFunc_SGK_ItemSize_Width_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SGK_ItemSize_Height_3 = CallFunc_SGK_ItemSize_Height_3;
	Parms.CallFunc_SGK_ItemSize_Width_3 = CallFunc_SGK_ItemSize_Width_3;
	Parms.CallFunc_SGK_ItemSize_Height_4 = CallFunc_SGK_ItemSize_Height_4;
	Parms.CallFunc_SGK_ItemSize_Width_4 = CallFunc_SGK_ItemSize_Width_4;
	Parms.CallFunc_SGK_SlotFinder_FoundSlots = CallFunc_SGK_SlotFinder_FoundSlots;
	Parms.CallFunc_UpdateInvSlots_UpdatedSlots = CallFunc_UpdateInvSlots_UpdatedSlots;
	Parms.CallFunc_UpdateInvSlots_UpdatedSlots_1 = CallFunc_UpdateInvSlots_UpdatedSlots_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SGK_ItemSize_Height_5 = CallFunc_SGK_ItemSize_Height_5;
	Parms.CallFunc_SGK_ItemSize_Width_5 = CallFunc_SGK_ItemSize_Width_5;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SGK_SlotFinder_FoundSlots_1 = CallFunc_SGK_SlotFinder_FoundSlots_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearInventoryItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InventoryGridDetails_FoundGrid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CustomGridLayoutData     CallFunc_SGK_InventoryGridDetails_InventoryGridData              (HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ManualIndexs             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_MakeStruct_S_InvSlot                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ClearInventoryItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_SGK_InventoryGridDetails_FoundGrid, const struct FS_CustomGridLayoutData& CallFunc_SGK_InventoryGridDetails_InventoryGridData, const struct FS_InvSlot& CallFunc_Array_Get_Item, const struct FS_InvSlot& K2Node_SetFieldsInStruct_StructOut, const struct FS_ManualIndexs& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& K2Node_MakeStruct_S_InvSlot, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ClearInventoryItems");

	Params::UBP_MasterInventory_C_ClearInventoryItems_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SGK_InventoryGridDetails_FoundGrid = CallFunc_SGK_InventoryGridDetails_FoundGrid;
	Parms.CallFunc_SGK_InventoryGridDetails_InventoryGridData = CallFunc_SGK_InventoryGridDetails_InventoryGridData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSlot = K2Node_MakeStruct_S_InvSlot;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.LoadSavedInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSaveSlot>      LoadedInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_OtherInvSaves>    OtherInv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FS_InvSaveSlot              InvSaveSlotL                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvItem                  InvItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemConsumableDetails_ItemFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConsumableDetails        CallFunc_SGK_ItemConsumableDetails_ItemDetails                   (NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_SlotFinder_FoundSlots                               (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_1                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_2                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_SlotFinder_FoundSlots_1                             (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CallFunc_Array_Get_Item_3                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CallFunc_Array_Get_Item_4                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CallFunc_Array_Get_Item_5                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_6                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CallFunc_Array_Get_Item_7                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_2                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_SlotFinder_FoundSlots_2                             (ReferenceParm, ContainsInstancedReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_3                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_UpdateInvSlots_UpdatedSlots                             (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSlot>          CallFunc_UpdateInvSlots_UpdatedSlots_1                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_UpdateInvSlots_UpdatedSlots_2                           (ReferenceParm, ContainsInstancedReference)
// double                             K2Node_VariableSet_CurrentWeight_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::LoadSavedInventory(TArray<struct FS_InvSaveSlot>& LoadedInventory, TArray<struct FS_OtherInvSaves>& OtherInv, const struct FS_InvSaveSlot& InvSaveSlotL, const TArray<struct FS_InvSlot>& FoundSlotsL, const struct FS_InvItem& InvItemL, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, int32 CallFunc_SGK_ItemSize_Height, int32 CallFunc_SGK_ItemSize_Width, bool CallFunc_SGK_ItemConsumableDetails_ItemFound, const struct FS_ConsumableDetails& CallFunc_SGK_ItemConsumableDetails_ItemDetails, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory_1, bool K2Node_DynamicCast_bSuccess_1, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_2, const struct FS_InvSlot& CallFunc_Array_Get_Item, TArray<struct FS_InvSlot>& CallFunc_SGK_SlotFinder_FoundSlots, int32 Temp_int_Array_Index_Variable, const struct FS_InvSaveSlot& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, int32 CallFunc_SGK_ItemSize_Height_1, int32 CallFunc_SGK_ItemSize_Width_1, const struct FS_InvSlot& CallFunc_Array_Get_Item_2, TArray<struct FS_InvSlot>& CallFunc_SGK_SlotFinder_FoundSlots_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory_1, bool K2Node_DynamicCast_bSuccess_3, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item_3, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item_4, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item_5, const struct FS_InvSlot& CallFunc_Array_Get_Item_6, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_2, int32 CallFunc_SGK_ItemSize_Height_2, int32 CallFunc_SGK_ItemSize_Width_2, TArray<struct FS_InvSlot>& CallFunc_SGK_SlotFinder_FoundSlots_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_3, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, const struct FS_InvItem& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TArray<struct FS_InvSlot>& CallFunc_UpdateInvSlots_UpdatedSlots, TArray<struct FS_InvSlot>& CallFunc_UpdateInvSlots_UpdatedSlots_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, TArray<struct FS_InvSlot>& CallFunc_UpdateInvSlots_UpdatedSlots_2, double K2Node_VariableSet_CurrentWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "LoadSavedInventory");

	Params::UBP_MasterInventory_C_LoadSavedInventory_Params Parms{};

	Parms.LoadedInventory = LoadedInventory;
	Parms.OtherInv = OtherInv;
	Parms.InvSaveSlotL = InvSaveSlotL;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.InvItemL = InvItemL;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemSize_Height = CallFunc_SGK_ItemSize_Height;
	Parms.CallFunc_SGK_ItemSize_Width = CallFunc_SGK_ItemSize_Width;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemFound = CallFunc_SGK_ItemConsumableDetails_ItemFound;
	Parms.CallFunc_SGK_ItemConsumableDetails_ItemDetails = CallFunc_SGK_ItemConsumableDetails_ItemDetails;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory_1 = K2Node_DynamicCast_AsBP_Master_Item_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SGK_SlotFinder_FoundSlots = CallFunc_SGK_SlotFinder_FoundSlots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvItem_1 = K2Node_MakeStruct_S_InvItem_1;
	Parms.CallFunc_SGK_ItemSize_Height_1 = CallFunc_SGK_ItemSize_Height_1;
	Parms.CallFunc_SGK_ItemSize_Width_1 = CallFunc_SGK_ItemSize_Width_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_SGK_SlotFinder_FoundSlots_1 = CallFunc_SGK_SlotFinder_FoundSlots_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory_1 = K2Node_DynamicCast_AsBP_Weapon_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvItem_2 = K2Node_MakeStruct_S_InvItem_2;
	Parms.CallFunc_SGK_ItemSize_Height_2 = CallFunc_SGK_ItemSize_Height_2;
	Parms.CallFunc_SGK_ItemSize_Width_2 = CallFunc_SGK_ItemSize_Width_2;
	Parms.CallFunc_SGK_SlotFinder_FoundSlots_2 = CallFunc_SGK_SlotFinder_FoundSlots_2;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvItem_3 = K2Node_MakeStruct_S_InvItem_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_UpdateInvSlots_UpdatedSlots = CallFunc_UpdateInvSlots_UpdatedSlots;
	Parms.CallFunc_UpdateInvSlots_UpdatedSlots_1 = CallFunc_UpdateInvSlots_UpdatedSlots_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_UpdateInvSlots_UpdatedSlots_2 = CallFunc_UpdateInvSlots_UpdatedSlots_2;
	Parms.K2Node_VariableSet_CurrentWeight_ImplicitCast = K2Node_VariableSet_CurrentWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SaveComponentData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_PrepareStorageSaveData_ExtraDataIndex                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_PrepareStorageSaveData_NewLevelSaveData                 (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::SaveComponentData(class UBP_SGKSaveGame_C* SaveGame, const struct FS_LevelSaveData& LevelSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_PrepareStorageSaveData_ExtraDataIndex, const struct FS_LevelSaveData& CallFunc_PrepareStorageSaveData_NewLevelSaveData, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SaveComponentData");

	Params::UBP_MasterInventory_C_SaveComponentData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_PrepareStorageSaveData_ExtraDataIndex = CallFunc_PrepareStorageSaveData_ExtraDataIndex;
	Parms.CallFunc_PrepareStorageSaveData_NewLevelSaveData = CallFunc_PrepareStorageSaveData_NewLevelSaveData;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.LoadInventoryData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_StorageSave              S_StorageSave                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvItem                  InvItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_StorageSave              StorageSaveDataL                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              InvSaveSlotL                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              CallFunc_Array_Get_Item_2                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_3                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_SlotFinder_FoundSlots                               (ReferenceParm, ContainsInstancedReference)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CallFunc_Array_Get_Item_4                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_UpdateInvSlots_UpdatedSlots                             (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentWeight_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentWeight_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::LoadInventoryData(struct FS_StorageSave& S_StorageSave, const TArray<struct FS_InvSlot>& FoundSlotsL, const struct FS_InvItem& InvItemL, const struct FS_StorageSave& StorageSaveDataL, const struct FS_InvSaveSlot& InvSaveSlotL, int32 Temp_int_Array_Index_Variable, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, const struct FS_InvSaveSlot& CallFunc_Array_Get_Item_2, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_3, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, int32 CallFunc_SGK_ItemSize_Height, int32 CallFunc_SGK_ItemSize_Width, TArray<struct FS_InvSlot>& CallFunc_SGK_SlotFinder_FoundSlots, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_OtherInvSaves& CallFunc_Array_Get_Item_4, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, const struct FS_InvItem& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FS_InvSlot>& CallFunc_UpdateInvSlots_UpdatedSlots, bool CallFunc_Array_IsValidIndex_ReturnValue_1, double K2Node_VariableSet_CurrentWeight_ImplicitCast, double K2Node_VariableSet_CurrentWeight_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "LoadInventoryData");

	Params::UBP_MasterInventory_C_LoadInventoryData_Params Parms{};

	Parms.S_StorageSave = S_StorageSave;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.InvItemL = InvItemL;
	Parms.StorageSaveDataL = StorageSaveDataL;
	Parms.InvSaveSlotL = InvSaveSlotL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemSize_Height = CallFunc_SGK_ItemSize_Height;
	Parms.CallFunc_SGK_ItemSize_Width = CallFunc_SGK_ItemSize_Width;
	Parms.CallFunc_SGK_SlotFinder_FoundSlots = CallFunc_SGK_SlotFinder_FoundSlots;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_UpdateInvSlots_UpdatedSlots = CallFunc_UpdateInvSlots_UpdatedSlots;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_VariableSet_CurrentWeight_ImplicitCast = K2Node_VariableSet_CurrentWeight_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentWeight_ImplicitCast_1 = K2Node_VariableSet_CurrentWeight_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.LoadComponentData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               LoadComplete                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvItem                  InvItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              InvSaveSlotL                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StorageSave              StorageSaveDataL                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindStorageSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StorageSave              CallFunc_FindStorageSaveData_Array_Element                       (ContainsInstancedReference, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::LoadComponentData(class UBP_SGKSaveGame_C* SaveGame, bool* LoadComplete, const TArray<struct FS_InvSlot>& FoundSlotsL, const struct FS_InvItem& InvItemL, const struct FS_InvSaveSlot& InvSaveSlotL, const struct FS_StorageSave& StorageSaveDataL, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_FindStorageSaveData_SaveFound, const struct FS_StorageSave& CallFunc_FindStorageSaveData_Array_Element, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "LoadComponentData");

	Params::UBP_MasterInventory_C_LoadComponentData_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.InvItemL = InvItemL;
	Parms.InvSaveSlotL = InvSaveSlotL;
	Parms.StorageSaveDataL = StorageSaveDataL;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_FindStorageSaveData_SaveFound = CallFunc_FindStorageSaveData_SaveFound;
	Parms.CallFunc_FindStorageSaveData_Array_Element = CallFunc_FindStorageSaveData_Array_Element;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadComplete != nullptr)
		*LoadComplete = Parms.LoadComplete;

}


// Function BP_MasterInventory.BP_MasterInventory_C.InGameLoadComponentData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           Save                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadComponentData_LoadComplete                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::InGameLoadComponentData(class UBP_SGKSaveGame_C* Save, bool CallFunc_LoadComponentData_LoadComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "InGameLoadComponentData");

	Params::UBP_MasterInventory_C_InGameLoadComponentData_Params Parms{};

	Parms.Save = Save;
	Parms.CallFunc_LoadComponentData_LoadComplete = CallFunc_LoadComponentData_LoadComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.DecreaseItemDurability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// double                             DecreaseAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  NewInvItemL                                                      (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails                 (HasGetValueTypeHash)
// bool                               CallFunc_SGK_InvSlotAmount_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_InvSlotAmount_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem_1                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails_1               (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::DecreaseItemDurability(const struct FS_InvSlot& InvSlot, double DecreaseAmount, const struct FS_InvItem& NewInvItemL, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, bool CallFunc_SGK_InvSlotAmount_ItemValid, int32 CallFunc_SGK_InvSlotAmount_Amount, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem_1, bool CallFunc_SGK_DurabilityDetails_ItemFound_1, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "DecreaseItemDurability");

	Params::UBP_MasterInventory_C_DecreaseItemDurability_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.DecreaseAmount = DecreaseAmount;
	Parms.NewInvItemL = NewInvItemL;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound = CallFunc_SGK_DurabilityDetails_ItemFound;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails = CallFunc_SGK_DurabilityDetails_DurabilityDetails;
	Parms.CallFunc_SGK_InvSlotAmount_ItemValid = CallFunc_SGK_InvSlotAmount_ItemValid;
	Parms.CallFunc_SGK_InvSlotAmount_Amount = CallFunc_SGK_InvSlotAmount_Amount;
	Parms.CallFunc_SGK_InvSlotItem_InvItem_1 = CallFunc_SGK_InvSlotItem_InvItem_1;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound_1 = CallFunc_SGK_DurabilityDetails_ItemFound_1;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails_1 = CallFunc_SGK_DurabilityDetails_DurabilityDetails_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast = K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.DecreaseWeaponDurability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WeaponSlot               WeaponSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// double                             DecreaseAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  NewInvItemL                                                      (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID_1                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_DynamicCast_AsBP_Player_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails                 (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DurabilityDetails_ItemFound_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        CallFunc_SGK_DurabilityDetails_DurabilityDetails_1               (HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::DecreaseWeaponDurability(const struct FS_WeaponSlot& WeaponSlot, double DecreaseAmount, const struct FS_InvItem& NewInvItemL, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_1, class UBP_PlayerInventory_C* K2Node_DynamicCast_AsBP_Player_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, bool CallFunc_IsValid_ReturnValue, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, bool CallFunc_SGK_DurabilityDetails_ItemFound_1, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails_1, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FS_InvItem& K2Node_SetFieldsInStruct_StructOut, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "DecreaseWeaponDurability");

	Params::UBP_MasterInventory_C_DecreaseWeaponDurability_Params Parms{};

	Parms.WeaponSlot = WeaponSlot;
	Parms.DecreaseAmount = DecreaseAmount;
	Parms.NewInvItemL = NewInvItemL;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_S_WeaponSlotID = K2Node_MakeStruct_S_WeaponSlotID;
	Parms.K2Node_MakeStruct_S_WeaponSlotID_1 = K2Node_MakeStruct_S_WeaponSlotID_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Inventory = K2Node_DynamicCast_AsBP_Player_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound = CallFunc_SGK_DurabilityDetails_ItemFound;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails = CallFunc_SGK_DurabilityDetails_DurabilityDetails;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue = CallFunc_SelectedWeaponSlot_ReturnValue;
	Parms.CallFunc_SGK_DurabilityDetails_ItemFound_1 = CallFunc_SGK_DurabilityDetails_ItemFound_1;
	Parms.CallFunc_SGK_DurabilityDetails_DurabilityDetails_1 = CallFunc_SGK_DurabilityDetails_DurabilityDetails_1;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast = K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.FindCraftingListing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CraftingListing                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValueL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ArrayIndexL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            ListingElementL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MasterInventory_C::FindCraftingListing(class FName Recipe, struct FS_CraftingQueue* CraftingListing, bool ReturnValueL, int32 ArrayIndexL, const struct FS_CraftingQueue& ListingElementL, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_CraftingQueue& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "FindCraftingListing");

	Params::UBP_MasterInventory_C_FindCraftingListing_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.ReturnValueL = ReturnValueL;
	Parms.ArrayIndexL = ArrayIndexL;
	Parms.ListingElementL = ListingElementL;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CraftingListing != nullptr)
		*CraftingListing = std::move(Parms.CraftingListing);

	return Parms.ReturnValue;

}


// Function BP_MasterInventory.BP_MasterInventory_C.RequiredActorCraftingCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           RecipeL                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FVector                     SearchLocationL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       PawnL                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RecipeDetails_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CallFunc_SGK_RecipeDetails_CraftingRecipe                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Radius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MasterInventory_C::RequiredActorCraftingCheck(class FName Recipe, const struct FS_CraftingRecipe& RecipeL, const struct FVector& SearchLocationL, class APawn* PawnL, int32 Temp_int_Array_Index_Variable, bool CallFunc_SGK_RecipeDetails_ReturnValue, const struct FS_CraftingRecipe& CallFunc_SGK_RecipeDetails_CraftingRecipe, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_DrawDebugSphere_Radius_ImplicitCast, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RequiredActorCraftingCheck");

	Params::UBP_MasterInventory_C_RequiredActorCraftingCheck_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.RecipeL = RecipeL;
	Parms.SearchLocationL = SearchLocationL;
	Parms.PawnL = PawnL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SGK_RecipeDetails_ReturnValue = CallFunc_SGK_RecipeDetails_ReturnValue;
	Parms.CallFunc_SGK_RecipeDetails_CraftingRecipe = CallFunc_SGK_RecipeDetails_CraftingRecipe;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_DrawDebugSphere_Radius_ImplicitCast = CallFunc_DrawDebugSphere_Radius_ImplicitCast;
	Parms.CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast = CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateCraftingTimes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArrayIndexL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            ArrayElementL                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Time_11_9993BFEA402CAC099D6A0699AF2D4479_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateCraftingTimes(int32 ArrayIndexL, const struct FS_CraftingQueue& ArrayElementL, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float K2Node_SetFieldsInStruct_Time_11_9993BFEA402CAC099D6A0699AF2D4479_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateCraftingTimes");

	Params::UBP_MasterInventory_C_UpdateCraftingTimes_Params Parms{};

	Parms.ArrayIndexL = ArrayIndexL;
	Parms.ArrayElementL = ArrayElementL;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Time_11_9993BFEA402CAC099D6A0699AF2D4479_ImplicitCast = K2Node_SetFieldsInStruct_Time_11_9993BFEA402CAC099D6A0699AF2D4479_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CancelCraftingRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue            CraftingListing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CancelCraftingListingL                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCraftingListing_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_FindCraftingListing_CraftingListing                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CancelCraftingRecipe(const struct FS_CraftingQueue& CraftingListing, const struct FS_CraftingQueue& CancelCraftingListingL, bool CallFunc_FindCraftingListing_ReturnValue, const struct FS_CraftingQueue& CallFunc_FindCraftingListing_CraftingListing, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CancelCraftingRecipe");

	Params::UBP_MasterInventory_C_CancelCraftingRecipe_Params Parms{};

	Parms.CraftingListing = CraftingListing;
	Parms.CancelCraftingListingL = CancelCraftingListingL;
	Parms.CallFunc_FindCraftingListing_ReturnValue = CallFunc_FindCraftingListing_ReturnValue;
	Parms.CallFunc_FindCraftingListing_CraftingListing = CallFunc_FindCraftingListing_CraftingListing;
	Parms.K2Node_MakeStruct_S_CraftingQueue = K2Node_MakeStruct_S_CraftingQueue;
	Parms.K2Node_MakeStruct_S_CraftingQueue_1 = K2Node_MakeStruct_S_CraftingQueue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CraftingError
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCraftingListing_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_FindCraftingListing_CraftingListing                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CraftingError(const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_FindCraftingListing_ReturnValue, const struct FS_CraftingQueue& CallFunc_FindCraftingListing_CraftingListing, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CraftingError");

	Params::UBP_MasterInventory_C_CraftingError_Params Parms{};

	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.K2Node_MakeStruct_S_CraftingQueue = K2Node_MakeStruct_S_CraftingQueue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_FindCraftingListing_ReturnValue = CallFunc_FindCraftingListing_ReturnValue;
	Parms.CallFunc_FindCraftingListing_CraftingListing = CallFunc_FindCraftingListing_CraftingListing;
	Parms.K2Node_MakeStruct_S_CraftingQueue_1 = K2Node_MakeStruct_S_CraftingQueue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CraftItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  RemainingInvItemL                                                (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CraftingRecipeL                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RecipeDetails_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CallFunc_SGK_RecipeDetails_CraftingRecipe                        (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_DynamicCast_AsBP_Player_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItem_RemainingItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AttemptToAddItem_RemainingInvItem                       (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AttemptToAddItem_NewItemSlot                            (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>K2Node_DynamicCast_AsBP_SGKInventory_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCraftingListing_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_FindCraftingListing_CraftingListing                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GlobalInventoryManager_C*CallFunc_SGK_GetGlobalInventory_GlobalInventory                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_CreateNewItem_NewItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_RemainingItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AddItem_RemainingInvItem                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AddItem_NewItemSlot                                     (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRecipeCost_CanCraft                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CraftItem(class FName Recipe, int32 Amount, const struct FS_InvItem& RemainingInvItemL, const struct FS_CraftingRecipe& CraftingRecipeL, bool CallFunc_SGK_RecipeDetails_ReturnValue, const struct FS_CraftingRecipe& CallFunc_SGK_RecipeDetails_CraftingRecipe, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_PlayerInventory_C* K2Node_DynamicCast_AsBP_Player_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AttemptToAddItem_RemainingItem, const struct FS_InvItem& CallFunc_AttemptToAddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AttemptToAddItem_NewItemSlot, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_FindCraftingListing_ReturnValue, const struct FS_CraftingQueue& CallFunc_FindCraftingListing_CraftingListing, const struct FS_CraftingCost& CallFunc_Array_Get_Item, const struct FS_CraftingCost& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_2, class ABP_GlobalInventoryManager_C* CallFunc_SGK_GetGlobalInventory_GlobalInventory, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FS_InvItem& CallFunc_CreateNewItem_NewItem, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue, const struct FS_CraftingQueue& CallFunc_Array_Get_Item_2, const struct FS_CraftingQueue& CallFunc_Array_Get_Item_3, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue_2, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue_3, bool CallFunc_CheckRecipeCost_CanCraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CraftItem");

	Params::UBP_MasterInventory_C_CraftItem_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.Amount = Amount;
	Parms.RemainingInvItemL = RemainingInvItemL;
	Parms.CraftingRecipeL = CraftingRecipeL;
	Parms.CallFunc_SGK_RecipeDetails_ReturnValue = CallFunc_SGK_RecipeDetails_ReturnValue;
	Parms.CallFunc_SGK_RecipeDetails_CraftingRecipe = CallFunc_SGK_RecipeDetails_CraftingRecipe;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsBP_Player_Inventory = K2Node_DynamicCast_AsBP_Player_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AttemptToAddItem_RemainingItem = CallFunc_AttemptToAddItem_RemainingItem;
	Parms.CallFunc_AttemptToAddItem_RemainingInvItem = CallFunc_AttemptToAddItem_RemainingInvItem;
	Parms.CallFunc_AttemptToAddItem_NewItemSlot = CallFunc_AttemptToAddItem_NewItemSlot;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKInventory_Interface = K2Node_DynamicCast_AsBP_SGKInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_FindCraftingListing_ReturnValue = CallFunc_FindCraftingListing_ReturnValue;
	Parms.CallFunc_FindCraftingListing_CraftingListing = CallFunc_FindCraftingListing_CraftingListing;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SGK_GetGlobalInventory_GlobalInventory = CallFunc_SGK_GetGlobalInventory_GlobalInventory;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_CreateNewItem_NewItem = CallFunc_CreateNewItem_NewItem;
	Parms.CallFunc_AddItem_RemainingItem = CallFunc_AddItem_RemainingItem;
	Parms.CallFunc_AddItem_RemainingInvItem = CallFunc_AddItem_RemainingInvItem;
	Parms.CallFunc_AddItem_NewItemSlot = CallFunc_AddItem_NewItemSlot;
	Parms.K2Node_MakeStruct_S_CraftingQueue = K2Node_MakeStruct_S_CraftingQueue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_MakeStruct_S_CraftingQueue_1 = K2Node_MakeStruct_S_CraftingQueue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_CraftingQueue_2 = K2Node_MakeStruct_S_CraftingQueue_2;
	Parms.K2Node_MakeStruct_S_CraftingQueue_3 = K2Node_MakeStruct_S_CraftingQueue_3;
	Parms.CallFunc_CheckRecipeCost_CanCraft = CallFunc_CheckRecipeCost_CanCraft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CreateNewCraftingListing
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           RecipeL                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              NewIndexL                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RecipeDetails_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CallFunc_SGK_RecipeDetails_CraftingRecipe                        (HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CreateNewCraftingListing(class FName Recipe, int32 Amount, struct FS_CraftingQueue* Output, const struct FS_CraftingRecipe& RecipeL, int32 NewIndexL, bool CallFunc_SGK_RecipeDetails_ReturnValue, const struct FS_CraftingRecipe& CallFunc_SGK_RecipeDetails_CraftingRecipe, const struct FS_CraftingQueue& CallFunc_Array_Get_Item, const struct FS_CraftingQueue& CallFunc_Array_Get_Item_1, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CreateNewCraftingListing");

	Params::UBP_MasterInventory_C_CreateNewCraftingListing_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.Amount = Amount;
	Parms.RecipeL = RecipeL;
	Parms.NewIndexL = NewIndexL;
	Parms.CallFunc_SGK_RecipeDetails_ReturnValue = CallFunc_SGK_RecipeDetails_ReturnValue;
	Parms.CallFunc_SGK_RecipeDetails_CraftingRecipe = CallFunc_SGK_RecipeDetails_CraftingRecipe;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_S_CraftingQueue = K2Node_MakeStruct_S_CraftingQueue;
	Parms.K2Node_MakeStruct_S_CraftingQueue_1 = K2Node_MakeStruct_S_CraftingQueue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateCraftingListing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue            CraftingListing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AdditionalAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_MakeStruct_S_CraftingQueue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateCraftingListing(const struct FS_CraftingQueue& CraftingListing, int32 AdditionalAmount, struct FS_CraftingQueue* Output, const struct FS_CraftingQueue& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_CraftingQueue& K2Node_MakeStruct_S_CraftingQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateCraftingListing");

	Params::UBP_MasterInventory_C_UpdateCraftingListing_Params Parms{};

	Parms.CraftingListing = CraftingListing;
	Parms.AdditionalAmount = AdditionalAmount;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_CraftingQueue = K2Node_MakeStruct_S_CraftingQueue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CheckRecipeCost
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveItems                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanCraft                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           RecipeL                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FS_CraftingCost>     RemoveItemsL                                                     (Edit, BlueprintVisible)
// struct FS_CraftingRecipe           RecipeDetailsL                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RecipeDetails_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CallFunc_SGK_RecipeDetails_CraftingRecipe                        (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchForItem_ItemFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchForItem_InvSlot                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SearchForItem_ItemFound_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchForItem_InvSlot_1                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CheckRecipeCost(class FName Recipe, int32 Amount, bool RemoveItems, bool* CanCraft, const struct FS_CraftingRecipe& RecipeL, const TArray<struct FS_CraftingCost>& RemoveItemsL, const struct FS_CraftingRecipe& RecipeDetailsL, int32 Temp_int_Array_Index_Variable, bool CallFunc_SGK_RecipeDetails_ReturnValue, const struct FS_CraftingRecipe& CallFunc_SGK_RecipeDetails_CraftingRecipe, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_CraftingCost& CallFunc_Array_Get_Item_1, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_SearchForItem_ItemFound, const struct FS_InvSlot& CallFunc_SearchForItem_InvSlot, bool CallFunc_SearchForItem_ItemFound_1, const struct FS_InvSlot& CallFunc_SearchForItem_InvSlot_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CheckRecipeCost");

	Params::UBP_MasterInventory_C_CheckRecipeCost_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.Amount = Amount;
	Parms.RemoveItems = RemoveItems;
	Parms.RecipeL = RecipeL;
	Parms.RemoveItemsL = RemoveItemsL;
	Parms.RecipeDetailsL = RecipeDetailsL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SGK_RecipeDetails_ReturnValue = CallFunc_SGK_RecipeDetails_ReturnValue;
	Parms.CallFunc_SGK_RecipeDetails_CraftingRecipe = CallFunc_SGK_RecipeDetails_CraftingRecipe;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_SearchForItem_ItemFound = CallFunc_SearchForItem_ItemFound;
	Parms.CallFunc_SearchForItem_InvSlot = CallFunc_SearchForItem_InvSlot;
	Parms.CallFunc_SearchForItem_ItemFound_1 = CallFunc_SearchForItem_ItemFound_1;
	Parms.CallFunc_SearchForItem_InvSlot_1 = CallFunc_SearchForItem_InvSlot_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CanCraft != nullptr)
		*CanCraft = Parms.CanCraft;

}


// Function BP_MasterInventory.BP_MasterInventory_C.SetItemAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              SetAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ChangeCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Special                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  InvItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem_1                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem_2                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem_3                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_UpdateSpecialSlot_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SetItemAmount(const struct FS_InvSlot& InvSlot, int32 SetAmount, bool ChangeCount, bool Special, const struct FS_InvItem& InvItemL, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_Greater_IntInt_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem_3, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_UpdateSpecialSlot_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SetItemAmount");

	Params::UBP_MasterInventory_C_SetItemAmount_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.SetAmount = SetAmount;
	Parms.ChangeCount = ChangeCount;
	Parms.Special = Special;
	Parms.InvItemL = InvItemL;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SGK_InvSlotItem_InvItem_1 = CallFunc_SGK_InvSlotItem_InvItem_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SGK_InvSlotItem_InvItem_2 = CallFunc_SGK_InvSlotItem_InvItem_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_SGK_InvSlotItem_InvItem_3 = CallFunc_SGK_InvSlotItem_InvItem_3;
	Parms.CallFunc_SGK_UpdateSpecialSlot_self_CastInput = CallFunc_SGK_UpdateSpecialSlot_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               RemoveWeight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveInvAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SpecialSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_RemoveAdditionalChecks_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveItem(const struct FS_InvSlot& InvSlot, bool RemoveWeight, bool RemoveInvAmount, bool SpecialSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_RemoveAdditionalChecks_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RemoveItem");

	Params::UBP_MasterInventory_C_RemoveItem_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.RemoveWeight = RemoveWeight;
	Parms.RemoveInvAmount = RemoveInvAmount;
	Parms.SpecialSlot = SpecialSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SGK_RemoveAdditionalChecks_self_CastInput = CallFunc_SGK_RemoveAdditionalChecks_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SearchForItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveItems                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlot                                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          ReturnItemsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               ReturnValueL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  ReturnItemL                                                      (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  ArrayItemL                                                       (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              SearchAmountRemainingL                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SearchForItem(const struct FDataTableRowHandle& Item, int32 Amount, bool RemoveItems, bool* ItemFound, struct FS_InvSlot* InvSlot, const TArray<struct FS_InvSlot>& ReturnItemsL, bool ReturnValueL, const struct FS_InvSlot& ReturnItemL, const struct FS_InvSlot& ArrayItemL, int32 SearchAmountRemainingL, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SearchForItem");

	Params::UBP_MasterInventory_C_SearchForItem_Params Parms{};

	Parms.Item = Item;
	Parms.Amount = Amount;
	Parms.RemoveItems = RemoveItems;
	Parms.ReturnItemsL = ReturnItemsL;
	Parms.ReturnValueL = ReturnValueL;
	Parms.ReturnItemL = ReturnItemL;
	Parms.ArrayItemL = ArrayItemL;
	Parms.SearchAmountRemainingL = SearchAmountRemainingL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (InvSlot != nullptr)
		*InvSlot = std::move(Parms.InvSlot);

}


// Function BP_MasterInventory.BP_MasterInventory_C.OnRep_ItemCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::OnRep_ItemCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "OnRep_ItemCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ItemLimitCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowAdd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddCount                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Remaining                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RemainingCountL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemainingItemCount_RemainingItemLimit                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ItemLimitCheck(int32 ItemCount, bool* AllowAdd, int32* AddCount, int32* Remaining, int32 RemainingCountL, int32 CallFunc_RemainingItemCount_RemainingItemLimit, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ItemLimitCheck");

	Params::UBP_MasterInventory_C_ItemLimitCheck_Params Parms{};

	Parms.ItemCount = ItemCount;
	Parms.RemainingCountL = RemainingCountL;
	Parms.CallFunc_RemainingItemCount_RemainingItemLimit = CallFunc_RemainingItemCount_RemainingItemLimit;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowAdd != nullptr)
		*AllowAdd = Parms.AllowAdd;

	if (AddCount != nullptr)
		*AddCount = Parms.AddCount;

	if (Remaining != nullptr)
		*Remaining = Parms.Remaining;

}


// Function BP_MasterInventory.BP_MasterInventory_C.RemainingItemCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RemainingItemLimit                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::RemainingItemCount(int32* RemainingItemLimit, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RemainingItemCount");

	Params::UBP_MasterInventory_C_RemainingItemCount_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RemainingItemLimit != nullptr)
		*RemainingItemLimit = Parms.RemainingItemLimit;

}


// Function BP_MasterInventory.BP_MasterInventory_C.ChangeItemCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ChangeItemCount(int32 Amount, bool Add, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ChangeItemCount");

	Params::UBP_MasterInventory_C_ChangeItemCount_Params Parms{};

	Parms.Amount = Amount;
	Parms.Add = Add;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AddWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Weight                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddToParent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       Stop_Inventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AddWeight(double Weight, bool AddToParent, class UBP_MasterInventory_C* Stop_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AddWeight");

	Params::UBP_MasterInventory_C_AddWeight_Params Parms{};

	Parms.Weight = Weight;
	Parms.AddToParent = AddToParent;
	Parms.Stop_Inventory = Stop_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ParentWeightCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdditionalWeight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       ParentIgnore                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CanAdd                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentCountL                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       ParentInvL                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddWeightCheck_CanAdd                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddWeightCheck_ItemCount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ParentWeightCheck(double AdditionalWeight, class UBP_MasterInventory_C* ParentIgnore, bool* CanAdd, int32* CurrentCount, int32 CurrentCountL, class UBP_MasterInventory_C* ParentInvL, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_AddWeightCheck_CanAdd, int32 CallFunc_AddWeightCheck_ItemCount, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ParentWeightCheck");

	Params::UBP_MasterInventory_C_ParentWeightCheck_Params Parms{};

	Parms.AdditionalWeight = AdditionalWeight;
	Parms.ParentIgnore = ParentIgnore;
	Parms.CurrentCountL = CurrentCountL;
	Parms.ParentInvL = ParentInvL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_AddWeightCheck_CanAdd = CallFunc_AddWeightCheck_CanAdd;
	Parms.CallFunc_AddWeightCheck_ItemCount = CallFunc_AddWeightCheck_ItemCount;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAdd != nullptr)
		*CanAdd = Parms.CanAdd;

	if (CurrentCount != nullptr)
		*CurrentCount = Parms.CurrentCount;

}


// Function BP_MasterInventory.BP_MasterInventory_C.AttemptToAddWeight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseAllWeight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckOnly                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_WeightCheck_ExceedsMaxWeight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MasterInventory_C::AttemptToAddWeight(const struct FS_InvItem& Item, int32 Amount, bool UseAllWeight, bool CheckOnly, const struct FS_ItemDetails& ItemDetailsL, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_WeightCheck_ExceedsMaxWeight, int32 CallFunc_SelectInt_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Multiply_IntFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AttemptToAddWeight");

	Params::UBP_MasterInventory_C_AttemptToAddWeight_Params Parms{};

	Parms.Item = Item;
	Parms.Amount = Amount;
	Parms.UseAllWeight = UseAllWeight;
	Parms.CheckOnly = CheckOnly;
	Parms.ItemDetailsL = ItemDetailsL;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_WeightCheck_ExceedsMaxWeight = CallFunc_WeightCheck_ExceedsMaxWeight;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast = CallFunc_Multiply_IntFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveItemWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveAll                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveParentWeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       MasterInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveItemWeight(const struct FS_InvItem& Item, int32 Amount, bool RemoveAll, bool RemoveParentWeight, class UBP_MasterInventory_C* MasterInventory, const struct FS_ItemDetails& ItemDetailsL, bool Temp_bool_Variable, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue_1, double CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RemoveItemWeight");

	Params::UBP_MasterInventory_C_RemoveItemWeight_Params Parms{};

	Parms.Item = Item;
	Parms.Amount = Amount;
	Parms.RemoveAll = RemoveAll;
	Parms.RemoveParentWeight = RemoveParentWeight;
	Parms.MasterInventory = MasterInventory;
	Parms.ItemDetailsL = ItemDetailsL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast = CallFunc_Multiply_IntFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast_1 = CallFunc_Multiply_IntFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AddItemWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddAll                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddToParent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       Stop_Inventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AddItemWeight(const struct FS_InvItem& Item, int32 Amount, bool AddAll, bool AddToParent, class UBP_MasterInventory_C* Stop_Inventory, const struct FS_ItemDetails& ItemDetailsL, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue_1, double CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AddItemWeight");

	Params::UBP_MasterInventory_C_AddItemWeight_Params Parms{};

	Parms.Item = Item;
	Parms.Amount = Amount;
	Parms.AddAll = AddAll;
	Parms.AddToParent = AddToParent;
	Parms.Stop_Inventory = Stop_Inventory;
	Parms.ItemDetailsL = ItemDetailsL;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast = CallFunc_Multiply_IntFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast_1 = CallFunc_Multiply_IntFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.OnRep_CurrentWeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::OnRep_CurrentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "OnRep_CurrentWeight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AddWeightCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ItemWeight                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckParent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       ParentIgnore                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CanAdd                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParentItemCountL                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCountL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ParentWeightCheck_CanAdd                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ParentWeightCheck_CurrentCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ParentWeightCheck_CanAdd_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ParentWeightCheck_CurrentCount_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RemainingFreeWeight_RemainingFreeWeight                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AddWeightCheck(double ItemWeight, bool CheckParent, class UBP_MasterInventory_C* ParentIgnore, bool* CanAdd, int32* ItemCount, int32 ParentItemCountL, int32 ItemCountL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ParentWeightCheck_CanAdd, int32 CallFunc_ParentWeightCheck_CurrentCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_ParentWeightCheck_CanAdd_1, int32 CallFunc_ParentWeightCheck_CurrentCount_1, double CallFunc_RemainingFreeWeight_RemainingFreeWeight, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AddWeightCheck");

	Params::UBP_MasterInventory_C_AddWeightCheck_Params Parms{};

	Parms.ItemWeight = ItemWeight;
	Parms.CheckParent = CheckParent;
	Parms.ParentIgnore = ParentIgnore;
	Parms.ParentItemCountL = ParentItemCountL;
	Parms.ItemCountL = ItemCountL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ParentWeightCheck_CanAdd = CallFunc_ParentWeightCheck_CanAdd;
	Parms.CallFunc_ParentWeightCheck_CurrentCount = CallFunc_ParentWeightCheck_CurrentCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_ParentWeightCheck_CanAdd_1 = CallFunc_ParentWeightCheck_CanAdd_1;
	Parms.CallFunc_ParentWeightCheck_CurrentCount_1 = CallFunc_ParentWeightCheck_CurrentCount_1;
	Parms.CallFunc_RemainingFreeWeight_RemainingFreeWeight = CallFunc_RemainingFreeWeight_RemainingFreeWeight;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAdd != nullptr)
		*CanAdd = Parms.CanAdd;

	if (ItemCount != nullptr)
		*ItemCount = Parms.ItemCount;

}


// Function BP_MasterInventory.BP_MasterInventory_C.RemainingFreeWeight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             RemainingFreeWeight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::RemainingFreeWeight(double* RemainingFreeWeight, double CallFunc_Subtract_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RemainingFreeWeight");

	Params::UBP_MasterInventory_C_RemainingFreeWeight_Params Parms{};

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (RemainingFreeWeight != nullptr)
		*RemainingFreeWeight = Parms.RemainingFreeWeight;

}


// Function BP_MasterInventory.BP_MasterInventory_C.WeightCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseAllWeight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckParent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       IgnoreParent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ExceedsMaxWeight                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AdditionalWeightL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WeightL                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsContainerL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetailsL                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ParentWeightCheck_CanAdd                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ParentWeightCheck_CurrentCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::WeightCheck(const struct FS_InvItem& Item, int32 Amount, bool UseAllWeight, bool CheckParent, class UBP_MasterInventory_C* IgnoreParent, bool* ExceedsMaxWeight, double AdditionalWeightL, double WeightL, bool IsContainerL, const struct FS_ItemDetails& ItemDetailsL, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ParentWeightCheck_CanAdd, int32 CallFunc_ParentWeightCheck_CurrentCount, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_2, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_Multiply_IntFloat_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool K2Node_Select_Default_1, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "WeightCheck");

	Params::UBP_MasterInventory_C_WeightCheck_Params Parms{};

	Parms.Item = Item;
	Parms.Amount = Amount;
	Parms.UseAllWeight = UseAllWeight;
	Parms.CheckParent = CheckParent;
	Parms.IgnoreParent = IgnoreParent;
	Parms.AdditionalWeightL = AdditionalWeightL;
	Parms.WeightL = WeightL;
	Parms.IsContainerL = IsContainerL;
	Parms.ItemDetailsL = ItemDetailsL;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ParentWeightCheck_CanAdd = CallFunc_ParentWeightCheck_CanAdd;
	Parms.CallFunc_ParentWeightCheck_CurrentCount = CallFunc_ParentWeightCheck_CurrentCount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_1 = CallFunc_Conv_StringToDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ExceedsMaxWeight != nullptr)
		*ExceedsMaxWeight = Parms.ExceedsMaxWeight;

}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Weight                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveParentWeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       StopInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveWeight(double Weight, bool RemoveParentWeight, class UBP_MasterInventory_C* StopInventory, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RemoveWeight");

	Params::UBP_MasterInventory_C_RemoveWeight_Params Parms{};

	Parms.Weight = Weight;
	Parms.RemoveParentWeight = RemoveParentWeight;
	Parms.StopInventory = StopInventory;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearParentInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ClearParentInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ClearParentInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.IsItemInParentInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  StartInvSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  EndInvSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               IsInInv                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       ParentInvL                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::IsItemInParentInv(const struct FS_InvSlot& StartInvSlot, const struct FS_InvSlot& EndInvSlot, bool* IsInInv, class UBP_MasterInventory_C* ParentInvL, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "IsItemInParentInv");

	Params::UBP_MasterInventory_C_IsItemInParentInv_Params Parms{};

	Parms.StartInvSlot = StartInvSlot;
	Parms.EndInvSlot = EndInvSlot;
	Parms.ParentInvL = ParentInvL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInInv != nullptr)
		*IsInInv = Parms.IsInInv;

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateParentInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateParentInventory(class UBP_MasterInventory_C* Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateParentInventory");

	Params::UBP_MasterInventory_C_UpdateParentInventory_Params Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AttemptToAddItemAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              AddAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remainder                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RemainderAmount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemainderL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CanAddAmountL                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemAmountL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxStackL                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AttemptToAddItemAmount(const struct FS_InvSlot& InvSlot, int32 AddAmount, bool* Remainder, int32* RemainderAmount, bool RemainderL, int32 CanAddAmountL, int32 ItemAmountL, int32 MaxStackL, const struct FS_InvSlot& InvSlotL, bool Temp_bool_Variable, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AttemptToAddItemAmount");

	Params::UBP_MasterInventory_C_AttemptToAddItemAmount_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.AddAmount = AddAmount;
	Parms.RemainderL = RemainderL;
	Parms.CanAddAmountL = CanAddAmountL;
	Parms.ItemAmountL = ItemAmountL;
	Parms.MaxStackL = MaxStackL;
	Parms.InvSlotL = InvSlotL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Remainder != nullptr)
		*Remainder = Parms.Remainder;

	if (RemainderAmount != nullptr)
		*RemainderAmount = Parms.RemainderAmount;

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateSlotOnUsingPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_Rotated                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CheckingParentInvL                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_PlayerInventory_C*>NewLocalVar_1                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_DynamicCast_AsBP_Player_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::UpdateSlotOnUsingPlayers(const struct FS_InvSlot& InvSlot, int32 Height, int32 Width, bool Was_Rotated, class UBP_MasterInventory_C* CheckingParentInvL, const TArray<class UBP_PlayerInventory_C*>& NewLocalVar_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UBP_PlayerInventory_C* K2Node_DynamicCast_AsBP_Player_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateSlotOnUsingPlayers");

	Params::UBP_MasterInventory_C_UpdateSlotOnUsingPlayers_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.Height = Height;
	Parms.Width = Width;
	Parms.Was_Rotated = Was_Rotated;
	Parms.CheckingParentInvL = CheckingParentInvL;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Player_Inventory = K2Node_DynamicCast_AsBP_Player_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ClearUsingPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ClearUsingPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ClearUsingPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ReplaceUsingPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_PlayerInventory_C*>Players                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UBP_MasterInventory_C::ReplaceUsingPlayers(TArray<class UBP_PlayerInventory_C*>& Players)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ReplaceUsingPlayers");

	Params::UBP_MasterInventory_C_ReplaceUsingPlayers_Params Parms{};

	Parms.Players = Players;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.RemoveUsingPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       Player_Inv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::RemoveUsingPlayer(class UBP_PlayerInventory_C* Player_Inv, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "RemoveUsingPlayer");

	Params::UBP_MasterInventory_C_RemoveUsingPlayer_Params Parms{};

	Parms.Player_Inv = Player_Inv;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AddUsingPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       Player_Inv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AddUsingPlayer(class UBP_PlayerInventory_C* Player_Inv, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AddUsingPlayer");

	Params::UBP_MasterInventory_C_AddUsingPlayer_Params Parms{};

	Parms.Player_Inv = Player_Inv;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.FindFreeStackSpace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       StopInv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Reaminder                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  ReaminderInvItem                                                 (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  InvItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              AmountRemainingL                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  SlotElementL                                                     (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptToAddItemAmount_Remainder                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AttemptToAddItemAmount_RemainderAmount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsMaxAmount_MaxCount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::FindFreeStackSpace(const struct FS_InvItem& InvItem, class UBP_MasterInventory_C* StopInv, bool* Reaminder, struct FS_InvItem* ReaminderInvItem, const struct FS_InvItem& InvItemL, int32 AmountRemainingL, const struct FS_InvSlot& SlotElementL, int32 Temp_int_Array_Index_Variable, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_AttemptToAddItemAmount_Remainder, int32 CallFunc_AttemptToAddItemAmount_RemainderAmount, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_SGK_IsMaxAmount_MaxCount, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "FindFreeStackSpace");

	Params::UBP_MasterInventory_C_FindFreeStackSpace_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.StopInv = StopInv;
	Parms.InvItemL = InvItemL;
	Parms.AmountRemainingL = AmountRemainingL;
	Parms.SlotElementL = SlotElementL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AttemptToAddItemAmount_Remainder = CallFunc_AttemptToAddItemAmount_Remainder;
	Parms.CallFunc_AttemptToAddItemAmount_RemainderAmount = CallFunc_AttemptToAddItemAmount_RemainderAmount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_SGK_IsMaxAmount_MaxCount = CallFunc_SGK_IsMaxAmount_MaxCount;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Reaminder != nullptr)
		*Reaminder = Parms.Reaminder;

	if (ReaminderInvItem != nullptr)
		*ReaminderInvItem = std::move(Parms.ReaminderInvItem);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AddItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               StackSearch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowNotifications                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemainingItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  RemainingInvItem                                                 (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                NewItemSlot                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              StackAddedL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddAmountL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RemainingL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  RootSlotL                                                        (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               RotatedL                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemainingItemL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TotalItemWeightL                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  AddItemL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              StartAmountL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_UpdateAllAttachments_self_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddWeightCheck_CanAdd                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddWeightCheck_ItemCount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>CallFunc_SGK_UpdateAllAttachments_self_CastInput_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_DynamicCast_AsBP_Player_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_DynamicCast_AsBP_Player_Inventory_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeightCheck_ExceedsMaxWeight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemLimitCheck_AllowAdd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ItemLimitCheck_AddCount                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ItemLimitCheck_Remaining                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_1                        (HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_2                        (HasGetValueTypeHash)
// bool                               CallFunc_ContainerRestrictionCheck_Can_Add                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_3                        (HasGetValueTypeHash)
// bool                               CallFunc_FindFreeStackSpace_Reaminder                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_FindFreeStackSpace_ReaminderInvItem                     (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindEmptySlots_SpaceFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindEmptySlots_Rotated                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_FindEmptySlots_FoundSlots                               (ReferenceParm, ContainsInstancedReference)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_2                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddWeightCheck_ItemWeight_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::AddItem(const struct FS_InvItem& Item, bool StackSearch, bool ShowNotifications, bool* RemainingItem, struct FS_InvItem* RemainingInvItem, struct FS_InvSlotID* NewItemSlot, int32 StackAddedL, int32 AddAmountL, int32 RemainingL, const struct FS_InvSlot& RootSlotL, bool RotatedL, bool RemainingItemL, double TotalItemWeightL, const struct FS_InvItem& AddItemL, const TArray<struct FS_InvSlot>& FoundSlotsL, int32 StartAmountL, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_UpdateAllAttachments_self_CastInput, bool CallFunc_AddWeightCheck_CanAdd, int32 CallFunc_AddWeightCheck_ItemCount, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_UpdateAllAttachments_self_CastInput_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, class UBP_PlayerInventory_C* K2Node_DynamicCast_AsBP_Player_Inventory, bool K2Node_DynamicCast_bSuccess, class UBP_PlayerInventory_C* K2Node_DynamicCast_AsBP_Player_Inventory_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_WeightCheck_ExceedsMaxWeight, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ItemLimitCheck_AllowAdd, int32 CallFunc_ItemLimitCheck_AddCount, int32 CallFunc_ItemLimitCheck_Remaining, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_2, bool CallFunc_ContainerRestrictionCheck_Can_Add, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_3, bool CallFunc_FindFreeStackSpace_Reaminder, const struct FS_InvItem& CallFunc_FindFreeStackSpace_ReaminderInvItem, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, int32 CallFunc_Subtract_IntInt_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_FindEmptySlots_SpaceFound, bool CallFunc_FindEmptySlots_Rotated, TArray<struct FS_InvSlot>& CallFunc_FindEmptySlots_FoundSlots, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_SGK_ItemDetails_ItemFound_2, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_2, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_AddWeightCheck_ItemWeight_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AddItem");

	Params::UBP_MasterInventory_C_AddItem_Params Parms{};

	Parms.Item = Item;
	Parms.StackSearch = StackSearch;
	Parms.ShowNotifications = ShowNotifications;
	Parms.StackAddedL = StackAddedL;
	Parms.AddAmountL = AddAmountL;
	Parms.RemainingL = RemainingL;
	Parms.RootSlotL = RootSlotL;
	Parms.RotatedL = RotatedL;
	Parms.RemainingItemL = RemainingItemL;
	Parms.TotalItemWeightL = TotalItemWeightL;
	Parms.AddItemL = AddItemL;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.StartAmountL = StartAmountL;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_UpdateAllAttachments_self_CastInput = CallFunc_SGK_UpdateAllAttachments_self_CastInput;
	Parms.CallFunc_AddWeightCheck_CanAdd = CallFunc_AddWeightCheck_CanAdd;
	Parms.CallFunc_AddWeightCheck_ItemCount = CallFunc_AddWeightCheck_ItemCount;
	Parms.CallFunc_SGK_UpdateAllAttachments_self_CastInput_1 = CallFunc_SGK_UpdateAllAttachments_self_CastInput_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSlotID_1 = K2Node_MakeStruct_S_InvSlotID_1;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.K2Node_DynamicCast_AsBP_Player_Inventory = K2Node_DynamicCast_AsBP_Player_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Player_Inventory_1 = K2Node_DynamicCast_AsBP_Player_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_WeightCheck_ExceedsMaxWeight = CallFunc_WeightCheck_ExceedsMaxWeight;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ItemLimitCheck_AllowAdd = CallFunc_ItemLimitCheck_AllowAdd;
	Parms.CallFunc_ItemLimitCheck_AddCount = CallFunc_ItemLimitCheck_AddCount;
	Parms.CallFunc_ItemLimitCheck_Remaining = CallFunc_ItemLimitCheck_Remaining;
	Parms.K2Node_MakeStruct_S_NotificationDetails_1 = K2Node_MakeStruct_S_NotificationDetails_1;
	Parms.K2Node_MakeStruct_S_NotificationDetails_2 = K2Node_MakeStruct_S_NotificationDetails_2;
	Parms.CallFunc_ContainerRestrictionCheck_Can_Add = CallFunc_ContainerRestrictionCheck_Can_Add;
	Parms.K2Node_MakeStruct_S_NotificationDetails_3 = K2Node_MakeStruct_S_NotificationDetails_3;
	Parms.CallFunc_FindFreeStackSpace_Reaminder = CallFunc_FindFreeStackSpace_Reaminder;
	Parms.CallFunc_FindFreeStackSpace_ReaminderInvItem = CallFunc_FindFreeStackSpace_ReaminderInvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FindEmptySlots_SpaceFound = CallFunc_FindEmptySlots_SpaceFound;
	Parms.CallFunc_FindEmptySlots_Rotated = CallFunc_FindEmptySlots_Rotated;
	Parms.CallFunc_FindEmptySlots_FoundSlots = CallFunc_FindEmptySlots_FoundSlots;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_2 = CallFunc_SGK_ItemDetails_ItemFound_2;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_2 = CallFunc_SGK_ItemDetails_ItemDetails_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AddWeightCheck_ItemWeight_ImplicitCast = CallFunc_AddWeightCheck_ItemWeight_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (RemainingItem != nullptr)
		*RemainingItem = Parms.RemainingItem;

	if (RemainingInvItem != nullptr)
		*RemainingInvItem = std::move(Parms.RemainingInvItem);

	if (NewItemSlot != nullptr)
		*NewItemSlot = std::move(Parms.NewItemSlot);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ConstructSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_SelfItem_SelfItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetItemRangeClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SGK_GetItemRangeClass_RangeWeapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_1                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InventoryGridDetails_FoundGrid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CustomGridLayoutData     CallFunc_SGK_InventoryGridDetails_InventoryGridData              (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ManualIndexs             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_MakeStruct_S_InvSlot                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_MakeStruct_S_InvSlot_1                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::ConstructSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, const struct FS_InvItem& CallFunc_SGK_SelfItem_SelfItem, bool CallFunc_SGK_GetItemRangeClass_ReturnValue, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FS_InvSlot& CallFunc_Array_Get_Item, const struct FS_InvSlot& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_SGK_InventoryGridDetails_FoundGrid, const struct FS_CustomGridLayoutData& CallFunc_SGK_InventoryGridDetails_InventoryGridData, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FS_ManualIndexs& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FS_InvSlot& K2Node_MakeStruct_S_InvSlot, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FS_InvSlot& K2Node_MakeStruct_S_InvSlot_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ConstructSlots");

	Params::UBP_MasterInventory_C_ConstructSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_SelfItem_SelfItem = CallFunc_SGK_SelfItem_SelfItem;
	Parms.CallFunc_SGK_GetItemRangeClass_ReturnValue = CallFunc_SGK_GetItemRangeClass_ReturnValue;
	Parms.CallFunc_SGK_GetItemRangeClass_RangeWeapon = CallFunc_SGK_GetItemRangeClass_RangeWeapon;
	Parms.K2Node_MakeStruct_S_InvItem_1 = K2Node_MakeStruct_S_InvItem_1;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_SGK_InventoryGridDetails_FoundGrid = CallFunc_SGK_InventoryGridDetails_FoundGrid;
	Parms.CallFunc_SGK_InventoryGridDetails_InventoryGridData = CallFunc_SGK_InventoryGridDetails_InventoryGridData;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_InvSlot = K2Node_MakeStruct_S_InvSlot;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvSlot_1 = K2Node_MakeStruct_S_InvSlot_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ConstructItemSpawnList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_SpawnerList>      SpawnList                                                        (Parm, OutParm)
// TArray<struct FS_SpawnerList>      ItemSpawnList                                                    (Edit, BlueprintVisible)
// struct FS_SpawnerList              SpawnerListEntryL                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SpawnerList              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class E_RecipeCategory>  CallFunc_Set_Intersection_Result                                 (None)
// int32                              CallFunc_Set_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ConstructItemSpawnList(TArray<struct FS_SpawnerList>* SpawnList, const TArray<struct FS_SpawnerList>& ItemSpawnList, const struct FS_SpawnerList& SpawnerListEntryL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Add_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_SpawnerList& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSet<enum class E_RecipeCategory> CallFunc_Set_Intersection_Result, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ConstructItemSpawnList");

	Params::UBP_MasterInventory_C_ConstructItemSpawnList_Params Parms{};

	Parms.ItemSpawnList = ItemSpawnList;
	Parms.SpawnerListEntryL = SpawnerListEntryL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Set_Intersection_Result = CallFunc_Set_Intersection_Result;
	Parms.CallFunc_Set_Length_ReturnValue = CallFunc_Set_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnList != nullptr)
		*SpawnList = std::move(Parms.SpawnList);

}


// Function BP_MasterInventory.BP_MasterInventory_C.FindEmptySlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowRotation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WeightCheck                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeightCheckAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SpaceFound                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rotated                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlots                                                       (Parm, OutParm, ContainsInstancedReference)
// int32                              WidthL                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HeightL                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CraftingL                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingComponent_C*      CookingL                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsFuelItemL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckFuelL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CellDivisionL                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvColumnsL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               SpaceFoundL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RootIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  RootSlotL                                                        (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     K2Node_DynamicCast_AsBP_Crafting_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingComponent_C*      K2Node_DynamicCast_AsBP_Cooking_Component                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFuelItem_IsFuelItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFuelItem_IsFuelItem_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIndexFuelSlot_IsFuelSlot                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIndexFuelSlot_IsFuelSlot_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_1                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_WeightCheck_ExceedsMaxWeight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeightCheck_ExceedsMaxWeight_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIndexFuelSlot_IsFuelSlot_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_2                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RootSpaceCheck_SlotsBlocked                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_RootSpaceCheck_FoundSlots                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCookingSlot_IsCookingSlot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InvSlotOccupied_Occupied                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCookingSlot_IsCookingSlot_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_RootSpaceCheck_FoundSlots_1                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SGK_InvSlotOccupied_Occupied_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIndexFuelSlot_IsFuelSlot_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::FindEmptySlots(bool AllowRotation, class FName ItemId, bool WeightCheck, int32 WeightCheckAmount, bool* SpaceFound, bool* Rotated, TArray<struct FS_InvSlot>* FoundSlots, int32 WidthL, int32 HeightL, class UBP_CraftingComponent_C* CraftingL, class UBP_CookingComponent_C* CookingL, bool IsFuelItemL, bool CheckFuelL, int32 CellDivisionL, int32 InvColumnsL, const TArray<struct FS_InvSlot>& FoundSlotsL, bool SpaceFoundL, int32 RootIndexL, const struct FS_InvSlot& RootSlotL, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_CraftingComponent_C* K2Node_DynamicCast_AsBP_Crafting_Component, bool K2Node_DynamicCast_bSuccess, class UBP_CookingComponent_C* K2Node_DynamicCast_AsBP_Cooking_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsFuelItem_IsFuelItem, bool CallFunc_IsFuelItem_IsFuelItem_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsIndexFuelSlot_IsFuelSlot, bool CallFunc_IsIndexFuelSlot_IsFuelSlot_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_WeightCheck_ExceedsMaxWeight, bool CallFunc_WeightCheck_ExceedsMaxWeight_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsIndexFuelSlot_IsFuelSlot_2, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_2, int32 CallFunc_SGK_ItemSize_Height, int32 CallFunc_SGK_ItemSize_Width, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 K2Node_Select_Default_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsCookingSlot_IsCookingSlot, bool CallFunc_SGK_InvSlotOccupied_Occupied, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsCookingSlot_IsCookingSlot_1, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots_1, bool CallFunc_SGK_InvSlotOccupied_Occupied_1, bool CallFunc_SGK_IsRootSlot_IsRootSlot_1, int32 CallFunc_SGK_IsRootSlot_RootIndex_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_IsIndexFuelSlot_IsFuelSlot_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, double CallFunc_FMod_Remainder_1, int32 CallFunc_FMod_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_FMod_Divisor_ImplicitCast_1, double CallFunc_FMod_Dividend_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "FindEmptySlots");

	Params::UBP_MasterInventory_C_FindEmptySlots_Params Parms{};

	Parms.AllowRotation = AllowRotation;
	Parms.ItemId = ItemId;
	Parms.WeightCheck = WeightCheck;
	Parms.WeightCheckAmount = WeightCheckAmount;
	Parms.WidthL = WidthL;
	Parms.HeightL = HeightL;
	Parms.CraftingL = CraftingL;
	Parms.CookingL = CookingL;
	Parms.IsFuelItemL = IsFuelItemL;
	Parms.CheckFuelL = CheckFuelL;
	Parms.CellDivisionL = CellDivisionL;
	Parms.InvColumnsL = InvColumnsL;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.SpaceFoundL = SpaceFoundL;
	Parms.RootIndexL = RootIndexL;
	Parms.RootSlotL = RootSlotL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Crafting_Component = K2Node_DynamicCast_AsBP_Crafting_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Cooking_Component = K2Node_DynamicCast_AsBP_Cooking_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsFuelItem_IsFuelItem = CallFunc_IsFuelItem_IsFuelItem;
	Parms.CallFunc_IsFuelItem_IsFuelItem_1 = CallFunc_IsFuelItem_IsFuelItem_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsIndexFuelSlot_IsFuelSlot = CallFunc_IsIndexFuelSlot_IsFuelSlot;
	Parms.CallFunc_IsIndexFuelSlot_IsFuelSlot_1 = CallFunc_IsIndexFuelSlot_IsFuelSlot_1;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.K2Node_MakeStruct_S_InvItem_1 = K2Node_MakeStruct_S_InvItem_1;
	Parms.CallFunc_WeightCheck_ExceedsMaxWeight = CallFunc_WeightCheck_ExceedsMaxWeight;
	Parms.CallFunc_WeightCheck_ExceedsMaxWeight_1 = CallFunc_WeightCheck_ExceedsMaxWeight_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsIndexFuelSlot_IsFuelSlot_2 = CallFunc_IsIndexFuelSlot_IsFuelSlot_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvItem_2 = K2Node_MakeStruct_S_InvItem_2;
	Parms.CallFunc_SGK_ItemSize_Height = CallFunc_SGK_ItemSize_Height;
	Parms.CallFunc_SGK_ItemSize_Width = CallFunc_SGK_ItemSize_Width;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_2 = CallFunc_Multiply_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_3 = CallFunc_Multiply_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_4 = CallFunc_Multiply_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_SGK_RootSpaceCheck_SlotsBlocked = CallFunc_SGK_RootSpaceCheck_SlotsBlocked;
	Parms.CallFunc_SGK_RootSpaceCheck_FoundSlots = CallFunc_SGK_RootSpaceCheck_FoundSlots;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsCookingSlot_IsCookingSlot = CallFunc_IsCookingSlot_IsCookingSlot;
	Parms.CallFunc_SGK_InvSlotOccupied_Occupied = CallFunc_SGK_InvSlotOccupied_Occupied;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsCookingSlot_IsCookingSlot_1 = CallFunc_IsCookingSlot_IsCookingSlot_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1 = CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1;
	Parms.CallFunc_SGK_RootSpaceCheck_FoundSlots_1 = CallFunc_SGK_RootSpaceCheck_FoundSlots_1;
	Parms.CallFunc_SGK_InvSlotOccupied_Occupied_1 = CallFunc_SGK_InvSlotOccupied_Occupied_1;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot_1 = CallFunc_SGK_IsRootSlot_IsRootSlot_1;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex_1 = CallFunc_SGK_IsRootSlot_RootIndex_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsIndexFuelSlot_IsFuelSlot_3 = CallFunc_IsIndexFuelSlot_IsFuelSlot_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_FMod_Remainder_1 = CallFunc_FMod_Remainder_1;
	Parms.CallFunc_FMod_ReturnValue_1 = CallFunc_FMod_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_FMod_Divisor_ImplicitCast = CallFunc_FMod_Divisor_ImplicitCast;
	Parms.CallFunc_FMod_Divisor_ImplicitCast_1 = CallFunc_FMod_Divisor_ImplicitCast_1;
	Parms.CallFunc_FMod_Dividend_ImplicitCast = CallFunc_FMod_Dividend_ImplicitCast;
	Parms.CallFunc_FMod_Dividend_ImplicitCast_1 = CallFunc_FMod_Dividend_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SpaceFound != nullptr)
		*SpaceFound = Parms.SpaceFound;

	if (Rotated != nullptr)
		*Rotated = Parms.Rotated;

	if (FoundSlots != nullptr)
		*FoundSlots = std::move(Parms.FoundSlots);

}


// Function BP_MasterInventory.BP_MasterInventory_C.EmptyInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DestroyItems                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       NewItemInventory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  RemainingItemL                                                   (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  ItemElementL                                                     (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_RemainingItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AddItem_RemainingInvItem                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AddItem_NewItemSlot                                     (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::EmptyInventory(bool DestroyItems, class UBP_MasterInventory_C* NewItemInventory, const struct FS_InvItem& RemainingItemL, const struct FS_InvSlot& ItemElementL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "EmptyInventory");

	Params::UBP_MasterInventory_C_EmptyInventory_Params Parms{};

	Parms.DestroyItems = DestroyItems;
	Parms.NewItemInventory = NewItemInventory;
	Parms.RemainingItemL = RemainingItemL;
	Parms.ItemElementL = ItemElementL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddItem_RemainingItem = CallFunc_AddItem_RemainingItem;
	Parms.CallFunc_AddItem_RemainingInvItem = CallFunc_AddItem_RemainingInvItem;
	Parms.CallFunc_AddItem_NewItemSlot = CallFunc_AddItem_NewItemSlot;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SpawnItemAtLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  ItemL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInteractionInterface_C>K2Node_DynamicCast_AsBP_SGKInteraction_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_DropItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SpawnItemAtLocation(const struct FTransform& Transform, const struct FS_InvItem& InvItem, const struct FS_InvItem& ItemL, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_DropItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SpawnItemAtLocation");

	Params::UBP_MasterInventory_C_SpawnItemAtLocation_Params Parms{};

	Parms.Transform = Transform;
	Parms.InvItem = InvItem;
	Parms.ItemL = ItemL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKInteraction_Interface = K2Node_DynamicCast_AsBP_SGKInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_DropItem_ReturnValue = CallFunc_SGK_DropItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK LoadWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_LoadWeaponAttachments(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK LoadWeaponAttachments");

	Params::UBP_MasterInventory_C_SGK_LoadWeaponAttachments_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ShowAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::SGK_ShowAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK ShowAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK RemoveAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AttachmentType        Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_RemoveAttachment(enum class E_AttachmentType Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK RemoveAttachment");

	Params::UBP_MasterInventory_C_SGK_RemoveAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK SpawnOverflowItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_SpawnOverflowItems(const struct FS_InvItem& InvItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK SpawnOverflowItems");

	Params::UBP_MasterInventory_C_SGK_SpawnOverflowItems_Params Parms{};

	Parms.InvItem = InvItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ItemMovedInInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::SGK_ItemMovedInInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK ItemMovedInInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateSpecialSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_UpdateSpecialSlot(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK UpdateSpecialSlot");

	Params::UBP_MasterInventory_C_SGK_UpdateSpecialSlot_Params Parms{};

	Parms.InvSlot = InvSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ToggleComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::SGK_ToggleComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK ToggleComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK RemoveAdditionalChecks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_RemoveAdditionalChecks(const struct FS_InvSlot& InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK RemoveAdditionalChecks");

	Params::UBP_MasterInventory_C_SGK_RemoveAdditionalChecks_Params Parms{};

	Parms.InvSlot = InvSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK ItemSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Sounds                SoundType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_ItemSound(class FName ItemId, enum class E_Sounds SoundType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK ItemSound");

	Params::UBP_MasterInventory_C_SGK_ItemSound_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.SoundType = SoundType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateAllAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::SGK_UpdateAllAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK UpdateAllAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK DestroyWeaponAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::SGK_DestroyWeaponAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK DestroyWeaponAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGK UpdateCharacterYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGK_UpdateCharacterYaw(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGK UpdateCharacterYaw");

	Params::UBP_MasterInventory_C_SGK_UpdateCharacterYaw_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerCancelCraftingListing
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue            CancelQueue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerCancelCraftingListing(const struct FS_CraftingQueue& CancelQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerCancelCraftingListing");

	Params::UBP_MasterInventory_C_ServerCancelCraftingListing_Params Parms{};

	Parms.CancelQueue = CancelQueue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateClientCraftingListing
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue            NewQueueListing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CraftingInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerUpdateClientCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerUpdateClientCraftingListing");

	Params::UBP_MasterInventory_C_ServerUpdateClientCraftingListing_Params Parms{};

	Parms.NewQueueListing = NewQueueListing;
	Parms.CraftingInventory = CraftingInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerStartClientListingTimer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CraftingRecipe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CraftingInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerStartClientListingTimer(class FName CraftingRecipe, class UBP_MasterInventory_C* CraftingInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerStartClientListingTimer");

	Params::UBP_MasterInventory_C_ServerStartClientListingTimer_Params Parms{};

	Parms.CraftingRecipe = CraftingRecipe;
	Parms.CraftingInventory = CraftingInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerAddClientCraftingListing
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue            NewQueueListing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       CraftingInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerAddClientCraftingListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerAddClientCraftingListing");

	Params::UBP_MasterInventory_C_ServerAddClientCraftingListing_Params Parms{};

	Parms.NewQueueListing = NewQueueListing;
	Parms.CraftingInventory = CraftingInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.FinishedCraftingTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::FinishedCraftingTimer(class FName Recipe, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "FinishedCraftingTimer");

	Params::UBP_MasterInventory_C_FinishedCraftingTimer_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ResetCraftingTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ResetCraftingTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ResetCraftingTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CheckCraftingRequirements
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::CheckCraftingRequirements(class FName Recipe, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CheckCraftingRequirements");

	Params::UBP_MasterInventory_C_CheckCraftingRequirements_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerCreateNewListingCheck
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerCreateNewListingCheck(class FName RecipeName, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerCreateNewListingCheck");

	Params::UBP_MasterInventory_C_ServerCreateNewListingCheck_Params Parms{};

	Parms.RecipeName = RecipeName;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.OwnerDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::OwnerDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "OwnerDestroyed");

	Params::UBP_MasterInventory_C_OwnerDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerSpawnDestructionBag
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ServerSpawnDestructionBag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerSpawnDestructionBag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CreateNotificationInChild
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_NotificationDetails      NotificationDetails                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_MasterInventory_C::CreateNotificationInChild(const struct FS_NotificationDetails& NotificationDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CreateNotificationInChild");

	Params::UBP_MasterInventory_C_CreateNotificationInChild_Params Parms{};

	Parms.NotificationDetails = NotificationDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.SGKSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           Save                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "SGKSave");

	Params::UBP_MasterInventory_C_SGKSave_Params Parms{};

	Parms.Save = Save;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.InitializeComponentSaveSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::InitializeComponentSaveSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "InitializeComponentSaveSystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.LoadComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::LoadComponent(class UBP_SGKSaveGame_C* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "LoadComponent");

	Params::UBP_MasterInventory_C_LoadComponent_Params Parms{};

	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.CheckItemSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::CheckItemSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "CheckItemSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ClientClearInventory
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ClientClearInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ClientClearInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateRootItems
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ServerUpdateRootItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerUpdateRootItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.MulticastSetDetails
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ContainerDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::MulticastSetDetails(const struct FS_ContainerDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "MulticastSetDetails");

	Params::UBP_MasterInventory_C_MulticastSetDetails_Params Parms{};

	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerUpdateItemSlots
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerUpdateItemSlots(class UBP_PlayerInventory_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerUpdateItemSlots");

	Params::UBP_MasterInventory_C_ServerUpdateItemSlots_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.AddPanelToUsingPlayers
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::AddPanelToUsingPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "AddPanelToUsingPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.MulticastForceItemCount
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::MulticastForceItemCount(int32 ItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "MulticastForceItemCount");

	Params::UBP_MasterInventory_C_MulticastForceItemCount_Params Parms{};

	Parms.ItemCount = ItemCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ClientUpdateInventory
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>          Inventory                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UBP_MasterInventory_C::ClientUpdateInventory(TArray<struct FS_InvSlot>& Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ClientUpdateInventory");

	Params::UBP_MasterInventory_C_ClientUpdateInventory_Params Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerForceRootItemUpdate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::ServerForceRootItemUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerForceRootItemUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerEmptyInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       StartInventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerEmptyInventory(class UBP_MasterInventory_C* StartInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerEmptyInventory");

	Params::UBP_MasterInventory_C_ServerEmptyInventory_Params Parms{};

	Parms.StartInventory = StartInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ServerAddItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterInventory_C::ServerAddItem(const struct FS_InvItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ServerAddItem");

	Params::UBP_MasterInventory_C_ServerAddItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.ExecuteUbergraph_BP_MasterInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_CustomEvent_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_RemainingItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AddItem_RemainingInvItem                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AddItem_NewItemSlot                                     (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AttachmentType        K2Node_Event_Attachment                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_Event_InvItem                                             (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_Event_InvSlot_1                                           (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  K2Node_Event_InvSlot                                             (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class FName                        K2Node_Event_ItemID                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Sounds                K2Node_Event_SoundType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_Pawn                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// bool                               CallFunc_FindCraftingListing_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_FindCraftingListing_CraftingListing                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequiredActorCraftingCheck_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_CustomEvent_CancelQueue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_CustomEvent_NewQueueListing_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       K2Node_CustomEvent_CraftingInventory_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CraftingRecipe                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       K2Node_CustomEvent_CraftingInventory_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            K2Node_CustomEvent_NewQueueListing                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       K2Node_CustomEvent_CraftingInventory                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Recipe_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_CreateNewCraftingListing_Output                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingQueue            CallFunc_UpdateCraftingListing_Output                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_1                        (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Recipe                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRecipeCost_CanCraft                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_RecipeName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_SelfItem_SelfItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_3                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_SelfItem_SelfItem_1                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_7                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_2                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_3                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterBuildPart_C*       K2Node_DynamicCast_AsBP_Master_Build_Part                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddStartingItems_Return                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_EquipmentInventory_C*    K2Node_DynamicCast_AsBP_Equipment_Inventory                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_CustomEvent_NotificationDetails                           (HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_10                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RecipeDetails_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CallFunc_SGK_RecipeDetails_CraftingRecipe                        (HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_Event_Save                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddStartingItems_Return_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadComponentData_LoadComplete                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameModeInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SaveSystem_C*            CallFunc_SGK_GetSaveGame_SaveGame                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_11                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_12                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         K2Node_CustomEvent_Details                                       (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_AllItems_RootSlots                                      (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_Array_Get_Item_13                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_CustomEvent_PlayerInventory                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ItemCount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          K2Node_CustomEvent_Inventory                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       K2Node_CustomEvent_StartInventory                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterInventory_C::ExecuteUbergraph_BP_MasterInventory(int32 EntryPoint, const struct FS_InvItem& K2Node_CustomEvent_Item, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_3, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_8, bool K2Node_Event_Visible, enum class E_AttachmentType K2Node_Event_Attachment, const struct FS_InvItem& K2Node_Event_InvItem, const struct FS_InvSlot& K2Node_Event_InvSlot_1, const struct FS_InvSlot& K2Node_Event_InvSlot, class FName K2Node_Event_ItemID, enum class E_Sounds K2Node_Event_SoundType, class APawn* K2Node_Event_Pawn, int32 Temp_int_Array_Index_Variable_6, bool CallFunc_IsValid_ReturnValue, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_8, int32 Temp_int_Array_Index_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_9, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, bool CallFunc_FindCraftingListing_ReturnValue, const struct FS_CraftingQueue& CallFunc_FindCraftingListing_CraftingListing, bool CallFunc_RequiredActorCraftingCheck_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FS_CraftingQueue& K2Node_CustomEvent_CancelQueue, const struct FS_CraftingQueue& K2Node_CustomEvent_NewQueueListing_1, class UBP_MasterInventory_C* K2Node_CustomEvent_CraftingInventory_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class FName K2Node_CustomEvent_CraftingRecipe, class UBP_MasterInventory_C* K2Node_CustomEvent_CraftingInventory_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FS_CraftingQueue& K2Node_CustomEvent_NewQueueListing, class UBP_MasterInventory_C* K2Node_CustomEvent_CraftingInventory, int32 CallFunc_Array_Length_ReturnValue_3, class FName K2Node_CustomEvent_Recipe_1, int32 K2Node_CustomEvent_Amount_2, const struct FS_CraftingQueue& CallFunc_CreateNewCraftingListing_Output, int32 Temp_int_Array_Index_Variable_8, const struct FS_CraftingQueue& CallFunc_UpdateCraftingListing_Output, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, class FName K2Node_CustomEvent_Recipe, int32 K2Node_CustomEvent_Amount_1, int32 CallFunc_Add_IntInt_ReturnValue_10, bool CallFunc_CheckRecipeCost_CanCraft, class FName K2Node_CustomEvent_RecipeName, int32 K2Node_CustomEvent_Amount, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable_9, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_9, int32 CallFunc_Add_IntInt_ReturnValue_11, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FS_InvItem& CallFunc_SGK_SelfItem_SelfItem, const struct FS_InvSlot& CallFunc_Array_Get_Item_3, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_4, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_5, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_7, const struct FS_InvItem& CallFunc_SGK_SelfItem_SelfItem_1, const struct FS_InvSlot& CallFunc_Array_Get_Item_7, bool CallFunc_SGK_ItemDetails_ItemFound_2, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_2, bool CallFunc_SGK_ItemDetails_ItemFound_3, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_3, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, bool CallFunc_SGK_IsRootSlot_IsRootSlot_1, int32 CallFunc_SGK_IsRootSlot_RootIndex_1, int32 CallFunc_Array_Length_ReturnValue_9, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MasterBuildPart_C* K2Node_DynamicCast_AsBP_Master_Build_Part, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable_10, bool CallFunc_Not_PreBool_ReturnValue, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_8, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Array_Index_Variable_11, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, class AActor* CallFunc_GetOwner_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_AddStartingItems_Return, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, class UBP_EquipmentInventory_C* K2Node_DynamicCast_AsBP_Equipment_Inventory, bool K2Node_DynamicCast_bSuccess_1, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_8, const struct FS_NotificationDetails& K2Node_CustomEvent_NotificationDetails, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_9, bool CallFunc_SGK_RecipeDetails_ReturnValue, const struct FS_CraftingRecipe& CallFunc_SGK_RecipeDetails_CraftingRecipe, bool CallFunc_IsStandalone_ReturnValue_1, class UBP_SGKSaveGame_C* K2Node_Event_Save, bool CallFunc_AddStartingItems_Return_1, int32 Temp_int_Loop_Counter_Variable_10, int32 Temp_int_Loop_Counter_Variable_11, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_12, bool CallFunc_Less_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_13, bool CallFunc_LoadComponentData_LoadComplete, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_SGKSaveGame_C* K2Node_CustomEvent_SaveGame, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_12, class ABP_SaveSystem_C* CallFunc_SGK_GetSaveGame_SaveGame, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_11, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Loop_Counter_Variable_12, bool CallFunc_Less_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 Temp_int_Array_Index_Variable_13, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_12, bool CallFunc_IsValid_ReturnValue_9, const struct FS_ContainerDetails& K2Node_CustomEvent_Details, TArray<struct FS_InvSlot>& CallFunc_AllItems_RootSlots, bool Temp_bool_IsClosed_Variable_1, class UBP_PlayerInventory_C* CallFunc_Array_Get_Item_13, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_13, class UBP_PlayerInventory_C* K2Node_CustomEvent_PlayerInventory, bool CallFunc_Less_IntInt_ReturnValue_13, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 K2Node_CustomEvent_ItemCount, TArray<struct FS_InvSlot>& K2Node_CustomEvent_Inventory, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_13, class UBP_MasterInventory_C* K2Node_CustomEvent_StartInventory, bool CallFunc_Less_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_15, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "ExecuteUbergraph_BP_MasterInventory");

	Params::UBP_MasterInventory_C_ExecuteUbergraph_BP_MasterInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_AddItem_RemainingItem = CallFunc_AddItem_RemainingItem;
	Parms.CallFunc_AddItem_RemainingInvItem = CallFunc_AddItem_RemainingInvItem;
	Parms.CallFunc_AddItem_NewItemSlot = CallFunc_AddItem_NewItemSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.K2Node_Event_Visible = K2Node_Event_Visible;
	Parms.K2Node_Event_Attachment = K2Node_Event_Attachment;
	Parms.K2Node_Event_InvItem = K2Node_Event_InvItem;
	Parms.K2Node_Event_InvSlot_1 = K2Node_Event_InvSlot_1;
	Parms.K2Node_Event_InvSlot = K2Node_Event_InvSlot;
	Parms.K2Node_Event_ItemID = K2Node_Event_ItemID;
	Parms.K2Node_Event_SoundType = K2Node_Event_SoundType;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_FindCraftingListing_ReturnValue = CallFunc_FindCraftingListing_ReturnValue;
	Parms.CallFunc_FindCraftingListing_CraftingListing = CallFunc_FindCraftingListing_CraftingListing;
	Parms.CallFunc_RequiredActorCraftingCheck_ReturnValue = CallFunc_RequiredActorCraftingCheck_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_CancelQueue = K2Node_CustomEvent_CancelQueue;
	Parms.K2Node_CustomEvent_NewQueueListing_1 = K2Node_CustomEvent_NewQueueListing_1;
	Parms.K2Node_CustomEvent_CraftingInventory_2 = K2Node_CustomEvent_CraftingInventory_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_CraftingRecipe = K2Node_CustomEvent_CraftingRecipe;
	Parms.K2Node_CustomEvent_CraftingInventory_1 = K2Node_CustomEvent_CraftingInventory_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_CustomEvent_NewQueueListing = K2Node_CustomEvent_NewQueueListing;
	Parms.K2Node_CustomEvent_CraftingInventory = K2Node_CustomEvent_CraftingInventory;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_CustomEvent_Recipe_1 = K2Node_CustomEvent_Recipe_1;
	Parms.K2Node_CustomEvent_Amount_2 = K2Node_CustomEvent_Amount_2;
	Parms.CallFunc_CreateNewCraftingListing_Output = CallFunc_CreateNewCraftingListing_Output;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_UpdateCraftingListing_Output = CallFunc_UpdateCraftingListing_Output;
	Parms.K2Node_MakeStruct_S_NotificationDetails_1 = K2Node_MakeStruct_S_NotificationDetails_1;
	Parms.K2Node_CustomEvent_Recipe = K2Node_CustomEvent_Recipe;
	Parms.K2Node_CustomEvent_Amount_1 = K2Node_CustomEvent_Amount_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_CheckRecipeCost_CanCraft = CallFunc_CheckRecipeCost_CanCraft;
	Parms.K2Node_CustomEvent_RecipeName = K2Node_CustomEvent_RecipeName;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_SGK_SelfItem_SelfItem = CallFunc_SGK_SelfItem_SelfItem;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_SGK_SelfItem_SelfItem_1 = CallFunc_SGK_SelfItem_SelfItem_1;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_2 = CallFunc_SGK_ItemDetails_ItemFound_2;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_2 = CallFunc_SGK_ItemDetails_ItemDetails_2;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_3 = CallFunc_SGK_ItemDetails_ItemFound_3;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_3 = CallFunc_SGK_ItemDetails_ItemDetails_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSlotID_1 = K2Node_MakeStruct_S_InvSlotID_1;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot_1 = CallFunc_SGK_IsRootSlot_IsRootSlot_1;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex_1 = CallFunc_SGK_IsRootSlot_RootIndex_1;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Build_Part = K2Node_DynamicCast_AsBP_Master_Build_Part;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_AddStartingItems_Return = CallFunc_AddStartingItems_Return;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_GetObjectClass_ReturnValue_2 = CallFunc_GetObjectClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Inventory = K2Node_DynamicCast_AsBP_Equipment_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.K2Node_CustomEvent_NotificationDetails = K2Node_CustomEvent_NotificationDetails;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_SGK_RecipeDetails_ReturnValue = CallFunc_SGK_RecipeDetails_ReturnValue;
	Parms.CallFunc_SGK_RecipeDetails_CraftingRecipe = CallFunc_SGK_RecipeDetails_CraftingRecipe;
	Parms.CallFunc_IsStandalone_ReturnValue_1 = CallFunc_IsStandalone_ReturnValue_1;
	Parms.K2Node_Event_Save = K2Node_Event_Save;
	Parms.CallFunc_AddStartingItems_Return_1 = CallFunc_AddStartingItems_Return_1;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_LoadComponentData_LoadComplete = CallFunc_LoadComponentData_LoadComplete;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface = K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Array_Index_Variable_12 = Temp_int_Array_Index_Variable_12;
	Parms.CallFunc_SGK_GetSaveGame_SaveGame = CallFunc_SGK_GetSaveGame_SaveGame;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_12 = Temp_int_Loop_Counter_Variable_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.Temp_int_Array_Index_Variable_13 = Temp_int_Array_Index_Variable_13;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.CallFunc_AllItems_RootSlots = CallFunc_AllItems_RootSlots;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Array_Length_ReturnValue_13 = CallFunc_Array_Length_ReturnValue_13;
	Parms.K2Node_CustomEvent_PlayerInventory = K2Node_CustomEvent_PlayerInventory;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_CustomEvent_ItemCount = K2Node_CustomEvent_ItemCount;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_13 = Temp_int_Loop_Counter_Variable_13;
	Parms.K2Node_CustomEvent_StartInventory = K2Node_CustomEvent_StartInventory;
	Parms.CallFunc_Less_IntInt_ReturnValue_14 = CallFunc_Less_IntInt_ReturnValue_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast_1 = CallFunc_K2_SetTimer_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterInventory.BP_MasterInventory_C.UpdateWeightUI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterInventory_C::UpdateWeightUI__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterInventory_C", "UpdateWeightUI__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


