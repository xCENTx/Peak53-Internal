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

// 0x30 (0x30 - 0x0)
// Function WB_Infofield.WB_Infofield_C.SetInfo
struct UWB_Infofield_C_SetInfo_Params
{
public:
	class FText                                  Head;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Body;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function WB_Infofield.WB_Infofield_C.ExecuteUbergraph_WB_Infofield
struct UWB_Infofield_C_ExecuteUbergraph_WB_Infofield_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4424[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Head;                           // 0x8(0x18)(None)
	class FText                                  K2Node_CustomEvent_Body;                           // 0x20(0x18)(None)
};

}
}


