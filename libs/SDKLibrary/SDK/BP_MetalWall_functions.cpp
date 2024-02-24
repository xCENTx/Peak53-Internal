#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalWall.BP_MetalWall_C
// (Actor)

class UClass* ABP_MetalWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalWall_C");

	return Clss;
}


// BP_MetalWall_C BP_MetalWall.Default__BP_MetalWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalWall_C* ABP_MetalWall_C::GetDefaultObj()
{
	static class ABP_MetalWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalWall_C*>(ABP_MetalWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


