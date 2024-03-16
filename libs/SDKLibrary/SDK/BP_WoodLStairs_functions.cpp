#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodLStairs.BP_WoodLStairs_C
// (Actor)

class UClass* ABP_WoodLStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodLStairs_C");

	return Clss;
}


// BP_WoodLStairs_C BP_WoodLStairs.Default__BP_WoodLStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodLStairs_C* ABP_WoodLStairs_C::GetDefaultObj()
{
	static class ABP_WoodLStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodLStairs_C*>(ABP_WoodLStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


