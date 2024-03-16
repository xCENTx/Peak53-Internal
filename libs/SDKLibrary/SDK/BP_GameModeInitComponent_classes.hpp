#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass BP_GameModeInitComponent.BP_GameModeInitComponent_C
class UBP_GameModeInitComponent_C : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            SpawnedInventoryManager;                           // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_GameModeInitComponent_C* GetDefaultObj();

	void SpawnedInventoryManager__DelegateSignature(class ABP_GlobalInventoryManager_C* InventoryManager);
};

}


