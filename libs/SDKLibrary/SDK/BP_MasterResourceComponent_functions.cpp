#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterResourceComponent.BP_MasterResourceComponent_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_MasterResourceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterResourceComponent_C");

	return Clss;
}


// BP_MasterResourceComponent_C BP_MasterResourceComponent.Default__BP_MasterResourceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MasterResourceComponent_C* UBP_MasterResourceComponent_C::GetDefaultObj()
{
	static class UBP_MasterResourceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MasterResourceComponent_C*>(UBP_MasterResourceComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


