#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C
class IBP_SGKGameInstanceInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKGameInstanceInterface_C* GetDefaultObj();

	void SGK_SetAimedSense(double AimedSense);
	void SGK_AimedSense(double* AimedSense);
	void SGK_SetMouseSense(double MouseSense);
	void SGK_MouseSense(double* MouseSense);
	void SGK_SetVolume(enum class E_SoundVolumes Sound, double Volume);
	void SGK_Options_Save(class UBP_SGKSettingsSaveData_C** Settings);
	void SGK_SaveSettings();
	void SGK_GetMenuOpenedLevel(bool* MenuOpenedLevel);
	void SGK_SetMenuOpenedLevel(bool MenuOpenedLevel);
	void SGK_GetLoadSaveGame(bool* LoadSaveGame);
	void SGK_SetLoadSaveGame(bool LoadSaveGame);
	void SGK_SetSaveGameSlotName(const class FString& SaveGameSlotName);
	void SGK_GetSaveGameSlotName(class FString* SaveGameSlotName);
};

}


