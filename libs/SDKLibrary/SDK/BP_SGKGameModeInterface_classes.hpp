#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKGameModeInterface.BP_SGKGameModeInterface_C
class IBP_SGKGameModeInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKGameModeInterface_C* GetDefaultObj();

	void SGK_GetInitComponent(class UBP_GameModeInitComponent_C** InitComponent);
	void SGK_GetResourceManager(class ABP_ResourceManager_C** ResourceManager);
	void SGK_GetSaveGame(class ABP_SaveSystem_C** SaveGame);
	void SGK_SetSaveSystem(class ABP_SaveSystem_C* SaveSystem);
	void SGK_SaveGame();
	void SGK_GetGlobalInventory(class ABP_GlobalInventoryManager_C** GlobalInventory);
};

}


