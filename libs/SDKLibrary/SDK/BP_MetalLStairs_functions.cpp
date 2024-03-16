#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalLStairs.BP_MetalLStairs_C
// (Actor)

class UClass* ABP_MetalLStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalLStairs_C");

	return Clss;
}


// BP_MetalLStairs_C BP_MetalLStairs.Default__BP_MetalLStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalLStairs_C* ABP_MetalLStairs_C::GetDefaultObj()
{
	static class ABP_MetalLStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalLStairs_C*>(ABP_MetalLStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


