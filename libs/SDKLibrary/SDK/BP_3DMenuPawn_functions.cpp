#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_3DMenuPawn

#include "Basic.hpp"

#include "BP_3DMenuPawn_classes.hpp"
#include "BP_3DMenuPawn_parameters.hpp"


namespace SDK
{

// Function BP_3DMenuPawn.BP_3DMenuPawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_3DMenuPawn_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_3DMenuPawn_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_3DMenuPawn.BP_3DMenuPawn_C.UpdateChatWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Send                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    TeamChat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DMenuPawn_C::UpdateChatWindow(const class FText& Send, const class FText& Message, bool TeamChat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_3DMenuPawn_C", "UpdateChatWindow");

	Params::BP_3DMenuPawn_C_UpdateChatWindow Parms{};

	Parms.Send = std::move(Send);
	Parms.Message = std::move(Message);
	Parms.TeamChat = TeamChat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_3DMenuPawn.BP_3DMenuPawn_C.ServerSendMesage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Messge                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_3DMenuPawn_C::ServerSendMesage(const class FText& Messge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_3DMenuPawn_C", "ServerSendMesage");

	Params::BP_3DMenuPawn_C_ServerSendMesage Parms{};

	Parms.Messge = std::move(Messge);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_3DMenuPawn.BP_3DMenuPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_3DMenuPawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_3DMenuPawn_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_3DMenuPawn.BP_3DMenuPawn_C.ExecuteUbergraph_BP_3DMenuPawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DMenuPawn_C::ExecuteUbergraph_BP_3DMenuPawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_3DMenuPawn_C", "ExecuteUbergraph_BP_3DMenuPawn");

	Params::BP_3DMenuPawn_C_ExecuteUbergraph_BP_3DMenuPawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_3DMenuPawn.BP_3DMenuPawn_C.3DMenuPawnCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_3DMenuCommands                        Command                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_MenuCameras                           Camera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ArsenalType                           ArsenalType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DMenuPawn_C::ThreeDMenuPawnCommand(E_3DMenuCommands Command, E_MenuCameras Camera, E_ArsenalType ArsenalType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_3DMenuPawn_C", "3DMenuPawnCommand");

	Params::BP_3DMenuPawn_C_ThreeDMenuPawnCommand Parms{};

	Parms.Command = Command;
	Parms.Camera = Camera;
	Parms.ArsenalType = ArsenalType;

	UObject::ProcessEvent(Func, &Parms);
}

}

