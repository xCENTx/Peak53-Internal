#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterMeleeWeapon

#include "Basic.hpp"

#include "E_Hitbox_structs.hpp"
#include "S_MinMax_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_MasterWeapon_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C
// 0x00C0 (0x09A0 - 0x08E0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_MasterMeleeWeapon_C : public ABP_MasterWeapon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MasterMeleeWeapon_C;             // 0x08D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAnimMontage*>                   MeleeAttackAnimations;                             // 0x08E0(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         HitActors;                                         // 0x08F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          PrimaryButtonDown;                                 // 0x0900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565C[0x7];                                     // 0x0901(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        TraceSocketsLastFrameLoc;                          // 0x0908(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        TraceSocketsCurrentFrameLoc;                       // 0x0918(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           SweepTraceTimer;                                   // 0x0928(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MeleeTraceFrequency;                               // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanHarvestResources;                               // 0x0938(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565D[0x7];                                     // 0x0939(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, struct FS_MinMax>         HarvestableResources;                              // 0x0940(0x0050)(Edit, BlueprintVisible)
	EDrawDebugTrace                               MeleeTraceVisibility;                              // 0x0990(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0991(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResourceHit;                                       // 0x0992(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChainAttack;                                       // 0x0993(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETraceTypeQuery                               MeleeTraceChannel;                                 // 0x0994(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DurabilityDecreased;                               // 0x0995(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MasterMeleeWeapon(int32 EntryPoint);
	void MulticastMeleeAttackMontage(int32 AnimIndex);
	void OnBlendOut_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnBlendOut_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnCompleted_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnCompleted_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnInterrupted_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnInterrupted_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnNotifyBegin_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnNotifyBegin_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnNotifyEnd_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnNotifyEnd_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void RandomMeleeAttackAnimation(class UAnimMontage** AttackAnimation);
	void ResetSwing();
	void SGK_MeleeCollisionToggle(bool TraceOn);
	void SGK_ResetHoldable();
	void SGK_ServerPrimaryAction(bool KeyDown);
	void SweepTrace();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MasterMeleeWeapon_C">();
	}
	static class ABP_MasterMeleeWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MasterMeleeWeapon_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_MasterMeleeWeapon_C) == 0x000010, "Wrong alignment on ABP_MasterMeleeWeapon_C");
static_assert(sizeof(ABP_MasterMeleeWeapon_C) == 0x0009A0, "Wrong size on ABP_MasterMeleeWeapon_C");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, UberGraphFrame_BP_MasterMeleeWeapon_C) == 0x0008D8, "Member 'ABP_MasterMeleeWeapon_C::UberGraphFrame_BP_MasterMeleeWeapon_C' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, MeleeAttackAnimations) == 0x0008E0, "Member 'ABP_MasterMeleeWeapon_C::MeleeAttackAnimations' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, HitActors) == 0x0008F0, "Member 'ABP_MasterMeleeWeapon_C::HitActors' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, PrimaryButtonDown) == 0x000900, "Member 'ABP_MasterMeleeWeapon_C::PrimaryButtonDown' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, TraceSocketsLastFrameLoc) == 0x000908, "Member 'ABP_MasterMeleeWeapon_C::TraceSocketsLastFrameLoc' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, TraceSocketsCurrentFrameLoc) == 0x000918, "Member 'ABP_MasterMeleeWeapon_C::TraceSocketsCurrentFrameLoc' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, SweepTraceTimer) == 0x000928, "Member 'ABP_MasterMeleeWeapon_C::SweepTraceTimer' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, MeleeTraceFrequency) == 0x000930, "Member 'ABP_MasterMeleeWeapon_C::MeleeTraceFrequency' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, CanHarvestResources) == 0x000938, "Member 'ABP_MasterMeleeWeapon_C::CanHarvestResources' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, HarvestableResources) == 0x000940, "Member 'ABP_MasterMeleeWeapon_C::HarvestableResources' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, MeleeTraceVisibility) == 0x000990, "Member 'ABP_MasterMeleeWeapon_C::MeleeTraceVisibility' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, DebugMode) == 0x000991, "Member 'ABP_MasterMeleeWeapon_C::DebugMode' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, ResourceHit) == 0x000992, "Member 'ABP_MasterMeleeWeapon_C::ResourceHit' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, ChainAttack) == 0x000993, "Member 'ABP_MasterMeleeWeapon_C::ChainAttack' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, MeleeTraceChannel) == 0x000994, "Member 'ABP_MasterMeleeWeapon_C::MeleeTraceChannel' has a wrong offset!");
static_assert(offsetof(ABP_MasterMeleeWeapon_C, DurabilityDecreased) == 0x000995, "Member 'ABP_MasterMeleeWeapon_C::DurabilityDecreased' has a wrong offset!");

}

