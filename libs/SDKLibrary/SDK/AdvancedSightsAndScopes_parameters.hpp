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
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.SetReticle
struct USKG_SceneCaptureComponent2D_SetReticle_Params
{
public:
	uint8                                        Index;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.SetOwningMesh
struct USKG_SceneCaptureComponent2D_SetOwningMesh_Params
{
public:
	class UMeshComponent*                        Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactUp
struct USKG_SceneCaptureComponent2D_PointOfImpactUp_Params
{
public:
	uint8                                        Clicks;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactRight
struct USKG_SceneCaptureComponent2D_PointOfImpactRight_Params
{
public:
	uint8                                        Clicks;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactLeft
struct USKG_SceneCaptureComponent2D_PointOfImpactLeft_Params
{
public:
	uint8                                        Clicks;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactDown
struct USKG_SceneCaptureComponent2D_PointOfImpactDown_Params
{
public:
	uint8                                        Clicks;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.GetSightZero
struct USKG_SceneCaptureComponent2D_GetSightZero_Params
{
public:
	struct FSKGSightZero                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.GetMagnificationSensitivity
struct USKG_SceneCaptureComponent2D_GetMagnificationSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.GetMagnification
struct USKG_SceneCaptureComponent2D_GetMagnification_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


