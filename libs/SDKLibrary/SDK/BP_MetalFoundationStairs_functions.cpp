#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalFoundationStairs.BP_MetalFoundationStairs_C
// (Actor)

class UClass* ABP_MetalFoundationStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalFoundationStairs_C");

	return Clss;
}


// BP_MetalFoundationStairs_C BP_MetalFoundationStairs.Default__BP_MetalFoundationStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalFoundationStairs_C* ABP_MetalFoundationStairs_C::GetDefaultObj()
{
	static class ABP_MetalFoundationStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalFoundationStairs_C*>(ABP_MetalFoundationStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


