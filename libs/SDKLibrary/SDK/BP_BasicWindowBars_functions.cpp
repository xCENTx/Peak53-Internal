#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicWindowBars.BP_BasicWindowBars_C
// (Actor)

class UClass* ABP_BasicWindowBars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicWindowBars_C");

	return Clss;
}


// BP_BasicWindowBars_C BP_BasicWindowBars.Default__BP_BasicWindowBars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicWindowBars_C* ABP_BasicWindowBars_C::GetDefaultObj()
{
	static class ABP_BasicWindowBars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicWindowBars_C*>(ABP_BasicWindowBars_C::StaticClass()->DefaultObject);

	return Default;
}

}


