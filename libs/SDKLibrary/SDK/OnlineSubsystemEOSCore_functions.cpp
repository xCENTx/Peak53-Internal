#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemEOSCore

#include "Basic.hpp"

#include "OnlineSubsystemEOSCore_classes.hpp"
#include "OnlineSubsystemEOSCore_parameters.hpp"


namespace SDK
{

// Function OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy.Create_EOS_Session
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FEOSSessionSetting>SessionSettings                                        (Parm, NativeAccessSpecifierPublic)
// class FString                           SessionName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PublicConnections                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsLanMatch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateEOSSessionCallbackProxy*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCreateEOSSessionCallbackProxy* UCreateEOSSessionCallbackProxy::Create_EOS_Session(class UObject* WorldContextObject, const TMap<class FString, struct FEOSSessionSetting>& SessionSettings, const class FString& SessionName, int32 PublicConnections, bool bIsLanMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreateEOSSessionCallbackProxy", "Create_EOS_Session");

	Params::CreateEOSSessionCallbackProxy_Create_EOS_Session Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SessionSettings = std::move(SessionSettings);
	Parms.SessionName = std::move(SessionName);
	Parms.PublicConnections = PublicConnections;
	Parms.bIsLanMatch = bIsLanMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.FindEOSSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FEOSSessionSearchSetting>SearchSettings                                         (Parm, NativeAccessSpecifierPublic)
// int32                                   MaxResults                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsLanQuery                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindEOSSessionsCallbackProxy*    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFindEOSSessionsCallbackProxy* UFindEOSSessionsCallbackProxy::FindEOSSessions(class UObject* WorldContextObject, const TMap<class FString, struct FEOSSessionSearchSetting>& SearchSettings, int32 MaxResults, bool bIsLanQuery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FindEOSSessionsCallbackProxy", "FindEOSSessions");

	Params::FindEOSSessionsCallbackProxy_FindEOSSessions Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SearchSettings = std::move(SearchSettings);
	Parms.MaxResults = MaxResults;
	Parms.bIsLanQuery = bIsLanQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.OnCompleted
// (Final, Native, Public)
// Parameters:
// bool                                    bSuccessful                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFindEOSSessionsCallbackProxy::OnCompleted(bool bSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FindEOSSessionsCallbackProxy", "OnCompleted");

	Params::FindEOSSessionsCallbackProxy_OnCompleted Parms{};

	Parms.bSuccessful = bSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.ListenForSessionInvites
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(bool bSuccess, class APlayerController* PlayerController, const struct FBlueprintSessionResult& Session)>Callback                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSSubsystemLibrary::ListenForSessionInvites(class APlayerController* PlayerController, const TDelegate<void(bool bSuccess, class APlayerController* PlayerController, const struct FBlueprintSessionResult& Session)>& Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EOSSubsystemLibrary", "ListenForSessionInvites");

	Params::EOSSubsystemLibrary_ListenForSessionInvites Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.StopListeningForSessionInvites
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSSubsystemLibrary::StopListeningForSessionInvites(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EOSSubsystemLibrary", "StopListeningForSessionInvites");

	Params::EOSSubsystemLibrary_StopListeningForSessionInvites Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.Update_EOS_Session
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FEOSSessionSearchSetting>Settings                                               (Parm, NativeAccessSpecifierPublic)
// class FString                           SessionName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PublicConnections                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateEOSSessionCallbackProxy*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateEOSSessionCallbackProxy* UUpdateEOSSessionCallbackProxy::Update_EOS_Session(class UObject* WorldContextObject, const TMap<class FString, struct FEOSSessionSearchSetting>& Settings, const class FString& SessionName, int32 PublicConnections)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UpdateEOSSessionCallbackProxy", "Update_EOS_Session");

	Params::UpdateEOSSessionCallbackProxy_Update_EOS_Session Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Settings = std::move(Settings);
	Parms.SessionName = std::move(SessionName);
	Parms.PublicConnections = PublicConnections;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.OnCompleted
// (Final, Native, Public)
// Parameters:
// class FName                             SessionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bWasSuccessful                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUpdateEOSSessionCallbackProxy::OnCompleted(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpdateEOSSessionCallbackProxy", "OnCompleted");

	Params::UpdateEOSSessionCallbackProxy_OnCompleted Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

