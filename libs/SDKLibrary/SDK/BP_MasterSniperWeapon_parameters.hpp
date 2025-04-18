#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterSniperWeapon

#include "Basic.hpp"

#include "S_FOVSetting_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.ExecuteUbergraph_BP_MasterSniperWeapon
// 0x0230 (0x0230 - 0x0000)
struct BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_KeyDown;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E4[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E5[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character_1;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E6[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E7[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MagnifiedScope_C*                   K2Node_DynamicCast_AsBP_Magnified_Scope;           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E8[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x00E8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_CustomEvent_bZoomIn;                        // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Select_Zoom_FOV_bDoZoom;                  // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E9[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface;    // 0x01D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EA[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraComponent*                       CallFunc_SGK_CharacterCamera_CurrentCamera;        // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    CallFunc_SGK_CharacterCamera_CurrentSpringArm;     // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EB[0x6];                                     // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_A_ImplicitCast;                      // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast; // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon) == 0x000010, "Wrong alignment on BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon");
static_assert(sizeof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon) == 0x000230, "Wrong size on BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, EntryPoint) == 0x000000, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_Event_KeyDown) == 0x000005, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_Event_KeyDown' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_IsValid_ReturnValue_1) == 0x000006, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_AsBP_SGKMaster_Character) == 0x000008, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_AsBP_SGKMaster_Character' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_AsBP_SGKMaster_Character_1) == 0x000020, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_AsBP_SGKMaster_Character_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000030, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000048, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x0000C8, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000D0, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_AsBP_Magnified_Scope) == 0x0000D8, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_AsBP_Magnified_Scope' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_bSuccess_2) == 0x0000E0, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_K2_AddRelativeLocation_SweepHitResult) == 0x0000E8, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_K2_AddRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_CustomEvent_bZoomIn) == 0x0001D0, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_CustomEvent_bZoomIn' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_Select_Zoom_FOV_bDoZoom) == 0x0001D1, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_Select_Zoom_FOV_bDoZoom' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_AsBP_SGKCharacter_Interface) == 0x0001D8, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_AsBP_SGKCharacter_Interface' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, K2Node_DynamicCast_bSuccess_3) == 0x0001E8, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_SGK_CharacterCamera_CurrentCamera) == 0x0001F0, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_SGK_CharacterCamera_CurrentCamera' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_SGK_CharacterCamera_CurrentSpringArm) == 0x0001F8, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_SGK_CharacterCamera_CurrentSpringArm' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_Lerp_ReturnValue) == 0x000200, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_IsValid_ReturnValue_2) == 0x000208, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_IsValid_ReturnValue_3) == 0x000209, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000210, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_Lerp_A_ImplicitCast) == 0x000218, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_Lerp_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon, CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast) == 0x000220, "Member 'BP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon::CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast' has a wrong offset!");

// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Get Sighted FOV
// 0x0020 (0x0020 - 0x0000)
struct BP_MasterSniperWeapon_C_Get_Sighted_FOV final
{
public:
	double                                        Param_SightTPFOV;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EC[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_FOVSetting                          CallFunc_Array_Get_Item;                           // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterSniperWeapon_C_Get_Sighted_FOV) == 0x000008, "Wrong alignment on BP_MasterSniperWeapon_C_Get_Sighted_FOV");
static_assert(sizeof(BP_MasterSniperWeapon_C_Get_Sighted_FOV) == 0x000020, "Wrong size on BP_MasterSniperWeapon_C_Get_Sighted_FOV");
static_assert(offsetof(BP_MasterSniperWeapon_C_Get_Sighted_FOV, Param_SightTPFOV) == 0x000000, "Member 'BP_MasterSniperWeapon_C_Get_Sighted_FOV::Param_SightTPFOV' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Get_Sighted_FOV, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000008, "Member 'BP_MasterSniperWeapon_C_Get_Sighted_FOV::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Get_Sighted_FOV, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_MasterSniperWeapon_C_Get_Sighted_FOV::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.HandleZoom
// 0x0001 (0x0001 - 0x0000)
struct BP_MasterSniperWeapon_C_HandleZoom final
{
public:
	bool                                          bZoomIn;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterSniperWeapon_C_HandleZoom) == 0x000001, "Wrong alignment on BP_MasterSniperWeapon_C_HandleZoom");
static_assert(sizeof(BP_MasterSniperWeapon_C_HandleZoom) == 0x000001, "Wrong size on BP_MasterSniperWeapon_C_HandleZoom");
static_assert(offsetof(BP_MasterSniperWeapon_C_HandleZoom, bZoomIn) == 0x000000, "Member 'BP_MasterSniperWeapon_C_HandleZoom::bZoomIn' has a wrong offset!");

// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Select Zoom FOV
// 0x0040 (0x0040 - 0x0000)
struct BP_MasterSniperWeapon_C_Select_Zoom_FOV final
{
public:
	bool                                          bZoomIn;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoZoom;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40ED[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TargetIndex;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewLocalVar;                                       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_FOVSetting                          CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterSniperWeapon_C_Select_Zoom_FOV) == 0x000008, "Wrong alignment on BP_MasterSniperWeapon_C_Select_Zoom_FOV");
static_assert(sizeof(BP_MasterSniperWeapon_C_Select_Zoom_FOV) == 0x000040, "Wrong size on BP_MasterSniperWeapon_C_Select_Zoom_FOV");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, bZoomIn) == 0x000000, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::bZoomIn' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, bDoZoom) == 0x000001, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::bDoZoom' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, TargetIndex) == 0x000004, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::TargetIndex' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, NewLocalVar) == 0x000008, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::NewLocalVar' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000010, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_SelectInt_ReturnValue) == 0x000020, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00003C, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003D, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_Not_PreBool_ReturnValue) == 0x00003E, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Select_Zoom_FOV, CallFunc_BooleanOR_ReturnValue) == 0x00003F, "Member 'BP_MasterSniperWeapon_C_Select_Zoom_FOV::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.SGK ClientSecondaryAction
// 0x0001 (0x0001 - 0x0000)
struct BP_MasterSniperWeapon_C_SGK_ClientSecondaryAction final
{
public:
	bool                                          KeyDown;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterSniperWeapon_C_SGK_ClientSecondaryAction) == 0x000001, "Wrong alignment on BP_MasterSniperWeapon_C_SGK_ClientSecondaryAction");
static_assert(sizeof(BP_MasterSniperWeapon_C_SGK_ClientSecondaryAction) == 0x000001, "Wrong size on BP_MasterSniperWeapon_C_SGK_ClientSecondaryAction");
static_assert(offsetof(BP_MasterSniperWeapon_C_SGK_ClientSecondaryAction, KeyDown) == 0x000000, "Member 'BP_MasterSniperWeapon_C_SGK_ClientSecondaryAction::KeyDown' has a wrong offset!");

// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Update Owner Visibility
// 0x0070 (0x0070 - 0x0000)
struct BP_MasterSniperWeapon_C_Update_Owner_Visibility final
{
public:
	bool                                          bHideOwner;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40F0[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40F1[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40F2[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterSniperWeapon_C_Update_Owner_Visibility) == 0x000008, "Wrong alignment on BP_MasterSniperWeapon_C_Update_Owner_Visibility");
static_assert(sizeof(BP_MasterSniperWeapon_C_Update_Owner_Visibility) == 0x000070, "Wrong size on BP_MasterSniperWeapon_C_Update_Owner_Visibility");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, bHideOwner) == 0x000000, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::bHideOwner' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000018, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, Temp_int_Loop_Counter_Variable_1) == 0x000028, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_GetAttachParentActor_ReturnValue) == 0x000040, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x000050, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_Update_Owner_Visibility, CallFunc_Less_IntInt_ReturnValue_1) == 0x00006C, "Member 'BP_MasterSniperWeapon_C_Update_Owner_Visibility::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.GetLookSensitivityMultiplier
// 0x0030 (0x0030 - 0x0000)
struct BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier final
{
public:
	double                                        Multiplier;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_FOVSetting                          CallFunc_Array_Get_Item;                           // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40F3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier) == 0x000008, "Wrong alignment on BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier");
static_assert(sizeof(BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier) == 0x000030, "Wrong size on BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier");
static_assert(offsetof(BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier, Multiplier) == 0x000000, "Member 'BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier::Multiplier' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier, CallFunc_SelectFloat_ReturnValue_1) == 0x000028, "Member 'BP_MasterSniperWeapon_C_GetLookSensitivityMultiplier::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");

}

