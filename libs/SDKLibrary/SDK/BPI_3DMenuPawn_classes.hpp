#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_3DMenuPawn

#include "Basic.hpp"

#include "E_3DMenuCommands_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "E_ArsenalType_structs.hpp"
#include "E_MenuCameras_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_3DMenuPawn.BPI_3DMenuPawn_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_3DMenuPawn_C final : public IInterface
{
public:
	void ThreeDMenuPawnCommand(E_3DMenuCommands Command, E_MenuCameras Camera, E_ArsenalType ArsenalType);
	void ServerSendMesage(const class FText& Messge);
	void UpdateChatWindow(const class FText& Send, const class FText& Message, bool TeamChat);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_3DMenuPawn_C">();
	}
	static class IBPI_3DMenuPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_3DMenuPawn_C>();
	}
};
static_assert(alignof(IBPI_3DMenuPawn_C) == 0x000008, "Wrong alignment on IBPI_3DMenuPawn_C");
static_assert(sizeof(IBPI_3DMenuPawn_C) == 0x000028, "Wrong size on IBPI_3DMenuPawn_C");

}

