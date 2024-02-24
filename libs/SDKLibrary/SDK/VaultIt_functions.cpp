#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VaultIt.VIGameplayAbility
// (None)

class UClass* UVIGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIGameplayAbility");

	return Clss;
}


// VIGameplayAbility VaultIt.Default__VIGameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIGameplayAbility* UVIGameplayAbility::GetDefaultObj()
{
	static class UVIGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIGameplayAbility*>(UVIGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VIGameplayAbility.IsPredictionKeyValidForMorePrediction
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIGameplayAbility::IsPredictionKeyValidForMorePrediction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIGameplayAbility", "IsPredictionKeyValidForMorePrediction");

	Params::UVIGameplayAbility_IsPredictionKeyValidForMorePrediction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIGameplayAbility.GetCurrentPredictionKeyStatus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVIGameplayAbility::GetCurrentPredictionKeyStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIGameplayAbility", "GetCurrentPredictionKeyStatus");

	Params::UVIGameplayAbility_GetCurrentPredictionKeyStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaultIt.GameplayAbility_Vault
// (None)

class UClass* UGameplayAbility_Vault::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbility_Vault");

	return Clss;
}


// GameplayAbility_Vault VaultIt.Default__GameplayAbility_Vault
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayAbility_Vault* UGameplayAbility_Vault::GetDefaultObj()
{
	static class UGameplayAbility_Vault* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayAbility_Vault*>(UGameplayAbility_Vault::StaticClass()->DefaultObject);

	return Default;
}


// Class VaultIt.PlayMontageForMeshAndWait
// (None)

class UClass* UPlayMontageForMeshAndWait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayMontageForMeshAndWait");

	return Clss;
}


// PlayMontageForMeshAndWait VaultIt.Default__PlayMontageForMeshAndWait
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UPlayMontageForMeshAndWait* UPlayMontageForMeshAndWait::GetDefaultObj()
{
	static class UPlayMontageForMeshAndWait* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayMontageForMeshAndWait*>(UPlayMontageForMeshAndWait::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.PlayMontageForMeshAndWait.PlayMontageForMeshAndWait
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      Mesh                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAbilityEnds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnimRootMotionTranslationScale                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplicateMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverrideBlendOutTimeForCancelAbility                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverrideBlendOutTimeForStopWhenEndAbility                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayMontageForMeshAndWait*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayMontageForMeshAndWait* UPlayMontageForMeshAndWait::PlayMontageForMeshAndWait(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bReplicateMontage, float OverrideBlendOutTimeForCancelAbility, float OverrideBlendOutTimeForStopWhenEndAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageForMeshAndWait", "PlayMontageForMeshAndWait");

	Params::UPlayMontageForMeshAndWait_PlayMontageForMeshAndWait_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Mesh = Mesh;
	Parms.MontageToPlay = MontageToPlay;
	Parms.Rate = Rate;
	Parms.StartSection = StartSection;
	Parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	Parms.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	Parms.bReplicateMontage = bReplicateMontage;
	Parms.OverrideBlendOutTimeForCancelAbility = OverrideBlendOutTimeForCancelAbility;
	Parms.OverrideBlendOutTimeForStopWhenEndAbility = OverrideBlendOutTimeForStopWhenEndAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaultIt.VIAbilitySystemComponent
// (None)

class UClass* UVIAbilitySystemComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIAbilitySystemComponent");

	return Clss;
}


// VIAbilitySystemComponent VaultIt.Default__VIAbilitySystemComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIAbilitySystemComponent* UVIAbilitySystemComponent::GetDefaultObj()
{
	static class UVIAbilitySystemComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIAbilitySystemComponent*>(UVIAbilitySystemComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VIAbilitySystemComponent.OnRep_ReplicatedAnimMontageForMesh
// (Native, Protected)
// Parameters:

void UVIAbilitySystemComponent::OnRep_ReplicatedAnimMontageForMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIAbilitySystemComponent", "OnRep_ReplicatedAnimMontageForMesh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class VaultIt.VIAnimationInterface
// (None)

class UClass* IVIAnimationInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIAnimationInterface");

	return Clss;
}


// VIAnimationInterface VaultIt.Default__VIAnimationInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IVIAnimationInterface* IVIAnimationInterface::GetDefaultObj()
{
	static class IVIAnimationInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IVIAnimationInterface*>(IVIAnimationInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VIAnimationInterface.SetBoneFBIK
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoneLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVIAnimationInterface::SetBoneFBIK(class FName& BoneName, struct FVector& BoneLocation, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIAnimationInterface", "SetBoneFBIK");

	Params::IVIAnimationInterface_SetBoneFBIK_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.BoneLocation = BoneLocation;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VaultIt.VIAnimInstance
// (None)

class UClass* UVIAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIAnimInstance");

	return Clss;
}


// VIAnimInstance VaultIt.Default__VIAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIAnimInstance* UVIAnimInstance::GetDefaultObj()
{
	static class UVIAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIAnimInstance*>(UVIAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VIAnimInstance.SetBoneFBIK
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoneLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVIAnimInstance::SetBoneFBIK(class FName& BoneName, struct FVector& BoneLocation, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIAnimInstance", "SetBoneFBIK");

	Params::UVIAnimInstance_SetBoneFBIK_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.BoneLocation = BoneLocation;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIAnimInstance.K2_OnStopVault
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVIAnimInstance::K2_OnStopVault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIAnimInstance", "K2_OnStopVault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultIt.VIAnimInstance.K2_OnStartVault
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVIAnimInstance::K2_OnStartVault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIAnimInstance", "K2_OnStartVault");



	UObject::ProcessEvent(Func, nullptr);

}


// Class VaultIt.VIAnimInstanceFP
// (None)

class UClass* UVIAnimInstanceFP::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIAnimInstanceFP");

	return Clss;
}


// VIAnimInstanceFP VaultIt.Default__VIAnimInstanceFP
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIAnimInstanceFP* UVIAnimInstanceFP::GetDefaultObj()
{
	static class UVIAnimInstanceFP* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIAnimInstanceFP*>(UVIAnimInstanceFP::StaticClass()->DefaultObject);

	return Default;
}


// Class VaultIt.VIAnimNotifyState_FBIK
// (None)

class UClass* UVIAnimNotifyState_FBIK::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIAnimNotifyState_FBIK");

	return Clss;
}


// VIAnimNotifyState_FBIK VaultIt.Default__VIAnimNotifyState_FBIK
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIAnimNotifyState_FBIK* UVIAnimNotifyState_FBIK::GetDefaultObj()
{
	static class UVIAnimNotifyState_FBIK* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIAnimNotifyState_FBIK*>(UVIAnimNotifyState_FBIK::StaticClass()->DefaultObject);

	return Default;
}


// Class VaultIt.VIAssetManager
// (None)

class UClass* UVIAssetManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIAssetManager");

	return Clss;
}


// VIAssetManager VaultIt.Default__VIAssetManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIAssetManager* UVIAssetManager::GetDefaultObj()
{
	static class UVIAssetManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIAssetManager*>(UVIAssetManager::StaticClass()->DefaultObject);

	return Default;
}


// Class VaultIt.VIBlueprintFunctionLibrary
// (None)

class UClass* UVIBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIBlueprintFunctionLibrary");

	return Clss;
}


// VIBlueprintFunctionLibrary VaultIt.Default__VIBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIBlueprintFunctionLibrary* UVIBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UVIBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIBlueprintFunctionLibrary*>(UVIBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VIBlueprintFunctionLibrary.VaultAnimSetIsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVIAnimSet                  AnimSet                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIBlueprintFunctionLibrary::VaultAnimSetIsValid(struct FVIAnimSet& AnimSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "VaultAnimSetIsValid");

	Params::UVIBlueprintFunctionLibrary_VaultAnimSetIsValid_Params Parms{};

	Parms.AnimSet = AnimSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.ToggleBoneFBIK
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NewLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVIBoneFBIKData>     Bones                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVIBlueprintFunctionLibrary::ToggleBoneFBIK(class FName& BoneName, struct FVector& NewLocation, bool bEnable, TArray<struct FVIBoneFBIKData>& Bones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "ToggleBoneFBIK");

	Params::UVIBlueprintFunctionLibrary_ToggleBoneFBIK_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.NewLocation = NewLocation;
	Parms.bEnable = bEnable;
	Parms.Bones = Bones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIBlueprintFunctionLibrary.K2_GetBoneForFBIK
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVIBoneFBIKData>     Bones                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVIBoneFBIKData             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVIBoneFBIKData UVIBlueprintFunctionLibrary::K2_GetBoneForFBIK(class FName BoneName, TArray<struct FVIBoneFBIKData>& Bones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "K2_GetBoneForFBIK");

	Params::UVIBlueprintFunctionLibrary_K2_GetBoneForFBIK_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.Bones = Bones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.IsRunningOnServer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIBlueprintFunctionLibrary::IsRunningOnServer(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "IsRunningOnServer");

	Params::UVIBlueprintFunctionLibrary_IsRunningOnServer_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.InterpolateFBIK
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVIBoneFBIKData>     Bones                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVIBlueprintFunctionLibrary::InterpolateFBIK(float DeltaTime, TArray<struct FVIBoneFBIKData>& Bones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "InterpolateFBIK");

	Params::UVIBlueprintFunctionLibrary_InterpolateFBIK_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Bones = Bones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIBlueprintFunctionLibrary.GetVaultInfoFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVIVaultInfo                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVIVaultInfo UVIBlueprintFunctionLibrary::GetVaultInfoFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "GetVaultInfoFromTargetData");

	Params::UVIBlueprintFunctionLibrary_GetVaultInfoFromTargetData_Params Parms{};

	Parms.TargetData = TargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.GetMaxVaultHeight
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVIBlueprintFunctionLibrary::GetMaxVaultHeight(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "GetMaxVaultHeight");

	Params::UVIBlueprintFunctionLibrary_GetMaxVaultHeight_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.GetMaxJumpHeightForCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVIBlueprintFunctionLibrary::GetMaxJumpHeightForCharacter(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "GetMaxJumpHeightForCharacter");

	Params::UVIBlueprintFunctionLibrary_GetMaxJumpHeightForCharacter_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.GetMaxJumpHeight
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Gravity                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              JumpZVelocity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVIBlueprintFunctionLibrary::GetMaxJumpHeight(float Gravity, float JumpZVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "GetMaxJumpHeight");

	Params::UVIBlueprintFunctionLibrary_GetMaxJumpHeight_Params Parms{};

	Parms.Gravity = Gravity;
	Parms.JumpZVelocity = JumpZVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.GetMaxHeightFromGroundForPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Gravity                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              JumpZVelocity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVIBlueprintFunctionLibrary::GetMaxHeightFromGroundForPawn(class APawn* Pawn, float Gravity, float JumpZVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "GetMaxHeightFromGroundForPawn");

	Params::UVIBlueprintFunctionLibrary_GetMaxHeightFromGroundForPawn_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Gravity = Gravity;
	Parms.JumpZVelocity = JumpZVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.GetMaxHeightFromGround
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVIBlueprintFunctionLibrary::GetMaxHeightFromGround(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "GetMaxHeightFromGround");

	Params::UVIBlueprintFunctionLibrary_GetMaxHeightFromGround_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.ComputeAnimationPlayRateFromDuration
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVIBlueprintFunctionLibrary::ComputeAnimationPlayRateFromDuration(class UAnimSequenceBase* Animation, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "ComputeAnimationPlayRateFromDuration");

	Params::UVIBlueprintFunctionLibrary_ComputeAnimationPlayRateFromDuration_Params Parms{};

	Parms.Animation = Animation;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIBlueprintFunctionLibrary.ActorIsAscending
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldUpIsZ                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIBlueprintFunctionLibrary::ActorIsAscending(class AActor* InActor, bool bWorldUpIsZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIBlueprintFunctionLibrary", "ActorIsAscending");

	Params::UVIBlueprintFunctionLibrary_ActorIsAscending_Params Parms{};

	Parms.InActor = InActor;
	Parms.bWorldUpIsZ = bWorldUpIsZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaultIt.VICharacterBase
// (Actor, Pawn)

class UClass* AVICharacterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VICharacterBase");

	return Clss;
}


// VICharacterBase VaultIt.Default__VICharacterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AVICharacterBase* AVICharacterBase::GetDefaultObj()
{
	static class AVICharacterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AVICharacterBase*>(AVICharacterBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VICharacterBase.StopVaultAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AVICharacterBase::StopVaultAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VICharacterBase", "StopVaultAbility");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VICharacterBase.OnStopVaultAbility
// (Event, Public, BlueprintEvent)
// Parameters:

void AVICharacterBase::OnStopVaultAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VICharacterBase", "OnStopVaultAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultIt.VICharacterBase.OnRep_MotionMatch
// (Final, Native, Protected)
// Parameters:

void AVICharacterBase::OnRep_MotionMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VICharacterBase", "OnRep_MotionMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VICharacterBase.IsVaulting
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AVICharacterBase::IsVaulting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VICharacterBase", "IsVaulting");

	Params::AVICharacterBase_IsVaulting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaultIt.VICharacterAbilityBase
// (Actor, Pawn)

class UClass* AVICharacterAbilityBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VICharacterAbilityBase");

	return Clss;
}


// VICharacterAbilityBase VaultIt.Default__VICharacterAbilityBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AVICharacterAbilityBase* AVICharacterAbilityBase::GetDefaultObj()
{
	static class AVICharacterAbilityBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AVICharacterAbilityBase*>(AVICharacterAbilityBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VaultIt.VICharacter
// (Actor, Pawn)

class UClass* AVICharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VICharacter");

	return Clss;
}


// VICharacter VaultIt.Default__VICharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AVICharacter* AVICharacter::GetDefaultObj()
{
	static class AVICharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AVICharacter*>(AVICharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class VaultIt.VIPawnInterface
// (None)

class UClass* IVIPawnInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIPawnInterface");

	return Clss;
}


// VIPawnInterface VaultIt.Default__VIPawnInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IVIPawnInterface* IVIPawnInterface::GetDefaultObj()
{
	static class IVIPawnInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IVIPawnInterface*>(IVIPawnInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VIPawnInterface.StartVaultAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IVIPawnInterface::StartVaultAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "StartVaultAbility");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIPawnInterface.ReplicateMotionMatch
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVIRepMotionMatch           MotionMatch                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IVIPawnInterface::ReplicateMotionMatch(struct FVIRepMotionMatch& MotionMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "ReplicateMotionMatch");

	Params::IVIPawnInterface_ReplicateMotionMatch_Params Parms{};

	Parms.MotionMatch = MotionMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIPawnInterface.OnLocalPlayerVault
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVIPawnInterface::OnLocalPlayerVault(struct FVector& Location, struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "OnLocalPlayerVault");

	Params::IVIPawnInterface_OnLocalPlayerVault_Params Parms{};

	Parms.Location = Location;
	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIPawnInterface.IsWalkable
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVIPawnInterface::IsWalkable(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "IsWalkable");

	Params::IVIPawnInterface_IsWalkable_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.GetVaultTraceSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVITraceSettings            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVITraceSettings IVIPawnInterface::GetVaultTraceSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "GetVaultTraceSettings");

	Params::IVIPawnInterface_GetVaultTraceSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.GetVaultLocationAndDirection
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVIPawnInterface::GetVaultLocationAndDirection(struct FVector* OutLocation, struct FVector* OutDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "GetVaultLocationAndDirection");

	Params::IVIPawnInterface_GetVaultLocationAndDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutDirection != nullptr)
		*OutDirection = std::move(Parms.OutDirection);

}


// Function VaultIt.VIPawnInterface.GetVaultDirection
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IVIPawnInterface::GetVaultDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "GetVaultDirection");

	Params::IVIPawnInterface_GetVaultDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.GetVaultAnimSet
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVIAnimSet                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVIAnimSet IVIPawnInterface::GetVaultAnimSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "GetVaultAnimSet");

	Params::IVIPawnInterface_GetVaultAnimSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.GetPawnVaultComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UVIPawnVaultComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVIPawnVaultComponent* IVIPawnInterface::GetPawnVaultComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "GetPawnVaultComponent");

	Params::IVIPawnInterface_GetPawnVaultComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.GetMotionWarpingComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UVIMotionWarpingComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVIMotionWarpingComponent* IVIPawnInterface::GetMotionWarpingComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "GetMotionWarpingComponent");

	Params::IVIPawnInterface_GetMotionWarpingComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.GetMeshForVaultMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* IVIPawnInterface::GetMeshForVaultMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "GetMeshForVaultMontage");

	Params::IVIPawnInterface_GetMeshForVaultMontage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.CanVault
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVIPawnInterface::CanVault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "CanVault");

	Params::IVIPawnInterface_CanVault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnInterface.CanAutoVaultInCustomMovementMode
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVIPawnInterface::CanAutoVaultInCustomMovementMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnInterface", "CanAutoVaultInCustomMovementMode");

	Params::IVIPawnInterface_CanAutoVaultInCustomMovementMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaultIt.VIPawnVaultComponent
// (None)

class UClass* UVIPawnVaultComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIPawnVaultComponent");

	return Clss;
}


// VIPawnVaultComponent VaultIt.Default__VIPawnVaultComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIPawnVaultComponent* UVIPawnVaultComponent::GetDefaultObj()
{
	static class UVIPawnVaultComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIPawnVaultComponent*>(UVIPawnVaultComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultIt.VIPawnVaultComponent.Vault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVIPawnVaultComponent::Vault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "Vault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIPawnVaultComponent.StopVault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVIPawnVaultComponent::StopVault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "StopVault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIPawnVaultComponent.StopJumping
// (Native, Public, BlueprintCallable)
// Parameters:

void UVIPawnVaultComponent::StopJumping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "StopJumping");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaultIt.VIPawnVaultComponent.Jump
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              GravityZ                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanJump                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsFalling                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIPawnVaultComponent::Jump(float GravityZ, bool bCanJump, bool bIsFalling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "Jump");

	Params::UVIPawnVaultComponent_Jump_Params Parms{};

	Parms.GravityZ = GravityZ;
	Parms.bCanJump = bCanJump;
	Parms.bIsFalling = bIsFalling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.IsVaulting
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIPawnVaultComponent::IsVaulting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "IsVaulting");

	Params::UVIPawnVaultComponent_IsVaulting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.IsCapsuleInfoValid
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIPawnVaultComponent::IsCapsuleInfoValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "IsCapsuleInfoValid");

	Params::UVIPawnVaultComponent_IsCapsuleInfoValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.GetCapsuleInfo
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVICapsuleInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVICapsuleInfo UVIPawnVaultComponent::GetCapsuleInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "GetCapsuleInfo");

	Params::UVIPawnVaultComponent_GetCapsuleInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.ComputeVaultInfoFromResult
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVIVaultInfo                VaultResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVIVaultInfo                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVIVaultInfo UVIPawnVaultComponent::ComputeVaultInfoFromResult(struct FVIVaultInfo& VaultResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "ComputeVaultInfoFromResult");

	Params::UVIPawnVaultComponent_ComputeVaultInfoFromResult_Params Parms{};

	Parms.VaultResult = VaultResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.ComputeVault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVIVaultResult              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVIVaultResult UVIPawnVaultComponent::ComputeVault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "ComputeVault");

	Params::UVIPawnVaultComponent_ComputeVault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.ComputeShouldAutoVault
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIPawnVaultComponent::ComputeShouldAutoVault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "ComputeShouldAutoVault");

	Params::UVIPawnVaultComponent_ComputeShouldAutoVault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.ComputeDefaultAntiCheat
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVIVaultInfo                ClientVaultInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVIVaultResult              ServerVaultResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIPawnVaultComponent::ComputeDefaultAntiCheat(struct FVIVaultInfo& ClientVaultInfo, struct FVIVaultResult& ServerVaultResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "ComputeDefaultAntiCheat");

	Params::UVIPawnVaultComponent_ComputeDefaultAntiCheat_Params Parms{};

	Parms.ClientVaultInfo = ClientVaultInfo;
	Parms.ServerVaultResult = ServerVaultResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.ComputeCustomAntiCheat
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FVIVaultInfo                ClientVaultInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIPawnVaultComponent::ComputeCustomAntiCheat(struct FVIVaultInfo& ClientVaultInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "ComputeCustomAntiCheat");

	Params::UVIPawnVaultComponent_ComputeCustomAntiCheat_Params Parms{};

	Parms.ClientVaultInfo = ClientVaultInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.ComputeAntiCheatResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVIVaultInfo                VaultInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVIPawnVaultComponent::ComputeAntiCheatResult(struct FVIVaultInfo& VaultInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "ComputeAntiCheatResult");

	Params::UVIPawnVaultComponent_ComputeAntiCheatResult_Params Parms{};

	Parms.VaultInfo = VaultInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultIt.VIPawnVaultComponent.CheckVaultInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVIPawnVaultComponent::CheckVaultInput(float DeltaTime, enum class EMovementMode MovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPawnVaultComponent", "CheckVaultInput");

	Params::UVIPawnVaultComponent_CheckVaultInput_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.MovementMode = MovementMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


