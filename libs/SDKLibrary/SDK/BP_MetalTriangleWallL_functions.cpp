#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalTriangleWallL.BP_MetalTriangleWallL_C
// (Actor)

class UClass* ABP_MetalTriangleWallL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalTriangleWallL_C");

	return Clss;
}


// BP_MetalTriangleWallL_C BP_MetalTriangleWallL.Default__BP_MetalTriangleWallL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalTriangleWallL_C* ABP_MetalTriangleWallL_C::GetDefaultObj()
{
	static class ABP_MetalTriangleWallL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalTriangleWallL_C*>(ABP_MetalTriangleWallL_C::StaticClass()->DefaultObject);

	return Default;
}

}


