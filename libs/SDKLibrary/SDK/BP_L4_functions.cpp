#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_L4.BP_L4_C
// (Actor)

class UClass* ABP_L4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_L4_C");

	return Clss;
}


// BP_L4_C BP_L4.Default__BP_L4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_L4_C* ABP_L4_C::GetDefaultObj()
{
	static class ABP_L4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_L4_C*>(ABP_L4_C::StaticClass()->DefaultObject);

	return Default;
}

}


