#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WindowGrid.BP_WindowGrid_C
// (Actor)

class UClass* ABP_WindowGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WindowGrid_C");

	return Clss;
}


// BP_WindowGrid_C BP_WindowGrid.Default__BP_WindowGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WindowGrid_C* ABP_WindowGrid_C::GetDefaultObj()
{
	static class ABP_WindowGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WindowGrid_C*>(ABP_WindowGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


