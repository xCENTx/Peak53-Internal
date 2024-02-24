#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodTriangleWallL.BP_WoodTriangleWallL_C
// (Actor)

class UClass* ABP_WoodTriangleWallL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodTriangleWallL_C");

	return Clss;
}


// BP_WoodTriangleWallL_C BP_WoodTriangleWallL.Default__BP_WoodTriangleWallL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodTriangleWallL_C* ABP_WoodTriangleWallL_C::GetDefaultObj()
{
	static class ABP_WoodTriangleWallL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodTriangleWallL_C*>(ABP_WoodTriangleWallL_C::StaticClass()->DefaultObject);

	return Default;
}

}


