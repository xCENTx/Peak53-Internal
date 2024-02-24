#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKWidgetInterface.BP_SGKWidgetInterface_C
class IBP_SGKWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKWidgetInterface_C* GetDefaultObj();

	bool SGK_MenuReference(class UWidget* Menu);
	void SGK_ConnectingScreen(class UBP_ServerConnecting_C** ServerConnecting);
};

}


