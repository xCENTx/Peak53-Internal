#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterProjectile

#include "Basic.hpp"

#include "BP_MasterProjectile_classes.hpp"
#include "BP_MasterProjectile_parameters.hpp"


namespace SDK
{

// Function BP_MasterProjectile.BP_MasterProjectile_C.AOE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpherePos                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   BaseDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// E_DamageType                            Param_DamageType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Hitbox                                HitBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterProjectile_C::AOE(const struct FVector& SpherePos, class UObject* Target, int32 BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, E_DamageType Param_DamageType, E_Hitbox HitBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "AOE");

	Params::BP_MasterProjectile_C_AOE Parms{};

	Parms.SpherePos = std::move(SpherePos);
	Parms.Target = Target;
	Parms.BaseDamage = BaseDamage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.Param_DamageType = Param_DamageType;
	Parms.HitBox = HitBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.AOE_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpherePos                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterProjectile_C::AOE_Server(const struct FVector& SpherePos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "AOE_Server");

	Params::BP_MasterProjectile_C_AOE_Server Parms{};

	Parms.SpherePos = std::move(SpherePos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ApplyHitActorDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MasterProjectile_C::ApplyHitActorDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "ApplyHitActorDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.BndEvt__BP_MasterProjectile_Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MasterProjectile_C::BndEvt__BP_MasterProjectile_Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "BndEvt__BP_MasterProjectile_Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_MasterProjectile_C_BndEvt__BP_MasterProjectile_Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.DistanceDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MasterProjectile_C::DistanceDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "DistanceDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterProjectile_C::ExecuteUbergraph_BP_MasterProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "ExecuteUbergraph_BP_MasterProjectile");

	Params::BP_MasterProjectile_C_ExecuteUbergraph_BP_MasterProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.HitActorDebug
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MasterProjectile_C::HitActorDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "HitActorDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.HitSurfaceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPhysicalSurface                        SurfaceType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterProjectile_C::HitSurfaceType(EPhysicalSurface* SurfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "HitSurfaceType");

	Params::BP_MasterProjectile_C_HitSurfaceType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SurfaceType != nullptr)
		*SurfaceType = Parms.SurfaceType;
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MasterProjectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MasterProjectile_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "ReceiveHit");

	Params::BP_MasterProjectile_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SetupProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Damage>                Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<EPhysicalSurface, class UNiagaraSystem*>Param_HitSurfaceParticles                              (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<EPhysicalSurface, class USoundBase*>Param_HitSurfaceSounds                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<EPhysicalSurface, class UMaterialInterface*>Param_HitSurfaceDecals                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// E_DamageType                            Param_DamageType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<EPhysicalSurface, struct FVector>  Param_DecalSize                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  Param_DecalLifeSpan                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_Decal_Fade_Distance                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_BleedDamage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_TickTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_BleedLength                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_DoBleedDamage                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterProjectile_C::SetupProjectile(TArray<struct FS_Damage>& Param_Damage, const TMap<EPhysicalSurface, class UNiagaraSystem*>& Param_HitSurfaceParticles, const TMap<EPhysicalSurface, class USoundBase*>& Param_HitSurfaceSounds, const TMap<EPhysicalSurface, class UMaterialInterface*>& Param_HitSurfaceDecals, E_DamageType Param_DamageType, const TMap<EPhysicalSurface, struct FVector>& Param_DecalSize, double Param_DecalLifeSpan, double Param_Decal_Fade_Distance, int32 Param_BleedDamage, double Param_TickTime, double Param_BleedLength, bool Param_DoBleedDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "SetupProjectile");

	Params::BP_MasterProjectile_C_SetupProjectile Parms{};

	Parms.Param_Damage = std::move(Param_Damage);
	Parms.Param_HitSurfaceParticles = std::move(Param_HitSurfaceParticles);
	Parms.Param_HitSurfaceSounds = std::move(Param_HitSurfaceSounds);
	Parms.Param_HitSurfaceDecals = std::move(Param_HitSurfaceDecals);
	Parms.Param_DamageType = Param_DamageType;
	Parms.Param_DecalSize = std::move(Param_DecalSize);
	Parms.Param_DecalLifeSpan = Param_DecalLifeSpan;
	Parms.Param_Decal_Fade_Distance = Param_Decal_Fade_Distance;
	Parms.Param_BleedDamage = Param_BleedDamage;
	Parms.Param_TickTime = Param_TickTime;
	Parms.Param_BleedLength = Param_BleedLength;
	Parms.Param_DoBleedDamage = Param_DoBleedDamage;

	UObject::ProcessEvent(Func, &Parms);

	Param_Damage = std::move(Parms.Param_Damage);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceDecal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MasterProjectile_C::SpawnHitSurfaceDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "SpawnHitSurfaceDecal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceParticle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MasterProjectile_C::SpawnHitSurfaceParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "SpawnHitSurfaceParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSurfaceSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MasterProjectile_C::SpawnHitSurfaceSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "SpawnHitSurfaceSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MasterProjectile_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MasterProjectile_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

