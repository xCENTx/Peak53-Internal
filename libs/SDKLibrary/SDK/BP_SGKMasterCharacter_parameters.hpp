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

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.CharRef
struct ABP_SGKMasterCharacter_C_CharRef_Params
{
public:
	class ABP_SGKMasterCharacter_C*              CharRef;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MSG_AVP_GetPlayerUsername
struct ABP_SGKMasterCharacter_C_MSG_AVP_GetPlayerUsername_Params
{
public:
	bool                                         Success_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1412[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UserName;                                          // 0x8(0x18)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1415[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MSG_AVP_GetWidgetVoice
struct ABP_SGKMasterCharacter_C_MSG_AVP_GetWidgetVoice_Params
{
public:
	class UWidgetComponent*                      WidgetVoiceRef;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MSG_AVP_GetVOIPComponent
struct ABP_SGKMasterCharacter_C_MSG_AVP_GetVOIPComponent_Params
{
public:
	class UBP_AntizeVOIPComponent_C*             VOIPComponentRef;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK SetCurrentHealth
struct ABP_SGKMasterCharacter_C_SGK_SetCurrentHealth_Params
{
public:
	int32                                        NewHealthAmount;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK ShowHealthWidget
struct ABP_SGKMasterCharacter_C_SGK_ShowHealthWidget_Params
{
public:
	bool                                         ShowHealthWidget;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HealthWidgetName;                                  // 0x8(0x18)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK MaxHealth
struct ABP_SGKMasterCharacter_C_SGK_MaxHealth_Params
{
public:
	int32                                        MaxHealth;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CurrentHealth
struct ABP_SGKMasterCharacter_C_SGK_CurrentHealth_Params
{
public:
	int32                                        Health;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK GetVerifiedPlayers
struct ABP_SGKMasterCharacter_C_SGK_GetVerifiedPlayers_Params
{
public:
	TArray<class FText>                          VerifiedPlayers;                                   // 0x0(0x10)(Parm, OutParm)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK UpdateCode
struct ABP_SGKMasterCharacter_C_SGK_UpdateCode_Params
{
public:
	class FText                                  Code;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK VerifyPlayer
struct ABP_SGKMasterCharacter_C_SGK_VerifyPlayer_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CodeCheck
struct ABP_SGKMasterCharacter_C_SGK_CodeCheck_Params
{
public:
	class FText                                  Code;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CodeAccepted;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Mesh
struct ABP_SGKMasterCharacter_C_SGK_Mesh_Params
{
public:
	class UPrimitiveComponent*                   Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK ItemAmount
struct ABP_SGKMasterCharacter_C_SGK_ItemAmount_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Interact
struct ABP_SGKMasterCharacter_C_SGK_Interact_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldActions                    Action;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1438[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_EquipmentInventory_C*              CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK AllowInteraction
struct ABP_SGKMasterCharacter_C_SGK_AllowInteraction_Params
{
public:
	bool                                         AllowInteraction;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK PossibleActions
struct ABP_SGKMasterCharacter_C_SGK_PossibleActions_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ActionsFound;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1440[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_WorldAction>                PossibleActions;                                   // 0x10(0x10)(Parm, OutParm)
	struct FS_WorldAction                        K2Node_MakeStruct_S_WorldAction;                   // 0x20(0x20)(HasGetValueTypeHash)
	TArray<struct FS_WorldAction>                K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK InteractName
struct ABP_SGKMasterCharacter_C_SGK_InteractName_Params
{
public:
	class FText                                  InteractName;                                      // 0x0(0x18)(Parm, OutParm)
};

// 0x34 (0x34 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK DropItem
struct ABP_SGKMasterCharacter_C_SGK_DropItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Dropped;                                           // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawned;                                           // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SaveLoaded;                                        // 0x32(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x33(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK InvItem
struct ABP_SGKMasterCharacter_C_SGK_InvItem_Params
{
public:
	bool                                         IsItem;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1447[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            InvItem;                                           // 0x8(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK EndInteraction
struct ABP_SGKMasterCharacter_C_SGK_EndInteraction_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Peak_GetTeam
struct ABP_SGKMasterCharacter_C_Peak_GetTeam_Params
{
public:
	enum class EPeak53Teams                      CharacterTeam;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanValues
struct ABP_SGKMasterCharacter_C_SGK_LeanValues_Params
{
public:
	double                                       Lean_Alpha;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TargetCamera;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LookAtRotation
struct ABP_SGKMasterCharacter_C_SGK_LookAtRotation_Params
{
public:
	struct FVector2D                             LookAtRotation;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CharacterSockets
struct ABP_SGKMasterCharacter_C_SGK_CharacterSockets_Params
{
public:
	enum class E_Sockets                         Sockets;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1457[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Component;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_Sockets                         Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK GetMesh
struct ABP_SGKMasterCharacter_C_SGK_GetMesh_Params
{
public:
	enum class E_BodyMesh                        MeshType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Mesh;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_BodyMesh                        Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK CharacterCamera
struct ABP_SGKMasterCharacter_C_SGK_CharacterCamera_Params
{
public:
	enum class E_CameraType                      CameraType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1462[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CurrentCamera;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   CurrentSpringArm;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_CameraType                      Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1463[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.CheckIfPlanting
struct ABP_SGKMasterCharacter_C_CheckIfPlanting_Params
{
public:
	bool                                         CurrentlyPlanting;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Start Lean
struct ABP_SGKMasterCharacter_C_Start_Lean_Params
{
public:
	bool                                         ShouldLean;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TargetCameraLean;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CameraOffset;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLeanRight;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.DoLean
struct ABP_SGKMasterCharacter_C_DoLean_Params
{
public:
	double                                       LeanAlpha;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1474[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1475[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_1;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.LookInput
struct ABP_SGKMasterCharacter_C_LookInput_Params
{
public:
	float                                        InputValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsUpDown;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1482[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutInput;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1484[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetLookSensitivity_Multiplier;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddControllerPitchInput_Val_ImplicitCast; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddControllerYawInput_Val_ImplicitCast;   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.CanStandUp?
struct ABP_SGKMasterCharacter_C_CanStandUp__Params
{
public:
	bool                                         Yes;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.CheckFFA
struct ABP_SGKMasterCharacter_C_CheckFFA_Params
{
public:
	bool                                         FFA_;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_148B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x57 (0x57 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.UpdateEnemyNearbyCount
struct ABP_SGKMasterCharacter_C_UpdateEnemyNearbyCount_Params
{
public:
	class UObject*                               Other_Actor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Other_Comp;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Add_To_Count;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_149B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_149E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKCharacterInterface_C> CallFunc_Peak_GetTeam_self_CastInput;              // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPeak53Teams                      CallFunc_Peak_GetTeam_CharacterTeam;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_149F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EnterCombatMode_Finished1;                // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPeak53Teams                      CallFunc_Peak_GetTeam_CharacterTeam_1;             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SetPawnIsDead
struct ABP_SGKMasterCharacter_C_SetPawnIsDead_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ShowPlayerInfo
struct ABP_SGKMasterCharacter_C_ShowPlayerInfo_Params
{
public:
	class ABP_SGKMasterCharacter_C*              MyPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetWidget_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerInfoOverhead_C*             K2Node_DynamicCast_AsWBP_Player_Info_Overhead;     // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyEnd_318B430B40867C29F650DCB4D7661C6E
struct ABP_SGKMasterCharacter_C_OnNotifyEnd_318B430B40867C29F650DCB4D7661C6E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyBegin_318B430B40867C29F650DCB4D7661C6E
struct ABP_SGKMasterCharacter_C_OnNotifyBegin_318B430B40867C29F650DCB4D7661C6E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnInterrupted_318B430B40867C29F650DCB4D7661C6E
struct ABP_SGKMasterCharacter_C_OnInterrupted_318B430B40867C29F650DCB4D7661C6E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnBlendOut_318B430B40867C29F650DCB4D7661C6E
struct ABP_SGKMasterCharacter_C_OnBlendOut_318B430B40867C29F650DCB4D7661C6E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnCompleted_318B430B40867C29F650DCB4D7661C6E
struct ABP_SGKMasterCharacter_C_OnCompleted_318B430B40867C29F650DCB4D7661C6E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_PlayerList_K2Node_InputActionEvent_7
struct ABP_SGKMasterCharacter_C_InpActEvt_PlayerList_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyEnd_23E727C546534505579F799796EEB159
struct ABP_SGKMasterCharacter_C_OnNotifyEnd_23E727C546534505579F799796EEB159_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyBegin_23E727C546534505579F799796EEB159
struct ABP_SGKMasterCharacter_C_OnNotifyBegin_23E727C546534505579F799796EEB159_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnInterrupted_23E727C546534505579F799796EEB159
struct ABP_SGKMasterCharacter_C_OnInterrupted_23E727C546534505579F799796EEB159_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnBlendOut_23E727C546534505579F799796EEB159
struct ABP_SGKMasterCharacter_C_OnBlendOut_23E727C546534505579F799796EEB159_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnCompleted_23E727C546534505579F799796EEB159
struct ABP_SGKMasterCharacter_C_OnCompleted_23E727C546534505579F799796EEB159_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyEnd_DF29C02242B169F4D09139ABF3C43E04
struct ABP_SGKMasterCharacter_C_OnNotifyEnd_DF29C02242B169F4D09139ABF3C43E04_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyBegin_DF29C02242B169F4D09139ABF3C43E04
struct ABP_SGKMasterCharacter_C_OnNotifyBegin_DF29C02242B169F4D09139ABF3C43E04_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnInterrupted_DF29C02242B169F4D09139ABF3C43E04
struct ABP_SGKMasterCharacter_C_OnInterrupted_DF29C02242B169F4D09139ABF3C43E04_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnBlendOut_DF29C02242B169F4D09139ABF3C43E04
struct ABP_SGKMasterCharacter_C_OnBlendOut_DF29C02242B169F4D09139ABF3C43E04_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnCompleted_DF29C02242B169F4D09139ABF3C43E04
struct ABP_SGKMasterCharacter_C_OnCompleted_DF29C02242B169F4D09139ABF3C43E04_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ActivateVoIP_K2Node_InputActionEvent_6
struct ABP_SGKMasterCharacter_C_InpActEvt_ActivateVoIP_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ActivateVoIP_K2Node_InputActionEvent_5
struct ABP_SGKMasterCharacter_C_InpActEvt_ActivateVoIP_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Toggle Night Vision_K2Node_InputActionEvent_4
struct ABP_SGKMasterCharacter_C_InpActEvt_Toggle_Night_Vision_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Five_K2Node_InputKeyEvent_0
struct ABP_SGKMasterCharacter_C_InpActEvt_Five_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyEnd_38C0D98845FA34BD485C89B116104332
struct ABP_SGKMasterCharacter_C_OnNotifyEnd_38C0D98845FA34BD485C89B116104332_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnNotifyBegin_38C0D98845FA34BD485C89B116104332
struct ABP_SGKMasterCharacter_C_OnNotifyBegin_38C0D98845FA34BD485C89B116104332_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnInterrupted_38C0D98845FA34BD485C89B116104332
struct ABP_SGKMasterCharacter_C_OnInterrupted_38C0D98845FA34BD485C89B116104332_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnBlendOut_38C0D98845FA34BD485C89B116104332
struct ABP_SGKMasterCharacter_C_OnBlendOut_38C0D98845FA34BD485C89B116104332_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnCompleted_38C0D98845FA34BD485C89B116104332
struct ABP_SGKMasterCharacter_C_OnCompleted_38C0D98845FA34BD485C89B116104332_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Aim_K2Node_InputActionEvent_3
struct ABP_SGKMasterCharacter_C_InpActEvt_Aim_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Aim_K2Node_InputActionEvent_2
struct ABP_SGKMasterCharacter_C_InpActEvt_Aim_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ZoomToggle_K2Node_EnhancedInputActionEvent_41
struct ABP_SGKMasterCharacter_C_InpActEvt_ZoomToggle_K2Node_EnhancedInputActionEvent_41_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_Flashlight_K2Node_EnhancedInputActionEvent_40
struct ABP_SGKMasterCharacter_C_InpActEvt_Flashlight_K2Node_EnhancedInputActionEvent_40_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_1
struct ABP_SGKMasterCharacter_C_InpActEvt_ZoomOut_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_0
struct ABP_SGKMasterCharacter_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ForwardInput_K2Node_EnhancedInputActionEvent_39
struct ABP_SGKMasterCharacter_C_InpActEvt_ForwardInput_K2Node_EnhancedInputActionEvent_39_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ForwardInput_K2Node_EnhancedInputActionEvent_38
struct ABP_SGKMasterCharacter_C_InpActEvt_ForwardInput_K2Node_EnhancedInputActionEvent_38_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_FireInput_K2Node_EnhancedInputActionEvent_37
struct ABP_SGKMasterCharacter_C_InpActEvt_FireInput_K2Node_EnhancedInputActionEvent_37_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_FireInput_K2Node_EnhancedInputActionEvent_36
struct ABP_SGKMasterCharacter_C_InpActEvt_FireInput_K2Node_EnhancedInputActionEvent_36_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ToggleCombatModeInput_K2Node_EnhancedInputActionEvent_35
struct ABP_SGKMasterCharacter_C_InpActEvt_ToggleCombatModeInput_K2Node_EnhancedInputActionEvent_35_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ReloadInput_K2Node_EnhancedInputActionEvent_34
struct ABP_SGKMasterCharacter_C_InpActEvt_ReloadInput_K2Node_EnhancedInputActionEvent_34_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ToggleFireModeInput_K2Node_EnhancedInputActionEvent_33
struct ABP_SGKMasterCharacter_C_InpActEvt_ToggleFireModeInput_K2Node_EnhancedInputActionEvent_33_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LeanRightInput_K2Node_EnhancedInputActionEvent_32
struct ABP_SGKMasterCharacter_C_InpActEvt_LeanRightInput_K2Node_EnhancedInputActionEvent_32_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LeanRightInput_K2Node_EnhancedInputActionEvent_31
struct ABP_SGKMasterCharacter_C_InpActEvt_LeanRightInput_K2Node_EnhancedInputActionEvent_31_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LeanLeftInput_K2Node_EnhancedInputActionEvent_30
struct ABP_SGKMasterCharacter_C_InpActEvt_LeanLeftInput_K2Node_EnhancedInputActionEvent_30_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LeanLeftInput_K2Node_EnhancedInputActionEvent_29
struct ABP_SGKMasterCharacter_C_InpActEvt_LeanLeftInput_K2Node_EnhancedInputActionEvent_29_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_CrouchInput_K2Node_EnhancedInputActionEvent_28
struct ABP_SGKMasterCharacter_C_InpActEvt_CrouchInput_K2Node_EnhancedInputActionEvent_28_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_CrouchInput_K2Node_EnhancedInputActionEvent_27
struct ABP_SGKMasterCharacter_C_InpActEvt_CrouchInput_K2Node_EnhancedInputActionEvent_27_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_DownContentMenuInput_K2Node_EnhancedInputActionEvent_26
struct ABP_SGKMasterCharacter_C_InpActEvt_DownContentMenuInput_K2Node_EnhancedInputActionEvent_26_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_UpContextMenuInput_K2Node_EnhancedInputActionEvent_25
struct ABP_SGKMasterCharacter_C_InpActEvt_UpContextMenuInput_K2Node_EnhancedInputActionEvent_25_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_ToggleInventoryInput_K2Node_EnhancedInputActionEvent_24
struct ABP_SGKMasterCharacter_C_InpActEvt_ToggleInventoryInput_K2Node_EnhancedInputActionEvent_24_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_RotateBuildPartInput_K2Node_EnhancedInputActionEvent_23
struct ABP_SGKMasterCharacter_C_InpActEvt_RotateBuildPartInput_K2Node_EnhancedInputActionEvent_23_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LowerBuildPartInput_K2Node_EnhancedInputActionEvent_22
struct ABP_SGKMasterCharacter_C_InpActEvt_LowerBuildPartInput_K2Node_EnhancedInputActionEvent_22_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_RaiseBuildPartInput_K2Node_EnhancedInputActionEvent_21
struct ABP_SGKMasterCharacter_C_InpActEvt_RaiseBuildPartInput_K2Node_EnhancedInputActionEvent_21_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot9Input_K2Node_EnhancedInputActionEvent_20
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot9Input_K2Node_EnhancedInputActionEvent_20_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot8Input_K2Node_EnhancedInputActionEvent_19
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot8Input_K2Node_EnhancedInputActionEvent_19_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot7Input_K2Node_EnhancedInputActionEvent_18
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot7Input_K2Node_EnhancedInputActionEvent_18_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot6Input_K2Node_EnhancedInputActionEvent_17
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot6Input_K2Node_EnhancedInputActionEvent_17_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot5Input_K2Node_EnhancedInputActionEvent_16
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot5Input_K2Node_EnhancedInputActionEvent_16_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot4Input_K2Node_EnhancedInputActionEvent_15
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot4Input_K2Node_EnhancedInputActionEvent_15_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot3Input_K2Node_EnhancedInputActionEvent_14
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot3Input_K2Node_EnhancedInputActionEvent_14_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot2Input_K2Node_EnhancedInputActionEvent_13
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot2Input_K2Node_EnhancedInputActionEvent_13_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_QuickSlot1Input_K2Node_EnhancedInputActionEvent_12
struct ABP_SGKMasterCharacter_C_InpActEvt_QuickSlot1Input_K2Node_EnhancedInputActionEvent_12_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_11
struct ABP_SGKMasterCharacter_C_InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_11_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_10
struct ABP_SGKMasterCharacter_C_InpActEvt_RightInput_K2Node_EnhancedInputActionEvent_10_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_BackwardInput_K2Node_EnhancedInputActionEvent_9
struct ABP_SGKMasterCharacter_C_InpActEvt_BackwardInput_K2Node_EnhancedInputActionEvent_9_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_BackwardInput_K2Node_EnhancedInputActionEvent_8
struct ABP_SGKMasterCharacter_C_InpActEvt_BackwardInput_K2Node_EnhancedInputActionEvent_8_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_7
struct ABP_SGKMasterCharacter_C_InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_7_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_6
struct ABP_SGKMasterCharacter_C_InpActEvt_LeftInput_K2Node_EnhancedInputActionEvent_6_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_CrouchInput_K2Node_EnhancedInputActionEvent_5
struct ABP_SGKMasterCharacter_C_InpActEvt_CrouchInput_K2Node_EnhancedInputActionEvent_5_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_JumpInput_K2Node_EnhancedInputActionEvent_4
struct ABP_SGKMasterCharacter_C_InpActEvt_JumpInput_K2Node_EnhancedInputActionEvent_4_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_JumpInput_K2Node_EnhancedInputActionEvent_3
struct ABP_SGKMasterCharacter_C_InpActEvt_JumpInput_K2Node_EnhancedInputActionEvent_3_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_LookUpDownInput_K2Node_EnhancedInputActionEvent_2
struct ABP_SGKMasterCharacter_C_InpActEvt_LookUpDownInput_K2Node_EnhancedInputActionEvent_2_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_TurnInput_K2Node_EnhancedInputActionEvent_1
struct ABP_SGKMasterCharacter_C_InpActEvt_TurnInput_K2Node_EnhancedInputActionEvent_1_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.InpActEvt_InteractInput_K2Node_EnhancedInputActionEvent_0
struct ABP_SGKMasterCharacter_C_InpActEvt_InteractInput_K2Node_EnhancedInputActionEvent_0_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Svr Ladder
struct ABP_SGKMasterCharacter_C_Svr_Ladder_Params
{
public:
	bool                                         IsClimbingLadder;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1586[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ClimbableLadder_C*                 Ladder;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         JumpOff;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Svr TeleoprtToTarget
struct ABP_SGKMasterCharacter_C_Svr_TeleoprtToTarget_Params
{
public:
	class ABP_ClimbableLadder_C*                 Ladder;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         OverlappedBase;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.VoIP Activate Sound
struct ABP_SGKMasterCharacter_C_VoIP_Activate_Sound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.VoIP Deactivate Sound
struct ABP_SGKMasterCharacter_C_VoIP_Deactivate_Sound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.NightVisionSound
struct ABP_SGKMasterCharacter_C_NightVisionSound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ThermalVisionSound
struct ABP_SGKMasterCharacter_C_ThermalVisionSound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanRight
struct ABP_SGKMasterCharacter_C_SGK_LeanRight_Params
{
public:
	bool                                         Lean;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1595[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraLean;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirdPersonCameraOffset;                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK LeanLeft
struct ABP_SGKMasterCharacter_C_SGK_LeanLeft_Params
{
public:
	bool                                         Lean;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_159A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraLean;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirdPersonCameraOffset;                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SetBombVisibilityMC
struct ABP_SGKMasterCharacter_C_SetBombVisibilityMC_Params
{
public:
	bool                                         bNewVisibility;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SetBombVisibilitySV
struct ABP_SGKMasterCharacter_C_SetBombVisibilitySV_Params
{
public:
	bool                                         bNewVisibility;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetFPCam
struct ABP_SGKMasterCharacter_C_ServerSetFPCam_Params
{
public:
	struct FVector                               Loc;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetArmLocation
struct ABP_SGKMasterCharacter_C_ServerSetArmLocation_Params
{
public:
	struct FVector                               Loc;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MLT_PlayDance
struct ABP_SGKMasterCharacter_C_MLT_PlayDance_Params
{
public:
	class ACharacter*                            PlayerCharRef;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SRV_PlayDance
struct ABP_SGKMasterCharacter_C_SRV_PlayDance_Params
{
public:
	class ACharacter*                            PlayerCharRef;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MLC_SetPlayerMovementState
struct ABP_SGKMasterCharacter_C_MLC_SetPlayerMovementState_Params
{
public:
	enum class EMovementMode                     NewMovementMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SRV_SetPlayerMovementState
struct ABP_SGKMasterCharacter_C_SRV_SetPlayerMovementState_Params
{
public:
	enum class EMovementMode                     NewMovementMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SetPlayerMovementState
struct ABP_SGKMasterCharacter_C_SetPlayerMovementState_Params
{
public:
	enum class EMovementMode                     NewMovementMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Right
struct ABP_SGKMasterCharacter_C_FP_Right_Params
{
public:
	bool                                         Lean;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraLean;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirdPersonCameraOffset;                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.FP Left
struct ABP_SGKMasterCharacter_C_FP_Left_Params
{
public:
	bool                                         Lean;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraLean;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirdPersonCameraOffset;                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.StartladderClimb
struct ABP_SGKMasterCharacter_C_StartladderClimb_Params
{
public:
	class ABP_MasterLadder_C*                    LadderRef;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK TurnedOnEffect
struct ABP_SGKMasterCharacter_C_SGK_TurnedOnEffect_Params
{
public:
	bool                                         TurnedOn;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK SetVerifiedPlayers
struct ABP_SGKMasterCharacter_C_SGK_SetVerifiedPlayers_Params
{
public:
	TArray<class FText>                          VerifiedPlayers;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Multicast Headshot
struct ABP_SGKMasterCharacter_C_Multicast_Headshot_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SetLadder
struct ABP_SGKMasterCharacter_C_SetLadder_Params
{
public:
	class ABP_DynamicLadder_C*                   LadderRef;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SetLadderRef
struct ABP_SGKMasterCharacter_C_SetLadderRef_Params
{
public:
	class ABP_MasterLadder_C*                    LadderRef;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.PlaySound
struct ABP_SGKMasterCharacter_C_PlaySound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MulticastSound
struct ABP_SGKMasterCharacter_C_MulticastSound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK BleedDamage
struct ABP_SGKMasterCharacter_C_SGK_BleedDamage_Params
{
public:
	int32                                        TickDamage;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TickTime;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BleedLength;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveAnyDamage
struct ABP_SGKMasterCharacter_C_ReceiveAnyDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           DamageType;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK Damage
struct ABP_SGKMasterCharacter_C_SGK_Damage_Params
{
public:
	int32                                        BaseDamage;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                EventInstigator;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_DamageType                      DamageType;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Hitbox                          HitBox;                                            // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceiveTick
struct ABP_SGKMasterCharacter_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ClientVisibilityIcon
struct ABP_SGKMasterCharacter_C_ClientVisibilityIcon_Params
{
public:
	bool                                         bNewVisible;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Team;                                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SaveLoaded
struct ABP_SGKMasterCharacter_C_SaveLoaded_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ServerSetLookAtRotation
struct ABP_SGKMasterCharacter_C_ServerSetLookAtRotation_Params
{
public:
	struct FVector2D                             LookAtRotation;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ReceivePossessed
struct ABP_SGKMasterCharacter_C_ReceivePossessed_Params
{
public:
	class AController*                           NewController;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.BndEvt__BP_SGKMasterCharacter_EnemyNearbyTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SGKMasterCharacter_C_BndEvt__BP_SGKMasterCharacter_EnemyNearbyTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.BndEvt__BP_SGKMasterCharacter_EnemyNearbyTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SGKMasterCharacter_C_BndEvt__BP_SGKMasterCharacter_EnemyNearbyTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0xE8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.OnLanded
struct ABP_SGKMasterCharacter_C_OnLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.MulticastUnhideComponents
struct ABP_SGKMasterCharacter_C_MulticastUnhideComponents_Params
{
public:
	TArray<class UPrimitiveComponent*>           Components;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.SGK HideComponents
struct ABP_SGKMasterCharacter_C_SGK_HideComponents_Params
{
public:
	TArray<class UPrimitiveComponent*>           Components;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ProningMulticast
struct ABP_SGKMasterCharacter_C_ProningMulticast_Params
{
public:
	bool                                         bProne_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ProningServer
struct ABP_SGKMasterCharacter_C_ProningServer_Params
{
public:
	bool                                         bProne_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Weapon Swap Sound
struct ABP_SGKMasterCharacter_C_Weapon_Swap_Sound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Multicast Sound Event
struct ABP_SGKMasterCharacter_C_Multicast_Sound_Event_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.Sound Event
struct ABP_SGKMasterCharacter_C_Sound_Event_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2EDC (0x2EDC - 0x0)
// Function BP_SGKMasterCharacter.BP_SGKMasterCharacter_C.ExecuteUbergraph_BP_SGKMasterCharacter
struct ABP_SGKMasterCharacter_C_ExecuteUbergraph_BP_SGKMasterCharacter_Params
{
public:
	char pad_0000;
	//	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1722[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1723[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1725[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1726[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1727[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1728[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AActor*                                CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1729[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        Temp_int_Variable_1;                               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_172A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable;                                // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_172B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       CallFunc_Lerp_ReturnValue;                         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_172C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x90(0x18)(HasGetValueTypeHash)
	//	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0xA8(0x18)(HasGetValueTypeHash)
	//	struct FKey                                  Temp_struct_Variable;                              // 0xC0(0x18)(HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_172D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_41;    // 0xE0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_41;    // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_41;  // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_41;   // 0x108(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1731[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable;                              // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable;                                // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_1;                              // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable;                                // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_1;                              // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_1;                              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1734[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_40;    // 0x148(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_40;    // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_40;  // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_40;   // 0x170(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_1; // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1735[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_1;                            // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_2;                              // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_2;                              // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_3;                              // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_2;                              // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1736[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       _Temp_real_Variable_3;                              // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x1B0(0x18)(HasGetValueTypeHash)
	//	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x1C8(0x18)(HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_39;    // 0x1E0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_39;    // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_39;  // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_39;   // 0x208(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_38;    // 0x210(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_38;    // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_38;  // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_38;   // 0x238(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1; // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_2;                            // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_4;                              // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_4;                              // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_4;                              // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_5;                              // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_6;                              // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_5;                              // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_5;                              // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_37;    // 0x290(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_37;    // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_37;  // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_37;   // 0x2B8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_36;    // 0x2C0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_36;    // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_36;  // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_36;   // 0x2E8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_2; // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_3; // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_173A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_3;                            // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_7;                              // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_7;                              // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_7;                              // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_8;                              // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_3;                              // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_173C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       _Temp_real_Variable_8;                              // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_8;                              // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_35;    // 0x338(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_35;    // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_35;  // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_35;   // 0x360(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_4;                            // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_4; // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_173E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_9;                              // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_10;                             // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_9;                              // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_10;                             // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_4;                              // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1740[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_34;    // 0x3A0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_34;    // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_34;  // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_34;   // 0x3C8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_5; // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1741[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_5;                            // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_11;                             // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_11;                             // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_12;                             // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_5;                              // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1743[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_12;                             // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_33;    // 0x408(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_33;    // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_33;  // 0x42C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_33;   // 0x430(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_6;                            // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_6; // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1745[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_13;                             // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_14;                             // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_13;                             // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_14;                             // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_6;                              // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1748[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_32;    // 0x470(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_32;    // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_32;  // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_32;   // 0x498(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_7; // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1749[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_31;    // 0x4A8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_31;    // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_31;  // 0x4CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_31;   // 0x4D0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_7;                            // 0x4D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_8; // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_174B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_15;                             // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_16;                             // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_15;                             // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_16;                             // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_16;                             // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_15;                             // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_7;                              // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_174E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_30;    // 0x520(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_30;    // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_30;  // 0x544(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_30;   // 0x548(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_9; // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_174F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_29;    // 0x558(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_29;    // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_29;  // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_29;   // 0x580(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_8;                            // 0x588(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_10; // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1750[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_17;                             // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_18;                             // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_17;                             // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_18;                             // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_18;                             // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_17;                             // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_8;                              // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1752[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_28;    // 0x5D0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_28;    // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_28;  // 0x5F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_28;   // 0x5F8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_11; // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1753[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_27;    // 0x608(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_27;    // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_27;  // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_27;   // 0x630(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_9;                            // 0x638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_12; // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1754[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_19;                             // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_20;                             // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_19;                             // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       _Temp_real_Variable_20;                             // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_20;                             // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       __Temp_real_Variable_19;                             // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_9;                              // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1757[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_26;    // 0x680(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_26;    // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_26;  // 0x6A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_26;   // 0x6A8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_13; // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_175A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_10;                           // 0x6B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_21;                             // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_21;                             // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_22;                             // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_10;                             // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_175B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_22;                             // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_25;    // 0x6E8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_25;    // 0x708(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_25;  // 0x70C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_25;   // 0x710(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_11;                           // 0x718(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_14; // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_175C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_23;                             // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_24;                             // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_23;                             // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_24;                             // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_11;                             // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_175F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_24;    // 0x750(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_24;    // 0x770(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_24;  // 0x774(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_24;   // 0x778(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_15; // 0x780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1761[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_12;                           // 0x788(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_25;                             // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_25;                             // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_26;                             // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_12;                             // 0x7A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1764[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_26;                             // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_23;    // 0x7B8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_23;    // 0x7D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_23;  // 0x7DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_23;   // 0x7E0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_13;                           // 0x7E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_16; // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1765[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_27;                             // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_28;                             // 0x800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_27;                             // 0x808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_28;                             // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_13;                             // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1767[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_22;    // 0x820(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_22;    // 0x840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_22;  // 0x844(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_22;   // 0x848(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_17; // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1768[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_14;                           // 0x858(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_29;                             // 0x860(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_29;                             // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_30;                             // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_14;                             // 0x878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1769[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_30;                             // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_21;    // 0x888(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_21;    // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_21;  // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_21;   // 0x8B0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_15;                           // 0x8B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_18; // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_176A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_31;                             // 0x8C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_32;                             // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_31;                             // 0x8D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_32;                             // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_15;                             // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_176C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_20;    // 0x8F0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_20;    // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_20;  // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_20;   // 0x918(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_19; // 0x920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_176E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_16;                           // 0x928(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_33;                             // 0x930(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_33;                             // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_34;                             // 0x940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_16;                             // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_176F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_34;                             // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_19;    // 0x958(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_19;    // 0x978(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_19;  // 0x97C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_19;   // 0x980(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_17;                           // 0x988(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_20; // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1772[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_35;                             // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_36;                             // 0x9A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_35;                             // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_36;                             // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_17;                             // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1774[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_18;    // 0x9C0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_18;    // 0x9E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_18;  // 0x9E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_18;   // 0x9E8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_21; // 0x9F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1778[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_18;                           // 0x9F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_37;                             // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_37;                             // 0xA08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_38;                             // 0xA10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_18;                             // 0xA18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_177A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_38;                             // 0xA20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_17;    // 0xA28(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_17;    // 0xA48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_17;  // 0xA4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_17;   // 0xA50(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_19;                           // 0xA58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_22; // 0xA60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_177D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_39;                             // 0xA68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_40;                             // 0xA70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_39;                             // 0xA78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_40;                             // 0xA80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_19;                             // 0xA88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_16;    // 0xA90(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_16;    // 0xAB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_16;  // 0xAB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_16;   // 0xAB8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_23; // 0xAC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1783[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_20;                           // 0xAC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_41;                             // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_41;                             // 0xAD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_42;                             // 0xAE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_20;                             // 0xAE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1784[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_42;                             // 0xAF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_15;    // 0xAF8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_15;    // 0xB18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_15;  // 0xB1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_15;   // 0xB20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_21;                           // 0xB28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_24; // 0xB30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1787[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_43;                             // 0xB38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_44;                             // 0xB40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_43;                             // 0xB48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_44;                             // 0xB50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_21;                             // 0xB58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1789[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_14;    // 0xB60(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_14;    // 0xB80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_14;  // 0xB84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_14;   // 0xB88(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_25; // 0xB90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_178A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_22;                           // 0xB98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_45;                             // 0xBA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_45;                             // 0xBA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_46;                             // 0xBB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_22;                             // 0xBB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_178E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_46;                             // 0xBC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_13;    // 0xBC8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_13;    // 0xBE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_13;  // 0xBEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_13;   // 0xBF0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_23;                           // 0xBF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_26; // 0xC00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1790[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_47;                             // 0xC08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_48;                             // 0xC10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_47;                             // 0xC18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_48;                             // 0xC20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_23;                             // 0xC28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1791[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_12;    // 0xC30(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_12;    // 0xC50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_12;  // 0xC54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_12;   // 0xC58(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_27; // 0xC60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1794[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_24;                           // 0xC68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_49;                             // 0xC70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_49;                             // 0xC78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_50;                             // 0xC80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_24;                             // 0xC88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1797[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_50;                             // 0xC90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_11;    // 0xC98(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_11;    // 0xCB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_11;  // 0xCBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_11;   // 0xCC0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_10;    // 0xCC8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_10;    // 0xCE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_10;  // 0xCEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_10;   // 0xCF0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_2; // 0xCF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_3; // 0xD00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_25;                           // 0xD08(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_51;                             // 0xD10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_51;                             // 0xD18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_51;                             // 0xD20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_52;                             // 0xD28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_53;                             // 0xD30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_52;                             // 0xD38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_52;                             // 0xD40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_9;     // 0xD48(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_9;     // 0xD68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_9;   // 0xD6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_9;    // 0xD70(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_8;     // 0xD78(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_8;     // 0xD98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_8;   // 0xD9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_8;    // 0xDA0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_4; // 0xDA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_5; // 0xDB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_26;                           // 0xDB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_54;                             // 0xDC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_54;                             // 0xDC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_54;                             // 0xDD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_55;                             // 0xDD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_56;                             // 0xDE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_55;                             // 0xDE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_55;                             // 0xDF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_7;     // 0xDF8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_7;     // 0xE18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_7;   // 0xE1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_7;    // 0xE20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_6;     // 0xE28(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_6;     // 0xE48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_6;   // 0xE4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_6;    // 0xE50(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_6; // 0xE58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_7; // 0xE60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_27;                           // 0xE68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_57;                             // 0xE70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_57;                             // 0xE78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_57;                             // 0xE80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_58;                             // 0xE88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_59;                             // 0xE90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_58;                             // 0xE98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_58;                             // 0xEA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_5;     // 0xEA8(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_5;     // 0xEC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_5;   // 0xECC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_5;    // 0xED0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_28;                           // 0xED8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_28; // 0xEE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_60;                             // 0xEE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_61;                             // 0xEF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_60;                             // 0xEF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_61;                             // 0xF00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_25;                             // 0xF08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_4;     // 0xF10(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_4;     // 0xF30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_4;   // 0xF34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_4;    // 0xF38(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_29; // 0xF40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_3;     // 0xF48(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_3;     // 0xF68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_3;   // 0xF6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_3;    // 0xF70(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_29;                           // 0xF78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_30; // 0xF80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_62;                             // 0xF88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_63;                             // 0xF90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_62;                             // 0xF98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_63;                             // 0xFA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_63;                             // 0xFA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_62;                             // 0xFB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_26;                             // 0xFB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_2;     // 0xFC0(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_2;     // 0xFE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_2;   // 0xFE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_2;    // 0xFE8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_8; // 0xFF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_30;                           // 0xFF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_64;                             // 0x1000(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_64;                             // 0x1008(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_65;                             // 0x1010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_66;                             // 0x1018(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_65;                             // 0x1020(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_1;     // 0x1028(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_1;     // 0x1048(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_1;   // 0x104C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_1;    // 0x1050(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          Temp_object_Variable_31;                           // 0x1058(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_9; // 0x1060(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_67;                             // 0x1068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_68;                             // 0x1070(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_67;                             // 0x1078(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_68;                             // 0x1080(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_69;                             // 0x1088(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue;       // 0x1090(0x20)(NoDestructor)
	//	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x10B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x10B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction;      // 0x10B8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_31; // 0x10C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UInputAction*                          Temp_object_Variable_32;                           // 0x10C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_70;                             // 0x10D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_70;                             // 0x10D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_71;                             // 0x10E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_27;                             // 0x10E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_71;                             // 0x10F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x10F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x10F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x10FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x10FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0x10FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0x10FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0x10FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x10FF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x1100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x1101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x1102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x1103(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_27;                   // 0x1104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_28;                   // 0x1105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_29;                   // 0x1106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_30;                   // 0x1107(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_31;                   // 0x1108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_32;                   // 0x1109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_33;                   // 0x110A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_34;                   // 0x110B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_WithEditor_ReturnValue;                   // 0x110C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_35;                   // 0x110D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x1110(0x10)(ReferenceParm)
	//	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_36;                   // 0x1124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_37;                   // 0x1125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1126(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17CC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x1128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_28;                             // 0x1130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_38;                   // 0x1131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17CE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_72;                             // 0x1138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_IsClimbingLadder;               // 0x1140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_ClimbableLadder_C*                 K2Node_CustomEvent_Ladder_1;                       // 0x1148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_JumpOff;                        // 0x1150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_39;                   // 0x1151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x1158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_40;                   // 0x1189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17D5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_ClimbableLadder_C*                 K2Node_CustomEvent_Ladder;                         // 0x1190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_OverlappedBase;                 // 0x1198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x11A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x1200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x1218(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1230(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_29;                             // 0x1248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x1250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x1258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_41;                   // 0x1260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsAnyMontagePlaying_ReturnValue;          // 0x1261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x1268(0x10)(ZeroConstructor, HasGetValueTypeHash)
	//	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2; // 0x1278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_42;                   // 0x1280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class USoundBase*                            K2Node_CustomEvent_Sound_9;                        // 0x1288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1290(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class USoundBase*                            K2Node_CustomEvent_Sound_8;                        // 0x12A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x12B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class USoundBase*                            K2Node_CustomEvent_Sound_7;                        // 0x12C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x12D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class EPeak53Teams                      CallFunc_Peak_GetTeam_CharacterTeam;               // 0x12E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_30;                             // 0x12E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17DD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        Temp_int_Array_Index_Variable;                     // 0x12EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class USoundBase*                            K2Node_CustomEvent_Sound_6;                        // 0x12F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x12F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_Event_Lean_1;                               // 0x1310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_Event_CameraLean_1;                         // 0x1318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_Event_ThirdPersonCameraOffset_1;            // 0x1320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_Event_Lean;                                 // 0x1328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_Event_CameraLean;                           // 0x1330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_Event_ThirdPersonCameraOffset;              // 0x1338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x1340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x1343(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsLocallyControlled_ReturnValue_2;        // 0x1345(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x1346(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1347(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsStandalone_ReturnValue_1;               // 0x1348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_bNewVisibility_1;               // 0x134A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_bNewVisibility;                 // 0x134B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_31;                             // 0x134C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_73;                             // 0x1350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               K2Node_CustomEvent_Loc_1;                          // 0x1358(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x1370(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x1458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X;                            // 0x1460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y;                            // 0x1468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z;                            // 0x1470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               K2Node_CustomEvent_Loc;                            // 0x1478(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_1;                          // 0x1490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_1;                          // 0x1498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_1;                          // 0x14A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x14A8(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x1590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_32;                             // 0x1598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ACharacter*                            K2Node_CustomEvent_PlayerCharRef_1;                // 0x15A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_2;                          // 0x15A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_2;                          // 0x15B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_2;                          // 0x15B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class ACharacter*                            K2Node_CustomEvent_PlayerCharRef;                  // 0x15C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	enum class EMovementMode                     K2Node_CustomEvent_NewMovementMode_2;              // 0x15C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class EMovementMode                     K2Node_CustomEvent_NewMovementMode_1;              // 0x15C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class EMovementMode                     K2Node_CustomEvent_NewMovementMode;                // 0x15CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17F1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x15D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x15E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	double                                       CallFunc_BreakVector_X_3;                          // 0x1600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_3;                          // 0x1608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_3;                          // 0x1610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1618(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x161C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_Select_Default;                             // 0x1620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x1628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x1630(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_4;                          // 0x1648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_4;                          // 0x1650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_4;                          // 0x1658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1660(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FHitResult                            CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x1678(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	bool                                         CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x1760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_17F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_Select_Default_1;                           // 0x1768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x1770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x1778(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x1780(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x1798(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x17B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_5;                          // 0x17C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_5;                          // 0x17D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_5;                          // 0x17D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0x17E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0x17F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0x1810(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_6;                          // 0x1828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_6;                          // 0x1830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_6;                          // 0x1838(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x1840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_7;                          // 0x1848(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_7;                          // 0x1850(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_7;                          // 0x1858(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x1860(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x1878(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x1890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x1898(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	class AController*                           CallFunc_GetController_ReturnValue;                // 0x1980(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_3;                       // 0x1988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x1990(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	double                                       K2Node_Select_Default_2;                           // 0x19A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Roll;                        // 0x19B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch;                       // 0x19B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw;                         // 0x19B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1801[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x19C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x19D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_4;                       // 0x19E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_5;                       // 0x19E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x19F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_Select_Default_3;                           // 0x19F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_1;         // 0x1A00(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x1A18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x1A1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x1A20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1803[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0x1A28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x1A30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	bool                                         K2Node_CustomEvent_Lean_1;                         // 0x1A48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1804[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_CustomEvent_CameraLean_1;                   // 0x1A50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_CustomEvent_ThirdPersonCameraOffset_1;      // 0x1A58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_Lean;                           // 0x1A60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1807[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_CustomEvent_CameraLean;                     // 0x1A68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_CustomEvent_ThirdPersonCameraOffset;        // 0x1A70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_8;                          // 0x1A78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_8;                          // 0x1A80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_8;                          // 0x1A88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_X_9;                          // 0x1A90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Y_9;                          // 0x1A98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BreakVector_Z_9;                          // 0x1AA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x1AA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x1AB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_VLerp_ReturnValue_1;                      // 0x1AC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_3;  // 0x1AE0(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	double                                       CallFunc_Lerp_ReturnValue_6;                       // 0x1BC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_7;                       // 0x1BD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetController_ReturnValue_4;              // 0x1BD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetController_ReturnValue_5;              // 0x1BE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_2;         // 0x1BE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	float                                        CallFunc_BreakRotator_Roll_2;                      // 0x1C00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_2;                     // 0x1C04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_2;                       // 0x1C08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_180B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       CallFunc_Lerp_ReturnValue_8;                       // 0x1C10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_9;                       // 0x1C18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetController_ReturnValue_6;              // 0x1C20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetController_ReturnValue_7;              // 0x1C28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_3;         // 0x1C30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	float                                        CallFunc_BreakRotator_Roll_3;                      // 0x1C48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_3;                     // 0x1C4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_3;                       // 0x1C50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_180F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_74;                             // 0x1C58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue_2;                // 0x1C60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	class ABP_MasterLadder_C*                    K2Node_CustomEvent_LadderRef;                      // 0x1C78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x1C80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x1C88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_Event_TurnedOn;                             // 0x1C91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_33;                             // 0x1C92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1813[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3; // 0x1C98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_43;                   // 0x1CA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1814[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_Select_Default_4;                           // 0x1CA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x1CB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_MakeVector_ReturnValue_3;                 // 0x1CB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_VLerp_ReturnValue_2;                      // 0x1CD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	TArray<class FText>                          K2Node_Event_VerifiedPlayers;                      // 0x1CE8(0x10)(ReferenceParm)
	//	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_4;  // 0x1CF8(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x1DE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class USoundBase*                            K2Node_CustomEvent_Sound_5;                        // 0x1DF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class ABP_DynamicLadder_C*                   K2Node_Event_LadderRef_1;                          // 0x1E00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class ABP_MasterLadder_C*                    K2Node_Event_LadderRef;                            // 0x1E08(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class USoundBase*                            K2Node_CustomEvent_Sound_4;                        // 0x1E10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_6;        // 0x1E18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_44;                   // 0x1E30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1818[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class USoundBase*                            K2Node_CustomEvent_Sound_3;                        // 0x1E38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_45;                   // 0x1E40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_181A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x1E48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State;          // 0x1E50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1E58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_181D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class APeak53GameState_C*                    K2Node_DynamicCast_AsPeak_53Game_State;            // 0x1E60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_46;                   // 0x1E69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_47;                   // 0x1E6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_181E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x1E70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class APeak53GameState_C*                    K2Node_DynamicCast_AsPeak_53Game_State_1;          // 0x1E78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1E80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1E81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1820[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        K2Node_Event_TickDamage;                           // 0x1E84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_Event_TickTime;                             // 0x1E88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_Event_BleedLength;                          // 0x1E90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_Event_Damage;                               // 0x1E98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1821[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UDamageType*                           K2Node_Event_DamageType_1;                         // 0x1EA0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           K2Node_Event_InstigatedBy;                         // 0x1EA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AActor*                                K2Node_Event_DamageCauser_1;                       // 0x1EB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x1EB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	//	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1EC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x1ED0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	//	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1EE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        K2Node_Event_BaseDamage;                           // 0x1EE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class AActor*                                K2Node_Event_EventInstigator;                      // 0x1EE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AActor*                                K2Node_Event_DamageCauser;                         // 0x1EF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	enum class E_DamageType                      K2Node_Event_DamageType;                           // 0x1EF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class E_Hitbox                          K2Node_Event_Hitbox;                               // 0x1EF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1825[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_75;                             // 0x1F00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1F08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1826[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AController*                           CallFunc_GetInstigatorController_ReturnValue_1;    // 0x1F10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x1F18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1F20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1827[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_1;           // 0x1F28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1F30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1828[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State_1;        // 0x1F38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1F40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1F41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_182A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1F48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	//	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x1F58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x1F5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x1F60(0x18)(None)
	//	bool                                         Temp_bool_Variable_34;                             // 0x1F78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_182D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_Select_Default_5;                           // 0x1F80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       Temp_real_Variable_76;                             // 0x1F88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x1F90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_MakeVector_ReturnValue_4;                 // 0x1F98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_35;                             // 0x1FB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1831[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_Select_Default_6;                           // 0x1FB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x1FC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0x1FD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Contains_ReturnValue;                     // 0x1FD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1833[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_MakeVector_ReturnValue_5;                 // 0x1FE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x1FF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1FF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1FFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1834[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x2000(0x18)(HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_4;         // 0x2018(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	float                                        K2Node_Event_DeltaSeconds;                         // 0x2030(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Roll_4;                      // 0x2034(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_4;                     // 0x2038(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_4;                       // 0x203C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x2040(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_10;                      // 0x2050(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x2058(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_ReturnValue_11;                      // 0x2068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_bNewVisible;                    // 0x2070(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_Team;                           // 0x2071(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_183D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  Temp_name_Variable;                                // 0x2074(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_183E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_7;        // 0x2080(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_CheckFFA_FFA_;                            // 0x2098(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1840[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x209C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1841[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	TArray<class ABP_SGKMasterCharacter_C*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0x20A8(0x10)(ReferenceParm)
	//	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x20B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1842[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AController*                           CallFunc_GetController_ReturnValue_8;              // 0x20C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_2;           // 0x20C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x20D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1844[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x20D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class APlayerState*                          CallFunc_GetPlayerState_ReturnValue;               // 0x20F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State_2;        // 0x2100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x2108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1847[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State_3;        // 0x2110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x2118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x2119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x211A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_184A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AController*                           CallFunc_GetController_ReturnValue_9;              // 0x2120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetController_ReturnValue_10;             // 0x2128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_48;                   // 0x2130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_184C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_3;           // 0x2138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x2140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_184D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_4;           // 0x2148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x2150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_MinimapStartUpdate_Success;               // 0x2151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_184E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  K2Node_CustomEvent_NotifyName_1;                   // 0x2154(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_184F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x2160(0x18)(HasGetValueTypeHash)
	//	struct FKey                                  Temp_struct_Variable_1;                            // 0x2178(0x18)(HasGetValueTypeHash)
	//	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x2190(0x18)(HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_49;                   // 0x21A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_50;                   // 0x21A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_51;                   // 0x21AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1850[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x21B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x21B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1851[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon_1;     // 0x21C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x21C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_52;                   // 0x21C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_AddStartingItems_Return;                  // 0x21CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1853[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FKey                                  K2Node_InputActionEvent_Key_6;                     // 0x21D0(0x18)(HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x21E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UBP_SGKSaveGame_C*                     K2Node_CustomEvent_SaveGame;                       // 0x21F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x2200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x2208(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x2218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1854[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_SaveSystem_C*                      CallFunc_SGK_GetSaveGame_SaveGame;                 // 0x2220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x2228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface;    // 0x2230(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x2240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_53;                   // 0x2241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_54;                   // 0x2242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1856[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  Temp_name_Variable_1;                              // 0x2244(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1858[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0x2250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class APlayerState*                          CallFunc_Array_Get_Item_1;                         // 0x2258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x2260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_55;                   // 0x2265(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_185A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UBP_CharacterComponent_C*              CallFunc_GetComponentByClass_ReturnValue;          // 0x2268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_56;                   // 0x2270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x2271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x2272(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_185B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  K2Node_CustomEvent_NotifyName_5;                   // 0x2274(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x227C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_185D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector2D                             K2Node_CustomEvent_LookAtRotation;                 // 0x2280(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;  // 0x2290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_185E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AController*                           CallFunc_GetController_ReturnValue_11;             // 0x2298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UBP_PlayerBuildingComponent_C*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x22A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_2;                   // 0x22A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsLocallyControlled_ReturnValue_3;        // 0x22B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1860[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class AController*                           CallFunc_GetController_ReturnValue_12;             // 0x22B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue_2;        // 0x22C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           K2Node_Event_NewController;                        // 0x22C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0x22D0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_6;                   // 0x2330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2338(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x2348(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_1;           // 0x2350(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp_1;            // 0x2358(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x2360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2364(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1865[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x2378(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x2380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x2388(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x2390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x2394(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1866[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x2398(0xE8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x2480(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_8;        // 0x2498(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_57;                   // 0x24B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1868[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FHitResult                            K2Node_Event_Hit;                                  // 0x24B8(0xE8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	TArray<class AActor*>                        CallFunc_GetAttachedActors_OutActors;              // 0x25A0(0x10)(ReferenceParm)
	//	TArray<class UPrimitiveComponent*>           K2Node_CustomEvent_Components;                     // 0x25B0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	//	TArray<class UPrimitiveComponent*>           K2Node_Event_Components;                           // 0x25C0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	//	class UPrimitiveComponent*                   CallFunc_Array_Get_Item_2;                         // 0x25D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x25D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x25DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_186B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x25E0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x25F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon_2;     // 0x25F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0x2600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_186D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon_3;     // 0x2608(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0x2610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_186F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x2614(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class ABP_SGKMasterCharacter_C*              CallFunc_Array_Get_Item_3;                         // 0x2618(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x2620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x2621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1871[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_9;        // 0x2628(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x2640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x2648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x2649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1873[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  K2Node_CustomEvent_NotifyName_3;                   // 0x264C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2654(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x2655(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x2656(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_58;                   // 0x2657(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x2658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1875[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_GetUpVector_ReturnValue;                  // 0x2660(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_GetUpVector_ReturnValue_1;                // 0x2678(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_7;                   // 0x2690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x2698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_CheckIfPlanting_CurrentlyPlanting;        // 0x2699(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_CheckIfPlanting_CurrentlyPlanting_1;      // 0x269A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_CheckIfPlanting_CurrentlyPlanting_2;      // 0x269B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_CheckIfPlanting_CurrentlyPlanting_3;      // 0x269C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1876[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x26A0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x26B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1879[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x26B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x26B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_187B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x26BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class AController*                           CallFunc_GetController_ReturnValue_13;             // 0x26C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_5;           // 0x26C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0x26D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_187D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x26D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x26F0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_8;                   // 0x2700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_36;                             // 0x2708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x2709(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_187F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x270C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsLocallyControlled_ReturnValue_4;        // 0x271C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_CanStandUp__Yes;                          // 0x271D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1881[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  K2Node_CustomEvent_NotifyName_9;                   // 0x2720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_VLerp_ReturnValue_3;                      // 0x2728(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_5;  // 0x2740(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	bool                                         K2Node_CustomEvent_bProne__1;                      // 0x2828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_CustomEvent_bProne_;                        // 0x2829(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1884[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x2830(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x2838(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_6;           // 0x2848(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0x2850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1886[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_10;       // 0x2858(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class USoundBase*                            K2Node_CustomEvent_Sound_2;                        // 0x2870(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  Temp_name_Variable_2;                              // 0x2878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class USoundBase*                            K2Node_CustomEvent_Sound_1;                        // 0x2880(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_11;       // 0x2888(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_59;                   // 0x28A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1889[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class USoundBase*                            K2Node_CustomEvent_Sound;                          // 0x28A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_10;                  // 0x28B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x28B8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_11;                  // 0x28C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x28D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x28D8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_GetActorUpVector_ReturnValue_1;           // 0x28E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_12;                  // 0x2900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class ABP_MasterSniperWeapon_C*              K2Node_DynamicCast_AsBP_Master_Sniper_Weapon;      // 0x2908(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_20;                    // 0x2910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_188D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_MasterSniperWeapon_C*              K2Node_DynamicCast_AsBP_Master_Sniper_Weapon_1;    // 0x2918(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_21;                    // 0x2920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_188F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x2924(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1890[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_MasterSniperWeapon_C*              K2Node_DynamicCast_AsBP_Master_Sniper_Weapon_2;    // 0x2938(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_22;                    // 0x2940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1891[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  K2Node_CustomEvent_NotifyName_13;                  // 0x2944(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x294C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_14;                  // 0x295C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class EMoveComponentAction              Temp_byte_Variable;                                // 0x2964(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1892[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x2968(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	enum class EMovementMode                     Temp_byte_Variable_1;                              // 0x2978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class EMovementMode                     Temp_byte_Variable_2;                              // 0x2979(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_37;                             // 0x297A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1893[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FKey                                  K2Node_InputActionEvent_Key_7;                     // 0x2980(0x18)(HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x2998(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class EMovementMode                     K2Node_Select_Default_7;                           // 0x2999(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1894[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class FName                                  Temp_name_Variable_3;                              // 0x299C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_15;                  // 0x29A4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x29AC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_16;                  // 0x29BC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_38;                             // 0x29C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x29C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_1896[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x29C8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_17;                  // 0x29D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x29E0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_18;                  // 0x29F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x29F8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_19;                  // 0x2A08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_39;                             // 0x2A10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_189A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x2A14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	class FName                                  K2Node_CustomEvent_NotifyName_4;                   // 0x2A24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x2A2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Variable_40;                             // 0x2A3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_189D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_Select_Default_8;                           // 0x2A40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_LeftAxis_Forward;                         // 0x2A48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_BackwardAxis_Forward;                     // 0x2A50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x2A58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_7;      // 0x2A60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_RightAxis_Forward;                        // 0x2A68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x2A70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       CallFunc_ForwardAxis_Forward;                      // 0x2A78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	class AActor*                                CallFunc_Array_Get_Item_4;                         // 0x2A80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x2A88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character_1;     // 0x2A90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_DynamicCast_bSuccess_23;                    // 0x2A98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	TScriptInterface<class IBP_SGKCharacterInterface_C> CallFunc_Peak_GetTeam_self_CastInput;              // 0x2AA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	enum class EPeak53Teams                      CallFunc_Peak_GetTeam_CharacterTeam_1;             // 0x2AB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x2AB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UBP_InteractionContextMenu_C*          CallFunc_ContextMenu_ContextMenu;                  // 0x2AB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2AC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_60;                   // 0x2AC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         K2Node_Select_Default_9;                           // 0x2AC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x2AC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x2AC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	class UBP_InteractionContextMenu_C*          CallFunc_ContextMenu_ContextMenu_1;                // 0x2AC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_61;                   // 0x2AD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x2AD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_5;         // 0x2AD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	float                                        CallFunc_BreakRotator_Roll_5;                      // 0x2AF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_5;                     // 0x2AF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_5;                       // 0x2AF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Not_PreBool_ReturnValue_9;                // 0x2AFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue_3;                // 0x2B00(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_6;         // 0x2B18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FVector                               CallFunc_GetRightVector_ReturnValue;               // 0x2B30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Roll_6;                      // 0x2B48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_6;                     // 0x2B4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_6;                       // 0x2B50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue_4;                // 0x2B58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	bool                                         Temp_bool_Variable_41;                             // 0x2B70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x2B78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               K2Node_Select_Default_10;                          // 0x2B90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_Select_Default_11;                          // 0x2BA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_7;         // 0x2BB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_8;         // 0x2BC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	float                                        CallFunc_BreakRotator_Roll_7;                      // 0x2BE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_7;                     // 0x2BE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_7;                       // 0x2BE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Roll_8;                      // 0x2BEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Pitch_8;                     // 0x2BF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_BreakRotator_Yaw_8;                       // 0x2BF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue_5;                // 0x2BF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue_6;                // 0x2C10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	struct FVector                               CallFunc_GetRightVector_ReturnValue_1;             // 0x2C28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x2C40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_62;                   // 0x2C58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_63;                   // 0x2C59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_64;                   // 0x2C5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_65;                   // 0x2C5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2C5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x2C60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x2C64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x2C68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       Temp_real_Variable_77;                             // 0x2C70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FRotator                              CallFunc_MakeRotator_ReturnValue_7;                // 0x2C78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	//	double                                       K2Node_Select_Default_12;                          // 0x2C90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Add_DoubleDouble_ReturnValue_5;           // 0x2C98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_MakeVector_ReturnValue_6;                 // 0x2CA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FVector                               CallFunc_VLerp_ReturnValue_4;                      // 0x2CB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_6;  // 0x2CD0(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x2DB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x2DB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x2DC0(0x10)(ConstParm, ReferenceParm)
	//	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0x2DD0(0x10)(ConstParm, ReferenceParm)
	//	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_12;       // 0x2DE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	TArray<class AActor*>                        CallFunc_SphereOverlapActors_OutActors;            // 0x2DF8(0x10)(ReferenceParm)
	//	bool                                         CallFunc_SphereOverlapActors_ReturnValue;          // 0x2E08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_66;                   // 0x2E09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         Temp_bool_IsClosed_Variable;                       // 0x2E0A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	bool                                         CallFunc_IsValid_ReturnValue_67;                   // 0x2E0B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x2E10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_VariableSet_CameraLagSpeed_ImplicitCast;    // 0x2E18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x2E20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_Alpha_ImplicitCast_1;                // 0x2E28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetCapsuleSize_InHalfHeight_ImplicitCast; // 0x2E30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetCapsuleSize_InRadius_ImplicitCast;     // 0x2E34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_LookInput_InputValue_ImplicitCast;        // 0x2E38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_LookInput_InputValue_ImplicitCast_1;      // 0x2E3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_VariableSet_LeanAlpha_ImplicitCast;         // 0x2E40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x2E48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       K2Node_VariableSet_LeanAlpha_ImplicitCast_1;       // 0x2E50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_MakeRotator_Roll_ImplicitCast_1;          // 0x2E58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x2E5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_VLerp_Alpha_ImplicitCast_1;               // 0x2E60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_VLerp_Alpha_ImplicitCast_2;               // 0x2E64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_MakeRotator_Roll_ImplicitCast_2;          // 0x2E68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_VLerp_Alpha_ImplicitCast_3;               // 0x2E6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x2E70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x2E78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_MakeVector2D_X_ImplicitCast;              // 0x2E80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       CallFunc_Lerp_Alpha_ImplicitCast_2;                // 0x2E88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x2E90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1; // 0x2E94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2; // 0x2E98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	uint8                                        Pad_18C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	//	double                                       CallFunc_Lerp_Alpha_ImplicitCast_3;                // 0x2EA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3; // 0x2EA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4; // 0x2EAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5; // 0x2EB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        K2Node_Timeline_NewTime_ImplicitCast;              // 0x2EB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_VariableSet_LeanAlpha_ImplicitCast_2;       // 0x2EB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_AddMovementInput_ScaleValue_ImplicitCast; // 0x2EC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_AddMovementInput_ScaleValue_ImplicitCast_1; // 0x2EC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	double                                       K2Node_VariableSet_LeanAlpha_ImplicitCast_3;       // 0x2EC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_AddMovementInput_ScaleValue_ImplicitCast_2; // 0x2ED0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_AddMovementInput_ScaleValue_ImplicitCast_3; // 0x2ED4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	float                                        CallFunc_MakeRotator_Roll_ImplicitCast_3;          // 0x2ED8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


