#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TriangleFloorGrid.BP_TriangleFloorGrid_C
// (Actor)

class UClass* ABP_TriangleFloorGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TriangleFloorGrid_C");

	return Clss;
}


// BP_TriangleFloorGrid_C BP_TriangleFloorGrid.Default__BP_TriangleFloorGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TriangleFloorGrid_C* ABP_TriangleFloorGrid_C::GetDefaultObj()
{
	static class ABP_TriangleFloorGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TriangleFloorGrid_C*>(ABP_TriangleFloorGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


