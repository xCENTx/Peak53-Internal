#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Peak53

#include "../pch.h"
#include "Basic.hpp"

#include "Peak53_classes.hpp"
#include "Peak53_parameters.hpp"


namespace SDK
{

// Function Peak53.PKGameState.OnRep_ChatMessages
// (Final, Native, Protected)

void APKGameState::OnRep_ChatMessages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKGameState", "OnRep_ChatMessages");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKHoldable.GetAnimationSet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPKAnimationSetData              Animations                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void APKHoldable::GetAnimationSet(struct FPKAnimationSetData* Animations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKHoldable", "GetAnimationSet");

	Params::PKHoldable_GetAnimationSet Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Animations != nullptr)
		*Animations = std::move(Parms.Animations);
}


// Function Peak53.PKHoldable.GetEquipMontage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKHoldable::GetEquipMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKHoldable", "GetEquipMontage");

	Params::PKHoldable_GetEquipMontage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	return Parms.ReturnValue;
}


// Function Peak53.PKHoldable.GetReloadMontage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKHoldable::GetReloadMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKHoldable", "GetReloadMontage");

	Params::PKHoldable_GetReloadMontage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	return Parms.ReturnValue;
}


// Function Peak53.PKHoldable.GetUnEquipMontage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKHoldable::GetUnEquipMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKHoldable", "GetUnEquipMontage");

	Params::PKHoldable_GetUnEquipMontage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	return Parms.ReturnValue;
}


// Function Peak53.PKAssetManager.GetHoldableAnimations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             HoldableClassName                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPKAnimationSetData              OutAnimations                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UPKAssetManager::GetHoldableAnimations(const class FName& HoldableClassName, struct FPKAnimationSetData* OutAnimations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PKAssetManager", "GetHoldableAnimations");

	Params::PKAssetManager_GetHoldableAnimations Parms{};

	Parms.HoldableClassName = HoldableClassName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAnimations != nullptr)
		*OutAnimations = std::move(Parms.OutAnimations);
}


// Function Peak53.PKCharacter.AddGameplayTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APKCharacter::AddGameplayTag(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "AddGameplayTag");

	Params::PKCharacter_AddGameplayTag Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKCharacter.OnPossessed_Client
// (Event, Public, BlueprintEvent)

void APKCharacter::OnPossessed_Client()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "OnPossessed_Client");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Peak53.PKCharacter.RemoveGameplayTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APKCharacter::RemoveGameplayTag(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "RemoveGameplayTag");

	Params::PKCharacter_RemoveGameplayTag Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKCharacter.CanDance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::CanDance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "CanDance");

	Params::PKCharacter_CanDance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Peak53.PKCharacter.GetGameplayTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FGameplayTagContainer      ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

const struct FGameplayTagContainer APKCharacter::GetGameplayTags() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "GetGameplayTags");

	Params::PKCharacter_GetGameplayTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Peak53.PKCharacter.HasGameplayTagExact
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::HasGameplayTagExact(const struct FGameplayTag& Tag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "HasGameplayTagExact");

	Params::PKCharacter_HasGameplayTagExact Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Peak53.PKCharacter.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::IsAlive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "IsAlive");

	Params::PKCharacter_IsAlive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Peak53.PKCharacter.WantsWeaponHot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::WantsWeaponHot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKCharacter", "WantsWeaponHot");

	Params::PKCharacter_WantsWeaponHot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Peak53.PKChatWidget.Init
// (Final, Native, Public, BlueprintCallable)

void UPKChatWidget::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKChatWidget", "Init");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKChatWidget.OnUpdateMessages
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FPKChatMessageArray              Messages                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPKChatWidget::OnUpdateMessages(const struct FPKChatMessageArray& Messages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKChatWidget", "OnUpdateMessages");

	Params::PKChatWidget_OnUpdateMessages Parms{};

	Parms.Messages = std::move(Messages);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKChatWidget.PrintMessage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPKChatMessage                   Message                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPKChatWidget::PrintMessage(const struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKChatWidget", "PrintMessage");

	Params::PKChatWidget_PrintMessage Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Peak53.PKLocalDeveloperSettings.ShouldPlayIntro
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPKLocalDeveloperSettings::ShouldPlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PKLocalDeveloperSettings", "ShouldPlayIntro");

	Params::PKLocalDeveloperSettings_ShouldPlayIntro Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Peak53.PKPlayerController.GetAllMessages
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPKChatMessageArray              OutMessages                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void APKPlayerController::GetAllMessages(struct FPKChatMessageArray* OutMessages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKPlayerController", "GetAllMessages");

	Params::PKPlayerController_GetAllMessages Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMessages != nullptr)
		*OutMessages = std::move(Parms.OutMessages);
}


// Function Peak53.PKPlayerController.GetMapIntroSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           LevelName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPKMapIntroSettings              OutSettings                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void APKPlayerController::GetMapIntroSettings(const class FString& LevelName, bool* bFound, struct FPKMapIntroSettings* OutSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKPlayerController", "GetMapIntroSettings");

	Params::PKPlayerController_GetMapIntroSettings Parms{};

	Parms.LevelName = std::move(LevelName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	if (OutSettings != nullptr)
		*OutSettings = std::move(Parms.OutSettings);
}


// Function Peak53.PKPlayerController.ListenForMessages
// (Final, Native, Public, BlueprintCallable)

void APKPlayerController::ListenForMessages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKPlayerController", "ListenForMessages");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKPlayerController.OnUpdateChat
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FPKChatMessageArray              Messages                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void APKPlayerController::OnUpdateChat(const struct FPKChatMessageArray& Messages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKPlayerController", "OnUpdateChat");

	Params::PKPlayerController_OnUpdateChat Parms{};

	Parms.Messages = std::move(Messages);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKPlayerController.SendChatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPKChatMessage                   Message                                                (Parm, NativeAccessSpecifierPublic)

void APKPlayerController::SendChatMessage(const struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKPlayerController", "SendChatMessage");

	Params::PKPlayerController_SendChatMessage Parms{};

	Parms.Message = std::move(Message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKPlayerController.SendChatMessage_Server
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FPKChatMessage                   Message                                                (Parm, NativeAccessSpecifierPublic)

void APKPlayerController::SendChatMessage_Server(const struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKPlayerController", "SendChatMessage_Server");

	Params::PKPlayerController_SendChatMessage_Server Parms{};

	Parms.Message = std::move(Message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKProfilingWidget.LoadProfilingConfig
// (Final, Native, Protected, BlueprintCallable)

void UPKProfilingWidget::LoadProfilingConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKProfilingWidget", "LoadProfilingConfig");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKProfilingWidget.OpenTraceDirectory
// (Final, Native, Protected, BlueprintCallable)

void UPKProfilingWidget::OpenTraceDirectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKProfilingWidget", "OpenTraceDirectory");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKProfilingWidget.ResetProfilingConfig
// (Final, Native, Protected, BlueprintCallable)

void UPKProfilingWidget::ResetProfilingConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKProfilingWidget", "ResetProfilingConfig");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKProfilingWidget.SaveProfilingConfig
// (Final, Native, Protected, BlueprintCallable)

void UPKProfilingWidget::SaveProfilingConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKProfilingWidget", "SaveProfilingConfig");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKProfilingWidget.StartTrace
// (Final, Native, Protected, BlueprintCallable)

void UPKProfilingWidget::StartTrace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKProfilingWidget", "StartTrace");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKProfilingWidget.StopTrace
// (Final, Native, Protected, BlueprintCallable)

void UPKProfilingWidget::StopTrace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKProfilingWidget", "StopTrace");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PKProfilingWidget.GetTraceCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPKProfilingWidget::GetTraceCommand() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PKProfilingWidget", "GetTraceCommand");

	Params::PKProfilingWidget_GetTraceCommand Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Peak53.PeakThanksUnreal.ThanksUnreal
// (Final, Native, Public, BlueprintCallable)

void APeakThanksUnreal::ThanksUnreal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PeakThanksUnreal", "ThanksUnreal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PeakWeaponHotSubsystem.AddPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bIsTeam1                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APKCharacter*                     Player                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPeakWeaponHotSubsystem::AddPlayer(bool bIsTeam1, class APKCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PeakWeaponHotSubsystem", "AddPlayer");

	Params::PeakWeaponHotSubsystem_AddPlayer Parms{};

	Parms.bIsTeam1 = bIsTeam1;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Peak53.PeakWeaponHotSubsystem.RemovePlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bIsTeam1                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APKCharacter*                     Player                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPeakWeaponHotSubsystem::RemovePlayer(bool bIsTeam1, const class APKCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PeakWeaponHotSubsystem", "RemovePlayer");

	Params::PeakWeaponHotSubsystem_RemovePlayer Parms{};

	Parms.bIsTeam1 = bIsTeam1;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

