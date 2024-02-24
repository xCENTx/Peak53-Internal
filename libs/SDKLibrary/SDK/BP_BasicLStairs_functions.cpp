#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicLStairs.BP_BasicLStairs_C
// (Actor)

class UClass* ABP_BasicLStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicLStairs_C");

	return Clss;
}


// BP_BasicLStairs_C BP_BasicLStairs.Default__BP_BasicLStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicLStairs_C* ABP_BasicLStairs_C::GetDefaultObj()
{
	static class ABP_BasicLStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicLStairs_C*>(ABP_BasicLStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


