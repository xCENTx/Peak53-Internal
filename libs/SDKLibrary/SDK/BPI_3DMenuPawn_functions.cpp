#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_3DMenuPawn.BPI_3DMenuPawn_C
// (None)

class UClass* IBPI_3DMenuPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_3DMenuPawn_C");

	return Clss;
}


// BPI_3DMenuPawn_C BPI_3DMenuPawn.Default__BPI_3DMenuPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_3DMenuPawn_C* IBPI_3DMenuPawn_C::GetDefaultObj()
{
	static class IBPI_3DMenuPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_3DMenuPawn_C*>(IBPI_3DMenuPawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_3DMenuPawn.BPI_3DMenuPawn_C.UpdateChatWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Send                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               TeamChat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_3DMenuPawn_C::UpdateChatWindow(class FText Send, class FText Message, bool TeamChat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_3DMenuPawn_C", "UpdateChatWindow");

	Params::IBPI_3DMenuPawn_C_UpdateChatWindow_Params Parms{};

	Parms.Send = Send;
	Parms.Message = Message;
	Parms.TeamChat = TeamChat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_3DMenuPawn.BPI_3DMenuPawn_C.ServerSendMesage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Messge                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_3DMenuPawn_C::ServerSendMesage(class FText Messge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_3DMenuPawn_C", "ServerSendMesage");

	Params::IBPI_3DMenuPawn_C_ServerSendMesage_Params Parms{};

	Parms.Messge = Messge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_3DMenuPawn.BPI_3DMenuPawn_C.3DMenuPawnCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_3DMenuCommands        Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MenuCameras           Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ArsenalType           ArsenalType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_3DMenuPawn_C::ThreeDMenuPawnCommand(enum class E_3DMenuCommands Command, enum class E_MenuCameras Camera, enum class E_ArsenalType ArsenalType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_3DMenuPawn_C", "3DMenuPawnCommand");

	Params::IBPI_3DMenuPawn_C_ThreeDMenuPawnCommand_Params Parms{};

	Parms.Command = Command;
	Parms.Camera = Camera;
	Parms.ArsenalType = ArsenalType;

	UObject::ProcessEvent(Func, &Parms);

}

}


