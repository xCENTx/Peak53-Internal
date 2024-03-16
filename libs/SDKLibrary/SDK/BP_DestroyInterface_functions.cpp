#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DestroyInterface.BP_DestroyInterface_C
// (None)

class UClass* IBP_DestroyInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DestroyInterface_C");

	return Clss;
}


// BP_DestroyInterface_C BP_DestroyInterface.Default__BP_DestroyInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_DestroyInterface_C* IBP_DestroyInterface_C::GetDefaultObj()
{
	static class IBP_DestroyInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_DestroyInterface_C*>(IBP_DestroyInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DestroyInterface.BP_DestroyInterface_C.ActorRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuildPart_C*       BuildPartRef                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_DestroyInterface_C::ActorRef(class ABP_MasterBuildPart_C** BuildPartRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DestroyInterface_C", "ActorRef");

	Params::IBP_DestroyInterface_C_ActorRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BuildPartRef != nullptr)
		*BuildPartRef = Parms.BuildPartRef;

}


// Function BP_DestroyInterface.BP_DestroyInterface_C.DestroyDetonate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_DestroyInterface_C::DestroyDetonate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DestroyInterface_C", "DestroyDetonate");



	UObject::ProcessEvent(Func, nullptr);

}

}


