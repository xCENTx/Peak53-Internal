#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicUStairs.BP_BasicUStairs_C
// (Actor)

class UClass* ABP_BasicUStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicUStairs_C");

	return Clss;
}


// BP_BasicUStairs_C BP_BasicUStairs.Default__BP_BasicUStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicUStairs_C* ABP_BasicUStairs_C::GetDefaultObj()
{
	static class ABP_BasicUStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicUStairs_C*>(ABP_BasicUStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


