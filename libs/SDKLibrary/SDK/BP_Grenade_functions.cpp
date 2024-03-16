#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Grenade.BP_Grenade_C
// (Actor)

class UClass* ABP_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Grenade_C");

	return Clss;
}


// BP_Grenade_C BP_Grenade.Default__BP_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Grenade_C* ABP_Grenade_C::GetDefaultObj()
{
	static class ABP_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Grenade_C*>(ABP_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Grenade.BP_Grenade_C.OnTakeRadialDamage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Grenade_C::OnTakeRadialDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Grenade_C", "OnTakeRadialDamage_Event");

	Params::ABP_Grenade_C_OnTakeRadialDamage_Event_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.Origin = Origin;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Origin                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_HitInfo                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Grenade_C::ExecuteUbergraph_BP_Grenade(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UDamageType* K2Node_CustomEvent_DamageType, const struct FVector& K2Node_CustomEvent_Origin, const struct FHitResult& K2Node_CustomEvent_HitInfo, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Grenade_C", "ExecuteUbergraph_BP_Grenade");

	Params::ABP_Grenade_C_ExecuteUbergraph_BP_Grenade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_Origin = K2Node_CustomEvent_Origin;
	Parms.K2Node_CustomEvent_HitInfo = K2Node_CustomEvent_HitInfo;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}

}


