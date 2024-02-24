#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodResource.BP_WoodResource_C
// (Actor)

class UClass* ABP_WoodResource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodResource_C");

	return Clss;
}


// BP_WoodResource_C BP_WoodResource.Default__BP_WoodResource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodResource_C* ABP_WoodResource_C::GetDefaultObj()
{
	static class ABP_WoodResource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodResource_C*>(ABP_WoodResource_C::StaticClass()->DefaultObject);

	return Default;
}

}


