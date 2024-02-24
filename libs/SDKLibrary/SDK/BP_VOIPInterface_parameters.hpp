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
// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetVOIPComponent
struct IBP_VOIPInterface_C_MSG_AVP_GetVOIPComponent_Params
{
public:
	class UBP_AntizeVOIPComponent_C*             VOIPComponentRef;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetWidgetVoice
struct IBP_VOIPInterface_C_MSG_AVP_GetWidgetVoice_Params
{
public:
	class UWidgetComponent*                      WidgetVoiceRef;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetPlayerUsername
struct IBP_VOIPInterface_C_MSG_AVP_GetPlayerUsername_Params
{
public:
	bool                                         Success_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UserName;                                          // 0x8(0x18)(Parm, OutParm)
};

}
}


