#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3C8 - 0x3B8)
// Class VaultIt.VIGameplayAbility
class UVIGameplayAbility : public UGameplayAbility
{
public:
	TArray<struct FVIAbilityMeshMontage>         CurrentAbilityMeshMontages;                        // 0x3B8(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVIGameplayAbility* GetDefaultObj();

	bool IsPredictionKeyValidForMorePrediction();
	class FString GetCurrentPredictionKeyStatus();
};

// 0x0 (0x3C8 - 0x3C8)
// Class VaultIt.GameplayAbility_Vault
class UGameplayAbility_Vault : public UVIGameplayAbility
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbility_Vault* GetDefaultObj();

};

// 0x98 (0x118 - 0x80)
// Class VaultIt.PlayMontageForMeshAndWait
class UPlayMontageForMeshAndWait : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelled;                                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                Mesh;                                              // 0xC0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                          MontageToPlay;                                     // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Rate;                                              // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StartSection;                                      // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnimRootMotionTranslationScale;                    // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopWhenAbilityEnds;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReplicateMontage;                                 // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1185[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideBlendOutTimeForCancelAbility;              // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        OverrideBlendOutTimeForStopWhenEndAbility;         // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1186[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayMontageForMeshAndWait* GetDefaultObj();

	class UPlayMontageForMeshAndWait* PlayMontageForMeshAndWait(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bReplicateMontage, float OverrideBlendOutTimeForCancelAbility, float OverrideBlendOutTimeForStopWhenEndAbility);
};

// 0x20 (0x13C0 - 0x13A0)
// Class VaultIt.VIAbilitySystemComponent
class UVIAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	TArray<struct FVIGameplayAbilityLocalAnimMontageForMesh> LocalAnimMontageInfoForMeshes;                     // 0x13A0(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVIGameplayAbilityRepAnimMontageForMesh> RepAnimMontageInfoForMeshes;                       // 0x13B0(0x10)(Net, ZeroConstructor, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVIAbilitySystemComponent* GetDefaultObj();

	void OnRep_ReplicatedAnimMontageForMesh();
};

// 0x0 (0x28 - 0x28)
// Class VaultIt.VIAnimationInterface
class IVIAnimationInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVIAnimationInterface* GetDefaultObj();

	void SetBoneFBIK(class FName& BoneName, struct FVector& BoneLocation, bool bEnabled);
};

// 0x78 (0x3C0 - 0x348)
// Class VaultIt.VIAnimInstance
class UVIAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_1196[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RHandName;                                         // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  LHandName;                                         // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVIBoneFBIKData>               FBIK;                                              // 0x360(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bRHand;                                            // 0x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLHand;                                            // 0x371(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBothHand;                                         // 0x372(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1197[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RHandLoc;                                          // 0x378(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LHandLoc;                                          // 0x390(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsVaulting;                                       // 0x3A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1199[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVICharacterBase*                      Character;                                         // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsJumping;                                        // 0x3B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFalling;                                        // 0x3B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_119B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x3BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVIAnimInstance* GetDefaultObj();

	void SetBoneFBIK(class FName& BoneName, struct FVector& BoneLocation, bool bEnabled);
	void K2_OnStopVault();
	void K2_OnStartVault();
};

// 0x60 (0x420 - 0x3C0)
// Class VaultIt.VIAnimInstanceFP
class UVIAnimInstanceFP : public UVIAnimInstance
{
public:
	TMap<class UAnimMontage*, class UAnimMontage*> MontageLinkMap;                                    // 0x3C0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UAnimMontage*                          MontageToPlay;                                     // 0x410(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VaultBlendOutTime;                                 // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11A4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVIAnimInstanceFP* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class VaultIt.VIAnimNotifyState_FBIK
class UVIAnimNotifyState_FBIK : public UAnimNotifyState
{
public:
	class FName                                  BoneName;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceLength;                                       // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceRadius;                                       // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneOffset;                                        // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableIfHitFails;                                // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIFBIKTraceType                  TraceType;                                         // 0x45(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIFBIKUpdateType                 UpdateType;                                        // 0x46(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TickSkipAmount;                                    // 0x47(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIFBIKUpdateRole                 ApplyToRoles;                                      // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugTraceDuringPIE;                              // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1285[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVIAnimNotifyState_FBIK* GetDefaultObj();

};

// 0x0 (0x4E8 - 0x4E8)
// Class VaultIt.VIAssetManager
class UVIAssetManager : public UAssetManager
{
public:

	static class UClass* StaticClass();
	static class UVIAssetManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class VaultIt.VIBlueprintFunctionLibrary
class UVIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVIBlueprintFunctionLibrary* GetDefaultObj();

	bool VaultAnimSetIsValid(struct FVIAnimSet& AnimSet);
	void ToggleBoneFBIK(class FName& BoneName, struct FVector& NewLocation, bool bEnable, TArray<struct FVIBoneFBIKData>& Bones);
	struct FVIBoneFBIKData K2_GetBoneForFBIK(class FName BoneName, TArray<struct FVIBoneFBIKData>& Bones);
	bool IsRunningOnServer(class AActor* Actor);
	void InterpolateFBIK(float DeltaTime, TArray<struct FVIBoneFBIKData>& Bones);
	struct FVIVaultInfo GetVaultInfoFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	float GetMaxVaultHeight(class APawn* Pawn);
	float GetMaxJumpHeightForCharacter(class ACharacter* Character);
	float GetMaxJumpHeight(float Gravity, float JumpZVelocity);
	float GetMaxHeightFromGroundForPawn(class APawn* Pawn, float Gravity, float JumpZVelocity);
	float GetMaxHeightFromGround(class ACharacter* Character);
	float ComputeAnimationPlayRateFromDuration(class UAnimSequenceBase* Animation, float Duration);
	bool ActorIsAscending(class AActor* InActor, bool bWorldUpIsZ);
};

// 0x58 (0x670 - 0x618)
// Class VaultIt.VICharacterBase
class AVICharacterBase : public ACharacter
{
public:
	uint8                                        Pad_12CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVIMotionWarpingComponent*             MotionWarping;                                     // 0x620(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVIPawnVaultComponent*                 VaultComponent;                                    // 0x628(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRepIsVaulting;                                    // 0x630(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasVaulting;                                      // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVIRepMotionMatch                     RepMotionMatch;                                    // 0x638(0x30)(BlueprintVisible, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12D1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVICharacterBase* GetDefaultObj();

	void StopVaultAbility();
	void OnStopVaultAbility();
	void OnRep_MotionMatch();
	bool IsVaulting();
};

// 0x10 (0x680 - 0x670)
// Class VaultIt.VICharacterAbilityBase
class AVICharacterAbilityBase : public AVICharacterBase
{
public:
	class UVIAbilitySystemComponent*             AbilitySystem;                                     // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIGameplayEffectReplicationMode  AbilitySystemReplicationMode;                      // 0x678(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12D5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVICharacterAbilityBase* GetDefaultObj();

};

// 0x90 (0x710 - 0x680)
// Class VaultIt.VICharacter
class AVICharacter : public AVICharacterAbilityBase
{
public:
	struct FVIAnimSet                            VaultAnimSet;                                      // 0x680(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVITraceSettings                      VaultTraceSettings;                                // 0x6D0(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVICharacter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class VaultIt.VIPawnInterface
class IVIPawnInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVIPawnInterface* GetDefaultObj();

	void StartVaultAbility();
	void ReplicateMotionMatch(struct FVIRepMotionMatch& MotionMatch);
	void OnLocalPlayerVault(struct FVector& Location, struct FVector& Direction);
	bool IsWalkable(struct FHitResult& HitResult);
	struct FVITraceSettings GetVaultTraceSettings();
	void GetVaultLocationAndDirection(struct FVector* OutLocation, struct FVector* OutDirection);
	struct FVector GetVaultDirection();
	struct FVIAnimSet GetVaultAnimSet();
	class UVIPawnVaultComponent* GetPawnVaultComponent();
	class UVIMotionWarpingComponent* GetMotionWarpingComponent();
	class USkeletalMeshComponent* GetMeshForVaultMontage();
	bool CanVault();
	bool CanAutoVaultInCustomMovementMode();
};

// 0xB0 (0x150 - 0xA0)
// Class VaultIt.VIPawnVaultComponent
class UVIPawnVaultComponent : public UActorComponent
{
public:
	TSubclassOf<class UGameplayAbility>          VaultAbility;                                      // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VaultAbilityTag;                                   // 0xA8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VaultStateTag;                                     // 0xB0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VaultRemovalTag;                                   // 0xB8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIVaultInputRelease              AutoReleaseVaultInput;                             // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIJumpKeyPriority                JumpKeyPriority;                                   // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1314[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalVaultHeight;                             // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalVaultHeightFalling;                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanVaultFromGround;                               // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanVaultFromFalling;                              // 0xCD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanVaultFromSwimming;                             // 0xCE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanVaultFromCrouching;                            // 0xCF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AutoVaultStates;                                   // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AutoVaultCheckSkip;                                // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIAntiCheatType                  AntiCheatType;                                     // 0xD2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1318[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVIAntiCheatSettings                  AntiCheatSettings;                                 // 0xD8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bVaultAbilityInitialized;                          // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPressedVault;                                     // 0xF1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVICapsuleInfo                        CapsuleInfo;                                       // 0xF4(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_131B[0x44];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 PawnOwner;                                         // 0x140(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAbilitySystemComponent*               ASC;                                               // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVIPawnVaultComponent* GetDefaultObj();

	void Vault();
	void StopVault();
	void StopJumping();
	bool Jump(float GravityZ, bool bCanJump, bool bIsFalling);
	bool IsVaulting();
	bool IsCapsuleInfoValid();
	struct FVICapsuleInfo GetCapsuleInfo();
	struct FVIVaultInfo ComputeVaultInfoFromResult(struct FVIVaultInfo& VaultResult);
	struct FVIVaultResult ComputeVault();
	bool ComputeShouldAutoVault();
	bool ComputeDefaultAntiCheat(struct FVIVaultInfo& ClientVaultInfo, struct FVIVaultResult& ServerVaultResult);
	bool ComputeCustomAntiCheat(struct FVIVaultInfo& ClientVaultInfo);
	bool ComputeAntiCheatResult(struct FVIVaultInfo& VaultInfo);
	void CheckVaultInput(float DeltaTime, enum class EMovementMode MovementMode);
};

}


