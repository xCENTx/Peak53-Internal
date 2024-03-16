#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass S_LoadoutSave.S_LoadoutSave_C
class US_LoadoutSave_C : public USaveGame
{
public:
	uint8                                        Active_Loadout;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3667[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_LoadoutData>               Saved_Loadouts;                                    // 0x30(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class US_LoadoutSave_C* GetDefaultObj();

};

}


