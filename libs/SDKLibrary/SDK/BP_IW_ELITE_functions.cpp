#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IW_ELITE.BP_IW_ELITE_C
// (Actor)

class UClass* ABP_IW_ELITE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IW_ELITE_C");

	return Clss;
}


// BP_IW_ELITE_C BP_IW_ELITE.Default__BP_IW_ELITE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IW_ELITE_C* ABP_IW_ELITE_C::GetDefaultObj()
{
	static class ABP_IW_ELITE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IW_ELITE_C*>(ABP_IW_ELITE_C::StaticClass()->DefaultObject);

	return Default;
}

}


