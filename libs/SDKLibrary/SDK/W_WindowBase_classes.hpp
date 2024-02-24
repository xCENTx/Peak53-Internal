#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3D8 - 0x3C8)
// WidgetBlueprintGeneratedClass W_WindowBase.W_WindowBase_C
class UW_WindowBase_C : public UCommonActivatableWidget
{
public:
	FMulticastInlineDelegateProperty_            ButtonClicked;                                     // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_WindowBase_C* GetDefaultObj();

	void ButtonClicked__DelegateSignature(enum class E_MenuCameras MenuCamera);
};

}


