#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalWindowBars.BP_MetalWindowBars_C
// (Actor)

class UClass* ABP_MetalWindowBars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalWindowBars_C");

	return Clss;
}


// BP_MetalWindowBars_C BP_MetalWindowBars.Default__BP_MetalWindowBars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalWindowBars_C* ABP_MetalWindowBars_C::GetDefaultObj()
{
	static class ABP_MetalWindowBars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalWindowBars_C*>(ABP_MetalWindowBars_C::StaticClass()->DefaultObject);

	return Default;
}

}


