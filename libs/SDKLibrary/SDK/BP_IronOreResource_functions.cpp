#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IronOreResource.BP_IronOreResource_C
// (Actor)

class UClass* ABP_IronOreResource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IronOreResource_C");

	return Clss;
}


// BP_IronOreResource_C BP_IronOreResource.Default__BP_IronOreResource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IronOreResource_C* ABP_IronOreResource_C::GetDefaultObj()
{
	static class ABP_IronOreResource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IronOreResource_C*>(ABP_IronOreResource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IronOreResource.BP_IronOreResource_C.AddDestructableMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeometryCollectionComponent*CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_IronOreResource_C::AddDestructableMesh(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UGeometryCollectionComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronOreResource_C", "AddDestructableMesh");

	Params::ABP_IronOreResource_C_AddDestructableMesh_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


