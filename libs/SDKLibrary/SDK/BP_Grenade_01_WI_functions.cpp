#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Grenade_01_WI.BP_Grenade_01_WI_C
// (Actor)

class UClass* ABP_Grenade_01_WI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Grenade_01_WI_C");

	return Clss;
}


// BP_Grenade_01_WI_C BP_Grenade_01_WI.Default__BP_Grenade_01_WI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Grenade_01_WI_C* ABP_Grenade_01_WI_C::GetDefaultObj()
{
	static class ABP_Grenade_01_WI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Grenade_01_WI_C*>(ABP_Grenade_01_WI_C::StaticClass()->DefaultObject);

	return Default;
}

}


