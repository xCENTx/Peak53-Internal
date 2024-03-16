#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// BlueprintGeneratedClass BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C
class UBP_SGKSettingsSaveData_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_AudioSave                          AudioSettings;                                     // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_GameSettings                       GameSettings;                                      // 0x40(0x2)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SettingsChanged;                                   // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_SGKSettingsSaveData_C* GetDefaultObj();

	void UpdateGameSettings(const struct FS_GameSettings& Game);
	void SaveSettings();
	void UpdateAudioSettings(const struct FS_AudioSave& Audio);
	void ExecuteUbergraph_BP_SGKSettingsSaveData(int32 EntryPoint, const struct FS_GameSettings& K2Node_CustomEvent_Game, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_AudioSave& K2Node_CustomEvent_Audio);
	void SettingsChanged__DelegateSignature(class UBP_SGKSettingsSaveData_C* SGKSettings);
};

}


