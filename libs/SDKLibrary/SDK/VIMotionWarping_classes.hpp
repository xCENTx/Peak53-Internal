#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class VIMotionWarping.VIAnimNotifyState_MotionWarping
class UVIAnimNotifyState_MotionWarping : public UAnimNotifyState
{
public:
	class UVIRootMotionModifierConfig*           VIRootMotionModifierConfig;                        // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVIAnimNotifyState_MotionWarping* GetDefaultObj();

	void AddVIRootMotionModifier(class UVIMotionWarpingComponent* VIMotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// 0x0 (0x28 - 0x28)
// Class VIMotionWarping.VIMotionWarpingUtilities
class UVIMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVIMotionWarpingUtilities* GetDefaultObj();

	struct FVIMotionWarpingSyncPoint MakeVIMotionWarpingSyncPoint(const struct FVector& Location, const struct FRotator& Rotation);
	void GetVIMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FVIMotionWarpingWindowData>* OutWindows);
	void GetVIMotionWarpingWindowsForSyncPointFromAnimation(class UAnimSequenceBase* Animation, class FName SyncPointName, TArray<struct FVIMotionWarpingWindowData>* OutWindows);
	struct FTransform ExtractVIRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);
	void BreakVIMotionWarpingSyncPoint(struct FVIMotionWarpingSyncPoint& SyncPoint, struct FVector* Location, struct FRotator* Rotation);
};

// 0x80 (0x120 - 0xA0)
// Class VIMotionWarping.VIMotionWarpingComponent
class UVIMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ACharacter>             CharacterOwner;                                    // 0xB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B9[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FVIMotionWarpingSyncPoint> SyncPoints;                                        // 0xD0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVIMotionWarpingComponent* GetDefaultObj();

	int32 RemoveSyncPoint(class FName Name);
	void AddOrUpdateSyncPoint(class FName Name, struct FVIMotionWarpingSyncPoint& SyncPoint);
};

// 0x0 (0x28 - 0x28)
// Class VIMotionWarping.VIRootMotionModifierConfig
class UVIRootMotionModifierConfig : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVIRootMotionModifierConfig* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class VIMotionWarping.VIRootMotionModifierConfig_Warp
class UVIRootMotionModifierConfig_Warp : public UVIRootMotionModifierConfig
{
public:
	class FName                                  SyncPointName;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpTranslation;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZAxis;                                      // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpRotation;                                     // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVIMotionWarpRotationType         RotationType;                                      // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpRotationTimeMultiplier;                        // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVIRootMotionModifierConfig_Warp* GetDefaultObj();

	void AddVIRootMotionModifierSimpleWarp(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EVIMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
};

// 0x0 (0x38 - 0x38)
// Class VIMotionWarping.VIRootMotionModifierConfig_VaultWarp
class UVIRootMotionModifierConfig_VaultWarp : public UVIRootMotionModifierConfig_Warp
{
public:

	static class UClass* StaticClass();
	static class UVIRootMotionModifierConfig_VaultWarp* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class VIMotionWarping.VIRootMotionModifierConfig_Scale
class UVIRootMotionModifierConfig_Scale : public UVIRootMotionModifierConfig
{
public:
	struct FVector                               Scale;                                             // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVIRootMotionModifierConfig_Scale* GetDefaultObj();

	void AddVIRootMotionModifierScale(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale);
};

// 0x18 (0x50 - 0x38)
// Class VIMotionWarping.VIRootMotionModifierConfig_AdjustmentBlendWarp
class UVIRootMotionModifierConfig_AdjustmentBlendWarp : public UVIRootMotionModifierConfig_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          IKBones;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVIRootMotionModifierConfig_AdjustmentBlendWarp* GetDefaultObj();

	void GetIKBoneTransformAndAlpha(class ACharacter* Character, class FName BoneName, struct FTransform* OutTransform, float* OutAlpha);
	void AddVIRootMotionModifierAdjustmentBlendWarp(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, TArray<class FName>& InIKBones);
};

// 0x0 (0x38 - 0x38)
// Class VIMotionWarping.VIRootMotionModifierConfig_SkewWarp
class UVIRootMotionModifierConfig_SkewWarp : public UVIRootMotionModifierConfig_Warp
{
public:

	static class UClass* StaticClass();
	static class UVIRootMotionModifierConfig_SkewWarp* GetDefaultObj();

	void AddVIRootMotionModifierSkewWarp(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EVIMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
};

}


