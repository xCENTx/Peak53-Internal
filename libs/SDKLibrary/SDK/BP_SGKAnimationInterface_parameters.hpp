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
// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateHoldableAnimations
struct IBP_SGKAnimationInterface_C_SGK_UpdateHoldableAnimations_Params
{
public:
	class ABP_MasterHoldable_C*                  Holdable;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateAnimationState
struct IBP_SGKAnimationInterface_C_SGK_UpdateAnimationState_Params
{
public:
	enum class E_AnimationState                  AnimationState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


