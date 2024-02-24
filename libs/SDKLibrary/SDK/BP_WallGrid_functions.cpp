#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WallGrid.BP_WallGrid_C
// (Actor)

class UClass* ABP_WallGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WallGrid_C");

	return Clss;
}


// BP_WallGrid_C BP_WallGrid.Default__BP_WallGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WallGrid_C* ABP_WallGrid_C::GetDefaultObj()
{
	static class ABP_WallGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WallGrid_C*>(ABP_WallGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


