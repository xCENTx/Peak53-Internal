#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C
// (Actor)

class UClass* ABP_MasterExplosiveThrowable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterExplosiveThrowable_C");

	return Clss;
}


// BP_MasterExplosiveThrowable_C BP_MasterExplosiveThrowable.Default__BP_MasterExplosiveThrowable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterExplosiveThrowable_C* ABP_MasterExplosiveThrowable_C::GetDefaultObj()
{
	static class ABP_MasterExplosiveThrowable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterExplosiveThrowable_C*>(ABP_MasterExplosiveThrowable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C.InitializeThrowProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterExplosiveThrowable_C::InitializeThrowProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowable_C", "InitializeThrowProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C.ExecuteUbergraph_BP_MasterExplosiveThrowable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterExplosiveThrowableProjectile_C*K2Node_DynamicCast_AsBP_Master_Explosive_Throwable_Projectile    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterExplosiveThrowable_C::ExecuteUbergraph_BP_MasterExplosiveThrowable(int32 EntryPoint, class ABP_MasterExplosiveThrowableProjectile_C* K2Node_DynamicCast_AsBP_Master_Explosive_Throwable_Projectile, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowable_C", "ExecuteUbergraph_BP_MasterExplosiveThrowable");

	Params::ABP_MasterExplosiveThrowable_C_ExecuteUbergraph_BP_MasterExplosiveThrowable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Master_Explosive_Throwable_Projectile = K2Node_DynamicCast_AsBP_Master_Explosive_Throwable_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


