#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Axe.BP_Axe_C
// (Actor)

class UClass* ABP_Axe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Axe_C");

	return Clss;
}


// BP_Axe_C BP_Axe.Default__BP_Axe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Axe_C* ABP_Axe_C::GetDefaultObj()
{
	static class ABP_Axe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Axe_C*>(ABP_Axe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Axe.BP_Axe_C.SGK HoldableMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_SGK_HoldableMesh_Mesh                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Axe_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Axe_C", "SGK HoldableMesh");

	Params::ABP_Axe_C_SGK_HoldableMesh_Params Parms{};

	Parms.CallFunc_SGK_HoldableMesh_Mesh = CallFunc_SGK_HoldableMesh_Mesh;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}

}


