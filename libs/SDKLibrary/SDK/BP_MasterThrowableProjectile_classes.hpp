#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A0 - 0x290)
// BlueprintGeneratedClass BP_MasterThrowableProjectile.BP_MasterThrowableProjectile_C
class ABP_MasterThrowableProjectile_C : public AActor
{
public:
	class USphereComponent*                      ProjectileCollision;                               // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ProjectileMesh;                                    // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterThrowableProjectile_C* GetDefaultObj();

	void InitializeThownProjectile();
};

}


