#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7E8 - 0x7E0)
// BlueprintGeneratedClass BP_Grenade.BP_Grenade_C
class ABP_Grenade_C : public ABP_MasterExplosiveThrowable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Grenade_C* GetDefaultObj();

	void OnTakeRadialDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_Grenade(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UDamageType* K2Node_CustomEvent_DamageType, const struct FVector& K2Node_CustomEvent_Origin, const struct FHitResult& K2Node_CustomEvent_HitInfo, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser);
};

}


