#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DoorGrid.BP_DoorGrid_C
// (Actor)

class UClass* ABP_DoorGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DoorGrid_C");

	return Clss;
}


// BP_DoorGrid_C BP_DoorGrid.Default__BP_DoorGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DoorGrid_C* ABP_DoorGrid_C::GetDefaultObj()
{
	static class ABP_DoorGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DoorGrid_C*>(ABP_DoorGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


