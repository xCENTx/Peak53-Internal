#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalShortWall.BP_MetalShortWall_C
// (Actor)

class UClass* ABP_MetalShortWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalShortWall_C");

	return Clss;
}


// BP_MetalShortWall_C BP_MetalShortWall.Default__BP_MetalShortWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalShortWall_C* ABP_MetalShortWall_C::GetDefaultObj()
{
	static class ABP_MetalShortWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalShortWall_C*>(ABP_MetalShortWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


