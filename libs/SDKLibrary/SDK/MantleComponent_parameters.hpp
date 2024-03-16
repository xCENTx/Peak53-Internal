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

// 0x4A (0x4A - 0x0)
// Function MantleComponent.MantleComponent_C.GetMantleAsset
struct UMantleComponent_C_GetMantleAsset_Params
{
public:
	enum class EALSMantleType                    MantleType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALSOverlayState                  CurrentOverlayState;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_463A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSMantleAsset                       ReturnValue;                                       // 0x8(0x40)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


