#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKAnimationInterface.BP_SGKAnimationInterface_C
// (None)

class UClass* IBP_SGKAnimationInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKAnimationInterface_C");

	return Clss;
}


// BP_SGKAnimationInterface_C BP_SGKAnimationInterface.Default__BP_SGKAnimationInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKAnimationInterface_C* IBP_SGKAnimationInterface_C::GetDefaultObj()
{
	static class IBP_SGKAnimationInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKAnimationInterface_C*>(IBP_SGKAnimationInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateHoldableAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldable_C*        Holdable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKAnimationInterface_C::SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKAnimationInterface_C", "SGK UpdateHoldableAnimations");

	Params::IBP_SGKAnimationInterface_C_SGK_UpdateHoldableAnimations_Params Parms{};

	Parms.Holdable = Holdable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK EndChamberMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKAnimationInterface_C::SGK_EndChamberMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKAnimationInterface_C", "SGK EndChamberMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKAnimationInterface.BP_SGKAnimationInterface_C.SGK UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AnimationState        AnimationState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKAnimationInterface_C::SGK_UpdateAnimationState(enum class E_AnimationState AnimationState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKAnimationInterface_C", "SGK UpdateAnimationState");

	Params::IBP_SGKAnimationInterface_C_SGK_UpdateAnimationState_Params Parms{};

	Parms.AnimationState = AnimationState;

	UObject::ProcessEvent(Func, &Parms);

}

}


