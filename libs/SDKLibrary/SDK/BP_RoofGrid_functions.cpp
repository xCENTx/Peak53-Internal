#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RoofGrid.BP_RoofGrid_C
// (Actor)

class UClass* ABP_RoofGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RoofGrid_C");

	return Clss;
}


// BP_RoofGrid_C BP_RoofGrid.Default__BP_RoofGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RoofGrid_C* ABP_RoofGrid_C::GetDefaultObj()
{
	static class ABP_RoofGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RoofGrid_C*>(ABP_RoofGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


