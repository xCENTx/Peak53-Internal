#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StairsGrid.BP_StairsGrid_C
// (Actor)

class UClass* ABP_StairsGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StairsGrid_C");

	return Clss;
}


// BP_StairsGrid_C BP_StairsGrid.Default__BP_StairsGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StairsGrid_C* ABP_StairsGrid_C::GetDefaultObj()
{
	static class ABP_StairsGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StairsGrid_C*>(ABP_StairsGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


