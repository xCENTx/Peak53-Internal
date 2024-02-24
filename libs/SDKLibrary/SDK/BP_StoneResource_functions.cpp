#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneResource.BP_StoneResource_C
// (Actor)

class UClass* ABP_StoneResource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneResource_C");

	return Clss;
}


// BP_StoneResource_C BP_StoneResource.Default__BP_StoneResource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneResource_C* ABP_StoneResource_C::GetDefaultObj()
{
	static class ABP_StoneResource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneResource_C*>(ABP_StoneResource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneResource.BP_StoneResource_C.AddDestructableMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeometryCollectionComponent*CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_StoneResource_C::AddDestructableMesh(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UGeometryCollectionComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneResource_C", "AddDestructableMesh");

	Params::ABP_StoneResource_C_AddDestructableMesh_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


