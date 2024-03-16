#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F69 (0x42B1 - 0x348)
// AnimBlueprintGeneratedClass BP_FirstPersonArms_Anim.BP_FirstPersonArms_Anim_C
class UBP_FirstPersonArms_Anim_C : public UAnimInstance
{
public:
	uint8                                        Pad_53B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x24)(HasGetValueTypeHash)
	uint8                                        Pad_53B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x380(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x388(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x390(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x3B0(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x4B8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x4E0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x528(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x630(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x738(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x760(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x7A8(0xE0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x888(0x118)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x9A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x9C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x9F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xA18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xA40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xA68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xA90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xAB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xAE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xB08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xB30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xB58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xB80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xBA8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_56;                   // 0xBD0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55;                   // 0xC18(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_54;                   // 0xC60(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_22;                  // 0xCA8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_53;                   // 0xCF0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_52;                   // 0xD38(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_51;                   // 0xD80(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_21;                  // 0xDC8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_20;                  // 0xE10(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_50;                   // 0xE58(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49;                   // 0xEA0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48;                   // 0xEE8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_19;                  // 0xF30(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0xF78(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_47;                   // 0xF98(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_46;                   // 0xFE0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_45;                   // 0x1028(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_18;                  // 0x1070(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_44;                   // 0x10B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x1100(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x1148(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_17;                  // 0x1190(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_16;                  // 0x11D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x1220(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x1268(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x12B0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_15;                  // 0x12F8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x1340(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x1360(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x13A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x13F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x1438(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x1480(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_14;                  // 0x14C8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x1510(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x1558(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_13;                  // 0x15A0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_12;                  // 0x15E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x1630(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x1678(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_11;                  // 0x16C0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1708(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x1750(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x1798(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x17E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x1828(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x1870(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_10;                  // 0x18B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1900(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x1948(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_9;                   // 0x1990(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_8;                   // 0x19D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x1A20(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x1A68(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7;                   // 0x1AB0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1AF8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1B18(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x1B60(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x1BA8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1BF0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x1C38(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1C80(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1CA0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1CE8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1D30(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x1D78(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x1DC0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1E08(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1E28(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x1E70(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1EB8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1F00(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x1F48(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1F90(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1FB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x1FF8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x2040(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x2088(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x20D0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x2118(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x2160(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x21A8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x21F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x2238(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2280(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x22C8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x2310(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x2358(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x2378(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x2440(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x2548(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x2570(0x28)(None)
	uint8                                        Pad_53B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x25A0(0x1F0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2;                         // 0x2790(0x270)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x2A00(0x128)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x2B28(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x2C30(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x2C58(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x2C78(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x2CA0(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x2DA8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x2DD0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x2DF8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x2E40(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x2F68(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x2F88(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x2FA8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x2FC8(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x30F0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x3138(0x28)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x3160(0x270)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x33D0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x34F8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x3518(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3538(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x3640(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x3668(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x36B0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x36F8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x3720(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x3800(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x3828(0x48)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x3870(0x270)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3AE0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3BC0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3BE8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x3C30(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3C58(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x3C80(0xC8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3D48(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3D68(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3D88(0x28)(None)
	bool                                         IsInAir_;                                          // 0x3DB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoldingWeapon;                                   // 0x3DB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrouched;                                        // 0x3DB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAccelerating;                                    // 0x3DB3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAimOffset;                                      // 0x3DB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRightHandIK;                                    // 0x3DB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseLeftHandIK;                                     // 0x3DB6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            OwningPawn;                                        // 0x3DB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              AimOffset;                                         // 0x3DC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                             LookAtRotation;                                    // 0x3DD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Speed;                                             // 0x3DE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Direction;                                         // 0x3DF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimPitch;                                          // 0x3DF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimYaw;                                            // 0x3E00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RootYawOffset;                                     // 0x3E08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YawLastTick;                                       // 0x3E10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Yaw;                                               // 0x3E18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YawChangeOverFrame;                                // 0x3E20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurveValue;                                        // 0x3E28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurveValueLastFrame;                               // 0x3E30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LeftHandIKTransform;                               // 0x3E40(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RightHandIKTransform;                              // 0x3EA0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationMode                   CurrentAnimMode;                                   // 0x3F00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAimOffsetBlendSpace*                  EmptyHandsAimOffset;                               // 0x3F08(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpingStart;                                      // 0x3F10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpingLoop;                                       // 0x3F18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpLand;                                          // 0x3F20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x3F28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterComponent_C*              CharacterComponent;                                // 0x3F30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_FirstPersonArmsAnims               HoldableAnims1;                                    // 0x3F38(0x98)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoldingItem;                                     // 0x3FD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Aimed;                                             // 0x3FD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RightHandIKLocationOffsetADS;                      // 0x3FD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_AimOffsets                         HoldableAimOffsets;                                // 0x3FF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SightOffset;                                       // 0x4008(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InAction;                                          // 0x4020(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAimOffsetBlendSpace*                  HoldableAimOffset;                                 // 0x4028(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  AnimationState;                                    // 0x4030(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRightHandADSOffset;                             // 0x4031(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Lean;                                              // 0x4038(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            SightTransform;                                    // 0x4040(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AimOffset                       AimOffsetType;                                     // 0x40A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RightHandSway;                                     // 0x40A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       WeaponCollision;                                   // 0x40C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RightHandIkEnabled;                                // 0x40C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ClippingRotation;                                  // 0x40D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Sprinting;                                         // 0x40E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ElbowOffset;                                       // 0x40F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLock;                                             // 0x4108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightHandIK;                                       // 0x4109(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeadAO;                                            // 0x410A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowHandIKs;                                      // 0x410B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spine2AOAlpha;                                     // 0x4110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine3AOAlpha;                                     // 0x4118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HeadAOAlpha;                                       // 0x4120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSway;                                           // 0x4128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LeftHandIK;                                        // 0x4129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spine1AOAlpha;                                     // 0x4130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LeftHandIkEnabled;                                 // 0x4138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpecalAO;                                          // 0x4140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_FirstPersonArmsAnims               HoldableAnims2;                                    // 0x4148(0x98)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  HoldingItem;                                       // 0x41E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  NewHoldable;                                       // 0x41E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   HoldingItemMesh;                                   // 0x41F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_FirstPersonArmsAnims               EmptyHandsUpperBody;                               // 0x41F8(0x98)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftElbowOffset;                                   // 0x4290(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterAttachment_C*                LastSight;                                         // 0x42A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SprintLeftHand;                                    // 0x42B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FirstPersonArms_Anim_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SelectAnims(TArray<struct FS_FirstPersonArmsAnims>& FirstPersonAnims, bool* AnimsFound, struct FS_FirstPersonArmsAnims* Anims, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FS_FirstPersonArmsAnims& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct FS_FirstPersonArmsAnims& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void CalculateAimOffset(double BaseYaw, double BasePitch, bool Temp_bool_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double K2Node_Select_Default, double CallFunc_ClampAngle_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_FInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue, double CallFunc_ClampAngle_ReturnValue_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1);
	void UpdateAOWeights(bool CallFunc_IsValid_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_5EF7B0E5483436531C611683A4701054();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_6B85F4B6426A1A9C67CAEBAB7B8AB2AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_F707D91F45BFA11C639004BB3126C472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_ModifyBone_66D2D2154FF69728F639AD9D22A64A5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TwoBoneIK_144E7E53475E6D5845CBAC9FD5C45CA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_E15168274668F42198870884F5B3E234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_98D9E062462F951C1FD6CC80A65D1F4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_0DB43E6A4E078AD0877E6A9DFAF1988C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_1CABD84E4D040B72FEA1A68BBB2E1C4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_8F4F39FA4DA81E6C2CC11F8866BC8E76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_F0B996DE47010D050D66A18EB819CBE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_9FB07C9B406444B13C04D7B27A979A31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A3AF4BC042EFBF256B80CF96C3556DCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FirstPersonArms_Anim_AnimGraphNode_TransitionResult_A73A8A7A40869C88F24B12951C038882();
	void AnimNotify_DisableHandIK();
	void AnimNotify_EnableHandIK();
	void AnimNotify_EndAnimInAction();
	void AnimNotify_StartAnimInAction();
	void BlueprintInitializeAnimation();
	void SGK_EndChamberMontage();
	void SGK_UpdateAnimationState(enum class E_AnimationState AnimationState);
	void SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_FirstPersonArms_Anim(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_8, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_11, enum class E_AnimationState K2Node_Event_AnimationState, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_SelectAnims_AnimsFound, const struct FS_FirstPersonArmsAnims& CallFunc_SelectAnims_Anims, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, TScriptInterface<class IBP_SGKHoldableInterface_C> CallFunc_SGK_HoldableMesh_self_CastInput, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh, bool CallFunc_IsValid_ReturnValue_12, bool Temp_bool_IsClosed_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SelectAnims_AnimsFound_1, const struct FS_FirstPersonArmsAnims& CallFunc_SelectAnims_Anims_1, class ABP_MasterHoldable_C* K2Node_Event_Holdable, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, double CallFunc_VSize_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, const struct FVector2D& CallFunc_SGK_LookAtRotation_LookAtRotation, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_8, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_4, bool K2Node_DynamicCast_bSuccess_4, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_5, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_IsClosed_Variable_4, class ABP_MasterRangeWeapon_C* K2Node_DynamicCast_AsBP_Master_Range_Weapon, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_5, bool K2Node_DynamicCast_bSuccess_7, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_3, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_6, bool K2Node_DynamicCast_bSuccess_8, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_7, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsLocallyControlled_ReturnValue_1, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_5, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, class ABP_MasterRangeWeapon_C* K2Node_DynamicCast_AsBP_Master_Range_Weapon_1, bool K2Node_DynamicCast_bSuccess_10, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_8, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_6, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_1, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_9, bool K2Node_DynamicCast_bSuccess_12, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_7, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, class ABP_MasterRangeWeapon_C* K2Node_DynamicCast_AsBP_Master_Range_Weapon_2, bool K2Node_DynamicCast_bSuccess_13, const struct FTransform& CallFunc_TInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_3, class USkeletalMesh* CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue, const struct FTransform& CallFunc_SelectADSCameraTransform_Value, const struct FTransform& CallFunc_TInterpTo_ReturnValue_1, const struct FTransform& CallFunc_SelectTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_4, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_10, bool K2Node_DynamicCast_bSuccess_14, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_8, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_11, bool K2Node_DynamicCast_bSuccess_15, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_9, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_3, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue_1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_4, const struct FTransform& CallFunc_TInterpTo_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_4, float CallFunc_GetCurveValue_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_8, float CallFunc_GetCurveValue_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_10, float CallFunc_Conv_BoolToFloat_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_4, float CallFunc_GetCurveValue_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_11, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_12, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_5, bool Temp_bool_IsClosed_Variable_5, double CallFunc_FInterpTo_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_14, bool Temp_bool_Has_Been_Initd_Variable_6, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool Temp_bool_IsClosed_Variable_6, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, class AController* CallFunc_GetController_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_IsValid_ReturnValue_15, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, double K2Node_VariableSet_Yaw_ImplicitCast, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double K2Node_VariableSet_YawChangeOverFrame_ImplicitCast, double K2Node_VariableSet_Direction_ImplicitCast, float CallFunc_TInterpTo_DeltaTime_ImplicitCast, float CallFunc_TInterpTo_DeltaTime_ImplicitCast_1, float CallFunc_TInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, double CallFunc_FInterpTo_Target_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2);
};

}


