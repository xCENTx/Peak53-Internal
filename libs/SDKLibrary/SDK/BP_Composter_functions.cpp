#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Composter.BP_Composter_C
// (Actor)

class UClass* ABP_Composter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Composter_C");

	return Clss;
}


// BP_Composter_C BP_Composter.Default__BP_Composter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Composter_C* ABP_Composter_C::GetDefaultObj()
{
	static class ABP_Composter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Composter_C*>(ABP_Composter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Composter.BP_Composter_C.SGK EndInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_EndInteraction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Composter_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_SGK_EndInteraction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Composter_C", "SGK EndInteraction");

	Params::ABP_Composter_C_SGK_EndInteraction_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_SGK_EndInteraction_ReturnValue = CallFunc_SGK_EndInteraction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


