#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodWindowBars.BP_WoodWindowBars_C
// (Actor)

class UClass* ABP_WoodWindowBars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodWindowBars_C");

	return Clss;
}


// BP_WoodWindowBars_C BP_WoodWindowBars.Default__BP_WoodWindowBars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodWindowBars_C* ABP_WoodWindowBars_C::GetDefaultObj()
{
	static class ABP_WoodWindowBars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodWindowBars_C*>(ABP_WoodWindowBars_C::StaticClass()->DefaultObject);

	return Default;
}

}


