#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C
// (Actor)

class UClass* ABP_MasterExplosiveThrowableProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterExplosiveThrowableProjectile_C");

	return Clss;
}


// BP_MasterExplosiveThrowableProjectile_C BP_MasterExplosiveThrowableProjectile.Default__BP_MasterExplosiveThrowableProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterExplosiveThrowableProjectile_C* ABP_MasterExplosiveThrowableProjectile_C::GetDefaultObj()
{
	static class ABP_MasterExplosiveThrowableProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterExplosiveThrowableProjectile_C*>(ABP_MasterExplosiveThrowableProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.Explode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyRadialDamageWithFalloff_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Radius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Radius_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterExplosiveThrowableProjectile_C::Explode(double NewLocalVar_0, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_ApplyRadialDamageWithFalloff_ReturnValue, float CallFunc_DrawDebugSphere_Radius_ImplicitCast, float CallFunc_DrawDebugSphere_Radius_ImplicitCast_1, float CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "Explode");

	Params::ABP_MasterExplosiveThrowableProjectile_C_Explode_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_ReturnValue = CallFunc_ApplyRadialDamageWithFalloff_ReturnValue;
	Parms.CallFunc_DrawDebugSphere_Radius_ImplicitCast = CallFunc_DrawDebugSphere_Radius_ImplicitCast;
	Parms.CallFunc_DrawDebugSphere_Radius_ImplicitCast_1 = CallFunc_DrawDebugSphere_Radius_ImplicitCast_1;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast = CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast = CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast = CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.MulticastExplodeEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             Particle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterExplosiveThrowableProjectile_C::MulticastExplodeEffect(class UParticleSystem* Particle, class USoundBase* Sound, const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "MulticastExplodeEffect");

	Params::ABP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect_Params Parms{};

	Parms.Particle = Particle;
	Parms.Sound = Sound;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MasterExplosiveThrowableProjectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterExplosiveThrowableProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "ReceiveTick");

	Params::ABP_MasterExplosiveThrowableProjectile_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.BurnSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterExplosiveThrowableProjectile_C::BurnSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "BurnSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.MolotovDamageLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterExplosiveThrowableProjectile_C::MolotovDamageLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "MolotovDamageLogic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.MolotovDamageTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterExplosiveThrowableProjectile_C::MolotovDamageTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "MolotovDamageTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.MolotovDelete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterExplosiveThrowableProjectile_C::MolotovDelete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "MolotovDelete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.InitializeThownProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterExplosiveThrowableProjectile_C::InitializeThownProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "InitializeThownProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APeak53PlayerState_C*        K2Node_DynamicCast_AsPeak_53Player_State                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualExactly_VectorVector_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_CustomEvent_Particle                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyRadialDamageWithFalloff_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterExplosiveThrowableProjectile_C::ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess_1, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_EqualExactly_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float K2Node_Event_DeltaSeconds, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class UParticleSystem* K2Node_CustomEvent_Particle, class USoundBase* K2Node_CustomEvent_Sound, const struct FVector& K2Node_CustomEvent_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_ApplyRadialDamageWithFalloff_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast, float CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterExplosiveThrowableProjectile_C", "ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile");

	Params::ABP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Player_State = K2Node_DynamicCast_AsPeak_53Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_EqualExactly_VectorVector_ReturnValue = CallFunc_EqualExactly_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.K2Node_CustomEvent_Particle = K2Node_CustomEvent_Particle;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_ReturnValue = CallFunc_ApplyRadialDamageWithFalloff_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast = CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast = CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast;
	Parms.CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast = CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


