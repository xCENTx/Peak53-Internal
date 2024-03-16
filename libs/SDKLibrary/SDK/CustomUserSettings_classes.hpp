#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x4C - 0x28)
// BlueprintGeneratedClass CustomUserSettings.CustomUserSettings_C
class UCustomUserSettings_C : public USaveGame
{
public:
	bool                                         FPSDisplay;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PresetName;                                        // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PresetID;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCustomUserSettings_C* GetDefaultObj();

};

}


