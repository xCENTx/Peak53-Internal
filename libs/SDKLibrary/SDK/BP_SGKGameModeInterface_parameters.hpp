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
// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetInitComponent
struct IBP_SGKGameModeInterface_C_SGK_GetInitComponent_Params
{
public:
	class UBP_GameModeInitComponent_C*           InitComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetResourceManager
struct IBP_SGKGameModeInterface_C_SGK_GetResourceManager_Params
{
public:
	class ABP_ResourceManager_C*                 ResourceManager;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetSaveGame
struct IBP_SGKGameModeInterface_C_SGK_GetSaveGame_Params
{
public:
	class ABP_SaveSystem_C*                      SaveGame;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK SetSaveSystem
struct IBP_SGKGameModeInterface_C_SGK_SetSaveSystem_Params
{
public:
	class ABP_SaveSystem_C*                      SaveSystem;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetGlobalInventory
struct IBP_SGKGameModeInterface_C_SGK_GetGlobalInventory_Params
{
public:
	class ABP_GlobalInventoryManager_C*          GlobalInventory;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


