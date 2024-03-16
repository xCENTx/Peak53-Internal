#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TriangleFoundationGrid.BP_TriangleFoundationGrid_C
// (Actor)

class UClass* ABP_TriangleFoundationGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TriangleFoundationGrid_C");

	return Clss;
}


// BP_TriangleFoundationGrid_C BP_TriangleFoundationGrid.Default__BP_TriangleFoundationGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TriangleFoundationGrid_C* ABP_TriangleFoundationGrid_C::GetDefaultObj()
{
	static class ABP_TriangleFoundationGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TriangleFoundationGrid_C*>(ABP_TriangleFoundationGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


