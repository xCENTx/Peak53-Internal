#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_3DMenuPawn.BPI_3DMenuPawn_C
class IBPI_3DMenuPawn_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_3DMenuPawn_C* GetDefaultObj();

	void UpdateChatWindow(class FText Send, class FText Message, bool TeamChat);
	void ServerSendMesage(class FText Messge);
	void ThreeDMenuPawnCommand(enum class E_3DMenuCommands Command, enum class E_MenuCameras Camera, enum class E_ArsenalType ArsenalType);
};

}


