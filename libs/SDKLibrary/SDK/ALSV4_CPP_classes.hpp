#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// Class ALSV4_CPP.ALSAIController
class AALSAIController : public AAIController
{
public:
	class UBehaviorTree*                         Behaviour;                                         // 0x3B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AALSAIController* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class ALSV4_CPP.ALSAnimNotifyCameraShake
class UALSAnimNotifyCameraShake : public UAnimNotify
{
public:
	TSubclassOf<class UCameraShakeBase>          ShakeClass;                                        // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E70[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSAnimNotifyCameraShake* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class ALSV4_CPP.ALSAnimNotifyFootstep
class UALSAnimNotifyFootstep : public UAnimNotify
{
public:
	class UDataTable*                            HitDataTable;                                      // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FootSocketName;                                    // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawDebugTrace                   DrawDebugType;                                     // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E73[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceLength;                                       // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnDecal;                                       // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorDecalX;                                     // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorDecalY;                                     // 0x52(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorDecalZ;                                     // 0x53(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnSound;                                       // 0x54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SoundParameterName;                                // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSFootstepType                  FootstepType;                                      // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideMaskCurve;                                // 0x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E77[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeMultiplier;                                  // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMultiplier;                                   // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnNiagara;                                     // 0x6C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E78[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSAnimNotifyFootstep* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ALSV4_CPP.ALSAnimNotifyGroundedEntryState
class UALSAnimNotifyGroundedEntryState : public UAnimNotify
{
public:
	enum class EALSGroundedEntryState            GroundedEntryState;                                // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSAnimNotifyGroundedEntryState* GetDefaultObj();

};

// 0x2B8 (0x8D0 - 0x618)
// Class ALSV4_CPP.ALSBaseCharacter
class AALSBaseCharacter : public ACharacter
{
public:
	FMulticastInlineDelegateProperty_            JumpPressedDelegate;                               // 0x618(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJumpedDelegate;                                  // 0x628(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RagdollStateChangedDelegate;                       // 0x638(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UALSCharacterMovementComponent*        MyCharacterMovementComponent;                      // 0x648(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSRotationMode                  DesiredRotationMode;                               // 0x650(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSGait                          DesiredGait;                                       // 0x651(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSStance                        DesiredStance;                                     // 0x652(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookUpDownRate;                                    // 0x654(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookLeftRightRate;                                 // 0x658(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RollDoubleTapTimeout;                              // 0x65C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBreakFall;                                        // 0x660(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSprintHeld;                                       // 0x661(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThirdPersonFOV;                                    // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FirstPersonFOV;                                    // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRightShoulder;                                    // 0x66C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   MovementModel;                                     // 0x670(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               Acceleration;                                      // 0x680(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsMoving;                                         // 0x698(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasMovementInput;                                 // 0x699(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              LastVelocityRotation;                              // 0x6A0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              LastMovementInputRotation;                         // 0x6B8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        Speed;                                             // 0x6D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MovementInputAmount;                               // 0x6D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AimYawRate;                                        // 0x6D8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EasedMaxAcceleration;                              // 0x6DC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ReplicatedCurrentAcceleration;                     // 0x6E0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              ReplicatedControlRotation;                         // 0x6F8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class USkeletalMesh*                         VisibleMesh;                                       // 0x710(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSOverlayState                  OverlayState;                                      // 0x718(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSGroundedEntryState            GroundedEntryState;                                // 0x719(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSMovementState                 MovementState;                                     // 0x71A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSMovementState                 PrevMovementState;                                 // 0x71B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSMovementAction                MovementAction;                                    // 0x71C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSRotationMode                  RotationMode;                                      // 0x71D(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSGait                          Gait;                                              // 0x71E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSStance                        Stance;                                            // 0x71F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EALSViewMode                      ViewMode;                                          // 0x720(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverlayOverrideState;                              // 0x724(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FALSMovementStateSettings             MovementData;                                      // 0x728(0xC8)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              TargetRotation;                                    // 0x7F0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              InAirRotation;                                     // 0x808(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        YawOffset;                                         // 0x820(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBreakfallOnLand;                                  // 0x824(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BreakfallOnLandVelocity;                           // 0x828(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReversedPelvis;                                   // 0x82C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRagdollOnLand;                                    // 0x82D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F41[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RagdollOnLandVelocity;                             // 0x830(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRagdollOnGround;                                  // 0x834(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRagdollFaceUp;                                    // 0x835(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F42[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastRagdollVelocity;                               // 0x838(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetRagdollLocation;                             // 0x850(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F43[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UALSPlayerCameraBehavior*              CameraBehavior;                                    // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F44[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UALSDebugComponent*                    ALSDebugComponent;                                 // 0x8C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AALSBaseCharacter* GetDefaultObj();

	void WalkAction();
	void VelocityDirectionAction();
	void StanceAction();
	void SprintAction(bool bValue);
	void SetVisibleMesh(class USkeletalMesh* NewSkeletalMesh);
	void SetViewMode(enum class EALSViewMode NewViewMode, bool bForce);
	void SetStance(enum class EALSStance NewStance, bool bForce);
	void SetRotationMode(enum class EALSRotationMode NewRotationMode, bool bForce);
	void SetRightShoulder(bool bNewRightShoulder);
	void SetOverlayState(enum class EALSOverlayState NewState, bool bForce);
	void SetOverlayOverrideState(int32 NewState);
	void SetMovementState(enum class EALSMovementState NewState, bool bForce);
	void SetMovementAction(enum class EALSMovementAction NewAction, bool bForce);
	void SetGroundedEntryState(enum class EALSGroundedEntryState NewState);
	void SetGait(enum class EALSGait NewGait, bool bForce);
	void SetDesiredStance(enum class EALSStance NewStance);
	void SetDesiredRotationMode(enum class EALSRotationMode NewRotMode);
	void SetDesiredGait(enum class EALSGait NewGait);
	void SetCameraBehavior(class UALSPlayerCameraBehavior* CamBeh);
	void SetActorLocationAndTargetRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void Server_SetVisibleMesh(class USkeletalMesh* NewSkeletalMesh);
	void Server_SetViewMode(enum class EALSViewMode NewViewMode, bool bForce);
	void Server_SetRotationMode(enum class EALSRotationMode NewRotationMode, bool bForce);
	void Server_SetOverlayState(enum class EALSOverlayState NewState, bool bForce);
	void Server_SetMeshLocationDuringRagdoll(const struct FVector& MeshLocation);
	void Server_SetDesiredStance(enum class EALSStance NewStance);
	void Server_SetDesiredRotationMode(enum class EALSRotationMode NewRotMode);
	void Server_SetDesiredGait(enum class EALSGait NewGait);
	void Server_RagdollStart();
	void Server_RagdollEnd(const struct FVector& CharacterLocation);
	void Server_PlayMontage(class UAnimMontage* Montage, float PlayRate);
	void RightMovementAction(float Value);
	void ReplicatedRagdollStart();
	void ReplicatedRagdollEnd();
	void Replicated_PlayMontage(class UAnimMontage* Montage, float PlayRate);
	void RagdollStart();
	void RagdollEnd();
	void RagdollAction();
	void OnRep_VisibleMesh(class USkeletalMesh* PreviousSkeletalMesh);
	void OnRep_ViewMode(enum class EALSViewMode PrevViewMode);
	void OnRep_RotationMode(enum class EALSRotationMode PrevRotMode);
	void OnRep_OverlayState(enum class EALSOverlayState PrevOverlayState);
	void OnBreakfall();
	void Multicast_RagdollStart();
	void Multicast_RagdollEnd(const struct FVector& CharacterLocation);
	void Multicast_PlayMontage(class UAnimMontage* Montage, float PlayRate);
	void Multicast_OnLanded();
	void Multicast_OnJumped();
	void LookingDirectionAction();
	void JumpAction(bool bValue);
	bool IsRightShoulder();
	bool IsMoving();
	bool HasMovementInput();
	enum class EALSViewMode GetViewMode();
	enum class ECollisionChannel GetThirdPersonTraceParams(struct FVector* TraceOrigin, float* TraceRadius);
	struct FTransform GetThirdPersonPivotTarget();
	struct FALSMovementSettings GetTargetMovementSettings();
	enum class EALSStance GetStance();
	float GetSpeed();
	enum class EALSRotationMode GetRotationMode();
	class UAnimMontage* GetRollAnimation();
	enum class EALSMovementState GetPrevMovementState();
	enum class EALSOverlayState GetOverlayState();
	int32 GetOverlayOverrideState();
	class UALSCharacterMovementComponent* GetMyMovementComponent();
	enum class EALSMovementState GetMovementState();
	float GetMovementInputAmount();
	struct FVector GetMovementInput();
	enum class EALSMovementAction GetMovementAction();
	enum class EALSGroundedEntryState GetGroundedEntryState();
	class UAnimMontage* GetGetUpAnimation(bool bRagdollFaceUpState);
	enum class EALSGait GetGait();
	struct FVector GetFirstPersonCameraTarget();
	enum class EALSStance GetDesiredStance();
	enum class EALSRotationMode GetDesiredRotationMode();
	enum class EALSGait GetDesiredGait();
	void GetCameraParameters(float* TPFOVOut, float* FPFOVOut, bool* bRightShoulderOut);
	float GetAnimCurveValue(class FName CurveName);
	enum class EALSGait GetAllowedGait();
	float GetAimYawRate();
	struct FRotator GetAimingRotation();
	enum class EALSGait GetActualGait(enum class EALSGait AllowedGait);
	struct FVector GetAcceleration();
	void ForwardMovementAction(float Value);
	void EventOnLanded();
	void EventOnJumped();
	bool CanSprint();
	void CameraUpAction(float Value);
	void CameraTapAction();
	void CameraRightAction(float Value);
	void CameraHeldAction();
	void AimAction(bool bValue);
};

// 0x20 (0x8F0 - 0x8D0)
// Class ALSV4_CPP.ALSCharacter
class AALSCharacter : public AALSBaseCharacter
{
public:
	class USceneComponent*                       HeldObjectRoot;                                    // 0x8D0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x8D8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x8E0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F52[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AALSCharacter* GetDefaultObj();

	void UpdateHeldObjectAnimations();
	void UpdateHeldObject();
	void ClearHeldObject();
	void AttachToHand(class UStaticMesh* NewStaticMesh, class USkeletalMesh* NewSkeletalMesh, class UClass* NewAnimClass, bool bLeftHand, const struct FVector& Offset);
};

// 0x558 (0x8A0 - 0x348)
// Class ALSV4_CPP.ALSCharacterAnimInstance
class UALSCharacterAnimInstance : public UAnimInstance
{
public:
	class AALSBaseCharacter*                     Character;                                         // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FALSAnimCharacterInformation          CharacterInformation;                              // 0x350(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSMovementState                     MovementState;                                     // 0x3F8(0x6)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSMovementAction                    MovementAction;                                    // 0x3FE(0x6)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSRotationMode                      RotationMode;                                      // 0x404(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSGait                              Gait;                                              // 0x408(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSStance                            Stance;                                            // 0x40C(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSOverlayState                      OverlayState;                                      // 0x40F(0xE)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSAnimGraphGrounded                 Grounded;                                          // 0x420(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSVelocityBlend                     VelocityBlend;                                     // 0x454(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSLeanAmount                        LeanAmount;                                        // 0x464(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RelativeAccelerationAmount;                        // 0x470(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FALSGroundedEntryState                GroundedEntryState;                                // 0x488(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSMovementDirection                 MovementDirection;                                 // 0x48B(0x5)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSAnimGraphInAir                    InAir;                                             // 0x490(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSAnimGraphAimingValues             AimingValues;                                      // 0x4A0(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             SmoothedAimingAngle;                               // 0x4F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlailRate;                                         // 0x508(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FALSAnimGraphLayerBlending            LayerBlendingValues;                               // 0x50C(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSAnimGraphFootIK                   FootIKValues;                                      // 0x570(0x138)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSAnimTurnInPlace                   TurnInPlaceValues;                                 // 0x6A8(0x118)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSAnimRotateInPlace                 RotateInPlace;                                     // 0x7C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FALSAnimConfiguration                 Config;                                            // 0x7D8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DiagonalScaleAmountCurve;                          // 0x810(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StrideBlend_N_Walk;                                // 0x818(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StrideBlend_N_Run;                                 // 0x820(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StrideBlend_C_Walk;                                // 0x828(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LandPredictionCurve;                               // 0x830(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LeanInAirCurve;                                    // 0x838(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          YawOffset_FB;                                      // 0x840(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          YawOffset_LR;                                      // 0x848(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     TransitionAnim_R;                                  // 0x850(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     TransitionAnim_L;                                  // 0x858(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IkFootL_BoneName;                                  // 0x860(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IkFootR_BoneName;                                  // 0x868(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F62[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UALSDebugComponent*                    ALSDebugComponent;                                 // 0x890(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F63[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSCharacterAnimInstance* GetDefaultObj();

	bool ShouldMoveCheck();
	void SetTrackedHipsDirection(enum class EALSHipsDirection HipsDirection);
	void SetGroundedEntryState(enum class EALSGroundedEntryState NewState);
	void PlayTransitionChecked(struct FALSDynamicMontageParams& Parameters);
	void PlayTransition(struct FALSDynamicMontageParams& Parameters);
	void PlayDynamicTransition(float ReTriggerDelay, const struct FALSDynamicMontageParams& Parameters);
	void OnPivot();
	void OnJumped();
	bool CanTurnInPlace();
	bool CanRotateInPlace();
	bool CanDynamicTransition();
};

// 0x28 (0xF20 - 0xEF8)
// Class ALSV4_CPP.ALSCharacterMovementComponent
class UALSCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	uint8                                        bRequestMovementSettingsChange;                    // 0xEF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSGait                          AllowedGait;                                       // 0xEF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F68[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSMovementSettings                  CurrentMovementSettings;                           // 0xF00(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UALSCharacterMovementComponent* GetDefaultObj();

	void SetMovementSettings(const struct FALSMovementSettings& NewMovementSettings);
	void SetAllowedGait(enum class EALSGait NewAllowedGait);
	void Server_SetAllowedGait(enum class EALSGait NewAllowedGait);
};

// 0x48 (0xE8 - 0xA0)
// Class ALSV4_CPP.ALSDebugComponent
class UALSDebugComponent : public UActorComponent
{
public:
	class AALSBaseCharacter*                     OwnerCharacter;                                    // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlomo;                                            // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHUD;                                          // 0xA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCharacterInfo;                                // 0xAA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         DebugSkeletalMesh;                                 // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AALSBaseCharacter*>             AvailableDebugCharacters;                          // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AALSBaseCharacter*                     DebugFocusCharacter;                               // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F80[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         DefaultSkeletalMesh;                               // 0xD8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F81[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSDebugComponent* GetDefaultObj();

	void UpdateColoringSystem();
	void ToggleTraces();
	void ToggleSlomo();
	void ToggleLayerColors();
	void ToggleHud();
	void ToggleGlobalTimeDilationLocal(float TimeDilation);
	void ToggleDebugView();
	void ToggleDebugShapes();
	void ToggleDebugMesh();
	void ToggleCharacterInfo();
	void SetResetColors();
	void SetDynamicMaterials();
	void OverlayMenuCycle(bool bValue);
	void OpenOverlayMenu(bool bValue);
	void OnPlayerControllerInitialized(class APlayerController* Controller);
	bool GetShowTraces();
	bool GetShowLayerColors();
	bool GetShowDebugShapes();
	bool GetDebugView();
	void FocusedDebugCharacterCycle(bool bValue);
	void DrawDebugSpheres();
};

// 0x240 (0x2E0 - 0xA0)
// Class ALSV4_CPP.ALSMantleComponent
class UALSMantleComponent : public UActorComponent
{
public:
	class UTimelineComponent*                    MantleTimeline;                                    // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FALSMantleTraceSettings               GroundedTraceSettings;                             // 0xA8(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FALSMantleTraceSettings               AutomaticTraceSettings;                            // 0xBC(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FALSMantleTraceSettings               FallingTraceSettings;                              // 0xD0(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           MantleTimelineCurve;                               // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 MantleCollisionChannel;                            // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 WalkableSurfaceDetectionChannel;                   // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FB9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSMantleParams                      MantleParams;                                      // 0xF8(0x30)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FBA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSComponentAndTransform             MantleLedgeLS;                                     // 0x130(0x70)(BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            MantleTarget;                                      // 0x1A0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            MantleActualStartOffset;                           // 0x200(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            MantleAnimatedStartOffset;                         // 0x260(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AcceptableVelocityWhileMantling;                   // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AALSBaseCharacter*                     OwnerCharacter;                                    // 0x2C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UALSDebugComponent*                    ALSDebugComponent;                                 // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FC8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSMantleComponent* GetDefaultObj();

	void Server_MantleStart(float MantleHeight, struct FALSComponentAndTransform& MantleLedgeWS, enum class EALSMantleType MantleType);
	void OnOwnerRagdollStateChanged(bool bRagdollState);
	void OnOwnerJumpInput();
	void Multicast_MantleStart(float MantleHeight, struct FALSComponentAndTransform& MantleLedgeWS, enum class EALSMantleType MantleType);
	void MantleUpdate(float BlendIn);
	void MantleStart(float MantleHeight, struct FALSComponentAndTransform& MantleLedgeWS, enum class EALSMantleType MantleType);
	void MantleEnd();
	bool MantleCheck(struct FALSMantleTraceSettings& TraceSettings, enum class EDrawDebugTrace DebugType, bool bDoMantle);
	struct FALSMantleAsset GetMantleAsset(enum class EALSMantleType MantleType, enum class EALSOverlayState CurrentOverlayState);
};

// 0x0 (0x28 - 0x28)
// Class ALSV4_CPP.ALSMathLibrary
class UALSMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UALSMathLibrary* GetDefaultObj();

	struct FTransform TransformSub(struct FTransform& T1, struct FTransform& T2);
	struct FTransform TransformAdd(struct FTransform& T1, struct FTransform& T2);
	struct FTransform MantleComponentLocalToWorld(struct FALSComponentAndTransform& CompAndTransform);
	struct FVector GetCapsuleLocationFromBase(const struct FVector& BaseLocation, float ZOffset, class UCapsuleComponent* Capsule);
	struct FVector GetCapsuleBaseLocation(float ZOffset, class UCapsuleComponent* Capsule);
	bool CapsuleHasRoomCheck(class UCapsuleComponent* Capsule, const struct FVector& TargetLocation, float HeightOffset, float RadiusOffset, enum class EDrawDebugTrace DebugType, bool DrawDebugTrace);
	enum class EALSMovementDirection CalculateQuadrant(enum class EALSMovementDirection Current, float FRThreshold, float FLThreshold, float BRThreshold, float BLThreshold, float Buffer, float Angle);
	bool AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer);
};

// 0x18 (0x48 - 0x30)
// Class ALSV4_CPP.ALSNotifyStateEarlyBlendOut
class UALSNotifyStateEarlyBlendOut : public UAnimNotifyState
{
public:
	class UAnimMontage*                          ThisMontage;                                       // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckMovementState;                               // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSMovementState                 MovementStateEquals;                               // 0x3D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckStance;                                      // 0x3E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSStance                        StanceEquals;                                      // 0x3F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckMovementInput;                               // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSNotifyStateEarlyBlendOut* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class ALSV4_CPP.ALSNotifyStateMovementAction
class UALSNotifyStateMovementAction : public UAnimNotifyState
{
public:
	enum class EALSMovementAction                MovementAction;                                    // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSNotifyStateMovementAction* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class ALSV4_CPP.ALSNotifyStateOverlayOverride
class UALSNotifyStateOverlayOverride : public UAnimNotifyState
{
public:
	int32                                        OverlayOverrideState;                              // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSNotifyStateOverlayOverride* GetDefaultObj();

};

// 0x18 (0x360 - 0x348)
// Class ALSV4_CPP.ALSPlayerCameraBehavior
class UALSPlayerCameraBehavior : public UAnimInstance
{
public:
	enum class EALSMovementState                 MovementState;                                     // 0x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSMovementAction                MovementAction;                                    // 0x349(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLookingDirection;                                 // 0x34A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVelocityDirection;                                // 0x34B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAiming;                                           // 0x34C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSGait                          Gait;                                              // 0x34D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSStance                        Stance;                                            // 0x34E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSViewMode                      ViewMode;                                          // 0x34F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRightShoulder;                                    // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugView;                                        // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDA[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UALSPlayerCameraBehavior* GetDefaultObj();

};

// 0x110 (0x3450 - 0x3340)
// Class ALSV4_CPP.ALSPlayerCameraManager
class AALSPlayerCameraManager : public APlayerCameraManager
{
public:
	class AALSBaseCharacter*                     ControlledCharacter;                               // 0x3340(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                CameraBehavior;                                    // 0x3348(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RootLocation;                                      // 0x3350(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FE5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SmoothedPivotTarget;                               // 0x3370(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PivotLocation;                                     // 0x33D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetCameraLocation;                              // 0x33E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              TargetCameraRotation;                              // 0x3400(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              DebugViewRotation;                                 // 0x3418(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               DebugViewOffset;                                   // 0x3430(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UALSDebugComponent*                    ALSDebugComponent;                                 // 0x3448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AALSPlayerCameraManager* GetDefaultObj();

	void OnPossess(class AALSBaseCharacter* NewCharacter);
	float GetCameraBehaviorParam(class FName CurveName);
	void DrawDebugTargets(const struct FVector& PivotTargetLocation);
	bool CustomCameraBehavior(float DeltaTime, struct FVector* Location, struct FRotator* Rotation, float* FOV);
	struct FVector CalculateAxisIndependentLag(const struct FVector& CurrentLocation, const struct FVector& TargetLocation, const struct FRotator& CameraRotation, const struct FVector& LagSpeeds, float DeltaTime);
};

// 0x18 (0x868 - 0x850)
// Class ALSV4_CPP.ALSPlayerController
class AALSPlayerController : public APlayerController
{
public:
	class AALSBaseCharacter*                     PossessedCharacter;                                // 0x850(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputMappingContext*                  DefaultInputMappingContext;                        // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputMappingContext*                  DebugInputMappingContext;                          // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AALSPlayerController* GetDefaultObj();

	void WalkAction(struct FInputActionValue& Value);
	void VelocityDirectionAction(struct FInputActionValue& Value);
	void StanceAction(struct FInputActionValue& Value);
	void SprintAction(struct FInputActionValue& Value);
	void RightMovementAction(struct FInputActionValue& Value);
	void RagdollAction(struct FInputActionValue& Value);
	void LookingDirectionAction(struct FInputActionValue& Value);
	void JumpAction(struct FInputActionValue& Value);
	void ForwardMovementAction(struct FInputActionValue& Value);
	void DebugToggleTracesAction(struct FInputActionValue& Value);
	void DebugToggleSlomoAction(struct FInputActionValue& Value);
	void DebugToggleShapesAction(struct FInputActionValue& Value);
	void DebugToggleMeshAction(struct FInputActionValue& Value);
	void DebugToggleLayerColorsAction(struct FInputActionValue& Value);
	void DebugToggleHudAction(struct FInputActionValue& Value);
	void DebugToggleDebugViewAction(struct FInputActionValue& Value);
	void DebugToggleCharacterInfoAction(struct FInputActionValue& Value);
	void DebugOverlayMenuCycleAction(struct FInputActionValue& Value);
	void DebugOpenOverlayMenuAction(struct FInputActionValue& Value);
	void DebugFocusedCharacterCycleAction(struct FInputActionValue& Value);
	void CameraUpAction(struct FInputActionValue& Value);
	void CameraTapAction(struct FInputActionValue& Value);
	void CameraRightAction(struct FInputActionValue& Value);
	void CameraHeldAction(struct FInputActionValue& Value);
	void AimAction(struct FInputActionValue& Value);
};

// 0x10 (0xA8 - 0x98)
// Class ALSV4_CPP.ALS_BTTask_GetRandomLocation
class UALS_BTTask_GetRandomLocation : public UBTTask_BlackboardBase
{
public:
	float                                        MaxDistance;                                       // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2011[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    Filter;                                            // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UALS_BTTask_GetRandomLocation* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class ALSV4_CPP.ALS_BTTask_SetFocusToPlayer
class UALS_BTTask_SetFocusToPlayer : public UBTTaskNode
{
public:

	static class UClass* StaticClass();
	static class UALS_BTTask_SetFocusToPlayer* GetDefaultObj();

};

}


