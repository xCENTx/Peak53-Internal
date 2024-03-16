#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodFoundationStairs.BP_WoodFoundationStairs_C
// (Actor)

class UClass* ABP_WoodFoundationStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodFoundationStairs_C");

	return Clss;
}


// BP_WoodFoundationStairs_C BP_WoodFoundationStairs.Default__BP_WoodFoundationStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodFoundationStairs_C* ABP_WoodFoundationStairs_C::GetDefaultObj()
{
	static class ABP_WoodFoundationStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodFoundationStairs_C*>(ABP_WoodFoundationStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


