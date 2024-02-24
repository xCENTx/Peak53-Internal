#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x309 (0x699 - 0x390)
// BlueprintGeneratedClass BP_MasterHoldable.BP_MasterHoldable_C
class ABP_MasterHoldable_C : public APKHoldable
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       AttachPoint;                                       // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  HoldSocket;                                        // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHoldableAnimations;                             // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_HoldableAnims>              ThirdPersonAnimations;                             // 0x3B8(0x10)(Edit, BlueprintVisible)
	enum class E_AimOffset                       AimOffsetType;                                     // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AimOffsets                         StandardAimOffsets;                                // 0x3D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugHandIK;                                       // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRightHandIK;                                    // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseLeftHandIK;                                     // 0x3EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FBE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LeftHandIKSocket;                                  // 0x3EC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            SGKCharacter;                                      // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            OwningCharacter;                                   // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Sway;                                              // 0x408(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSway;                                           // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SwaySpeed;                                         // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxSway;                                           // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StandardSway;                                      // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowLeaning;                                      // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CharacterLean;                                     // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CameraLean;                                        // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LeanThirdPersonCameraOffset;                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowLeaningInStandardStance;                      // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowLeaningInCombatStance;                        // 0x469(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseClippingChecks;                                 // 0x46A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseClippingCheckInStandardStance;                  // 0x46B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ClippingDistance;                                  // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ClippingRadius;                                    // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ClippingRotation;                                  // 0x480(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_CharacterComponent_C*              CharacterComponent;                                // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DurabilityCostPerUse;                              // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHoldableMovementSpeeds;                         // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_CharacterState, double>    MovementSpeeds;                                    // 0x4B0(0x50)(Edit, BlueprintVisible)
	bool                                         AllowStanceChange;                                 // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  DefaultStance;                                     // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SecondaryLeftHandIKSocket;                         // 0x504(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUseSpecialAO;                                   // 0x50C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spine1SpecialAO;                                   // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine2SpecialAO;                                   // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine3SpecialAO;                                   // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HeadSpecialAO;                                     // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_FirstPersonArmsAnims>       FirstPersonArmsAnimations;                         // 0x530(0x10)(Edit, BlueprintVisible)
	bool                                         UseLeftHandIKWhenSprinting;                        // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            FirstPersonIK;                                     // 0x550(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            ThirdPersonIK;                                     // 0x5B0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ElbowIK;                                           // 0x610(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentSocket;                                     // 0x628(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHoldableCameraShake;                            // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                IdleCameraShake;                                   // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                WalkCameraShake;                                   // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SprintCameraShake;                                 // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AimedCameraShake;                                  // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AimedWalkCameraShake;                              // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftElbowIK;                                       // 0x660(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnLeft;                                          // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnRight;                                         // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnLeftCrouch;                                    // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnRightCrouch;                                   // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         TickEnabled;                                       // 0x698(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterHoldable_C* GetDefaultObj();

	void SGK_Aimed(bool* Aimed);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void SGK_HoldableSkeletalMesh(class USkeletalMeshComponent** SkelMeshComp);
	void GetLookSensitivityMultiplier(double* Multiplier);
	void OnRep_TickEnabled();
	void OnRep_CurrentSocket(class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh, bool CallFunc_K2_AttachToComponent_ReturnValue);
	bool LeanCheck(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1);
	void CharacterSprinting(bool Sprinting);
	void CharacterFalling();
	void CalculateHoldableSway(double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast);
	void SGK_ClientSecondaryAction(bool KeyDown);
	void SGK_ClientReloadChecks();
	void SGK_ShowNewAttachment();
	void SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, enum class E_AttachmentType AttachmentType);
	void SGK_ChamberWeaponAmmo();
	void SGK_ResetHoldable();
	void SGK_MeleeCollisionToggle(bool TraceOn);
	void SGK_Character();
	void SGK_HoldableRemoved();
	void SGK_ClientToggleBuildMenu(bool Open);
	void SGK_ClientPrimaryAction(bool KeyDown);
	void SGK_SpawnAttachment(class UClass* Attachment);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ToggleFireMode();
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ReceiveTick(float DeltaSeconds);
	void ClientNewWeapon();
	void SGK_NewHeld(bool Held);
	void NewOwner(class AActor* Owner, class FName CurrentSocket);
	void ReceiveBeginPlay();
	void MulticastAttach();
	void ExecuteUbergraph_BP_MasterHoldable(int32 EntryPoint, bool K2Node_Event_TraceOn, bool K2Node_Event_Open, bool K2Node_Event_KeyDown_2, class UClass* K2Node_Event_Attachment, class ABP_MasterAttachment_C* K2Node_Event_Attachment_1, const struct FS_InvItem& K2Node_Event_InvItem, enum class E_AttachmentType K2Node_Event_AttachmentType, bool K2Node_Event_KeyDown_1, bool K2Node_Event_KeyDown, float K2Node_Event_DeltaSeconds, bool K2Node_Event_KeyDown_3, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool K2Node_Event_Held, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_CustomEvent_Owner, class FName K2Node_CustomEvent_CurrentSocket, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
};

}


