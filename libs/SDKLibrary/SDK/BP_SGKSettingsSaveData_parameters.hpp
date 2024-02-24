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

// 0x2 (0x2 - 0x0)
// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateGameSettings
struct UBP_SGKSettingsSaveData_C_UpdateGameSettings_Params
{
public:
	struct FS_GameSettings                       Game;                                              // 0x0(0x2)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateAudioSettings
struct UBP_SGKSettingsSaveData_C_UpdateAudioSettings_Params
{
public:
	struct FS_AudioSave                          Audio;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.ExecuteUbergraph_BP_SGKSettingsSaveData
struct UBP_SGKSettingsSaveData_C_ExecuteUbergraph_BP_SGKSettingsSaveData_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_GameSettings                       K2Node_CustomEvent_Game;                           // 0x4(0x2)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue;               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AudioSave                          K2Node_CustomEvent_Audio;                          // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.SettingsChanged__DelegateSignature
struct UBP_SGKSettingsSaveData_C_SettingsChanged__DelegateSignature_Params
{
public:
	class UBP_SGKSettingsSaveData_C*             SGKSettings;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


