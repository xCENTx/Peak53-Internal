#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterThrowableProjectile.BP_MasterThrowableProjectile_C
// (Actor)

class UClass* ABP_MasterThrowableProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterThrowableProjectile_C");

	return Clss;
}


// BP_MasterThrowableProjectile_C BP_MasterThrowableProjectile.Default__BP_MasterThrowableProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterThrowableProjectile_C* ABP_MasterThrowableProjectile_C::GetDefaultObj()
{
	static class ABP_MasterThrowableProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterThrowableProjectile_C*>(ABP_MasterThrowableProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterThrowableProjectile.BP_MasterThrowableProjectile_C.InitializeThownProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowableProjectile_C::InitializeThownProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowableProjectile_C", "InitializeThownProjectile");



	UObject::ProcessEvent(Func, nullptr);

}

}


