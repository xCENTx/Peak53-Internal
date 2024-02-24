#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_STASD.BP_STASD_C
// (Actor)

class UClass* ABP_STASD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_STASD_C");

	return Clss;
}


// BP_STASD_C BP_STASD.Default__BP_STASD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_STASD_C* ABP_STASD_C::GetDefaultObj()
{
	static class ABP_STASD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_STASD_C*>(ABP_STASD_C::StaticClass()->DefaultObject);

	return Default;
}

}


