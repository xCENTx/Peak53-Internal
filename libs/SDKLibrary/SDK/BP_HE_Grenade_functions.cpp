#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HE_Grenade.BP_HE_Grenade_C
// (Actor)

class UClass* ABP_HE_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HE_Grenade_C");

	return Clss;
}


// BP_HE_Grenade_C BP_HE_Grenade.Default__BP_HE_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HE_Grenade_C* ABP_HE_Grenade_C::GetDefaultObj()
{
	static class ABP_HE_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HE_Grenade_C*>(ABP_HE_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


