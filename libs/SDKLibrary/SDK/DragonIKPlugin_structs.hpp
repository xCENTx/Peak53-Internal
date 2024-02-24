#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EIK_Type_Plugin : uint8
{
	ENUM_Two_Bone_Ik               = 0,
	ENUM_Single_Bone_Ik            = 1,
	ENUM_MAX                       = 2,
};

enum class ERefPosePluginEnum : uint8
{
	VE_Animated                    = 0,
	VE_Rest                        = 1,
	VE_MAX                         = 2,
};

enum class ESolverComplexityPluginEnum : uint8
{
	VE_Simple                      = 0,
	VE_Complex                     = 1,
	VE_MAX                         = 2,
};

enum class ETwist_Type_DragonIK : uint8
{
	ENUM_PoseAxisTwist             = 0,
	ENUM_UpAxisTwist               = 1,
	ENUM_MAX                       = 2,
};

enum class EPole_System_DragonIK : uint8
{
	ENUM_SinglePoleSystem          = 0,
	ENUM_NSEWPoleSystem            = 1,
	ENUM_PoseBendSystem            = 2,
	ENUM_MAX                       = 3,
};

enum class EInputTransformSpace_DragonIK : uint8
{
	ENUM_WorldSpaceSystem          = 0,
	ENUM_ComponentSpaceSystem      = 1,
	ENUM_MAX                       = 2,
};

enum class ERotation_Type_DragonIK : uint8
{
	ENUM_AdditiveRotation          = 0,
	ENUM_ReplaceRotation           = 1,
	ENUM_MAX                       = 2,
};

enum class EIKTrace_Type_Plugin : uint8
{
	ENUM_LineTrace_Type            = 0,
	ENUM_SphereTrace_Type          = 1,
	ENUM_MAX                       = 2,
};

enum class EInterpoLocation_Type_Plugin : uint8
{
	ENUM_DivisiveLoc_Interp        = 0,
	ENUM_LegacyLoc_Interp          = 1,
	ENUM_MAX                       = 2,
};

enum class EInterpoRotation_Type_Plugin : uint8
{
	ENUM_DivisiveRot_Interp        = 0,
	ENUM_LegacyRot_Interp          = 1,
	ENUM_MAX                       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xC8 - 0x10)
// ScriptStruct DragonIKPlugin.AnimNode_DragonControlBase
struct FAnimNode_DragonControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D78[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x38(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x88(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D79[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FingerData
struct FDragonData_FingerData
{
public:
	class FName                                  Finger_Bone_Name;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Trace_Scale;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Trace_Offset;                                      // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_Finger_Backward;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FootData
struct FDragonData_FootData
{
public:
	class FName                                  Feet_Bone_Name;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Knee_Bone_Name;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Thigh_Bone_Name;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Feet_Rotation_Offset;                              // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Fixed_Pole;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Knee_Direction_Offset;                             // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Feet_Trace_Offset;                                 // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Front_Trace_Point_Spacing;                         // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Traces_Spacing;                               // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Rotation_Limit;                               // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Fixed_Foot_Height;                                 // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Feet_Heights;                                      // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Alpha;                                        // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min_Feet_Extension;                                // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Feet_Extension;                                // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Upslope_Offset_Multiplier;                    // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Downslope_Offset_Multiplier;                  // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Slope_Offset_Clamp_Radius;                    // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Feet_Lift;                                     // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Overrided_Trace_Radius;                            // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDragonData_FingerData>        Finger_Array;                                      // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_MultiInput
struct FDragonData_MultiInput
{
public:
	class FName                                  Start_Spine;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Pelvis;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDragonData_FootData>          FeetBones;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_ArmsData
struct FDragonData_ArmsData
{
public:
	struct FBoneReference                        Clavicle_Bone;                                     // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Shoulder_Bone_Name;                                // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Elbow_Bone_Name;                                   // 0x20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Hand_Bone_Name;                                    // 0x30(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Is_this_right_hand;                                // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert_lower_twist;                                // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert_upper_twist;                                // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D89[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        Twist_Forearm_Bone;                                // 0x44(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Twist_Shoulder_Bone;                               // 0x54(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Local_Direction_Axis;                              // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Arm_Aiming_Offset;                                 // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Accurate_hand_rotation;                            // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Relative_axis;                                     // 0x99(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Maximum_Extension;                                 // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum_Extension;                                 // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Stretch_Ratio;                                 // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stretch_lower_arm_Priorty;                         // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Elbow_Pole_Offset;                                 // 0xB0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               North_Pole_Offset;                                 // 0xC8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               South_Pole_Offset;                                 // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               West_Pole_Offset;                                  // 0xF8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               East_Pole_Offset;                                  // 0x110(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_limits;                                   // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Max_Arm_H_Angle;                                   // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Max_Arm_V_Angle;                                   // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Inner_Clavicle_Side_Limit;                         // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Inner_Clavicle_Vertical_Limit;                     // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Outer_Clavicle_Side_Limit;                         // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Outer_Clavicle_Vertical_Limit;                     // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shoulder_Inner_Clamp;                              // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shoulder_Outer_Clamp;                              // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ForeArm_Angle_Limit;                               // 0x1B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Twist_Offset_Reverse;                              // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D93[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_SingleArmElement
struct FDragonData_SingleArmElement
{
public:
	struct FTransform                            Overrided_Arm_Transform;                           // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Arm_Alpha;                                         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotation_offset;                                   // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_Overrided_Location_Data
struct FDragonData_Overrided_Location_Data
{
public:
	TArray<struct FDragonData_SingleArmElement>  Arm_TargetLocation_Overrides;                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_ArmSizeStruct
struct FDragonData_ArmSizeStruct
{
public:
	bool                                         Use_Custom_Arm_Sizes;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_upperArm_length;                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Custom_lowerArm_length;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_CustomArmLengths
struct FDragonData_CustomArmLengths
{
public:
	TArray<struct FDragonData_ArmSizeStruct>     CustomArmSizeArray;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC38 (0xD00 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonAimSolver
struct FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase
{
public:
	bool                                         Use_FName_Bone_Input;                              // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        EndSplineBone;                                     // 0xCC(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        StartSplineBone;                                   // 0xDC(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  Name_EndSpline_Bone;                               // 0xEC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name_StartSpline_Bone;                             // 0xF4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LookAtLocation;                                    // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0x160(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9C[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDragonData_ArmsData>          Aiming_Hand_Limbs;                                 // 0x208(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_Overrided_Location_Data   Arm_TargetLocation_Overrides;                      // 0x228(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Use_Separate_Targets;                              // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Hand_Rotation;                            // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_head_aim;                                   // 0x23A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowHandStretching;                              // 0x23B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Extra_Elbow_Pole_Array;                            // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Reach_instead;                                     // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Aggregate_Hand_Body;                               // 0x251(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Let_Arm_Twist_With_Hand;                           // 0x252(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPole_System_DragonIK             Pole_system_input;                                 // 0x253(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETwist_Type_DragonIK              Arm_twist_axis;                                    // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotation_Type_DragonIK           Hand_rotation_method;                              // 0x255(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Head_Rotation;                            // 0x256(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Hand_Interpolation;                         // 0x257(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hand_Interpolation_Speed;                          // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_CustomArmLengths          Custom_arm_lengths;                                // 0x260(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EInputTransformSpace_DragonIK     Arm_transform_space;                               // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Main_Arm_Index;                                    // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA6[0x128];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Lookat_Radius;                                     // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Inner_Body_Clamp;                                  // 0x3A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Lookat_Clamp;                                      // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limbs_Clamp;                                       // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Downward_Dip_Multiplier;                           // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Inverted_Dip_Multiplier;                           // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Vertical_Dip_Treshold;                             // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Move_Multiplier;                              // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Down_Multiplier;                              // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Up_Rot_Clamp;                                      // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Verticle_Range_Angles;                             // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Horizontal_Range_Angles;                           // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Look_Bending_Curve;                                // 0x400(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Look_Multiplier_Curve;                             // 0x488(0x88)(Edit, NativeAccessSpecifierPublic)
	enum class EInputTransformSpace_DragonIK     Look_transform_space;                              // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Lock_Legs;                                         // 0x511(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_elbow_modification;                         // 0x512(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_separate_hand_solving;                      // 0x513(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Natural_Method;                                // 0x514(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Head_Use_Separate_Clamp;                           // 0x515(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_Head_Accurate;                                  // 0x516(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Automatic_leg_make;                                // 0x517(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x51A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Physics_Adaptation;                            // 0x51B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Physics_root_reference;                            // 0x51C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Adaptive_Terrain_Tail;                             // 0x524(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x525(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Up_Height;                                   // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Trace_Down_Height;                                 // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB3[0xEC];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EInterpoLocation_Type_Plugin      Loc_interp_type;                                   // 0x61C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Interpolation;                              // 0x625(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Interpolation_Speed;                               // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Toggle_Interpolation_Speed;                        // 0x62C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB7[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAt_Axis;                                       // 0x690(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Upward_Axis;                                       // 0x6A8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x6C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Reference_Forward_Axis;                        // 0x6D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Reference_Constant_Forward_Axis;                   // 0x6E0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB9[0x11D];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DisplayLineTrace;                                  // 0x815(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBA[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Debug_LookAtLocation;                              // 0x820(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Debug_Hand_Locations;                              // 0x880(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBB[0x470];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct DragonIKPlugin.SocketDragonReference
struct FSocketDragonReference
{
public:
	uint8                                        Pad_1DBC[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct DragonIKPlugin.BoneDragonSocketTarget
struct FBoneDragonSocketTarget
{
public:
	bool                                         bUseSocket;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoneReference;                                     // 0x4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBF[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocketDragonReference                SocketReference;                                   // 0x20(0x70)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0x1B0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonFabrikSolver
struct FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase
{
public:
	struct FBoneReference                        TipBone_Input;                                     // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone_Input;                                    // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxIterations;                                     // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Target_Transform;                                  // 0xF0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC4[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FeetAlpha_Struct
struct FDragonData_FeetAlpha_Struct
{
public:
	TArray<float>                                Feet_IK_alpha_array;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FeetOffset_Struct
struct FDragonData_FeetOffset_Struct
{
public:
	TArray<struct FVector>                       Feet_extra_offset_array;                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_StickyFeetStruct
struct FDragonData_StickyFeetStruct
{
public:
	TArray<bool>                                 Sticky_feet_array;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_StickySocketStruct
struct FDragonData_StickySocketStruct
{
public:
	TArray<struct FBoneSocketTarget>             Sticky_socket_array;                               // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x898 (0x960 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonFeetSolver
struct FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase
{
public:
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0xC8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC5[0x78];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EIK_Type_Plugin                   Ik_type;                                           // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKTrace_Type_Plugin              Trace_type;                                        // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Radius;                                      // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Line_trace_hit_complex;                            // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC7[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_interval_duration;                           // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_LOD_Specific_Intervals;                        // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LOD0_Interval;                                     // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD1_Interval;                                     // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD2_Interval;                                     // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Trace_Distance_Adapting;                       // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Max_Distance;                                // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Interval_Velocity_Curve;                       // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interval_Velocity_Curve;                           // 0x198(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Override_Curve_Velocity;                           // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_velocity;                                   // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpoLocation_Type_Plugin      Loc_interp_type;                                   // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD2[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EInterpoRotation_Type_Plugin      Rot_interp_type;                                   // 0x234(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Virtual_scale;                                     // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_FeetAlpha_Struct          Feet_alpha_multiplier_array;                       // 0x240(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDragonData_FeetOffset_Struct         Feet_extra_offset_array;                           // 0x250(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Automatic_leg_make;                                // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_OptionalRef_Feet_As_Ref;                       // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_solver;                                     // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x263(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComponentSpacePoseLink               OptionalRefPose;                                   // 0x268(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Interpolate_only_z;                                // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shift_speed;                                       // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Location_Lerp_Speed;                               // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_rotation_speed;                               // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_shift_speed;                                // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Lerping;                                    // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Location_Lerping;                           // 0x292(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interpolation_Velocity_Curve;                      // 0x298(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Enable_Complex_Rotation_Method;                    // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ComplexSimpleFoot_Velocity_Curve;                  // 0x328(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDD[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Anti_Trace_Channel;                                // 0x3F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FPS_Lerp_Treshold;                                 // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDF[0x1CC];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Line_trace_upper_height;                           // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_down_height;                            // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Trace_Down_Multiplier_Curve;                       // 0x5D0(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Use_Anti_Channel;                                  // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_footstep_listening;                            // 0x659(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE1[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Should_Rotate_Feet;                                // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Show_trace_in_game;                                // 0x66A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Execute_in_preview;                                // 0x66B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE4[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Pitch;                                      // 0x688(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Roll;                                       // 0x689(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Character_direction_vector_CS;                     // 0x690(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Character_forward_direction_vector_CS;             // 0x6A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Poles_forward_direction_vector_CS;                 // 0x6C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Four_Point_Feets;                              // 0x6D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Foot_Lift_Limit;                            // 0x6D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Affect_Toes_Always;                                // 0x6DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Finger_Alpha_Velocity_Curve;                       // 0x6E0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Max_Limb_Radius;                                   // 0x768(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Feet_Lift_Warping;                                 // 0x76C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Feet_Lift_Warp_Multiplier;                         // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_vertical_size;                                // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Lift_Limit;                                   // 0x778(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Sticky_feet_mode;                                  // 0x77C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sticky_feet_on_speed;                              // 0x780(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sticky_feet_off_speed;                             // 0x784(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sticky_Feet_Range;                                 // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_StickyFeetStruct          Sticky_feets_data;                                 // 0x790(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Sticky_floor_detection;                            // 0x7A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Floor_value;                                       // 0x7A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Auto_Sticky_Toggle;                                // 0x7A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_StickySocketStruct        Sticky_sockets_data;                               // 0x7B0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF2[0x190];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Foot_01_Height_Offset;                             // 0x950(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_02_Height_Offset;                             // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_03_Height_Offset;                             // 0x958(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_04_Height_Offset;                             // 0x95C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_PhysicsBoneStrip
struct FDragonData_PhysicsBoneStrip
{
public:
	struct FBoneReference                        Bone_Chain_Start;                                  // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Bone_Chain_End;                                    // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x110 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonPhysicsSolver
struct FAnimNode_DragonPhysicsSolver : public FAnimNode_DragonControlBase
{
public:
	uint8                                        Pad_1DF3[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Physanim_tag_index;                                // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD28 (0xDF0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonSpineSolver
struct FAnimNode_DragonSpineSolver : public FAnimNode_DragonControlBase
{
public:
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0xC8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF6[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Precision;                                         // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumPitch;                                      // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumPitch;                                      // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumRoll;                                       // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumRoll;                                       // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shift_speed;                                       // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Anti_Trace_Channel;                                // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKTrace_Type_Plugin              Trace_type;                                        // 0x17A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Radius;                                      // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Line_trace_hit_complex;                            // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E02[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_interval_duration;                           // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_LOD_Specific_Intervals;                        // 0x194(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LOD0_Interval;                                     // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD1_Interval;                                     // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD2_Interval;                                     // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Trace_Distance_Adapting;                       // 0x1A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Max_Distance;                                // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Interval_Velocity_Curve;                       // 0x1AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interval_Velocity_Curve;                           // 0x1B0(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Override_Curve_Velocity;                           // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_velocity;                                   // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Rotate_Around_Translate;                           // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESolverComplexityPluginEnum       Complexity_type;                                   // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Lerping;                                    // 0x242(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E14[0x11];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Virtual_scale;                                     // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_downward_height;                        // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_upper_height;                           // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Anti_Channel;                                  // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E15[0x13];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Stabilize_pelvis_legs;                             // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Pelvis_UpSlopeStabilization_Alpha;                 // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_DownSlopeStabilization_Alpha;               // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Stabilize_chest_legs;                              // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chest_UpSlopeStabilization_Alpha;                  // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_DownslopeStabilization_Alpha;                // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        Stabilization_Head_Bone;                           // 0x28C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Stabilization_Tail_Bone;                           // 0x29C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Use_Ducking_Feature;                               // 0x2AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Ducking_Trace_Channel;                             // 0x2AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E20[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Ducking_Limit;                                     // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Crouch_Height;                              // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Crouch_Rotation_Intensity;                  // 0x2B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Duck_Pelvis_Trace_Offset;                          // 0x2C0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Crouch_Height;                               // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Crouch_Rotation_Intensity;                   // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Duck_Chest_Trace_Offset;                           // 0x2E0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E22[0x230];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slanted_Height_Up_Offset;                          // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slanted_Height_Down_Offset;                        // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Dip_multiplier;                                    // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_adaptive_gravity;                           // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse_fabrik;                                    // 0x53C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Calculation_To_RefPose;                            // 0x544(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chest_Slanted_Height_Up_Offset;                    // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Slanted_Height_Down_Offset;                  // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_side_dip_multiplier;                         // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_adaptive_gravity;                            // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Base_Offset;                                 // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Base_Offset;                                // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_leg_width;                                 // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum_Dip_Height;                                // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E28[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Pelvis_Height_Multiplier_Curve;                    // 0x570(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Maximum_Dip_Height_Chest;                          // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Chest_Height_Multiplier_Curve;                     // 0x600(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation_power_between;                            // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Automatic_Fabrik_Selection;                    // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Lerp_Speed;                                  // 0x69C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Location_Lerp_Speed;                               // 0x6A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation_Lerp_Speed;                               // 0x6B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interpolation_Multiplier_Curve;                    // 0x6C0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Chest_Influence_Alpha;                             // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_ForwardRotation_Intensity;                  // 0x74C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_UpwardForwardRotation_Intensity;            // 0x750(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Body_Rotation_Intensity;                           // 0x754(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Pelvis_Rotation_Offset_Rotator;                    // 0x758(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Chest_ForwardRotation_Intensity;                   // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_UpwardForwardRotation_Intensity;             // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_SidewardRotation_Intensity;                  // 0x778(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Chest_Rotation_Offset_Rotator;                     // 0x780(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E31[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Full_Extended_Spine;                               // 0x800(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Max_extension_ratio;                               // 0x804(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min_extension_ratio;                               // 0x808(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Extension_switch_speed;                            // 0x80C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x814(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x815(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Fake_Chest_Rotations;                          // 0x816(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Fake_Pelvis_Rotations;                         // 0x817(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Force_Activation;                                  // 0x81C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Accurate_feet_placement;                           // 0x81D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E38[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Accurate_Foot_Curve;                               // 0x820(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Use_crosshair_trace_also_for_fail_distance;        // 0x8A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Only_Root_Solve;                                   // 0x8A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Chest_Solve;                                // 0x8AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E39[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Overall_PostSolved_Offset;                         // 0x8B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Character_direction_vector_CS;                     // 0x8D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Forward_Direction_Vector;                          // 0x8E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Flip_forward_and_right;                            // 0x900(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3C[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERefPosePluginEnum                SolverReferencePose;                               // 0x920(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Spine_Feet_Connect;                                // 0x921(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3D[0x3C2];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Snake_Joint_Speed;                                 // 0xCE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Snake_Interpolation;                        // 0xCE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_snake;                                          // 0xCE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_End_Points;                                 // 0xCEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E40[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Maximum_Feet_Distance;                             // 0xCEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum_Feet_Distance;                             // 0xCF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayLineTrace;                                  // 0xCF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E41[0xFB];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x928 (0x9F0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonTwistArmSolver
struct FAnimNode_DragonTwistArmSolver : public FAnimNode_DragonControlBase
{
public:
	uint8                                        Pad_1E42[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_ArmsData                  Hand_Input_Info;                                   // 0xE0(0x200)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E43[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Target_Transform;                                  // 0x2F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extra_Elbow_Pole_Offset;                           // 0x350(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPole_System_DragonIK             Pole_system_input;                                 // 0x36B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETwist_Type_DragonIK              Arm_twist_axis;                                    // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotation_Type_DragonIK           Hand_rotation_method;                              // 0x36D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E45[0x127];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Let_Arm_Twist_With_Hand;                           // 0x495(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Allow_arm_stretch;                                 // 0x496(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E46[0xFE];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Interpolation;                              // 0x595(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E48[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Interpolation_Speed;                               // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4A[0x64];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAt_Axis;                                       // 0x600(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Upward_Axis;                                       // 0x618(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Physics_Adaptation;                            // 0x630(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Physics_root_reference;                            // 0x634(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4D[0x108];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DisplayLineTrace;                                  // 0x744(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Debug_Hand_Locations;                              // 0x748(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4F[0x298];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_WarpLimbsData
struct FDragonData_WarpLimbsData
{
public:
	class FName                                  Foot_Bone_Name;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Knee_Bone_Name;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Thigh_Bone_Name;                                   // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Lift_Reference_Location;                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Param_Adder;                                  // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Min_Max_Warp;                                      // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_extra_compression_height;                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E52[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5F8 (0x6C0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonWarpSolver
struct FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase
{
public:
	TArray<struct FDragonData_WarpLimbsData>     Dragon_limb_input;                                 // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Hip_Bone_Name;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E53[0x44];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E54[0x183];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Character_direction_vector_CS;                     // 0x2A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Forward_vector_CS;                                 // 0x2C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed_warping_const;                               // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_slope_warp;                                 // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Automatic_speed_warping_const;                     // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Slope_detection_tolerance;                         // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Slope_Interpolation;                          // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E56[0x64];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Line_trace_downward_height;                        // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_upper_height;                           // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_leg_width;                                 // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_scale;                                     // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DisplayLineTrace;                                  // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Limb_Compression_Intensity;                        // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Limb_Lifting_Curve;                                // 0x370(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Hip_Change_Intensity;                              // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Hip_Lifting_Curve;                                 // 0x400(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5B[0x238];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7D8 (0x8A0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonWeaponArmSolver
struct FAnimNode_DragonWeaponArmSolver : public FAnimNode_DragonControlBase
{
public:
	uint8                                        Pad_1E5C[0x7C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Physweapon_Component_Tag;                          // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDragonData_ArmsData>          Aiming_Hand_Limbs;                                 // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5D[0x54];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETwist_Type_DragonIK              Arm_twist_axis;                                    // 0x1AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5E[0x128];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Let_Arm_Twist_With_Hand;                           // 0x2D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5F[0xFF];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Interpolation;                              // 0x3D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E60[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Interpolation_Speed;                               // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E61[0x94];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAt_Axis;                                       // 0x470(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Upward_Axis;                                       // 0x488(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E62[0x148];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DisplayLineTrace;                                  // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Debug_Hand_Locations;                              // 0x5F0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E64[0x2A0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_PhysicsParentRelationship
struct FDragonData_PhysicsParentRelationship
{
public:
	class FName                                  Child_bone_name;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Parent_bone_name;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_PhysicsHandleMultiplier
struct FDragonData_PhysicsHandleMultiplier
{
public:
	class FName                                  bone_name;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        bone_strength;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct DragonIKPlugin.CCDIK_Modified_ChainLink
struct FCCDIK_Modified_ChainLink
{
public:
	uint8                                        Pad_1E65[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


