#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterItemInventory.BP_MasterItemInventory_C
// (None)

class UClass* UBP_MasterItemInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterItemInventory_C");

	return Clss;
}


// BP_MasterItemInventory_C BP_MasterItemInventory.Default__BP_MasterItemInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MasterItemInventory_C* UBP_MasterItemInventory_C::GetDefaultObj()
{
	static class UBP_MasterItemInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MasterItemInventory_C*>(UBP_MasterItemInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK AllowStartingItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowStartingItems                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterItemInventory_C::SGK_AllowStartingItems(bool* AllowStartingItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterItemInventory_C", "SGK AllowStartingItems");

	Params::UBP_MasterItemInventory_C_SGK_AllowStartingItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowStartingItems != nullptr)
		*AllowStartingItems = Parms.AllowStartingItems;

}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.SGK SelfItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  SelfItem                                                         (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_MasterItemInventory_C::SGK_SelfItem(struct FS_InvItem* SelfItem, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterItemInventory_C", "SGK SelfItem");

	Params::UBP_MasterItemInventory_C_SGK_SelfItem_Params Parms{};

	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;

	UObject::ProcessEvent(Func, &Parms);

	if (SelfItem != nullptr)
		*SelfItem = std::move(Parms.SelfItem);

}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.RetrieveItemContainerDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> Temp_struct_Variable                                             (ReferenceParm)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_1                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InventoryGridDetails_FoundGrid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CustomGridLayoutData     CallFunc_SGK_InventoryGridDetails_InventoryGridData              (HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetItemRangeClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SGK_GetItemRangeClass_RangeWeapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_2                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetItemRangeClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SGK_GetItemRangeClass_RangeWeapon_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterItemInventory_C::RetrieveItemContainerDetails(bool Temp_bool_Variable, TArray<struct FDataTableRowHandle>& Temp_struct_Variable, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_SGK_InventoryGridDetails_FoundGrid, const struct FS_CustomGridLayoutData& CallFunc_SGK_InventoryGridDetails_InventoryGridData, bool CallFunc_SGK_GetItemRangeClass_ReturnValue, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_2, bool CallFunc_SGK_GetItemRangeClass_ReturnValue_1, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterItemInventory_C", "RetrieveItemContainerDetails");

	Params::UBP_MasterItemInventory_C_RetrieveItemContainerDetails_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.K2Node_MakeStruct_S_InvItem_1 = K2Node_MakeStruct_S_InvItem_1;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_SGK_InventoryGridDetails_FoundGrid = CallFunc_SGK_InventoryGridDetails_FoundGrid;
	Parms.CallFunc_SGK_InventoryGridDetails_InventoryGridData = CallFunc_SGK_InventoryGridDetails_InventoryGridData;
	Parms.CallFunc_SGK_GetItemRangeClass_ReturnValue = CallFunc_SGK_GetItemRangeClass_ReturnValue;
	Parms.CallFunc_SGK_GetItemRangeClass_RangeWeapon = CallFunc_SGK_GetItemRangeClass_RangeWeapon;
	Parms.K2Node_MakeStruct_S_InvItem_2 = K2Node_MakeStruct_S_InvItem_2;
	Parms.CallFunc_SGK_GetItemRangeClass_ReturnValue_1 = CallFunc_SGK_GetItemRangeClass_ReturnValue_1;
	Parms.CallFunc_SGK_GetItemRangeClass_RangeWeapon_1 = CallFunc_SGK_GetItemRangeClass_RangeWeapon_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MasterItemInventory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterItemInventory_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterItemInventory.BP_MasterItemInventory_C.ExecuteUbergraph_BP_MasterItemInventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterItemInventory_C::ExecuteUbergraph_BP_MasterItemInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterItemInventory_C", "ExecuteUbergraph_BP_MasterItemInventory");

	Params::UBP_MasterItemInventory_C_ExecuteUbergraph_BP_MasterItemInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


