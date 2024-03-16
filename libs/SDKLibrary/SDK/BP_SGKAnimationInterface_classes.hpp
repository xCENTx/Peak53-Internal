#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKAnimationInterface.BP_SGKAnimationInterface_C
class IBP_SGKAnimationInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKAnimationInterface_C* GetDefaultObj();

	void SGK_UpdateHoldableAnimations(class ABP_MasterHoldable_C* Holdable);
	void SGK_EndChamberMontage();
	void SGK_UpdateAnimationState(enum class E_AnimationState AnimationState);
};

}


