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
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetAimedSense
struct IBP_SGKGameInstanceInterface_C_SGK_SetAimedSense_Params
{
public:
	double                                       AimedSense;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK AimedSense
struct IBP_SGKGameInstanceInterface_C_SGK_AimedSense_Params
{
public:
	double                                       AimedSense;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetMouseSense
struct IBP_SGKGameInstanceInterface_C_SGK_SetMouseSense_Params
{
public:
	double                                       MouseSense;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK MouseSense
struct IBP_SGKGameInstanceInterface_C_SGK_MouseSense_Params
{
public:
	double                                       MouseSense;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetVolume
struct IBP_SGKGameInstanceInterface_C_SGK_SetVolume_Params
{
public:
	enum class E_SoundVolumes                    Sound;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Volume;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK Options Save
struct IBP_SGKGameInstanceInterface_C_SGK_Options_Save_Params
{
public:
	class UBP_SGKSettingsSaveData_C*             Settings;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetMenuOpenedLevel
struct IBP_SGKGameInstanceInterface_C_SGK_GetMenuOpenedLevel_Params
{
public:
	bool                                         MenuOpenedLevel;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetMenuOpenedLevel
struct IBP_SGKGameInstanceInterface_C_SGK_SetMenuOpenedLevel_Params
{
public:
	bool                                         MenuOpenedLevel;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetLoadSaveGame
struct IBP_SGKGameInstanceInterface_C_SGK_GetLoadSaveGame_Params
{
public:
	bool                                         LoadSaveGame;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetLoadSaveGame
struct IBP_SGKGameInstanceInterface_C_SGK_SetLoadSaveGame_Params
{
public:
	bool                                         LoadSaveGame;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetSaveGameSlotName
struct IBP_SGKGameInstanceInterface_C_SGK_SetSaveGameSlotName_Params
{
public:
	class FString                                SaveGameSlotName;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetSaveGameSlotName
struct IBP_SGKGameInstanceInterface_C_SGK_GetSaveGameSlotName_Params
{
public:
	class FString                                SaveGameSlotName;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


