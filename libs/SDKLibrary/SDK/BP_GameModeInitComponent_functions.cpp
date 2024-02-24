#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameModeInitComponent.BP_GameModeInitComponent_C
// (None)

class UClass* UBP_GameModeInitComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameModeInitComponent_C");

	return Clss;
}


// BP_GameModeInitComponent_C BP_GameModeInitComponent.Default__BP_GameModeInitComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GameModeInitComponent_C* UBP_GameModeInitComponent_C::GetDefaultObj()
{
	static class UBP_GameModeInitComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GameModeInitComponent_C*>(UBP_GameModeInitComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GameModeInitComponent.BP_GameModeInitComponent_C.SpawnedInventoryManager__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GlobalInventoryManager_C*InventoryManager                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_GameModeInitComponent_C::SpawnedInventoryManager__DelegateSignature(class ABP_GlobalInventoryManager_C* InventoryManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameModeInitComponent_C", "SpawnedInventoryManager__DelegateSignature");

	Params::UBP_GameModeInitComponent_C_SpawnedInventoryManager__DelegateSignature_Params Parms{};

	Parms.InventoryManager = InventoryManager;

	UObject::ProcessEvent(Func, &Parms);

}

}


