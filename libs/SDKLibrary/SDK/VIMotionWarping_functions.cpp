#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VIMotionWarping.VIAnimNotifyState_MotionWarping
// (None)

class UClass* UVIAnimNotifyState_MotionWarping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIAnimNotifyState_MotionWarping");

	return Clss;
}


// VIAnimNotifyState_MotionWarping VIMotionWarping.Default__VIAnimNotifyState_MotionWarping
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIAnimNotifyState_MotionWarping* UVIAnimNotifyState_MotionWarping::GetDefaultObj()
{
	static class UVIAnimNotifyState_MotionWarping* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIAnimNotifyState_MotionWarping*>(UVIAnimNotifyState_MotionWarping::StaticClass()->DefaultObject);

	return Default;
}


// Function VIMotionWarping.VIAnimNotifyState_MotionWarping.AddVIRootMotionModifier
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UVIMotionWarpingComponent*   VIMotionWarpingComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndTime                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVIAnimNotifyState_MotionWarping::AddVIRootMotionModifier(class UVIMotionWarpingComponent* VIMotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIAnimNotifyState_MotionWarping", "AddVIRootMotionModifier");

	Params::UVIAnimNotifyState_MotionWarping_AddVIRootMotionModifier_Params Parms{};

	Parms.VIMotionWarpingComp = VIMotionWarpingComp;
	Parms.Animation = Animation;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VIMotionWarping.VIMotionWarpingUtilities
// (None)

class UClass* UVIMotionWarpingUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIMotionWarpingUtilities");

	return Clss;
}


// VIMotionWarpingUtilities VIMotionWarping.Default__VIMotionWarpingUtilities
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIMotionWarpingUtilities* UVIMotionWarpingUtilities::GetDefaultObj()
{
	static class UVIMotionWarpingUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIMotionWarpingUtilities*>(UVIMotionWarpingUtilities::StaticClass()->DefaultObject);

	return Default;
}


// Function VIMotionWarping.VIMotionWarpingUtilities.MakeVIMotionWarpingSyncPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVIMotionWarpingSyncPoint   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVIMotionWarpingSyncPoint UVIMotionWarpingUtilities::MakeVIMotionWarpingSyncPoint(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIMotionWarpingUtilities", "MakeVIMotionWarpingSyncPoint");

	Params::UVIMotionWarpingUtilities_MakeVIMotionWarpingSyncPoint_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VIMotionWarping.VIMotionWarpingUtilities.GetVIMotionWarpingWindowsFromAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVIMotionWarpingWindowData>OutWindows                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVIMotionWarpingUtilities::GetVIMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FVIMotionWarpingWindowData>* OutWindows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIMotionWarpingUtilities", "GetVIMotionWarpingWindowsFromAnimation");

	Params::UVIMotionWarpingUtilities_GetVIMotionWarpingWindowsFromAnimation_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWindows != nullptr)
		*OutWindows = std::move(Parms.OutWindows);

}


// Function VIMotionWarping.VIMotionWarpingUtilities.GetVIMotionWarpingWindowsForSyncPointFromAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SyncPointName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVIMotionWarpingWindowData>OutWindows                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVIMotionWarpingUtilities::GetVIMotionWarpingWindowsForSyncPointFromAnimation(class UAnimSequenceBase* Animation, class FName SyncPointName, TArray<struct FVIMotionWarpingWindowData>* OutWindows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIMotionWarpingUtilities", "GetVIMotionWarpingWindowsForSyncPointFromAnimation");

	Params::UVIMotionWarpingUtilities_GetVIMotionWarpingWindowsForSyncPointFromAnimation_Params Parms{};

	Parms.Animation = Animation;
	Parms.SyncPointName = SyncPointName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWindows != nullptr)
		*OutWindows = std::move(Parms.OutWindows);

}


// Function VIMotionWarping.VIMotionWarpingUtilities.ExtractVIRootMotionFromAnimation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndTime                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UVIMotionWarpingUtilities::ExtractVIRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIMotionWarpingUtilities", "ExtractVIRootMotionFromAnimation");

	Params::UVIMotionWarpingUtilities_ExtractVIRootMotionFromAnimation_Params Parms{};

	Parms.Animation = Animation;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VIMotionWarping.VIMotionWarpingUtilities.BreakVIMotionWarpingSyncPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVIMotionWarpingSyncPoint   SyncPoint                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVIMotionWarpingUtilities::BreakVIMotionWarpingSyncPoint(struct FVIMotionWarpingSyncPoint& SyncPoint, struct FVector* Location, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIMotionWarpingUtilities", "BreakVIMotionWarpingSyncPoint");

	Params::UVIMotionWarpingUtilities_BreakVIMotionWarpingSyncPoint_Params Parms{};

	Parms.SyncPoint = SyncPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Class VIMotionWarping.VIMotionWarpingComponent
// (None)

class UClass* UVIMotionWarpingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIMotionWarpingComponent");

	return Clss;
}


// VIMotionWarpingComponent VIMotionWarping.Default__VIMotionWarpingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIMotionWarpingComponent* UVIMotionWarpingComponent::GetDefaultObj()
{
	static class UVIMotionWarpingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIMotionWarpingComponent*>(UVIMotionWarpingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VIMotionWarping.VIMotionWarpingComponent.RemoveSyncPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVIMotionWarpingComponent::RemoveSyncPoint(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIMotionWarpingComponent", "RemoveSyncPoint");

	Params::UVIMotionWarpingComponent_RemoveSyncPoint_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VIMotionWarping.VIMotionWarpingComponent.AddOrUpdateSyncPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVIMotionWarpingSyncPoint   SyncPoint                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVIMotionWarpingComponent::AddOrUpdateSyncPoint(class FName Name, struct FVIMotionWarpingSyncPoint& SyncPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIMotionWarpingComponent", "AddOrUpdateSyncPoint");

	Params::UVIMotionWarpingComponent_AddOrUpdateSyncPoint_Params Parms{};

	Parms.Name = Name;
	Parms.SyncPoint = SyncPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VIMotionWarping.VIRootMotionModifierConfig
// (None)

class UClass* UVIRootMotionModifierConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIRootMotionModifierConfig");

	return Clss;
}


// VIRootMotionModifierConfig VIMotionWarping.Default__VIRootMotionModifierConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIRootMotionModifierConfig* UVIRootMotionModifierConfig::GetDefaultObj()
{
	static class UVIRootMotionModifierConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIRootMotionModifierConfig*>(UVIRootMotionModifierConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class VIMotionWarping.VIRootMotionModifierConfig_Warp
// (None)

class UClass* UVIRootMotionModifierConfig_Warp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIRootMotionModifierConfig_Warp");

	return Clss;
}


// VIRootMotionModifierConfig_Warp VIMotionWarping.Default__VIRootMotionModifierConfig_Warp
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIRootMotionModifierConfig_Warp* UVIRootMotionModifierConfig_Warp::GetDefaultObj()
{
	static class UVIRootMotionModifierConfig_Warp* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIRootMotionModifierConfig_Warp*>(UVIRootMotionModifierConfig_Warp::StaticClass()->DefaultObject);

	return Default;
}


// Function VIMotionWarping.VIRootMotionModifierConfig_Warp.AddVIRootMotionModifierSimpleWarp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVIMotionWarpingComponent*   InVIMotionWarpingComp                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InStartTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InSyncPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInWarpTranslation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIgnoreZAxis                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInWarpRotation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVIMotionWarpRotationTypeInRotationType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InWarpRotationTimeMultiplier                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVIRootMotionModifierConfig_Warp::AddVIRootMotionModifierSimpleWarp(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EVIMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIRootMotionModifierConfig_Warp", "AddVIRootMotionModifierSimpleWarp");

	Params::UVIRootMotionModifierConfig_Warp_AddVIRootMotionModifierSimpleWarp_Params Parms{};

	Parms.InVIMotionWarpingComp = InVIMotionWarpingComp;
	Parms.InAnimation = InAnimation;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;
	Parms.InSyncPointName = InSyncPointName;
	Parms.bInWarpTranslation = bInWarpTranslation;
	Parms.bInIgnoreZAxis = bInIgnoreZAxis;
	Parms.bInWarpRotation = bInWarpRotation;
	Parms.InRotationType = InRotationType;
	Parms.InWarpRotationTimeMultiplier = InWarpRotationTimeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VIMotionWarping.VIRootMotionModifierConfig_VaultWarp
// (None)

class UClass* UVIRootMotionModifierConfig_VaultWarp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIRootMotionModifierConfig_VaultWarp");

	return Clss;
}


// VIRootMotionModifierConfig_VaultWarp VIMotionWarping.Default__VIRootMotionModifierConfig_VaultWarp
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIRootMotionModifierConfig_VaultWarp* UVIRootMotionModifierConfig_VaultWarp::GetDefaultObj()
{
	static class UVIRootMotionModifierConfig_VaultWarp* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIRootMotionModifierConfig_VaultWarp*>(UVIRootMotionModifierConfig_VaultWarp::StaticClass()->DefaultObject);

	return Default;
}


// Class VIMotionWarping.VIRootMotionModifierConfig_Scale
// (None)

class UClass* UVIRootMotionModifierConfig_Scale::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIRootMotionModifierConfig_Scale");

	return Clss;
}


// VIRootMotionModifierConfig_Scale VIMotionWarping.Default__VIRootMotionModifierConfig_Scale
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIRootMotionModifierConfig_Scale* UVIRootMotionModifierConfig_Scale::GetDefaultObj()
{
	static class UVIRootMotionModifierConfig_Scale* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIRootMotionModifierConfig_Scale*>(UVIRootMotionModifierConfig_Scale::StaticClass()->DefaultObject);

	return Default;
}


// Function VIMotionWarping.VIRootMotionModifierConfig_Scale.AddVIRootMotionModifierScale
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UVIMotionWarpingComponent*   InVIMotionWarpingComp                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InStartTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InScale                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVIRootMotionModifierConfig_Scale::AddVIRootMotionModifierScale(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIRootMotionModifierConfig_Scale", "AddVIRootMotionModifierScale");

	Params::UVIRootMotionModifierConfig_Scale_AddVIRootMotionModifierScale_Params Parms{};

	Parms.InVIMotionWarpingComp = InVIMotionWarpingComp;
	Parms.InAnimation = InAnimation;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;
	Parms.InScale = InScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VIMotionWarping.VIRootMotionModifierConfig_AdjustmentBlendWarp
// (None)

class UClass* UVIRootMotionModifierConfig_AdjustmentBlendWarp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIRootMotionModifierConfig_AdjustmentBlendWarp");

	return Clss;
}


// VIRootMotionModifierConfig_AdjustmentBlendWarp VIMotionWarping.Default__VIRootMotionModifierConfig_AdjustmentBlendWarp
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIRootMotionModifierConfig_AdjustmentBlendWarp* UVIRootMotionModifierConfig_AdjustmentBlendWarp::GetDefaultObj()
{
	static class UVIRootMotionModifierConfig_AdjustmentBlendWarp* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIRootMotionModifierConfig_AdjustmentBlendWarp*>(UVIRootMotionModifierConfig_AdjustmentBlendWarp::StaticClass()->DefaultObject);

	return Default;
}


// Function VIMotionWarping.VIRootMotionModifierConfig_AdjustmentBlendWarp.GetIKBoneTransformAndAlpha
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OutTransform                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutAlpha                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVIRootMotionModifierConfig_AdjustmentBlendWarp::GetIKBoneTransformAndAlpha(class ACharacter* Character, class FName BoneName, struct FTransform* OutTransform, float* OutAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIRootMotionModifierConfig_AdjustmentBlendWarp", "GetIKBoneTransformAndAlpha");

	Params::UVIRootMotionModifierConfig_AdjustmentBlendWarp_GetIKBoneTransformAndAlpha_Params Parms{};

	Parms.Character = Character;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);

	if (OutAlpha != nullptr)
		*OutAlpha = Parms.OutAlpha;

}


// Function VIMotionWarping.VIRootMotionModifierConfig_AdjustmentBlendWarp.AddVIRootMotionModifierAdjustmentBlendWarp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UVIMotionWarpingComponent*   InVIMotionWarpingComp                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InStartTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InSyncPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInWarpTranslation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIgnoreZAxis                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInWarpRotation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInWarpIKBones                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                InIKBones                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVIRootMotionModifierConfig_AdjustmentBlendWarp::AddVIRootMotionModifierAdjustmentBlendWarp(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, TArray<class FName>& InIKBones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIRootMotionModifierConfig_AdjustmentBlendWarp", "AddVIRootMotionModifierAdjustmentBlendWarp");

	Params::UVIRootMotionModifierConfig_AdjustmentBlendWarp_AddVIRootMotionModifierAdjustmentBlendWarp_Params Parms{};

	Parms.InVIMotionWarpingComp = InVIMotionWarpingComp;
	Parms.InAnimation = InAnimation;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;
	Parms.InSyncPointName = InSyncPointName;
	Parms.bInWarpTranslation = bInWarpTranslation;
	Parms.bInIgnoreZAxis = bInIgnoreZAxis;
	Parms.bInWarpRotation = bInWarpRotation;
	Parms.bInWarpIKBones = bInWarpIKBones;
	Parms.InIKBones = InIKBones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VIMotionWarping.VIRootMotionModifierConfig_SkewWarp
// (None)

class UClass* UVIRootMotionModifierConfig_SkewWarp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIRootMotionModifierConfig_SkewWarp");

	return Clss;
}


// VIRootMotionModifierConfig_SkewWarp VIMotionWarping.Default__VIRootMotionModifierConfig_SkewWarp
// (Public, ClassDefaultObject, ArchetypeObject)

class UVIRootMotionModifierConfig_SkewWarp* UVIRootMotionModifierConfig_SkewWarp::GetDefaultObj()
{
	static class UVIRootMotionModifierConfig_SkewWarp* Default = nullptr;

	if (!Default)
		Default = static_cast<UVIRootMotionModifierConfig_SkewWarp*>(UVIRootMotionModifierConfig_SkewWarp::StaticClass()->DefaultObject);

	return Default;
}


// Function VIMotionWarping.VIRootMotionModifierConfig_SkewWarp.AddVIRootMotionModifierSkewWarp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVIMotionWarpingComponent*   InVIMotionWarpingComp                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InStartTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InSyncPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInWarpTranslation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIgnoreZAxis                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInWarpRotation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVIMotionWarpRotationTypeInRotationType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InWarpRotationTimeMultiplier                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVIRootMotionModifierConfig_SkewWarp::AddVIRootMotionModifierSkewWarp(class UVIMotionWarpingComponent* InVIMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InSyncPointName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EVIMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIRootMotionModifierConfig_SkewWarp", "AddVIRootMotionModifierSkewWarp");

	Params::UVIRootMotionModifierConfig_SkewWarp_AddVIRootMotionModifierSkewWarp_Params Parms{};

	Parms.InVIMotionWarpingComp = InVIMotionWarpingComp;
	Parms.InAnimation = InAnimation;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;
	Parms.InSyncPointName = InSyncPointName;
	Parms.bInWarpTranslation = bInWarpTranslation;
	Parms.bInIgnoreZAxis = bInIgnoreZAxis;
	Parms.bInWarpRotation = bInWarpRotation;
	Parms.InRotationType = InRotationType;
	Parms.InWarpRotationTimeMultiplier = InWarpRotationTimeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


