#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneTriangleWallL.BP_StoneTriangleWallL_C
// (Actor)

class UClass* ABP_StoneTriangleWallL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneTriangleWallL_C");

	return Clss;
}


// BP_StoneTriangleWallL_C BP_StoneTriangleWallL.Default__BP_StoneTriangleWallL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneTriangleWallL_C* ABP_StoneTriangleWallL_C::GetDefaultObj()
{
	static class ABP_StoneTriangleWallL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneTriangleWallL_C*>(ABP_StoneTriangleWallL_C::StaticClass()->DefaultObject);

	return Default;
}

}


