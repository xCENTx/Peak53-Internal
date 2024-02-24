#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE9 (0x111 - 0x28)
// BlueprintGeneratedClass BP_PMM_Savegame.BP_PMM_Savegame_C
class UBP_PMM_Savegame_C : public USaveGame
{
public:
	class FString                                Settings_General_Language;                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       Settings_Control_MouseSen;                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Settings_Control_GamepadSen;                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Settings_Control_InvMouse;                         // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Settings_Control_InvGamepad;                       // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, double>                    Settings_Input_AxisMappingValueMap;                // 0x50(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FKey>               Settings_Input_Mappings;                           // 0xA0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Settings_Audio_MasterVolume;                       // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Settings_Audio_SFX_Volume;                         // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Settings_Audio_MusicVolume;                        // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Settings_Audio_DialogueVolume;                     // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Settings_Audio_MusicOn;                            // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PMM_Savegame_C* GetDefaultObj();

};

}


