#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FloorGrid.BP_FloorGrid_C
// (Actor)

class UClass* ABP_FloorGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FloorGrid_C");

	return Clss;
}


// BP_FloorGrid_C BP_FloorGrid.Default__BP_FloorGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FloorGrid_C* ABP_FloorGrid_C::GetDefaultObj()
{
	static class ABP_FloorGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FloorGrid_C*>(ABP_FloorGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


