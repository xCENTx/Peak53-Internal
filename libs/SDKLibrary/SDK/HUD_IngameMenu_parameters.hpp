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

// 0x11 (0x11 - 0x0)
// Function HUD_IngameMenu.HUD_IngameMenu_C.ShowFPSDisplay
struct AHUD_IngameMenu_C_ShowFPSDisplay_Params
{
public:
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomUserSettings_C*                 K2Node_DynamicCast_AsCustom_User_Settings;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B (0x2B - 0x0)
// Function HUD_IngameMenu.HUD_IngameMenu_C.AcceptedTerms
struct AHUD_IngameMenu_C_AcceptedTerms_Params
{
public:
	bool                                         AcceptedTerms;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_567A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformUserName_ReturnValue;          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTermsAndConditions_C*                 K2Node_DynamicCast_AsTerms_and_Conditions;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function HUD_IngameMenu.HUD_IngameMenu_C.IsVisible
struct AHUD_IngameMenu_C_IsVisible_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_IngameMenu.HUD_IngameMenu_C.CustomEvent
struct AHUD_IngameMenu_C_CustomEvent_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function HUD_IngameMenu.HUD_IngameMenu_C.ExecuteUbergraph_HUD_IngameMenu
struct AHUD_IngameMenu_C_ExecuteUbergraph_HUD_IngameMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_IsVisible;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5680[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5681[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AcceptedTerms_AcceptedTerms;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5682[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTernsAndConditions_C*                 CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue_2;  // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMainMenu_C*                           CallFunc_Create_ReturnValue_1;                     // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


