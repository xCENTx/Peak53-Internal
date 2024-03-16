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

// 0x1 (0x1 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.Peak_GetTeam
struct IBP_SGKCharacterInterface_C_Peak_GetTeam_Params
{
public:
	enum class EPeak53Teams                      CharacterTeam;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanValues
struct IBP_SGKCharacterInterface_C_SGK_LeanValues_Params
{
public:
	double                                       Lean_Alpha;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TargetCamera;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanRight
struct IBP_SGKCharacterInterface_C_SGK_LeanRight_Params
{
public:
	bool                                         Lean;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraLean;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirdPersonCameraOffset;                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanLeft
struct IBP_SGKCharacterInterface_C_SGK_LeanLeft_Params
{
public:
	bool                                         Lean;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraLean;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirdPersonCameraOffset;                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LookAtRotation
struct IBP_SGKCharacterInterface_C_SGK_LookAtRotation_Params
{
public:
	struct FVector2D                             LookAtRotation;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterSockets
struct IBP_SGKCharacterInterface_C_SGK_CharacterSockets_Params
{
public:
	enum class E_Sockets                         Sockets;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Component;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterCamera
struct IBP_SGKCharacterInterface_C_SGK_CharacterCamera_Params
{
public:
	enum class E_CameraType                      CameraType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CurrentCamera;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   CurrentSpringArm;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK HideComponents
struct IBP_SGKCharacterInterface_C_SGK_HideComponents_Params
{
public:
	TArray<class UPrimitiveComponent*>           Components;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK GetMesh
struct IBP_SGKCharacterInterface_C_SGK_GetMesh_Params
{
public:
	enum class E_BodyMesh                        MeshType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Mesh;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


