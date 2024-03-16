#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BIZON_MM.BP_BIZON_MM_C
// (Actor)

class UClass* ABP_BIZON_MM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BIZON_MM_C");

	return Clss;
}


// BP_BIZON_MM_C BP_BIZON_MM.Default__BP_BIZON_MM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BIZON_MM_C* ABP_BIZON_MM_C::GetDefaultObj()
{
	static class ABP_BIZON_MM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BIZON_MM_C*>(ABP_BIZON_MM_C::StaticClass()->DefaultObject);

	return Default;
}

}


