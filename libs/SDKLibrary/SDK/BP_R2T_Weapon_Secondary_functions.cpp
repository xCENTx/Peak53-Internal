#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_R2T_Weapon_Secondary.BP_R2T_Weapon_Secondary_C
// (Actor)

class UClass* ABP_R2T_Weapon_Secondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_R2T_Weapon_Secondary_C");

	return Clss;
}


// BP_R2T_Weapon_Secondary_C BP_R2T_Weapon_Secondary.Default__BP_R2T_Weapon_Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_R2T_Weapon_Secondary_C* ABP_R2T_Weapon_Secondary_C::GetDefaultObj()
{
	static class ABP_R2T_Weapon_Secondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_R2T_Weapon_Secondary_C*>(ABP_R2T_Weapon_Secondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


