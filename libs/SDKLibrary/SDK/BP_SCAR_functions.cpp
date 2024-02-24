#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SCAR.BP_SCAR_C
// (Actor)

class UClass* ABP_SCAR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SCAR_C");

	return Clss;
}


// BP_SCAR_C BP_SCAR.Default__BP_SCAR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SCAR_C* ABP_SCAR_C::GetDefaultObj()
{
	static class ABP_SCAR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SCAR_C*>(ABP_SCAR_C::StaticClass()->DefaultObject);

	return Default;
}

}


