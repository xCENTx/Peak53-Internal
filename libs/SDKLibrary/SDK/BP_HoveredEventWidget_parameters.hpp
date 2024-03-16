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

// 0x98 (0x98 - 0x0)
// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.OnMouseLeave
struct UBP_HoveredEventWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.OnMouseEnter
struct UBP_HoveredEventWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x178 (0x178 - 0x0)
// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.ExecuteUbergraph_BP_HoveredEventWidget
struct UBP_HoveredEventWidget_C_ExecuteUbergraph_BP_HoveredEventWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x8(0x98)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xA0(0x40)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xE0(0x98)(ConstParm)
};

}
}


