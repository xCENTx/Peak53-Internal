#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x4B8 - 0x4A9)
// WidgetBlueprintGeneratedClass BP_InGameMenu.BP_InGameMenu_C
class UBP_InGameMenu_C : public UW_Settings_C
{
public:
	uint8                                        Pad_55C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_InGameMenu_C* GetDefaultObj();

	void ExecuteUbergraph_BP_InGameMenu(int32 EntryPoint);
};

}


