#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVIFBIKUpdateType : uint8
{
	FUT_Single                     = 0,
	FUT_Tick                       = 1,
	FUT_MAX                        = 2,
};

enum class EVIFBIKUpdateRole : uint8
{
	FUR_All                        = 0,
	FUR_LocalOnly                  = 1,
	FUR_SimulatedOnly              = 2,
	FUR_MAX                        = 3,
};

enum class EVIFBIKTraceType : uint8
{
	FTT_Simple                     = 0,
	FTT_Complex                    = 1,
	FTT_ComplexLocalOnly           = 2,
	FTT_MAX                        = 3,
};

enum class EVIVaultInputRelease : uint8
{
	VIR_Always                     = 0,
	VIR_OnSuccess                  = 1,
	VIR_Never                      = 2,
	VIR_MAX                        = 3,
};

enum class EVIAutoVault : uint8
{
	VIAV_None                      = 0,
	VIAV_Walking                   = 2,
	VIAV_Falling                   = 4,
	VIAV_Swimming                  = 8,
	VIAV_Flying                    = 16,
	VIAV_Custom                    = 32,
	VIAV_MAX                       = 33,
};

enum class EVIAntiCheatType : uint8
{
	VIACT_None                     = 0,
	VIACT_Enabled                  = 1,
	VIACT_Custom                   = 2,
	VIACT_MAX                      = 3,
};

enum class EVIJumpKeyPriority : uint8
{
	JKP_DisableVault               = 0,
	JKP_SelectHighestPoint         = 1,
	JKP_AlwaysVault                = 2,
	JKP_OnlyVaultFromAir           = 3,
	JKP_MAX                        = 255,
};

enum class EVIGameplayEffectReplicationMode : uint8
{
	Minimal                        = 0,
	Mixed                          = 1,
	Full                           = 2,
	EVIGameplayEffectReplicationMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct VaultIt.VIGameplayAbilityLocalAnimMontageForMesh
struct FVIGameplayAbilityLocalAnimMontageForMesh
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityLocalAnimMontage      LocalMontageInfo;                                  // 0x8(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct VaultIt.VIGameplayAbilityRepAnimMontageForMesh
struct FVIGameplayAbilityRepAnimMontageForMesh
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityRepAnimMontage        RepMontageInfo;                                    // 0x8(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VaultIt.VIAbilityMeshMontage
struct FVIAbilityMeshMontage
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage;                                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VaultIt.VIAntiCheatSettings
struct FVIAntiCheatSettings
{
public:
	uint8                                        Pad_1325[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocationErrorThreshold;                            // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionErrorThreshold;                           // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightErrorThreshold;                              // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1326[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct VaultIt.VICapsuleInfo
struct FVICapsuleInfo
{
public:
	float                                        HalfHeight;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VaultIt.VIAnimations
struct FVIAnimations
{
public:
	TArray<class UAnimMontage*>                  Animations;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VaultIt.VIAnimSet
struct FVIAnimSet
{
public:
	TMap<float, struct FVIAnimations>            Animations;                                        // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct VaultIt.VITraceSettings
struct FVITraceSettings
{
public:
	float                                        MaxLedgeHeight;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinLedgeHeight;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachDistance;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardTraceRadius;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownwardTraceRadius;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionFloatHeight;                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxObjectVelocity;                                 // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1329[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECollisionChannel>         ObjectChannels;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  TraceProfile;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct VaultIt.VIBoneFBIKData
struct FVIBoneFBIKData
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpRate;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReset;                                            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_132C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VaultIt.VIRepMotionMatch
struct FVIRepMotionMatch
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x18(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct VaultIt.VIVaultInfo
struct FVIVaultInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RandomSeed;                                        // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x40 - 0x38)
// ScriptStruct VaultIt.VIVaultResult
struct FVIVaultResult : public FVIVaultInfo
{
public:
	bool                                         bSuccess;                                          // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct VaultIt.VIGameplayAbilityTargetData_VaultInfo
struct FVIGameplayAbilityTargetData_VaultInfo : public FGameplayAbilityTargetData
{
public:
	struct FVIVaultInfo                          VaultInfo;                                         // 0x8(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

}


