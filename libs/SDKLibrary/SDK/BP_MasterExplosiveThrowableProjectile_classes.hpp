#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x340 - 0x2A0)
// BlueprintGeneratedClass BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C
class ABP_MasterExplosiveThrowableProjectile_C : public ABP_MasterThrowableProjectile_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       TimeToExplode;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinDamage;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExplosionInnerRadius;                              // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExplosionOuterRadius;                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageFalloff;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ExplosionEffect;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EffectScale;                                       // 0x2D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMode;                                         // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            ExplosionSound;                                    // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            OwningCharacter;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PathTraceLastLoc;                                  // 0x308(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMolotov_;                                         // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MolotovTimer;                                      // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MolotovTimeHandle;                                 // 0x330(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BurnMulticastSound;                                // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterExplosiveThrowableProjectile_C* GetDefaultObj();

	void Explode(double NewLocalVar_0, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_ApplyRadialDamageWithFalloff_ReturnValue, float CallFunc_DrawDebugSphere_Radius_ImplicitCast, float CallFunc_DrawDebugSphere_Radius_ImplicitCast_1, float CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast);
	void MulticastExplodeEffect(class UParticleSystem* Particle, class USoundBase* Sound, const struct FVector& Scale);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BurnSound();
	void MolotovDamageLogic();
	void MolotovDamageTimer();
	void MolotovDelete();
	void InitializeThownProjectile();
	void ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess_1, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_EqualExactly_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float K2Node_Event_DeltaSeconds, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class UParticleSystem* K2Node_CustomEvent_Particle, class USoundBase* K2Node_CustomEvent_Sound, const struct FVector& K2Node_CustomEvent_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_ApplyRadialDamageWithFalloff_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


