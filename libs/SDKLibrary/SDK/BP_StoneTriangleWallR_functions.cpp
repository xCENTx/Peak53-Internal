#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneTriangleWallR.BP_StoneTriangleWallR_C
// (Actor)

class UClass* ABP_StoneTriangleWallR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneTriangleWallR_C");

	return Clss;
}


// BP_StoneTriangleWallR_C BP_StoneTriangleWallR.Default__BP_StoneTriangleWallR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneTriangleWallR_C* ABP_StoneTriangleWallR_C::GetDefaultObj()
{
	static class ABP_StoneTriangleWallR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneTriangleWallR_C*>(ABP_StoneTriangleWallR_C::StaticClass()->DefaultObject);

	return Default;
}

}


