#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodTriangleWallR.BP_WoodTriangleWallR_C
// (Actor)

class UClass* ABP_WoodTriangleWallR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodTriangleWallR_C");

	return Clss;
}


// BP_WoodTriangleWallR_C BP_WoodTriangleWallR.Default__BP_WoodTriangleWallR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodTriangleWallR_C* ABP_WoodTriangleWallR_C::GetDefaultObj()
{
	static class ABP_WoodTriangleWallR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodTriangleWallR_C*>(ABP_WoodTriangleWallR_C::StaticClass()->DefaultObject);

	return Default;
}

}


