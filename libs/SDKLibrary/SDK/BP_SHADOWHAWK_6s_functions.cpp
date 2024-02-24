#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SHADOWHAWK_6s.BP_SHADOWHAWK_6s_C
// (Actor)

class UClass* ABP_SHADOWHAWK_6s_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SHADOWHAWK_6s_C");

	return Clss;
}


// BP_SHADOWHAWK_6s_C BP_SHADOWHAWK_6s.Default__BP_SHADOWHAWK_6s_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SHADOWHAWK_6s_C* ABP_SHADOWHAWK_6s_C::GetDefaultObj()
{
	static class ABP_SHADOWHAWK_6s_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SHADOWHAWK_6s_C*>(ABP_SHADOWHAWK_6s_C::StaticClass()->DefaultObject);

	return Default;
}

}


