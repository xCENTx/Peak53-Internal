#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterProjectile

#include "Basic.hpp"

#include "E_Hitbox_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "S_Damage_structs.hpp"
#include "E_DamageType_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MasterProjectile.BP_MasterProjectile_C
// 0x02D0 (0x0560 - 0x0290)
class ABP_MasterProjectile_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Collision;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HitActor;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Damage>                      Damage;                                            // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHitResult                             HitResult;                                         // 0x02C8(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                StartLocation;                                     // 0x03B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Range;                                             // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                           RangeDestroyTimer;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_DamageType                                  DamageType;                                        // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BAD[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UseWeaponEffects;                                  // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BAE[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPhysicalSurface, class UMaterialInterface*> HitSurfaceDecals;                                  // 0x03F0(0x0050)(Edit, BlueprintVisible)
	TMap<EPhysicalSurface, class USoundBase*>     HitSurfaceSounds;                                  // 0x0440(0x0050)(Edit, BlueprintVisible)
	TMap<EPhysicalSurface, class UNiagaraSystem*> HitSurfaceParticles;                               // 0x0490(0x0050)(Edit, BlueprintVisible)
	TMap<EPhysicalSurface, struct FVector>        DecalSize;                                         // 0x04E0(0x0050)(Edit, BlueprintVisible)
	double                                        DecalLifeSpan;                                     // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Decal_Fade_Distance;                               // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoBleedDamage;                                     // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BAF[0x6];                                     // 0x0542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TickTime;                                          // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BleedLength;                                       // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BleedDamage;                                       // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAoe_;                                             // 0x055C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AOE(const struct FVector& SpherePos, class UObject* Target, int32 BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, E_DamageType Param_DamageType, E_Hitbox HitBox);
	void AOE_Server(const struct FVector& SpherePos);
	void ApplyHitActorDamage();
	void BndEvt__BP_MasterProjectile_Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DistanceDestroy();
	void ExecuteUbergraph_BP_MasterProjectile(int32 EntryPoint);
	void HitActorDebug();
	void HitSurfaceType(EPhysicalSurface* SurfaceType);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void SetupProjectile(TArray<struct FS_Damage>& Param_Damage, const TMap<EPhysicalSurface, class UNiagaraSystem*>& Param_HitSurfaceParticles, const TMap<EPhysicalSurface, class USoundBase*>& Param_HitSurfaceSounds, const TMap<EPhysicalSurface, class UMaterialInterface*>& Param_HitSurfaceDecals, E_DamageType Param_DamageType, const TMap<EPhysicalSurface, struct FVector>& Param_DecalSize, double Param_DecalLifeSpan, double Param_Decal_Fade_Distance, int32 Param_BleedDamage, double Param_TickTime, double Param_BleedLength, bool Param_DoBleedDamage);
	void SpawnHitSurfaceDecal();
	void SpawnHitSurfaceParticle();
	void SpawnHitSurfaceSound();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MasterProjectile_C">();
	}
	static class ABP_MasterProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MasterProjectile_C>();
	}
};
static_assert(alignof(ABP_MasterProjectile_C) == 0x000008, "Wrong alignment on ABP_MasterProjectile_C");
static_assert(sizeof(ABP_MasterProjectile_C) == 0x000560, "Wrong size on ABP_MasterProjectile_C");
static_assert(offsetof(ABP_MasterProjectile_C, UberGraphFrame) == 0x000290, "Member 'ABP_MasterProjectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, Mesh) == 0x000298, "Member 'ABP_MasterProjectile_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, Collision) == 0x0002A0, "Member 'ABP_MasterProjectile_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, ProjectileMovement) == 0x0002A8, "Member 'ABP_MasterProjectile_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, HitActor) == 0x0002B0, "Member 'ABP_MasterProjectile_C::HitActor' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, Damage) == 0x0002B8, "Member 'ABP_MasterProjectile_C::Damage' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, HitResult) == 0x0002C8, "Member 'ABP_MasterProjectile_C::HitResult' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, StartLocation) == 0x0003B0, "Member 'ABP_MasterProjectile_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, Range) == 0x0003C8, "Member 'ABP_MasterProjectile_C::Range' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, RangeDestroyTimer) == 0x0003D0, "Member 'ABP_MasterProjectile_C::RangeDestroyTimer' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, DamageType) == 0x0003D8, "Member 'ABP_MasterProjectile_C::DamageType' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, Speed) == 0x0003E0, "Member 'ABP_MasterProjectile_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, UseWeaponEffects) == 0x0003E8, "Member 'ABP_MasterProjectile_C::UseWeaponEffects' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, HitSurfaceDecals) == 0x0003F0, "Member 'ABP_MasterProjectile_C::HitSurfaceDecals' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, HitSurfaceSounds) == 0x000440, "Member 'ABP_MasterProjectile_C::HitSurfaceSounds' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, HitSurfaceParticles) == 0x000490, "Member 'ABP_MasterProjectile_C::HitSurfaceParticles' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, DecalSize) == 0x0004E0, "Member 'ABP_MasterProjectile_C::DecalSize' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, DecalLifeSpan) == 0x000530, "Member 'ABP_MasterProjectile_C::DecalLifeSpan' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, Decal_Fade_Distance) == 0x000538, "Member 'ABP_MasterProjectile_C::Decal_Fade_Distance' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, DebugMode) == 0x000540, "Member 'ABP_MasterProjectile_C::DebugMode' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, DoBleedDamage) == 0x000541, "Member 'ABP_MasterProjectile_C::DoBleedDamage' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, TickTime) == 0x000548, "Member 'ABP_MasterProjectile_C::TickTime' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, BleedLength) == 0x000550, "Member 'ABP_MasterProjectile_C::BleedLength' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, BleedDamage) == 0x000558, "Member 'ABP_MasterProjectile_C::BleedDamage' has a wrong offset!");
static_assert(offsetof(ABP_MasterProjectile_C, bAoe_) == 0x00055C, "Member 'ABP_MasterProjectile_C::bAoe_' has a wrong offset!");

}

