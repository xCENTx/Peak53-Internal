#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPi_PMM_Interface.BPi_PMM_Interface_C
class IBPi_PMM_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPi_PMM_Interface_C* GetDefaultObj();

	void OnResetDefaults();
	void OnApplyChanges();
	void OnInputMethodChanged(bool bUsingGamepad);
};

}


