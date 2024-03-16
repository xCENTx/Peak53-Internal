#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x7E0 - 0x780)
// BlueprintGeneratedClass BP_MasterExplosiveThrowable.BP_MasterExplosiveThrowable_C
class ABP_MasterExplosiveThrowable_C : public ABP_MasterThrowable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Damage;                                            // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinDamage;                                         // 0x78C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExplosionInnerRadius;                              // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExplosionOuterRadius;                              // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageFalloff;                                     // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeToExplode;                                     // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ExplosionEffect;                                   // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ExplosionEffectScale;                              // 0x7B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ExplosionSound;                                    // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterExplosiveThrowableProjectile_C* ThrownExplosiveProjectile;                         // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterExplosiveThrowable_C* GetDefaultObj();

	void InitializeThrowProjectile();
	void ExecuteUbergraph_BP_MasterExplosiveThrowable(int32 EntryPoint, class ABP_MasterExplosiveThrowableProjectile_C* K2Node_DynamicCast_AsBP_Master_Explosive_Throwable_Projectile, bool K2Node_DynamicCast_bSuccess);
};

}


