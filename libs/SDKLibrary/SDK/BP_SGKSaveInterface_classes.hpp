#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKSaveInterface.BP_SGKSaveInterface_C
class IBP_SGKSaveInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKSaveInterface_C* GetDefaultObj();

	void SGKSave(class UBP_SGKSaveGame_C* Save);
};

}


