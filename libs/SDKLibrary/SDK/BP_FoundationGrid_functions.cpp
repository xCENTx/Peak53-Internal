#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FoundationGrid.BP_FoundationGrid_C
// (Actor)

class UClass* ABP_FoundationGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FoundationGrid_C");

	return Clss;
}


// BP_FoundationGrid_C BP_FoundationGrid.Default__BP_FoundationGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FoundationGrid_C* ABP_FoundationGrid_C::GetDefaultObj()
{
	static class ABP_FoundationGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FoundationGrid_C*>(ABP_FoundationGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


