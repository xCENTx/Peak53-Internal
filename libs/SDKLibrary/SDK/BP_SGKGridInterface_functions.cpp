#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKGridInterface.BP_SGKGridInterface_C
// (None)

class UClass* IBP_SGKGridInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKGridInterface_C");

	return Clss;
}


// BP_SGKGridInterface_C BP_SGKGridInterface.Default__BP_SGKGridInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKGridInterface_C* IBP_SGKGridInterface_C::GetDefaultObj()
{
	static class IBP_SGKGridInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKGridInterface_C*>(IBP_SGKGridInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK InvItemSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*>ItemInvWidgets                                                   (Parm, OutParm, ContainsInstancedReference)

void IBP_SGKGridInterface_C::SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGridInterface_C", "SGK InvItemSlots");

	Params::IBP_SGKGridInterface_C_SGK_InvItemSlots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemInvWidgets != nullptr)
		*ItemInvWidgets = std::move(Parms.ItemInvWidgets);

}


// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK ConstructGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       GridInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGridInterface_C::SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGridInterface_C", "SGK ConstructGrid");

	Params::IBP_SGKGridInterface_C_SGK_ConstructGrid_Params Parms{};

	Parms.GridInventory = GridInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGridInterface.BP_SGKGridInterface_C.SGK CellSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Cells                                                            (Parm, OutParm, ContainsInstancedReference)

void IBP_SGKGridInterface_C::SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGridInterface_C", "SGK CellSlots");

	Params::IBP_SGKGridInterface_C_SGK_CellSlots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Cells != nullptr)
		*Cells = std::move(Parms.Cells);

}

}


