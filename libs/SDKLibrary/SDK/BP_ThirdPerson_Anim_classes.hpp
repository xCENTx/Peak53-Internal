#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64B0 (0x67F8 - 0x348)
// AnimBlueprintGeneratedClass BP_ThirdPerson_Anim.BP_ThirdPerson_Anim_C
class UBP_ThirdPerson_Anim_C : public UAnimInstance
{
public:
	uint8                                        Pad_52F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0xA4)(HasGetValueTypeHash)
	uint8                                        Pad_52F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x400(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x408(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x410(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x430(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x510(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0x618(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x640(0x128)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x768(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x790(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x7B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x7E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x808(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x830(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x858(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x880(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x8A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x8D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x8F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x920(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x948(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x970(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_11;                 // 0x998(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_10;                 // 0xA08(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0xA78(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_35;                  // 0xAE8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_34;                  // 0xB30(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0xB78(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0xBE8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0xC58(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_33;                  // 0xCC8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0xD10(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_71;                   // 0xD30(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_70;                   // 0xD78(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_69;                   // 0xDC0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_32;                  // 0xE08(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_31;                  // 0xE50(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_68;                   // 0xE98(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_67;                   // 0xEE0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_66;                   // 0xF28(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_30;                  // 0xF70(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0xFB8(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0xFD8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x1048(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x10B8(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_29;                  // 0x1128(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_28;                  // 0x1170(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x11B8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1228(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1298(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_27;                  // 0x1308(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x1350(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_65;                   // 0x1370(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_64;                   // 0x13B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_63;                   // 0x1400(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_62;                   // 0x1448(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_26;                  // 0x1490(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x14D8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_61;                   // 0x14F8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_60;                   // 0x1540(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_59;                   // 0x1588(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_58;                   // 0x15D0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_25;                  // 0x1618(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x1660(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_57;                   // 0x1680(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_56;                   // 0x16C8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55;                   // 0x1710(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_54;                   // 0x1758(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_24;                  // 0x17A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x17E8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_53;                   // 0x1808(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_52;                   // 0x1850(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_51;                   // 0x1898(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_23;                  // 0x18E0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_22;                  // 0x1928(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_50;                   // 0x1970(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49;                   // 0x19B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48;                   // 0x1A00(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_21;                  // 0x1A48(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1A90(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x1AB0(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x1B78(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x1BC0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x1CC8(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x1CE8(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1DF0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x1E38(0xE0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x1F18(0x118)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x2030(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x2058(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x2080(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x20A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x20D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x20F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x2120(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x2148(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2170(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x2198(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x21C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x21E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2210(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2238(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_47;                   // 0x2260(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_46;                   // 0x22A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_45;                   // 0x22F0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_20;                  // 0x2338(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_44;                   // 0x2380(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x23C8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x2410(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_19;                  // 0x2458(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_18;                  // 0x24A0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x24E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x2530(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x2578(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_17;                  // 0x25C0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2608(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x2628(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x2670(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x26B8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_16;                  // 0x2700(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x2748(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x2790(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x27D8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_15;                  // 0x2820(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_14;                  // 0x2868(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x28B0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x28F8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x2940(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_13;                  // 0x2988(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x29D0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x29F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x2A38(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x2A80(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x2AC8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x2B10(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_12;                  // 0x2B58(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x2BA0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x2BE8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_11;                  // 0x2C30(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_10;                  // 0x2C78(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x2CC0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x2D08(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_9;                   // 0x2D50(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x2D98(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x2DB8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x2E00(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x2E48(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x2E90(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_8;                   // 0x2ED8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x2F20(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x2F40(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x2F88(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x2FD0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x3018(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7;                   // 0x3060(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x30A8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x30C8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x3110(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x3158(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x31A0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x31E8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3230(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x3250(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3298(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x32E0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x3328(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x3370(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x33B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3400(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x3448(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x3490(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x34D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3520(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3568(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x35B0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x35F8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x3618(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x36E0(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x37E8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x3830(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x3878(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x38A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x38C8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x38F0(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x3918(0x128)(None)
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x3A40(0x1F0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2;                         // 0x3C30(0x270)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x3EA0(0x128)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x3FC8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x40D0(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x40F8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x4118(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x4138(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x4240(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x4268(0x48)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x42B0(0x118)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x43C8(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x43F0(0x118)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x4508(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x4550(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x4598(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x45C0(0x118)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x46D8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x47E0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x4808(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x4830(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x4938(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x4960(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x49A8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x49C8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x49E8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x4B10(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x4C38(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x4D60(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x4D80(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x4DA8(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x4ED0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x4F18(0x28)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x4F40(0x270)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x51B0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x52D8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x52F8(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x5318(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x5420(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x5448(0x48)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0x5490(0xA8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x5538(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x5560(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x5640(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x5668(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x56B0(0x28)(None)
	uint8                                        Pad_52FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x56E0(0x270)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x5950(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x5A30(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x5A58(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x5AA0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5AC8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x5B10(0x28)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x5B38(0xA8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x5BE0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x5D08(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x5E30(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5F58(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5F78(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x5F98(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x6078(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x60A0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x60C8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x61D0(0x28)(None)
	bool                                         IsInAir_;                                          // 0x61F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrouched;                                        // 0x61F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAccelerating;                                    // 0x61FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAimOffset;                                      // 0x61FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRightHandIK;                                    // 0x61FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseLeftHandIK;                                     // 0x61FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            OwningPawn;                                        // 0x6200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              AimOffset;                                         // 0x6208(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                             LookAtRotation;                                    // 0x6220(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Speed;                                             // 0x6230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Direction;                                         // 0x6238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimPitch;                                          // 0x6240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimYaw;                                            // 0x6248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RootYawOffset;                                     // 0x6250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YawLastTick;                                       // 0x6258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Yaw;                                               // 0x6260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YawChangeOverFrame;                                // 0x6268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurveValue;                                        // 0x6270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurveValueLastFrame;                               // 0x6278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsTurnRight;                               // 0x6280(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsTurnLeft;                                // 0x6288(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsCrouchTurnRight;                         // 0x6290(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsCrouchTurnLeft;                          // 0x6298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTurnInPlaceAngle;                               // 0x62A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LeftHandIKTransform;                               // 0x62B0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RightHandIKTransform;                              // 0x6310(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            SightTransform;                                    // 0x6370(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InAction;                                          // 0x63D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RightHandIKLocationOffsetADS;                      // 0x63D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CurrentTurnAnim;                                   // 0x63F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationMode                   CurrentAnimMode;                                   // 0x63F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAimOffsetBlendSpace*                  EmptyHandsAimOffset;                               // 0x6400(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpingStart;                                      // 0x6408(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpingLoop;                                       // 0x6410(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpLand;                                          // 0x6418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x6420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterComponent_C*              CharacterComponent;                                // 0x6428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SightOffset;                                       // 0x6430(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_HoldableAnims                      HoldableAnims1;                                    // 0x6448(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_HoldableAnims                      HoldableAnims2;                                    // 0x6520(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_AimOffset                       AimOffsetType;                                     // 0x65F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  AnimationState;                                    // 0x65F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RightHandSway;                                     // 0x6600(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       Lean;                                              // 0x6618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WeaponCollision;                                   // 0x6620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSway;                                           // 0x6628(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5300[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RightHandIkEnabled;                                // 0x6630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Sprinting;                                         // 0x6638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5301[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ClippingRotation;                                  // 0x6640(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseRightHandADSOffset;                             // 0x6658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5302[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SpecalAO;                                          // 0x6660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLock;                                             // 0x6668(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeadAO;                                            // 0x6669(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5303[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LeftHandIkEnabled;                                 // 0x6670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine2AOAlpha;                                     // 0x6678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LeftHandIK;                                        // 0x6680(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowHandIKs;                                      // 0x6681(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5304[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HeadAOAlpha;                                       // 0x6688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingShadowDummy;                                  // 0x6690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5305[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spine3AOAlpha;                                     // 0x6698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine1AOAlpha;                                     // 0x66A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RightElbowOffset;                                  // 0x66A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightHandIK;                                       // 0x66C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5306[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AimOffsets                         HoldableAimOffsets;                                // 0x66C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  HoldingItem;                                       // 0x66E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoldingItem;                                     // 0x66E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5307[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   HoldingItemMesh;                                   // 0x66F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_UpperBodyAnims                     EmptyHandsUpperBody;                               // 0x66F8(0x78)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_LowerBodyAnims                     EmptyHandsLowerBody;                               // 0x6770(0x40)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DummyMesh;                                         // 0x67B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         SprintLeftHand;                                    // 0x67B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LeftElbowOffset;                                   // 0x67C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnLeft;                                          // 0x67D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnRight;                                         // 0x67E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnLeftCrouch;                                    // 0x67E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnRightCrouch;                                   // 0x67F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ThirdPerson_Anim_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SelectAnims(TArray<struct FS_HoldableAnims>& AllAnims, bool* AnimsFound, struct FS_HoldableAnims* Anims, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_HoldableAnims& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_HoldableAnims& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void TurnInPlaceMontage(bool Right, class UAnimMontage** Montage, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UAnimMontage* K2Node_Select_Default, class UAnimMontage* K2Node_Select_Default_1, class UAnimMontage* K2Node_Select_Default_2);
	void CalculateAimOffset(double BaseYaw, double BasePitch, bool Temp_bool_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double K2Node_Select_Default, double CallFunc_ClampAngle_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_FInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue, double CallFunc_ClampAngle_ReturnValue_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1);
	void UpdateAOWeights(bool CallFunc_IsValid_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_EEAB781341E266BAF43B1895FCDB05A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2F9D70344354FD076E887DB02A618139();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_D91CC3BA4325B70779753D9538068129();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_ModifyBone_2477814B49D5D999E7EB058C57B0D5A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TwoBoneIK_52AE4A5045987AAB7C54C9A7806CD9A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_376C5E474E053C7A837DE781AF136F87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_BD11C52640C7F25E8CB94C932914BB9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_3AFEE7EC471667CAA0E65C9E7A7EE6D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F13BD9A947E91F687458A8ABA9BAFF3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_EC95A5844D669DB87529079EA6FC6E01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_0F534A184E8D9D8F0A1E1BAB164F11D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_9F74FE8A47350A7D3F5623921093DF60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_1CBCAB874C880DB2AFA95088D191F889();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_132040C74FCFD105CC9D5A83BD65F76F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_357D58B44E36460305944492121A4129();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_78E2EA9349BC85FDEAA5518EF405698F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_AAAAE79944B6406A217E1191977E00A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_4B1FB5DE409FB0CF8667879520B6F4ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_E3561F3B4AC98181AED3929B7A164002();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_6D076105434C3FCD78241EB8B687B2EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_178859F4400EFDA8291993888EA36736();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_4FF0E84F4DA05A04B9845EA75EF08F3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ThirdPerson_Anim_AnimGraphNode_TransitionResult_F7D46AB84FA462FB6143FEAA83D7DAB0();
	void AnimNotify_LeftFootStep();
	void AnimNotify_RightFootStep();
	void AnimNotify_EndAnimInAction();
	void AnimNotify_StartAnimInAction();
	void AnimNotify_DisableHandIK();
	void AnimNotify_EnableHandIK();
	void AnimNotify_ThrowRelease();
	void AnimNotify_ThrowChargeEnd();
	void AnimNotify_EndMeleeCollision();
	void AnimNotify_StartMeleeCollision();
	void AnimNotify_ChamberWeaponAmmo();
	void AnimNotify_DestroyAttachment();
	void AnimNotify_RemoveAttachment();
	void AnimNotify_AttachWeaponAttachment();
	void AnimNotify_SpawnWeaponAttachment();
	void AnimNotify_SpawnHoldable();
	void SGK_UpdateAnimationState(enum class E_AnimationState AnimationState);
	void BlueprintInitializeAnimation();
	void SGK_EndChamberMontage();
	void SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CheckTurnInPlace();
	void ResetCurveInPlace();
	void ResetFirstCurve();
	void TurnInPlaceAnimPlaying();
	void ExecuteUbergraph_BP_ThirdPerson_Anim(int32 EntryPoint, class USoundBase* Temp_object_Variable, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, class USoundBase* Temp_object_Variable_16, class USoundBase* Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, class USoundBase* Temp_object_Variable_19, class USoundBase* Temp_object_Variable_20, class USoundBase* Temp_object_Variable_21, class USoundBase* Temp_object_Variable_22, class USoundBase* Temp_object_Variable_23, class USoundBase* Temp_object_Variable_24, class USoundBase* Temp_object_Variable_25, bool CallFunc_IsValid_ReturnValue, class USoundBase* Temp_object_Variable_26, bool CallFunc_IsValid_ReturnValue_1, class ABP_MasterRangeWeapon_C* K2Node_DynamicCast_AsBP_Master_Range_Weapon, bool K2Node_DynamicCast_bSuccess, class USoundBase* Temp_object_Variable_27, class USoundBase* Temp_object_Variable_28, class USoundBase* Temp_object_Variable_29, class USoundBase* Temp_object_Variable_30, class USoundBase* Temp_object_Variable_31, enum class EPhysicalSurface Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, class USoundBase* K2Node_Select_Default, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class USoundBase* K2Node_Select_Default_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_IsClosed_Variable, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess_1, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, enum class E_AnimationState K2Node_Event_AnimationState, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, bool CallFunc_IsValid_ReturnValue_9, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_2, bool K2Node_DynamicCast_bSuccess_3, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_2, bool CallFunc_IsValid_ReturnValue_10, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, TScriptInterface<class IBP_SGKHoldableInterface_C> CallFunc_SGK_HoldableMesh_self_CastInput, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_SelectAnims_AnimsFound, const struct FS_HoldableAnims& CallFunc_SelectAnims_Anims, bool CallFunc_SelectAnims_AnimsFound_1, const struct FS_HoldableAnims& CallFunc_SelectAnims_Anims_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue, class ABP_MasterHoldable_C* K2Node_Event_Holdable, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_16, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_6, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_17, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_7, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8, float K2Node_Event_DeltaTimeX, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_Greater_DoubleDouble_ReturnValue_8, bool CallFunc_EqualEqual_BoolBool_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_3, bool K2Node_DynamicCast_bSuccess_5, double CallFunc_VSize_ReturnValue, const struct FVector2D& CallFunc_SGK_LookAtRotation_LookAtRotation, bool CallFunc_Greater_DoubleDouble_ReturnValue_9, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsFalling_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_8, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_9, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_4, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Less_DoubleDouble_ReturnValue_2, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_9, bool CallFunc_IsLocallyControlled_ReturnValue_3, class USceneComponent* K2Node_Select_Default_2, class USceneComponent* K2Node_Select_Default_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_10, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_5, bool K2Node_DynamicCast_bSuccess_7, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_4, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_6, bool K2Node_DynamicCast_bSuccess_8, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_20, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition_1, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition_2, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_10, double CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_11, const struct FTransform& CallFunc_TInterpTo_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_11, float CallFunc_GetCurveValue_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_13, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_21, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_12, float CallFunc_Conv_BoolToFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_15, float CallFunc_Conv_BoolToFloat_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_13, double CallFunc_FInterpTo_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_10, float CallFunc_GetCurveValue_ReturnValue_4, float CallFunc_GetCurveValue_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_14, bool CallFunc_Greater_DoubleDouble_ReturnValue_15, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_16, bool CallFunc_IsServer_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_23, bool CallFunc_Less_DoubleDouble_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_11, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_17, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_24, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_25, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_13, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_26, class UAnimMontage* CallFunc_TurnInPlaceMontage_Montage, class UAnimMontage* CallFunc_TurnInPlaceMontage_Montage_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_16, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_IsValid_ReturnValue_28, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_5, float CallFunc_GetCurveValue_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_17, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_13, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_7, float CallFunc_GetCurveValue_ReturnValue_8, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_5, double CallFunc_FInterpTo_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_18, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_29, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, float K2Node_StructMemberSet_Alpha_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_2, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5, double K2Node_VariableSet_Yaw_ImplicitCast, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double K2Node_VariableSet_YawChangeOverFrame_ImplicitCast, double K2Node_VariableSet_Direction_ImplicitCast, float CallFunc_TInterpTo_DeltaTime_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_FInterpTo_Target_ImplicitCast_1, double CallFunc_FInterpTo_Target_ImplicitCast_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, double K2Node_VariableSet_CurveValue_ImplicitCast, double K2Node_VariableSet_CurveValue_ImplicitCast_1, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1);
};

}


