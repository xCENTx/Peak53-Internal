#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cooler.BP_Cooler_C
// (Actor)

class UClass* ABP_Cooler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cooler_C");

	return Clss;
}


// BP_Cooler_C BP_Cooler.Default__BP_Cooler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cooler_C* ABP_Cooler_C::GetDefaultObj()
{
	static class ABP_Cooler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cooler_C*>(ABP_Cooler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Cooler.BP_Cooler_C.SGK EndInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_EndInteraction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Cooler_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_SGK_EndInteraction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cooler_C", "SGK EndInteraction");

	Params::ABP_Cooler_C_SGK_EndInteraction_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_SGK_EndInteraction_ReturnValue = CallFunc_SGK_EndInteraction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


