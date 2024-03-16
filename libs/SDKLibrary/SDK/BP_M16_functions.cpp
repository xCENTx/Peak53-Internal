#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M16.BP_M16_C
// (Actor)

class UClass* ABP_M16_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M16_C");

	return Clss;
}


// BP_M16_C BP_M16.Default__BP_M16_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M16_C* ABP_M16_C::GetDefaultObj()
{
	static class ABP_M16_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M16_C*>(ABP_M16_C::StaticClass()->DefaultObject);

	return Default;
}

}


