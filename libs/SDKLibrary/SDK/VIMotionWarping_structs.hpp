#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVIRootMotionModifierState : uint8
{
	Waiting                        = 0,
	Active                         = 1,
	MarkedForRemoval               = 2,
	Disabled                       = 3,
	EVIRootMotionModifierState_MAX = 4,
};

enum class EVIMotionWarpRotationType : uint8
{
	Default                        = 0,
	Facing                         = 1,
	EVIMotionWarpRotationType_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct VIMotionWarping.VIMotionWarpingWindowData
struct FVIMotionWarpingWindowData
{
public:
	class UVIAnimNotifyState_MotionWarping*      VIAnimNotify;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VIMotionWarping.VIRootMotionModifier
struct FVIRootMotionModifier
{
public:
	uint8                                        Pad_4FA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousPosition;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentPosition;                                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLocalSpace;                                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIRootMotionModifierState        State;                                             // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FD[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct VIMotionWarping.VIMotionWarpingSyncPoint
struct FVIMotionWarpingSyncPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4FE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x58 (0x80 - 0x28)
// ScriptStruct VIMotionWarping.VIRootMotionModifier_Warp
struct FVIRootMotionModifier_Warp : public FVIRootMotionModifier
{
public:
	class FName                                  SyncPointName;                                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpTranslation;                                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZAxis;                                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpRotation;                                     // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIMotionWarpRotationType         RotationType;                                      // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpRotationTimeMultiplier;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_502[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVIMotionWarpingSyncPoint             CachedSyncPoint;                                   // 0x40(0x40)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct VIMotionWarping.VIRootMotionModifier_Scale
struct FVIRootMotionModifier_Scale : public FVIRootMotionModifier
{
public:
	struct FVector                               Scale;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct VIMotionWarping.VIMotionDeltaTrack
struct FVIMotionDeltaTrack
{
public:
	TArray<struct FTransform>                    BoneTransformTrack;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       DeltaTranslationTrack;                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                      DeltaRotationTrack;                                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               TotalTranslation;                                  // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TotalRotation;                                     // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VIMotionWarping.VIMotionDeltaTrackContainer
struct FVIMotionDeltaTrackContainer
{
public:
	TArray<struct FVIMotionDeltaTrack>           Tracks;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x170 (0x1F0 - 0x80)
// ScriptStruct VIMotionWarping.VIRootMotionModifier_AdjustmentBlendWarp
struct FVIRootMotionModifier_AdjustmentBlendWarp : public FVIRootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_506[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          IKBones;                                           // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_507[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedMeshTransform;                               // 0xA0(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x100(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            CachedVIRootMotion;                                // 0x160(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimSequenceTrackContainer           Result;                                            // 0x1C0(0x20)(Protected, NativeAccessSpecifierProtected)
	float                                        ActualStartTime;                                   // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_50A[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x80 - 0x80)
// ScriptStruct VIMotionWarping.VIRootMotionModifier_SkewWarp
struct FVIRootMotionModifier_SkewWarp : public FVIRootMotionModifier_Warp
{
public:
};

}


