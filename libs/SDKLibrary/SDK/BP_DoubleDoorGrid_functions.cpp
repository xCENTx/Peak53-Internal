#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DoubleDoorGrid.BP_DoubleDoorGrid_C
// (Actor)

class UClass* ABP_DoubleDoorGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DoubleDoorGrid_C");

	return Clss;
}


// BP_DoubleDoorGrid_C BP_DoubleDoorGrid.Default__BP_DoubleDoorGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DoubleDoorGrid_C* ABP_DoubleDoorGrid_C::GetDefaultObj()
{
	static class ABP_DoubleDoorGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DoubleDoorGrid_C*>(ABP_DoubleDoorGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


