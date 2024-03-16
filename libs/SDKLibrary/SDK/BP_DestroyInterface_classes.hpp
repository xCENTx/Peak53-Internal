#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_DestroyInterface.BP_DestroyInterface_C
class IBP_DestroyInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_DestroyInterface_C* GetDefaultObj();

	void ActorRef(class ABP_MasterBuildPart_C** BuildPartRef);
	void DestroyDetonate();
};

}


