#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GrenadeProjectile.BP_GrenadeProjectile_C
// (Actor)

class UClass* ABP_GrenadeProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GrenadeProjectile_C");

	return Clss;
}


// BP_GrenadeProjectile_C BP_GrenadeProjectile.Default__BP_GrenadeProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GrenadeProjectile_C* ABP_GrenadeProjectile_C::GetDefaultObj()
{
	static class ABP_GrenadeProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GrenadeProjectile_C*>(ABP_GrenadeProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


