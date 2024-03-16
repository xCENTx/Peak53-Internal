#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9828 (0x9BE8 - 0x3C0)
// AnimBlueprintGeneratedClass ABP_ThirdPerson_Player.ABP_ThirdPerson_Player_C
class UABP_ThirdPerson_Player_C : public UVIAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x3C8(0xBC)(HasGetValueTypeHash)
	uint8                                        Pad_53A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x488(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_BlendSpaceGraph;            // 0x490(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x498(0x8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_28;                    // 0x4A0(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x4C8(0x128)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_12;                   // 0x5F0(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0x6F8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_11;                   // 0x740(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7;             // 0x848(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0x868(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x970(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x9B8(0xE0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_3;          // 0xA98(0x118)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0xBB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0xBD8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0xC00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0xC28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0xC50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0xC78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0xCA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0xCC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0xCF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0xD18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0xD40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0xD68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0xD90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0xDB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0xDE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0xE08(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_94;                   // 0xE30(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0xE78(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_93;                   // 0xE98(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0xEE0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_92;                   // 0xF00(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_31;           // 0xF48(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_91;                   // 0xF68(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_30;           // 0xFB0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_90;                   // 0xFD0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_29;           // 0x1018(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_89;                   // 0x1038(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_28;           // 0x1080(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_88;                   // 0x10A0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_27;           // 0x10E8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_87;                   // 0x1108(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_26;           // 0x1150(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_86;                   // 0x1170(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_25;           // 0x11B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_85;                   // 0x11D8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_24;           // 0x1220(0x20)(None)
	struct FAnimNode_BlendSpaceGraph             AnimGraphNode_BlendSpaceGraph_3;                   // 0x1240(0x68)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x12A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_84;                   // 0x12F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_83;                   // 0x1338(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_82;                   // 0x1380(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_30;                  // 0x13C8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_81;                   // 0x1410(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_80;                   // 0x1458(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_12;                 // 0x14A0(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_29;                  // 0x1510(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_28;                  // 0x1558(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_79;                   // 0x15A0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_78;                   // 0x15E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_77;                   // 0x1630(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_27;                  // 0x1678(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x16C0(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_11;                 // 0x16E0(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_76;                   // 0x1750(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_23;           // 0x1798(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_75;                   // 0x17B8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_22;           // 0x1800(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_74;                   // 0x1820(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_21;           // 0x1868(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_73;                   // 0x1888(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_20;           // 0x18D0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_72;                   // 0x18F0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_19;           // 0x1938(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_71;                   // 0x1958(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_18;           // 0x19A0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_70;                   // 0x19C0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_17;           // 0x1A08(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_69;                   // 0x1A28(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_16;           // 0x1A70(0x20)(None)
	struct FAnimNode_BlendSpaceGraph             AnimGraphNode_BlendSpaceGraph_2;                   // 0x1A90(0x68)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_10;                 // 0x1AF8(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x1B68(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_68;                   // 0x1BB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_67;                   // 0x1BF8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_66;                   // 0x1C40(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_26;                  // 0x1C88(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_65;                   // 0x1CD0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_64;                   // 0x1D18(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_63;                   // 0x1D60(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_15;           // 0x1DA8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_62;                   // 0x1DC8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_14;           // 0x1E10(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_61;                   // 0x1E30(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_13;           // 0x1E78(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_60;                   // 0x1E98(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_12;           // 0x1EE0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_59;                   // 0x1F00(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_11;           // 0x1F48(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_58;                   // 0x1F68(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_10;           // 0x1FB0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_57;                   // 0x1FD0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_9;            // 0x2018(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_56;                   // 0x2038(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_8;            // 0x2080(0x20)(None)
	struct FAnimNode_BlendSpaceGraph             AnimGraphNode_BlendSpaceGraph_1;                   // 0x20A0(0x68)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_25;                  // 0x2108(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_24;                  // 0x2150(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55;                   // 0x2198(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_54;                   // 0x21E0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x2228(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_23;                  // 0x2270(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x22B8(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0x22D8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x2348(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_53;                   // 0x23B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_52;                   // 0x2400(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x2448(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_22;                  // 0x24B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_51;                   // 0x2500(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_50;                   // 0x2548(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_21;                  // 0x2590(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_20;                  // 0x25D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49;                   // 0x2620(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48;                   // 0x2668(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_19;                  // 0x26B0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x26F8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_47;                   // 0x2718(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_46;                   // 0x2760(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_45;                   // 0x27A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_44;                   // 0x27F0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_18;                  // 0x2838(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x2880(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x28A0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x28E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x2930(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x2978(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_17;                  // 0x29C0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x2A08(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x2A28(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x2A70(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x2AB8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x2B00(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_16;                  // 0x2B48(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x2B90(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x2BB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x2BF8(0x48)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_1;                      // 0x2C40(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_15;                  // 0x2CB8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x2D00(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x2D48(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x2D90(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_14;                  // 0x2DD8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_13;                  // 0x2E20(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x2E68(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x2EB0(0x48)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x2EF8(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_12;                  // 0x2F70(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x2FB8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x2FD8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x30A0(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x31A8(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x31F0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_27;                    // 0x32D0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_26;                    // 0x32F8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_25;                    // 0x3320(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24;                    // 0x3348(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x3370(0x128)(None)
	uint8                                        Pad_53AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x34A0(0x1F0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_3;                         // 0x3690(0x270)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x3900(0x128)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x3A28(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0x3B30(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x3B58(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x3B78(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x3B98(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x3CA0(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_11;                  // 0x3CC8(0x48)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x3D10(0x118)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x3E28(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x3E50(0x118)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x3F68(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_10;                  // 0x3FB0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x3FF8(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x4020(0x118)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x4138(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x4240(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x4268(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x4290(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x4398(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x43C0(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x43E0(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x4408(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x4428(0x20)(None)
	uint8                                        Pad_53AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_DragonFeetSolver            AnimGraphNode_DragonFeetSolver;                    // 0x4450(0x960)(None)
	struct FAnimNode_DragonSpineSolver           AnimGraphNode_DragonSpineSolver;                   // 0x4DB0(0xDF0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x5BA0(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x5CC8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x5CE8(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x5D10(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x5E38(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x5E80(0x28)(None)
	uint8                                        Pad_53AF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2;                         // 0x5EB0(0x270)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x6120(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x6248(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x6268(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x6288(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x6390(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x63B8(0x48)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0x6400(0xA8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x64A8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x64D0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x65B0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x65D8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x6620(0x28)(None)
	uint8                                        Pad_53B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x6650(0x270)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x68C0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x69A0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x69C8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x6A10(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x6A38(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x6A80(0x28)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x6AA8(0xA8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x6B50(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x6C78(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x6DA0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x6DC0(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x6DE0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x6EC0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x6EE8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x6F10(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x7018(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x7040(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x7168(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x7290(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x72B0(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x72D0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x7318(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7360(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x73A8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x74B0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x74D8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x7520(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x7648(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x7668(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7690(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x76B0(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x77B8(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x77E0(0x128)(None)
	uint8                                        Pad_53B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x7910(0x270)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x7B80(0x128)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x7CA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x7CD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x7CF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x7D20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x7D48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x7D70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x7D98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x7DC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x7DE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x7E10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x7E38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x7E60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x7E88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x7EB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x7ED8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x7F00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x7F28(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x7F50(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x7F98(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x7FE0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_9;                   // 0x8028(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_8;                   // 0x8070(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x80B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x8100(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x8148(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7;                   // 0x8190(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x81D8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x81F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x8220(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x8248(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_7;            // 0x8290(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x82B0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_6;            // 0x82F8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x8318(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_5;            // 0x8360(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x8380(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_4;            // 0x83C8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x83E8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_3;            // 0x8430(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x8450(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_2;            // 0x8498(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x84B8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_1;            // 0x8500(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x8520(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult;              // 0x8568(0x20)(None)
	struct FAnimNode_BlendSpaceGraph             AnimGraphNode_BlendSpaceGraph;                     // 0x8588(0x68)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x85F0(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x8610(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x8630(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x8678(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x8698(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x86E0(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x8700(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x8770(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x8790(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x87B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x87D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x8820(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x8868(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x88B0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x88F8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x8940(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x8960(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x89A8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x89C8(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x8A90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x8AB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x8AE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x8B08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x8B30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x8B58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x8B80(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x8BA8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x8BF0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x8C10(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x8C58(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x8C78(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x8CE8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x8D58(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x8DC8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x8E10(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x8E58(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x8EC8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x8F38(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x8FA8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x8FF0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x9010(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x9058(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x90A0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x90E8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x9130(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x9178(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x91C0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x9208(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x9250(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x9298(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x92B8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x9380(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x9488(0x20)(None)
	bool                                         IsInAir_;                                          // 0x94A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrouched;                                        // 0x94A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAccelerating;                                    // 0x94AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAimOffset;                                      // 0x94AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRightHandIK;                                    // 0x94AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseLeftHandIK;                                     // 0x94AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            OwningPawn;                                        // 0x94B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              AimOffset;                                         // 0x94B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                             LookAtRotation;                                    // 0x94D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Speed_0;                                           // 0x94E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Direction;                                         // 0x94E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimPitch;                                          // 0x94F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimYaw;                                            // 0x94F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RootYawOffset;                                     // 0x9500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YawLastTick;                                       // 0x9508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Yaw;                                               // 0x9510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YawChangeOverFrame;                                // 0x9518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurveValue;                                        // 0x9520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurveValueLastFrame;                               // 0x9528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsTurnRight;                               // 0x9530(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsTurnLeft;                                // 0x9538(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsCrouchTurnRight;                         // 0x9540(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          EmptyHandsCrouchTurnLeft;                          // 0x9548(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTurnInPlaceAngle;                               // 0x9550(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53DC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LeftHandIKTransform;                               // 0x9560(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RightHandIKTransform;                              // 0x95C0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            SightTransform;                                    // 0x9620(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InAction;                                          // 0x9680(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RightHandIKLocationOffsetADS;                      // 0x9688(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CurrentTurnAnim;                                   // 0x96A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationMode                   CurrentAnimMode;                                   // 0x96A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAimOffsetBlendSpace*                  EmptyHandsAimOffset;                               // 0x96B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpingStart;                                      // 0x96B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpingLoop;                                       // 0x96C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpLand;                                          // 0x96C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x96D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterComponent_C*              CharacterComponent;                                // 0x96D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SightOffset;                                       // 0x96E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_HoldableAnims                      HoldableAnims1;                                    // 0x96F8(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_HoldableAnims                      HoldableAnims2;                                    // 0x97D0(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_AimOffset                       AimOffsetType;                                     // 0x98A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  AnimationState;                                    // 0x98A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RightHandSway;                                     // 0x98B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       Lean;                                              // 0x98C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WeaponCollision;                                   // 0x98D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSway;                                           // 0x98D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RightHandIkEnabled;                                // 0x98E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Sprinting;                                         // 0x98E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ClippingRotation;                                  // 0x98F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseRightHandADSOffset;                             // 0x9908(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SpecalAO;                                          // 0x9910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLock;                                             // 0x9918(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeadAO;                                            // 0x9919(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LeftHandIkEnabled;                                 // 0x9920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine2AOAlpha;                                     // 0x9928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LeftHandIK;                                        // 0x9930(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowHandIKs;                                      // 0x9931(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HeadAOAlpha;                                       // 0x9938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingShadowDummy;                                  // 0x9940(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spine3AOAlpha;                                     // 0x9948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine1AOAlpha;                                     // 0x9950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RightElbowOffset;                                  // 0x9958(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightHandIK;                                       // 0x9970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AimOffsets                         HoldableAimOffsets;                                // 0x9978(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  HoldingItem;                                       // 0x9990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoldingItem;                                     // 0x9998(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   HoldingItemMesh;                                   // 0x99A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_UpperBodyAnims                     EmptyHandsUpperBody;                               // 0x99A8(0x78)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_LowerBodyAnims                     EmptyHandsLowerBody;                               // 0x9A20(0x40)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DummyMesh;                                         // 0x9A60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         SprintLeftHand;                                    // 0x9A68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LeftElbowOffset;                                   // 0x9A70(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnLeft;                                          // 0x9A88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnRight;                                         // 0x9A90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnLeftCrouch;                                    // 0x9A98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurnRightCrouch;                                   // 0x9AA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFootsteps_Struct                     Footstep;                                          // 0x9AA8(0xF8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Voiceline_Reload_Rifle;                            // 0x9BA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Voiceline_Reload_Pistol;                           // 0x9BA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Voiceline_Shoot;                                   // 0x9BB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Voiceline_GrenadeThrow;                            // 0x9BB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         OnLadder_;                                         // 0x9BC0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ProneTurnLeft;                                     // 0x9BC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ProneTurnRight;                                    // 0x9BD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsProne_;                                          // 0x9BD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKMasterCharacter_C*              As_BP_SGKMaster_Character;                         // 0x9BE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_ThirdPerson_Player_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void Footsteps(enum class EFootstepType_Enum Footsteps_Type, enum class EPhysicalSurface Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class USoundBase* Temp_object_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraSystem* Temp_object_Variable_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, class UNiagaraSystem* K2Node_Select_Default, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void SelectAnims(TArray<struct FS_HoldableAnims>& AllAnims, bool* AnimsFound, struct FS_HoldableAnims* Anims, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_HoldableAnims& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_HoldableAnims& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void TurnInPlaceMontage(bool Right, class UAnimMontage** Montage, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_Select_Default, class UAnimMontage* K2Node_Select_Default_1, class UAnimMontage* K2Node_Select_Default_2, class UAnimMontage* K2Node_Select_Default_3);
	void CalculateAimOffset(double BaseYaw, double BasePitch, bool Temp_bool_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double K2Node_Select_Default, double CallFunc_ClampAngle_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_FInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue, double CallFunc_ClampAngle_ReturnValue_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1);
	void UpdateAOWeights(bool CallFunc_IsValid_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_ModifyBone_DC7883DC498890699AADE3AF5747BCE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TwoBoneIK_16E123404CCDF7BCD38B70AD0FF23F2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_BlendListByBool_3738089847D19BFD152D39A281863AEF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TwoBoneIK_AB8A932C40DB42FAE0AC0AB187C983AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_ModifyBone_28E244E54A04E5EE9BD79FA2736746AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TwoBoneIK_5E0A774A41F41C1B60B4E79DB2CFD14D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_ModifyBone_8096A05E41E77DC8BFB1378BE4CED182();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TwoBoneIK_BDB9EBB6486DD810B301DDBB7373D31C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_8FC226E74A439FD01A6D0987FD8F3226();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_C6B9A09E4E433873557EE0A401BD9F71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_8DBB034D45864ABA55E3A2B0B66CBD2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_D540D779426A4E67884B2BAEF0E73966();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_CC109779433CCC6EFB17139B227FB9E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_72D231854F78B89839E3B9817FC6BB68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_C84B2F494DD327CAE091E39BD4B9101C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_2DAA6BC74BF997F9608E7983DFF4F45A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_0DCD55754408808607CBEEBBA37B1890();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_7FBEC090463B4CB4693E73890DFDE1F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_0ECB2AE64AA38976CA66398B6FDF8011();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_6B3782C949BE53B2D026F0924916F8FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_14C266CA4EBB5D380104FEB74958051F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_BA89F43A43E72993AE054AB695A230A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_CD576EC541261EA21E405A81969E7719();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_57A454624CC7BE38875E45983F9AD5CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_F7CD1276471AF60D1287579EFF41FD14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_EB7F24CB437C509BA6B413950938D02F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_EF89B8E44105A3C6F033458A5AB99E38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_8BAE48BE42304C5E5898CEBA753C1A25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_BDA6E1F44112CECC6ACC3180BD9869A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_CD3D9D01442D7862B93835A703B8615E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_0631BE2A437D31925B1A829344C4AE5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ThirdPerson_Player_AnimGraphNode_TransitionResult_0F70626B42631839EFA1A98F34F7DE5A();
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
	void AnimNotify_Voice_Male_Grenade_Throw();
	void AnimNotify_Voiceline_Shoot();
	void AnimNotify_Voiceline_ThrowGrenade();
	void AnimNotify_Voiceline_Reload_Rifle();
	void AnimNotify_Voiceline_Reload_Pistol();
	void AnimNotify_RightFootStep();
	void AnimNotify_LeftFootStep();
	void ExecuteUbergraph_ABP_ThirdPerson_Player(int32 EntryPoint, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_MasterRangeWeapon_C* K2Node_DynamicCast_AsBP_Master_Range_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, bool CallFunc_IsValid_ReturnValue_14, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_15, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_16, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess_1, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, bool CallFunc_IsValid_ReturnValue_17, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, enum class E_AnimationState K2Node_Event_AnimationState, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, bool CallFunc_IsValid_ReturnValue_18, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_2, bool K2Node_DynamicCast_bSuccess_4, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_2, TScriptInterface<class IBP_SGKHoldableInterface_C> CallFunc_SGK_HoldableMesh_self_CastInput, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_SelectAnims_AnimsFound, const struct FS_HoldableAnims& CallFunc_SelectAnims_Anims, bool CallFunc_SelectAnims_AnimsFound_1, const struct FS_HoldableAnims& CallFunc_SelectAnims_Anims_1, bool K2Node_SwitchEnum_CmpSuccess, class ABP_MasterHoldable_C* K2Node_Event_Holdable, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_22, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_1, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue_3, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_23, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_BooleanAND_ReturnValue_7, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, float K2Node_Event_DeltaTimeX, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_2, bool K2Node_DynamicCast_bSuccess_7, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_3, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_8, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_6, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_6, bool CallFunc_EqualEqual_BoolBool_ReturnValue_7, bool CallFunc_IsLocallyControlled_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_3, bool K2Node_DynamicCast_bSuccess_9, double CallFunc_VSize_ReturnValue, const struct FVector2D& CallFunc_SGK_LookAtRotation_LookAtRotation, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, bool CallFunc_EqualEqual_BoolBool_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_4, bool K2Node_DynamicCast_bSuccess_10, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_3, bool CallFunc_IsServer_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_4, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_10, class USceneComponent* K2Node_Select_Default, class USceneComponent* K2Node_Select_Default_1, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_5, bool K2Node_DynamicCast_bSuccess_12, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_4, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_6, bool K2Node_DynamicCast_bSuccess_13, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_5, bool K2Node_DynamicCast_bSuccess_14, const struct FVector& CallFunc_BreakTransform_Location_8, const struct FRotator& CallFunc_BreakTransform_Rotation_8, const struct FVector& CallFunc_BreakTransform_Scale_8, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition_1, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation_1, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_9, const struct FRotator& CallFunc_BreakTransform_Rotation_9, const struct FVector& CallFunc_BreakTransform_Scale_9, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition_2, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue_9, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_12, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTransform& CallFunc_TInterpTo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_13, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, float CallFunc_GetCurveValue_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_15, float CallFunc_Conv_BoolToFloat_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, float CallFunc_Conv_BoolToFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_16, bool CallFunc_BooleanAND_ReturnValue_17, float CallFunc_Conv_BoolToFloat_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_4, double CallFunc_FInterpTo_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_10, float CallFunc_GetCurveValue_ReturnValue_4, float CallFunc_GetCurveValue_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_8, bool CallFunc_EqualEqual_BoolBool_ReturnValue_10, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_7, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_6, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_Not_PreBool_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_Greater_DoubleDouble_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_19, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_9, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_11, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_26, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_11, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_Greater_DoubleDouble_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_20, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_12, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_7, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_27, class UAnimMontage* CallFunc_TurnInPlaceMontage_Montage, class UAnimMontage* CallFunc_TurnInPlaceMontage_Montage_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_11, bool CallFunc_IsDedicatedServer_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_21, bool CallFunc_IsServer_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_12, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_28, bool CallFunc_IsValid_ReturnValue_29, bool CallFunc_IsValid_ReturnValue_30, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_13, double CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_7, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_8, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_5, double CallFunc_FInterpTo_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_4, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_31, bool CallFunc_IsValid_ReturnValue_32, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_33, bool CallFunc_IsValid_ReturnValue_34, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_22, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_2, float K2Node_StructMemberSet_Alpha_ImplicitCast_3, float K2Node_StructMemberSet_Alpha_ImplicitCast_4, double K2Node_VariableSet_Yaw_ImplicitCast, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double K2Node_VariableSet_YawChangeOverFrame_ImplicitCast, double K2Node_VariableSet_Direction_ImplicitCast, float CallFunc_TInterpTo_DeltaTime_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_FInterpTo_Target_ImplicitCast_1, double CallFunc_FInterpTo_Target_ImplicitCast_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, double K2Node_VariableSet_CurveValue_ImplicitCast, double K2Node_VariableSet_CurveValue_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2);
};

}


