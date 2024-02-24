#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_InventoryGrid_05.BP_InventoryGrid_05_C
// (None)

class UClass* UBP_InventoryGrid_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InventoryGrid_05_C");

	return Clss;
}


// BP_InventoryGrid_05_C BP_InventoryGrid_05.Default__BP_InventoryGrid_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InventoryGrid_05_C* UBP_InventoryGrid_05_C::GetDefaultObj()
{
	static class UBP_InventoryGrid_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InventoryGrid_05_C*>(UBP_InventoryGrid_05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InventoryGrid_05.BP_InventoryGrid_05_C.SetCustomSlots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryGrid_05_C::SetCustomSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryGrid_05_C", "SetCustomSlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryGrid_05.BP_InventoryGrid_05_C.ExecuteUbergraph_BP_InventoryGrid_05
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_InventoryCell_C*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UBP_InventoryItemIcon_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void UBP_InventoryGrid_05_C::ExecuteUbergraph_BP_InventoryGrid_05(int32 EntryPoint, TArray<class UBP_InventoryCell_C*>& K2Node_MakeArray_Array, TArray<class UBP_InventoryItemIcon_C*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryGrid_05_C", "ExecuteUbergraph_BP_InventoryGrid_05");

	Params::UBP_InventoryGrid_05_C_ExecuteUbergraph_BP_InventoryGrid_05_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


