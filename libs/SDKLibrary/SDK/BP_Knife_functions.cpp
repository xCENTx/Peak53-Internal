#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Knife.BP_Knife_C
// (Actor)

class UClass* ABP_Knife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Knife_C");

	return Clss;
}


// BP_Knife_C BP_Knife.Default__BP_Knife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Knife_C* ABP_Knife_C::GetDefaultObj()
{
	static class ABP_Knife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Knife_C*>(ABP_Knife_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Knife.BP_Knife_C.SGK HoldableMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Knife_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Knife_C", "SGK HoldableMesh");

	Params::ABP_Knife_C_SGK_HoldableMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}

}


