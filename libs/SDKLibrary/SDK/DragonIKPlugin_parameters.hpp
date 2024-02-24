#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x160 - 0x0)
// Function DragonIKPlugin.DragonIKFootStepsComponent.CallFootSteps
struct UDragonIKFootStepsComponent_CallFootSteps_Params
{
public:
	class FName                                  bone_name;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Foot_transform;                                    // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height_difference;                                 // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit_info;                                          // 0x78(0xE8)(Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.UpdatePhysanimData
struct UDragonIKPhysicsComponent_UpdatePhysanimData_Params
{
public:
	int32                                        LinearStrength;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AngularStrength;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LinearDamp;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AngularDamp;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.SetInterpolation
struct UDragonIKPhysicsComponent_SetInterpolation_Params
{
public:
	int32                                        Inter_value;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.ReleaseAllHandles
struct UDragonIKPhysicsComponent_ReleaseAllHandles_Params
{
public:
	bool                                         Go_ragdoll;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.ReGrabAllHandles
struct UDragonIKPhysicsComponent_ReGrabAllHandles_Params
{
public:
	bool                                         Exit_ragdoll;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.PerformActiveRagdoll
struct UDragonIKPhysicsComponent_PerformActiveRagdoll_Params
{
public:
	float                                        Pelvis_mass_override;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.OnHitCallback
struct UDragonIKPhysicsComponent_OnHitCallback_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  Optional_Override_Hit_Bone_Name;                   // 0xE8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Hit_location;                                      // 0xF0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Hit_impulse_direction;                             // 0x108(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Hit_bone_name;                                     // 0x120(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.Modify_Reset_Bone_Info
struct UDragonIKPhysicsComponent_Modify_Reset_Bone_Info_Params
{
public:
	TArray<class FName>                          bone_list;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.FirstTimeInitialization
struct UDragonIKPhysicsComponent_FirstTimeInitialization_Params
{
public:
	class USkeletalMeshComponent*                Skeleton_input;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.Control_Bone_Handle
struct UDragonIKPhysicsComponent_Control_Bone_Handle_Params
{
public:
	class FName                                  bone_name;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Override_transform;                                // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable;                                            // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D10[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Weapon_Transform_Override
struct UDragonIKWeaponPhysicsComponent_Weapon_Transform_Override_Params
{
public:
	struct FTransform                            Weapon_Transform;                                  // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShould_Override_Weapon_Transform;                 // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3D[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Unfreeze_Elbows_Function
struct UDragonIKWeaponPhysicsComponent_Unfreeze_Elbows_Function_Params
{
public:
	class FName                                  Hand_bone;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Release_Weapon
struct UDragonIKWeaponPhysicsComponent_Release_Weapon_Params
{
public:
	bool                                         Should_simulatephysics;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_gravity;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeep_Attachment;                                  // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Release_Hand_Plus_Override
struct UDragonIKWeaponPhysicsComponent_Release_Hand_Plus_Override_Params
{
public:
	class FName                                  Hand_bone;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D49[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Hand_transform;                                    // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_hand_location;                            // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Hand_Rotation;                            // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4A[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Release_Hand_Only
struct UDragonIKWeaponPhysicsComponent_Release_Hand_Only_Params
{
public:
	class FName                                  Hand_bone;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Grab_Weapon
struct UDragonIKWeaponPhysicsComponent_Grab_Weapon_Params
{
public:
	class UPrimitiveComponent*                   Weapon_mesh_input;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Grabbed_bone;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Simulate_physics;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_gravity;                                       // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D53[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Freeze_Elbows_Function
struct UDragonIKWeaponPhysicsComponent_Freeze_Elbows_Function_Params
{
public:
	class FName                                  Hand_bone;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.FirstTimeInitialization
struct UDragonIKWeaponPhysicsComponent_FirstTimeInitialization_Params
{
public:
	class USkeletalMeshComponent*                Skeleton_input;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Attach_Hand_Only
struct UDragonIKWeaponPhysicsComponent_Attach_Hand_Only_Params
{
public:
	class FName                                  Hand_bone;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Arm_position_recalibrate;                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.QuatLookXatLocation
struct UDragonIK_Library_QuatLookXatLocation_Params
{
public:
	struct FTransform                            LookAtFromTransform;                               // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtTarget;                                      // 0x60(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D69[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x80(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.LookAtVector_V2
struct UDragonIK_Library_LookAtVector_V2_Params
{
public:
	struct FVector                               Source_Location;                                   // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAt;                                            // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpDirection;                                       // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.LookAtRotation_V3
struct UDragonIK_Library_LookAtRotation_V3_Params
{
public:
	struct FVector                               Source;                                            // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.CustomLookRotation
struct UDragonIK_Library_CustomLookRotation_Params
{
public:
	struct FVector                               LookAt;                                            // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpDirection;                                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


