#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuController

#include "Basic.hpp"

#include "BP_MenuController_classes.hpp"
#include "BP_MenuController_parameters.hpp"


namespace SDK
{

// Function BP_MenuController.BP_MenuController_C.Client_UpdateChat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bTeamChat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuController_C::Client_UpdateChat(const class FText& Sender, const class FText& Text, bool bTeamChat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "Client_UpdateChat");

	Params::BP_MenuController_C_Client_UpdateChat Parms{};

	Parms.Sender = std::move(Sender);
	Parms.Text = std::move(Text);
	Parms.bTeamChat = bTeamChat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuController.BP_MenuController_C.ClientUpdateChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Team_Chat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuController_C::ClientUpdateChat(const class FText& Sender, const class FText& Text, bool Team_Chat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "ClientUpdateChat");

	Params::BP_MenuController_C_ClientUpdateChat Parms{};

	Parms.Sender = std::move(Sender);
	Parms.Text = std::move(Text);
	Parms.Team_Chat = Team_Chat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuController.BP_MenuController_C.CloseRequested
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuController_C::CloseRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "CloseRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuController.BP_MenuController_C.ExecuteUbergraph_BP_MenuController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuController_C::ExecuteUbergraph_BP_MenuController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "ExecuteUbergraph_BP_MenuController");

	Params::BP_MenuController_C_ExecuteUbergraph_BP_MenuController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuController.BP_MenuController_C.GetChatMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TextToSend                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    TeamChat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                SenderPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuController_C::GetChatMessage(const class FText& TextToSend, bool TeamChat, class APlayerController* SenderPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "GetChatMessage");

	Params::BP_MenuController_C_GetChatMessage Parms{};

	Parms.TextToSend = std::move(TextToSend);
	Parms.TeamChat = TeamChat;
	Parms.SenderPC = SenderPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuController.BP_MenuController_C.GetPlayerName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerName                                             (Parm, OutParm)

void ABP_MenuController_C::GetPlayerName(class FText* PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "GetPlayerName");

	Params::BP_MenuController_C_GetPlayerName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerName != nullptr)
		*PlayerName = std::move(Parms.PlayerName);
}


// Function BP_MenuController.BP_MenuController_C.InpActEvt_GlobalChat_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuController_C::InpActEvt_GlobalChat_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "InpActEvt_GlobalChat_K2Node_InputActionEvent_0");

	Params::BP_MenuController_C_InpActEvt_GlobalChat_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuController.BP_MenuController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuController.BP_MenuController_C.SendServerMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MenuController_C::SendServerMessage(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "SendServerMessage");

	Params::BP_MenuController_C_SendServerMessage Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuController.BP_MenuController_C.Server_GetChatMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TextToSend                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bTeamChat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                SenderPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MenuController_C::Server_GetChatMessage(const class FText& TextToSend, bool bTeamChat, class APlayerController* SenderPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "Server_GetChatMessage");

	Params::BP_MenuController_C_Server_GetChatMessage Parms{};

	Parms.TextToSend = std::move(TextToSend);
	Parms.bTeamChat = bTeamChat;
	Parms.SenderPC = SenderPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuController.BP_MenuController_C.SettingsMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuController_C::SettingsMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuController_C", "SettingsMenu");

	UObject::ProcessEvent(Func, nullptr);
}

}

