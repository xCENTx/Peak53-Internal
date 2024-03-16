#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalTriangleWallR.BP_MetalTriangleWallR_C
// (Actor)

class UClass* ABP_MetalTriangleWallR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalTriangleWallR_C");

	return Clss;
}


// BP_MetalTriangleWallR_C BP_MetalTriangleWallR.Default__BP_MetalTriangleWallR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalTriangleWallR_C* ABP_MetalTriangleWallR_C::GetDefaultObj()
{
	static class ABP_MetalTriangleWallR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalTriangleWallR_C*>(ABP_MetalTriangleWallR_C::StaticClass()->DefaultObject);

	return Default;
}

}


