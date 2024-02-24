#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKDamageInterface.BP_SGKDamageInterface_C
class IBP_SGKDamageInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKDamageInterface_C* GetDefaultObj();

	void GetHit();
	void SGK_Damage(int32 BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, enum class E_DamageType DamageType, enum class E_Hitbox HitBox);
	bool SGK_SetCurrentHealth(int32 NewHealthAmount);
	void SGK_ShowHealthWidget(bool* ShowHealthWidget, class FText* HealthWidgetName);
	void SGK_MaxHealth(int32* MaxHealth);
	void SGK_CurrentHealth(int32* Health);
	void SGK_BleedDamage(int32 TickDamage, double TickTime, double BleedLength);
};

}


