#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x31 - 0x0)
// Function BPI_3DMenuPawn.BPI_3DMenuPawn_C.UpdateChatWindow
struct IBPI_3DMenuPawn_C_UpdateChatWindow_Params
{
public:
	class FText                                  Send;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Message;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         TeamChat;                                          // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPI_3DMenuPawn.BPI_3DMenuPawn_C.ServerSendMesage
struct IBPI_3DMenuPawn_C_ServerSendMesage_Params
{
public:
	class FText                                  Messge;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3 (0x3 - 0x0)
// Function BPI_3DMenuPawn.BPI_3DMenuPawn_C.3DMenuPawnCommand
struct IBPI_3DMenuPawn_C_ThreeDMenuPawnCommand_Params
{
public:
	enum class E_3DMenuCommands                  Command;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_MenuCameras                     Camera;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ArsenalType                     ArsenalType;                                       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


