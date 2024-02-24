#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AR45.BP_AR45_C
// (Actor)

class UClass* ABP_AR45_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AR45_C");

	return Clss;
}


// BP_AR45_C BP_AR45.Default__BP_AR45_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AR45_C* ABP_AR45_C::GetDefaultObj()
{
	static class ABP_AR45_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AR45_C*>(ABP_AR45_C::StaticClass()->DefaultObject);

	return Default;
}

}


