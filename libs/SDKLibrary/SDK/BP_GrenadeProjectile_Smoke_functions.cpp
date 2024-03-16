#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GrenadeProjectile_Smoke.BP_GrenadeProjectile_Smoke_C
// (Actor)

class UClass* ABP_GrenadeProjectile_Smoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GrenadeProjectile_Smoke_C");

	return Clss;
}


// BP_GrenadeProjectile_Smoke_C BP_GrenadeProjectile_Smoke.Default__BP_GrenadeProjectile_Smoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GrenadeProjectile_Smoke_C* ABP_GrenadeProjectile_Smoke_C::GetDefaultObj()
{
	static class ABP_GrenadeProjectile_Smoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GrenadeProjectile_Smoke_C*>(ABP_GrenadeProjectile_Smoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


