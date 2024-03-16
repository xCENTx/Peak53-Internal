#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass FFA_PlaceholderEndScreen.FFA_PlaceholderEndScreen_C
class UFFA_PlaceholderEndScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFFA_PlaceholderEndScreen_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_FFA_PlaceholderEndScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


