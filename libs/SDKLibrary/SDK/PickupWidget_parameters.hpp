#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PickupWidget.PickupWidget_C.GetVisibility_0
// 0x0038 (0x0038 - 0x0000)
struct PickupWidget_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DCB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                    K2Node_DynamicCast_AsBP_SGKController;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DCC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupWidget_C_GetVisibility_0) == 0x000008, "Wrong alignment on PickupWidget_C_GetVisibility_0");
static_assert(sizeof(PickupWidget_C_GetVisibility_0) == 0x000038, "Wrong size on PickupWidget_C_GetVisibility_0");
static_assert(offsetof(PickupWidget_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'PickupWidget_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupWidget_C_GetVisibility_0, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'PickupWidget_C_GetVisibility_0::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupWidget_C_GetVisibility_0, K2Node_DynamicCast_AsBP_SGKController) == 0x000010, "Member 'PickupWidget_C_GetVisibility_0::K2Node_DynamicCast_AsBP_SGKController' has a wrong offset!");
static_assert(offsetof(PickupWidget_C_GetVisibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PickupWidget_C_GetVisibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PickupWidget_C_GetVisibility_0, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'PickupWidget_C_GetVisibility_0::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupWidget_C_GetVisibility_0, K2Node_DynamicCast_AsBP_SGKMaster_Character) == 0x000028, "Member 'PickupWidget_C_GetVisibility_0::K2Node_DynamicCast_AsBP_SGKMaster_Character' has a wrong offset!");
static_assert(offsetof(PickupWidget_C_GetVisibility_0, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'PickupWidget_C_GetVisibility_0::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

