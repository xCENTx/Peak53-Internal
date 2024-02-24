#pragma once

// Dumped with Dumper-7!


#include "../pch.h"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Peak53.PKHoldable
// (Actor)

class UClass* APKHoldable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKHoldable");

	return Clss;
}


// PKHoldable Peak53.Default__PKHoldable
// (Public, ClassDefaultObject, ArchetypeObject)

class APKHoldable* APKHoldable::GetDefaultObj()
{
	static class APKHoldable* Default = nullptr;

	if (!Default)
		Default = static_cast<APKHoldable*>(APKHoldable::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKHoldable.GetUnEquipMontage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKHoldable::GetUnEquipMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKHoldable", "GetUnEquipMontage");

	Params::APKHoldable_GetUnEquipMontage_Params Parms{};


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
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKHoldable::GetReloadMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKHoldable", "GetReloadMontage");

	Params::APKHoldable_GetReloadMontage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	return Parms.ReturnValue;

}


// Function Peak53.PKHoldable.GetEquipMontage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKHoldable::GetEquipMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKHoldable", "GetEquipMontage");

	Params::APKHoldable_GetEquipMontage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	return Parms.ReturnValue;

}


// Function Peak53.PKHoldable.GetAnimationSet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPKAnimationSetData         Animations                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void APKHoldable::GetAnimationSet(struct FPKAnimationSetData* Animations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKHoldable", "GetAnimationSet");

	Params::APKHoldable_GetAnimationSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Animations != nullptr)
		*Animations = std::move(Parms.Animations);

}


// Class Peak53.PKAnimationSet
// (None)

class UClass* UPKAnimationSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKAnimationSet");

	return Clss;
}


// PKAnimationSet Peak53.Default__PKAnimationSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKAnimationSet* UPKAnimationSet::GetDefaultObj()
{
	static class UPKAnimationSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKAnimationSet*>(UPKAnimationSet::StaticClass()->DefaultObject);

	return Default;
}


// Class Peak53.PKAssetManager
// (None)

class UClass* UPKAssetManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKAssetManager");

	return Clss;
}


// PKAssetManager Peak53.Default__PKAssetManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKAssetManager* UPKAssetManager::GetDefaultObj()
{
	static class UPKAssetManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKAssetManager*>(UPKAssetManager::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKAssetManager.GetHoldableAnimations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        HoldableClassName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPKAnimationSetData         OutAnimations                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UPKAssetManager::GetHoldableAnimations(class FName& HoldableClassName, struct FPKAnimationSetData* OutAnimations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKAssetManager", "GetHoldableAnimations");

	Params::UPKAssetManager_GetHoldableAnimations_Params Parms{};

	Parms.HoldableClassName = HoldableClassName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAnimations != nullptr)
		*OutAnimations = std::move(Parms.OutAnimations);

}


// Class Peak53.PKCharacter
// (Actor, Pawn)

class UClass* APKCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKCharacter");

	return Clss;
}


// PKCharacter Peak53.Default__PKCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class APKCharacter* APKCharacter::GetDefaultObj()
{
	static class APKCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<APKCharacter*>(APKCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKCharacter.WantsWeaponHot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::WantsWeaponHot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "WantsWeaponHot");

	Params::APKCharacter_WantsWeaponHot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Peak53.PKCharacter.RemoveGameplayTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APKCharacter::RemoveGameplayTag(struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "RemoveGameplayTag");

	Params::APKCharacter_RemoveGameplayTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKCharacter.OnPossessed_Client
// (Event, Public, BlueprintEvent)
// Parameters:

void APKCharacter::OnPossessed_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "OnPossessed_Client");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Peak53.PKCharacter.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::IsAlive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "IsAlive");

	Params::APKCharacter_IsAlive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Peak53.PKCharacter.HasGameplayTagExact
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::HasGameplayTagExact(struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "HasGameplayTagExact");

	Params::APKCharacter_HasGameplayTagExact_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Peak53.PKCharacter.GetGameplayTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer APKCharacter::GetGameplayTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "GetGameplayTags");

	Params::APKCharacter_GetGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Peak53.PKCharacter.CanDance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APKCharacter::CanDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "CanDance");

	Params::APKCharacter_CanDance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Peak53.PKCharacter.AddGameplayTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APKCharacter::AddGameplayTag(struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKCharacter", "AddGameplayTag");

	Params::APKCharacter_AddGameplayTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Peak53.PKCharacterMovementComponent
// (None)

class UClass* UPKCharacterMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKCharacterMovementComponent");

	return Clss;
}


// PKCharacterMovementComponent Peak53.Default__PKCharacterMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKCharacterMovementComponent* UPKCharacterMovementComponent::GetDefaultObj()
{
	static class UPKCharacterMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKCharacterMovementComponent*>(UPKCharacterMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Peak53.PKChatWidget
// (None)

class UClass* UPKChatWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKChatWidget");

	return Clss;
}


// PKChatWidget Peak53.Default__PKChatWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKChatWidget* UPKChatWidget::GetDefaultObj()
{
	static class UPKChatWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKChatWidget*>(UPKChatWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKChatWidget.PrintMessage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPKChatMessage              Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPKChatWidget::PrintMessage(struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKChatWidget", "PrintMessage");

	Params::UPKChatWidget_PrintMessage_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Peak53.PKChatWidget.OnUpdateMessages
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FPKChatMessageArray         Messages                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPKChatWidget::OnUpdateMessages(struct FPKChatMessageArray& Messages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKChatWidget", "OnUpdateMessages");

	Params::UPKChatWidget_OnUpdateMessages_Params Parms{};

	Parms.Messages = Messages;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKChatWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPKChatWidget::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKChatWidget", "Init");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Peak53.PKDeveloperSettings
// (None)

class UClass* UPKDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKDeveloperSettings");

	return Clss;
}


// PKDeveloperSettings Peak53.Default__PKDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKDeveloperSettings* UPKDeveloperSettings::GetDefaultObj()
{
	static class UPKDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKDeveloperSettings*>(UPKDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Peak53.PKGameState
// (Actor)

class UClass* APKGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKGameState");

	return Clss;
}


// PKGameState Peak53.Default__PKGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class APKGameState* APKGameState::GetDefaultObj()
{
	static class APKGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<APKGameState*>(APKGameState::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKGameState.OnRep_ChatMessages
// (Final, Native, Protected)
// Parameters:

void APKGameState::OnRep_ChatMessages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKGameState", "OnRep_ChatMessages");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Peak53.PKLocalDeveloperSettings
// (None)

class UClass* UPKLocalDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKLocalDeveloperSettings");

	return Clss;
}


// PKLocalDeveloperSettings Peak53.Default__PKLocalDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKLocalDeveloperSettings* UPKLocalDeveloperSettings::GetDefaultObj()
{
	static class UPKLocalDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKLocalDeveloperSettings*>(UPKLocalDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKLocalDeveloperSettings.ShouldPlayIntro
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPKLocalDeveloperSettings::ShouldPlayIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKLocalDeveloperSettings", "ShouldPlayIntro");

	Params::UPKLocalDeveloperSettings_ShouldPlayIntro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Peak53.PKMantleComponent
// (None)

class UClass* UPKMantleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKMantleComponent");

	return Clss;
}


// PKMantleComponent Peak53.Default__PKMantleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKMantleComponent* UPKMantleComponent::GetDefaultObj()
{
	static class UPKMantleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKMantleComponent*>(UPKMantleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Peak53.PKPlayerController
// (Actor, PlayerController)

class UClass* APKPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKPlayerController");

	return Clss;
}


// PKPlayerController Peak53.Default__PKPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class APKPlayerController* APKPlayerController::GetDefaultObj()
{
	static class APKPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<APKPlayerController*>(APKPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKPlayerController.SendChatMessage_Server
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FPKChatMessage              Message                                                          (Parm, NativeAccessSpecifierPublic)

void APKPlayerController::SendChatMessage_Server(const struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKPlayerController", "SendChatMessage_Server");

	Params::APKPlayerController_SendChatMessage_Server_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKPlayerController.SendChatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPKChatMessage              Message                                                          (Parm, NativeAccessSpecifierPublic)

void APKPlayerController::SendChatMessage(const struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKPlayerController", "SendChatMessage");

	Params::APKPlayerController_SendChatMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKPlayerController.OnUpdateChat
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FPKChatMessageArray         Messages                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void APKPlayerController::OnUpdateChat(struct FPKChatMessageArray& Messages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKPlayerController", "OnUpdateChat");

	Params::APKPlayerController_OnUpdateChat_Params Parms{};

	Parms.Messages = Messages;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKPlayerController.ListenForMessages
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void APKPlayerController::ListenForMessages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKPlayerController", "ListenForMessages");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKPlayerController.GetMapIntroSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      LevelName                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFound                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPKMapIntroSettings         OutSettings                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void APKPlayerController::GetMapIntroSettings(const class FString& LevelName, bool* bFound, struct FPKMapIntroSettings* OutSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKPlayerController", "GetMapIntroSettings");

	Params::APKPlayerController_GetMapIntroSettings_Params Parms{};

	Parms.LevelName = LevelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	if (OutSettings != nullptr)
		*OutSettings = std::move(Parms.OutSettings);

}


// Function Peak53.PKPlayerController.GetAllMessages
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPKChatMessageArray         OutMessages                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void APKPlayerController::GetAllMessages(struct FPKChatMessageArray* OutMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKPlayerController", "GetAllMessages");

	Params::APKPlayerController_GetAllMessages_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMessages != nullptr)
		*OutMessages = std::move(Parms.OutMessages);

}


// Class Peak53.PKProfilingWidget
// (None)

class UClass* UPKProfilingWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PKProfilingWidget");

	return Clss;
}


// PKProfilingWidget Peak53.Default__PKProfilingWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPKProfilingWidget* UPKProfilingWidget::GetDefaultObj()
{
	static class UPKProfilingWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPKProfilingWidget*>(UPKProfilingWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PKProfilingWidget.StopTrace
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UPKProfilingWidget::StopTrace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKProfilingWidget", "StopTrace");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKProfilingWidget.StartTrace
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UPKProfilingWidget::StartTrace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKProfilingWidget", "StartTrace");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKProfilingWidget.SaveProfilingConfig
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UPKProfilingWidget::SaveProfilingConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKProfilingWidget", "SaveProfilingConfig");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKProfilingWidget.ResetProfilingConfig
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UPKProfilingWidget::ResetProfilingConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKProfilingWidget", "ResetProfilingConfig");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKProfilingWidget.OpenTraceDirectory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UPKProfilingWidget::OpenTraceDirectory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKProfilingWidget", "OpenTraceDirectory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKProfilingWidget.LoadProfilingConfig
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UPKProfilingWidget::LoadProfilingConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKProfilingWidget", "LoadProfilingConfig");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PKProfilingWidget.GetTraceCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPKProfilingWidget::GetTraceCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PKProfilingWidget", "GetTraceCommand");

	Params::UPKProfilingWidget_GetTraceCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Peak53.PeakThanksUnreal
// (Actor)

class UClass* APeakThanksUnreal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PeakThanksUnreal");

	return Clss;
}


// PeakThanksUnreal Peak53.Default__PeakThanksUnreal
// (Public, ClassDefaultObject, ArchetypeObject)

class APeakThanksUnreal* APeakThanksUnreal::GetDefaultObj()
{
	static class APeakThanksUnreal* Default = nullptr;

	if (!Default)
		Default = static_cast<APeakThanksUnreal*>(APeakThanksUnreal::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PeakThanksUnreal.ThanksUnreal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void APeakThanksUnreal::ThanksUnreal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PeakThanksUnreal", "ThanksUnreal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Peak53.PeakWeaponHotSubsystem
// (None)

class UClass* UPeakWeaponHotSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PeakWeaponHotSubsystem");

	return Clss;
}


// PeakWeaponHotSubsystem Peak53.Default__PeakWeaponHotSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UPeakWeaponHotSubsystem* UPeakWeaponHotSubsystem::GetDefaultObj()
{
	static class UPeakWeaponHotSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UPeakWeaponHotSubsystem*>(UPeakWeaponHotSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Peak53.PeakWeaponHotSubsystem.RemovePlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsTeam1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APKCharacter*                Player                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPeakWeaponHotSubsystem::RemovePlayer(bool bIsTeam1, class APKCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PeakWeaponHotSubsystem", "RemovePlayer");

	Params::UPeakWeaponHotSubsystem_RemovePlayer_Params Parms{};

	Parms.bIsTeam1 = bIsTeam1;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Peak53.PeakWeaponHotSubsystem.AddPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsTeam1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APKCharacter*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPeakWeaponHotSubsystem::AddPlayer(bool bIsTeam1, class APKCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PeakWeaponHotSubsystem", "AddPlayer");

	Params::UPeakWeaponHotSubsystem_AddPlayer_Params Parms{};

	Parms.bIsTeam1 = bIsTeam1;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


