#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InventoryGrid_12

#include "Basic.hpp"

#include "BP_InventoryGrid_12_classes.hpp"
#include "BP_InventoryGrid_12_parameters.hpp"


namespace SDK
{

// Function BP_InventoryGrid_12.BP_InventoryGrid_12_C.ExecuteUbergraph_BP_InventoryGrid_12
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryGrid_12_C::ExecuteUbergraph_BP_InventoryGrid_12(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryGrid_12_C", "ExecuteUbergraph_BP_InventoryGrid_12");

	Params::BP_InventoryGrid_12_C_ExecuteUbergraph_BP_InventoryGrid_12 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InventoryGrid_12.BP_InventoryGrid_12_C.SetCustomSlots
// (BlueprintCallable, BlueprintEvent)

void UBP_InventoryGrid_12_C::SetCustomSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryGrid_12_C", "SetCustomSlots");

	UObject::ProcessEvent(Func, nullptr);
}

}

