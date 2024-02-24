#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodUStairs.BP_WoodUStairs_C
// (Actor)

class UClass* ABP_WoodUStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodUStairs_C");

	return Clss;
}


// BP_WoodUStairs_C BP_WoodUStairs.Default__BP_WoodUStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodUStairs_C* ABP_WoodUStairs_C::GetDefaultObj()
{
	static class ABP_WoodUStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodUStairs_C*>(ABP_WoodUStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


