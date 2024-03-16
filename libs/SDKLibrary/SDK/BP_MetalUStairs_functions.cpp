#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalUStairs.BP_MetalUStairs_C
// (Actor)

class UClass* ABP_MetalUStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalUStairs_C");

	return Clss;
}


// BP_MetalUStairs_C BP_MetalUStairs.Default__BP_MetalUStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalUStairs_C* ABP_MetalUStairs_C::GetDefaultObj()
{
	static class ABP_MetalUStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalUStairs_C*>(ABP_MetalUStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


