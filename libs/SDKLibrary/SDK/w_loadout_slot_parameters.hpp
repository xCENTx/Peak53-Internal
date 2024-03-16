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
// Function w_loadout_slot.w_loadout_slot_C.PreConstruct
struct UW_loadout_slot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function w_loadout_slot.w_loadout_slot_C.ExecuteUbergraph_w_loadout_slot
struct UW_loadout_slot_C_ExecuteUbergraph_w_loadout_slot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USg_lodout_C*                          K2Node_DynamicCast_AsSg_Lodout;                    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance;          // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EquipmentCharacter_C*              CallFunc_GetActorOfClass_ReturnValue;              // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_1;        // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4600[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EquipmentCharacter_C*              CallFunc_GetActorOfClass_ReturnValue_1;            // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_2;        // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_loadout_slot.w_loadout_slot_C.OnButtonPressedGetLoadout__DelegateSignature
struct UW_loadout_slot_C_OnButtonPressedGetLoadout__DelegateSignature_Params
{
public:
	class FString                                CurrentEquipment;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


