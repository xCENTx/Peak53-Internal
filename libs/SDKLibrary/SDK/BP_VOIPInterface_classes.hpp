#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_VOIPInterface.BP_VOIPInterface_C
class IBP_VOIPInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_VOIPInterface_C* GetDefaultObj();

	void MSG_AVP_GetVOIPComponent(class UBP_AntizeVOIPComponent_C** VOIPComponentRef);
	void MSG_AVP_GetWidgetVoice(class UWidgetComponent** WidgetVoiceRef);
	void MSG_AVP_GetPlayerUsername(bool* Success_, class FText* UserName);
};

}


