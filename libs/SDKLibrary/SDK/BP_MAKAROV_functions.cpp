#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MAKAROV.BP_MAKAROV_C
// (Actor)

class UClass* ABP_MAKAROV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MAKAROV_C");

	return Clss;
}


// BP_MAKAROV_C BP_MAKAROV.Default__BP_MAKAROV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MAKAROV_C* ABP_MAKAROV_C::GetDefaultObj()
{
	static class ABP_MAKAROV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MAKAROV_C*>(ABP_MAKAROV_C::StaticClass()->DefaultObject);

	return Default;
}

}


