#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ALSV4_CPP.ALSAIController
// (Actor)

class UClass* AALSAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSAIController");

	return Clss;
}


// ALSAIController ALSV4_CPP.Default__ALSAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class AALSAIController* AALSAIController::GetDefaultObj()
{
	static class AALSAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<AALSAIController*>(AALSAIController::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSAnimNotifyCameraShake
// (None)

class UClass* UALSAnimNotifyCameraShake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSAnimNotifyCameraShake");

	return Clss;
}


// ALSAnimNotifyCameraShake ALSV4_CPP.Default__ALSAnimNotifyCameraShake
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSAnimNotifyCameraShake* UALSAnimNotifyCameraShake::GetDefaultObj()
{
	static class UALSAnimNotifyCameraShake* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSAnimNotifyCameraShake*>(UALSAnimNotifyCameraShake::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSAnimNotifyFootstep
// (None)

class UClass* UALSAnimNotifyFootstep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSAnimNotifyFootstep");

	return Clss;
}


// ALSAnimNotifyFootstep ALSV4_CPP.Default__ALSAnimNotifyFootstep
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSAnimNotifyFootstep* UALSAnimNotifyFootstep::GetDefaultObj()
{
	static class UALSAnimNotifyFootstep* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSAnimNotifyFootstep*>(UALSAnimNotifyFootstep::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSAnimNotifyGroundedEntryState
// (None)

class UClass* UALSAnimNotifyGroundedEntryState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSAnimNotifyGroundedEntryState");

	return Clss;
}


// ALSAnimNotifyGroundedEntryState ALSV4_CPP.Default__ALSAnimNotifyGroundedEntryState
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSAnimNotifyGroundedEntryState* UALSAnimNotifyGroundedEntryState::GetDefaultObj()
{
	static class UALSAnimNotifyGroundedEntryState* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSAnimNotifyGroundedEntryState*>(UALSAnimNotifyGroundedEntryState::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSBaseCharacter
// (Actor, Pawn)

class UClass* AALSBaseCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSBaseCharacter");

	return Clss;
}


// ALSBaseCharacter ALSV4_CPP.Default__ALSBaseCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AALSBaseCharacter* AALSBaseCharacter::GetDefaultObj()
{
	static class AALSBaseCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AALSBaseCharacter*>(AALSBaseCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSBaseCharacter.WalkAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::WalkAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "WalkAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.VelocityDirectionAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::VelocityDirectionAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "VelocityDirectionAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.StanceAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::StanceAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "StanceAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SprintAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SprintAction(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SprintAction");

	Params::AALSBaseCharacter_SprintAction_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetVisibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               NewSkeletalMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetVisibleMesh(class USkeletalMesh* NewSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetVisibleMesh");

	Params::AALSBaseCharacter_SetVisibleMesh_Params Parms{};

	Parms.NewSkeletalMesh = NewSkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetViewMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSViewMode            NewViewMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetViewMode(enum class EALSViewMode NewViewMode, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetViewMode");

	Params::AALSBaseCharacter_SetViewMode_Params Parms{};

	Parms.NewViewMode = NewViewMode;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetStance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSStance              NewStance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetStance(enum class EALSStance NewStance, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetStance");

	Params::AALSBaseCharacter_SetStance_Params Parms{};

	Parms.NewStance = NewStance;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetRotationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSRotationMode        NewRotationMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetRotationMode(enum class EALSRotationMode NewRotationMode, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetRotationMode");

	Params::AALSBaseCharacter_SetRotationMode_Params Parms{};

	Parms.NewRotationMode = NewRotationMode;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetRightShoulder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewRightShoulder                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetRightShoulder(bool bNewRightShoulder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetRightShoulder");

	Params::AALSBaseCharacter_SetRightShoulder_Params Parms{};

	Parms.bNewRightShoulder = bNewRightShoulder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetOverlayState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSOverlayState        NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetOverlayState(enum class EALSOverlayState NewState, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetOverlayState");

	Params::AALSBaseCharacter_SetOverlayState_Params Parms{};

	Parms.NewState = NewState;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetOverlayOverrideState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetOverlayOverrideState(int32 NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetOverlayOverrideState");

	Params::AALSBaseCharacter_SetOverlayOverrideState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetMovementState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSMovementState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetMovementState(enum class EALSMovementState NewState, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetMovementState");

	Params::AALSBaseCharacter_SetMovementState_Params Parms{};

	Parms.NewState = NewState;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetMovementAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSMovementAction      NewAction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetMovementAction(enum class EALSMovementAction NewAction, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetMovementAction");

	Params::AALSBaseCharacter_SetMovementAction_Params Parms{};

	Parms.NewAction = NewAction;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetGroundedEntryState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSGroundedEntryState  NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetGroundedEntryState(enum class EALSGroundedEntryState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetGroundedEntryState");

	Params::AALSBaseCharacter_SetGroundedEntryState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetGait
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSGait                NewGait                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetGait(enum class EALSGait NewGait, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetGait");

	Params::AALSBaseCharacter_SetGait_Params Parms{};

	Parms.NewGait = NewGait;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetDesiredStance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSStance              NewStance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetDesiredStance(enum class EALSStance NewStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetDesiredStance");

	Params::AALSBaseCharacter_SetDesiredStance_Params Parms{};

	Parms.NewStance = NewStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetDesiredRotationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSRotationMode        NewRotMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetDesiredRotationMode(enum class EALSRotationMode NewRotMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetDesiredRotationMode");

	Params::AALSBaseCharacter_SetDesiredRotationMode_Params Parms{};

	Parms.NewRotMode = NewRotMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetDesiredGait
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSGait                NewGait                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetDesiredGait(enum class EALSGait NewGait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetDesiredGait");

	Params::AALSBaseCharacter_SetDesiredGait_Params Parms{};

	Parms.NewGait = NewGait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetCameraBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UALSPlayerCameraBehavior*    CamBeh                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetCameraBehavior(class UALSPlayerCameraBehavior* CamBeh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetCameraBehavior");

	Params::AALSBaseCharacter_SetCameraBehavior_Params Parms{};

	Parms.CamBeh = CamBeh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.SetActorLocationAndTargetRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NewRotation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AALSBaseCharacter::SetActorLocationAndTargetRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "SetActorLocationAndTargetRotation");

	Params::AALSBaseCharacter_SetActorLocationAndTargetRotation_Params Parms{};

	Parms.NewLocation = NewLocation;
	Parms.NewRotation = NewRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetVisibleMesh
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               NewSkeletalMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetVisibleMesh(class USkeletalMesh* NewSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetVisibleMesh");

	Params::AALSBaseCharacter_Server_SetVisibleMesh_Params Parms{};

	Parms.NewSkeletalMesh = NewSkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetViewMode
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EALSViewMode            NewViewMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetViewMode(enum class EALSViewMode NewViewMode, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetViewMode");

	Params::AALSBaseCharacter_Server_SetViewMode_Params Parms{};

	Parms.NewViewMode = NewViewMode;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetRotationMode
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EALSRotationMode        NewRotationMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetRotationMode(enum class EALSRotationMode NewRotationMode, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetRotationMode");

	Params::AALSBaseCharacter_Server_SetRotationMode_Params Parms{};

	Parms.NewRotationMode = NewRotationMode;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetOverlayState
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EALSOverlayState        NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetOverlayState(enum class EALSOverlayState NewState, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetOverlayState");

	Params::AALSBaseCharacter_Server_SetOverlayState_Params Parms{};

	Parms.NewState = NewState;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetMeshLocationDuringRagdoll
// (Net, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     MeshLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetMeshLocationDuringRagdoll(const struct FVector& MeshLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetMeshLocationDuringRagdoll");

	Params::AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Params Parms{};

	Parms.MeshLocation = MeshLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredStance
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EALSStance              NewStance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetDesiredStance(enum class EALSStance NewStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetDesiredStance");

	Params::AALSBaseCharacter_Server_SetDesiredStance_Params Parms{};

	Parms.NewStance = NewStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredRotationMode
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EALSRotationMode        NewRotMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetDesiredRotationMode(enum class EALSRotationMode NewRotMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetDesiredRotationMode");

	Params::AALSBaseCharacter_Server_SetDesiredRotationMode_Params Parms{};

	Parms.NewRotMode = NewRotMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredGait
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EALSGait                NewGait                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_SetDesiredGait(enum class EALSGait NewGait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_SetDesiredGait");

	Params::AALSBaseCharacter_Server_SetDesiredGait_Params Parms{};

	Parms.NewGait = NewGait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_RagdollStart
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::Server_RagdollStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_RagdollStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_RagdollEnd
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     CharacterLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_RagdollEnd(const struct FVector& CharacterLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_RagdollEnd");

	Params::AALSBaseCharacter_Server_RagdollEnd_Params Parms{};

	Parms.CharacterLocation = CharacterLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Server_PlayMontage
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Server_PlayMontage(class UAnimMontage* Montage, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Server_PlayMontage");

	Params::AALSBaseCharacter_Server_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.RightMovementAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::RightMovementAction(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "RightMovementAction");

	Params::AALSBaseCharacter_RightMovementAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.ReplicatedRagdollStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::ReplicatedRagdollStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "ReplicatedRagdollStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.ReplicatedRagdollEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::ReplicatedRagdollEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "ReplicatedRagdollEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Replicated_PlayMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Replicated_PlayMontage(class UAnimMontage* Montage, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Replicated_PlayMontage");

	Params::AALSBaseCharacter_Replicated_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.RagdollStart
// (Native, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::RagdollStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "RagdollStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.RagdollEnd
// (Native, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::RagdollEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "RagdollEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.RagdollAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::RagdollAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "RagdollAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.OnRep_VisibleMesh
// (Final, Native, Protected)
// Parameters:
// class USkeletalMesh*               PreviousSkeletalMesh                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::OnRep_VisibleMesh(class USkeletalMesh* PreviousSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "OnRep_VisibleMesh");

	Params::AALSBaseCharacter_OnRep_VisibleMesh_Params Parms{};

	Parms.PreviousSkeletalMesh = PreviousSkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.OnRep_ViewMode
// (Final, Native, Protected)
// Parameters:
// enum class EALSViewMode            PrevViewMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::OnRep_ViewMode(enum class EALSViewMode PrevViewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "OnRep_ViewMode");

	Params::AALSBaseCharacter_OnRep_ViewMode_Params Parms{};

	Parms.PrevViewMode = PrevViewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.OnRep_RotationMode
// (Final, Native, Protected)
// Parameters:
// enum class EALSRotationMode        PrevRotMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::OnRep_RotationMode(enum class EALSRotationMode PrevRotMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "OnRep_RotationMode");

	Params::AALSBaseCharacter_OnRep_RotationMode_Params Parms{};

	Parms.PrevRotMode = PrevRotMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.OnRep_OverlayState
// (Final, Native, Protected)
// Parameters:
// enum class EALSOverlayState        PrevOverlayState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::OnRep_OverlayState(enum class EALSOverlayState PrevOverlayState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "OnRep_OverlayState");

	Params::AALSBaseCharacter_OnRep_OverlayState_Params Parms{};

	Parms.PrevOverlayState = PrevOverlayState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.OnBreakfall
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::OnBreakfall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "OnBreakfall");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Multicast_RagdollStart
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::Multicast_RagdollStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Multicast_RagdollStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Multicast_RagdollEnd
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     CharacterLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Multicast_RagdollEnd(const struct FVector& CharacterLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Multicast_RagdollEnd");

	Params::AALSBaseCharacter_Multicast_RagdollEnd_Params Parms{};

	Parms.CharacterLocation = CharacterLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Multicast_PlayMontage
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::Multicast_PlayMontage(class UAnimMontage* Montage, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Multicast_PlayMontage");

	Params::AALSBaseCharacter_Multicast_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Multicast_OnLanded
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::Multicast_OnLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Multicast_OnLanded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.Multicast_OnJumped
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::Multicast_OnJumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "Multicast_OnJumped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.LookingDirectionAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::LookingDirectionAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "LookingDirectionAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.JumpAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::JumpAction(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "JumpAction");

	Params::AALSBaseCharacter_JumpAction_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.IsRightShoulder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AALSBaseCharacter::IsRightShoulder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "IsRightShoulder");

	Params::AALSBaseCharacter_IsRightShoulder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.IsMoving
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AALSBaseCharacter::IsMoving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "IsMoving");

	Params::AALSBaseCharacter_IsMoving_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.HasMovementInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AALSBaseCharacter::HasMovementInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "HasMovementInput");

	Params::AALSBaseCharacter_HasMovementInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetViewMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSViewMode            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSViewMode AALSBaseCharacter::GetViewMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetViewMode");

	Params::AALSBaseCharacter_GetViewMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetThirdPersonTraceParams
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     TraceOrigin                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TraceRadius                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollisionChannel       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECollisionChannel AALSBaseCharacter::GetThirdPersonTraceParams(struct FVector* TraceOrigin, float* TraceRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetThirdPersonTraceParams");

	Params::AALSBaseCharacter_GetThirdPersonTraceParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TraceOrigin != nullptr)
		*TraceOrigin = std::move(Parms.TraceOrigin);

	if (TraceRadius != nullptr)
		*TraceRadius = Parms.TraceRadius;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetThirdPersonPivotTarget
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform AALSBaseCharacter::GetThirdPersonPivotTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetThirdPersonPivotTarget");

	Params::AALSBaseCharacter_GetThirdPersonPivotTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetTargetMovementSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FALSMovementSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FALSMovementSettings AALSBaseCharacter::GetTargetMovementSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetTargetMovementSettings");

	Params::AALSBaseCharacter_GetTargetMovementSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSStance              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSStance AALSBaseCharacter::GetStance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetStance");

	Params::AALSBaseCharacter_GetStance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AALSBaseCharacter::GetSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetSpeed");

	Params::AALSBaseCharacter_GetSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetRotationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSRotationMode        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSRotationMode AALSBaseCharacter::GetRotationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetRotationMode");

	Params::AALSBaseCharacter_GetRotationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetRollAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* AALSBaseCharacter::GetRollAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetRollAnimation");

	Params::AALSBaseCharacter_GetRollAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetPrevMovementState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSMovementState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSMovementState AALSBaseCharacter::GetPrevMovementState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetPrevMovementState");

	Params::AALSBaseCharacter_GetPrevMovementState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetOverlayState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSOverlayState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSOverlayState AALSBaseCharacter::GetOverlayState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetOverlayState");

	Params::AALSBaseCharacter_GetOverlayState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetOverlayOverrideState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AALSBaseCharacter::GetOverlayOverrideState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetOverlayOverrideState");

	Params::AALSBaseCharacter_GetOverlayOverrideState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetMyMovementComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UALSCharacterMovementComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UALSCharacterMovementComponent* AALSBaseCharacter::GetMyMovementComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetMyMovementComponent");

	Params::AALSBaseCharacter_GetMyMovementComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetMovementState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSMovementState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSMovementState AALSBaseCharacter::GetMovementState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetMovementState");

	Params::AALSBaseCharacter_GetMovementState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetMovementInputAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AALSBaseCharacter::GetMovementInputAmount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetMovementInputAmount");

	Params::AALSBaseCharacter_GetMovementInputAmount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetMovementInput
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AALSBaseCharacter::GetMovementInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetMovementInput");

	Params::AALSBaseCharacter_GetMovementInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetMovementAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSMovementAction      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSMovementAction AALSBaseCharacter::GetMovementAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetMovementAction");

	Params::AALSBaseCharacter_GetMovementAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetGroundedEntryState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSGroundedEntryState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSGroundedEntryState AALSBaseCharacter::GetGroundedEntryState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetGroundedEntryState");

	Params::AALSBaseCharacter_GetGroundedEntryState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetGetUpAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRagdollFaceUpState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* AALSBaseCharacter::GetGetUpAnimation(bool bRagdollFaceUpState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetGetUpAnimation");

	Params::AALSBaseCharacter_GetGetUpAnimation_Params Parms{};

	Parms.bRagdollFaceUpState = bRagdollFaceUpState;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetGait
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSGait                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSGait AALSBaseCharacter::GetGait()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetGait");

	Params::AALSBaseCharacter_GetGait_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetFirstPersonCameraTarget
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AALSBaseCharacter::GetFirstPersonCameraTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetFirstPersonCameraTarget");

	Params::AALSBaseCharacter_GetFirstPersonCameraTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetDesiredStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSStance              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSStance AALSBaseCharacter::GetDesiredStance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetDesiredStance");

	Params::AALSBaseCharacter_GetDesiredStance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetDesiredRotationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSRotationMode        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSRotationMode AALSBaseCharacter::GetDesiredRotationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetDesiredRotationMode");

	Params::AALSBaseCharacter_GetDesiredRotationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetDesiredGait
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSGait                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSGait AALSBaseCharacter::GetDesiredGait()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetDesiredGait");

	Params::AALSBaseCharacter_GetDesiredGait_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetCameraParameters
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              TPFOVOut                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FPFOVOut                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRightShoulderOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::GetCameraParameters(float* TPFOVOut, float* FPFOVOut, bool* bRightShoulderOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetCameraParameters");

	Params::AALSBaseCharacter_GetCameraParameters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TPFOVOut != nullptr)
		*TPFOVOut = Parms.TPFOVOut;

	if (FPFOVOut != nullptr)
		*FPFOVOut = Parms.FPFOVOut;

	if (bRightShoulderOut != nullptr)
		*bRightShoulderOut = Parms.bRightShoulderOut;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetAnimCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        CurveName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AALSBaseCharacter::GetAnimCurveValue(class FName CurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetAnimCurveValue");

	Params::AALSBaseCharacter_GetAnimCurveValue_Params Parms{};

	Parms.CurveName = CurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetAllowedGait
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSGait                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSGait AALSBaseCharacter::GetAllowedGait()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetAllowedGait");

	Params::AALSBaseCharacter_GetAllowedGait_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetAimYawRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AALSBaseCharacter::GetAimYawRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetAimYawRate");

	Params::AALSBaseCharacter_GetAimYawRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetAimingRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator AALSBaseCharacter::GetAimingRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetAimingRotation");

	Params::AALSBaseCharacter_GetAimingRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetActualGait
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EALSGait                AllowedGait                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EALSGait                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSGait AALSBaseCharacter::GetActualGait(enum class EALSGait AllowedGait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetActualGait");

	Params::AALSBaseCharacter_GetActualGait_Params Parms{};

	Parms.AllowedGait = AllowedGait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.GetAcceleration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AALSBaseCharacter::GetAcceleration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "GetAcceleration");

	Params::AALSBaseCharacter_GetAcceleration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.ForwardMovementAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::ForwardMovementAction(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "ForwardMovementAction");

	Params::AALSBaseCharacter_ForwardMovementAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.EventOnLanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::EventOnLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "EventOnLanded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.EventOnJumped
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AALSBaseCharacter::EventOnJumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "EventOnJumped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.CanSprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AALSBaseCharacter::CanSprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "CanSprint");

	Params::AALSBaseCharacter_CanSprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSBaseCharacter.CameraUpAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::CameraUpAction(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "CameraUpAction");

	Params::AALSBaseCharacter_CameraUpAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.CameraTapAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::CameraTapAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "CameraTapAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.CameraRightAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::CameraRightAction(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "CameraRightAction");

	Params::AALSBaseCharacter_CameraRightAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.CameraHeldAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSBaseCharacter::CameraHeldAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "CameraHeldAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSBaseCharacter.AimAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSBaseCharacter::AimAction(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSBaseCharacter", "AimAction");

	Params::AALSBaseCharacter_AimAction_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ALSV4_CPP.ALSCharacter
// (Actor, Pawn)

class UClass* AALSCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSCharacter");

	return Clss;
}


// ALSCharacter ALSV4_CPP.Default__ALSCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AALSCharacter* AALSCharacter::GetDefaultObj()
{
	static class AALSCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AALSCharacter*>(AALSCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSCharacter.UpdateHeldObjectAnimations
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSCharacter::UpdateHeldObjectAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacter", "UpdateHeldObjectAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALSV4_CPP.ALSCharacter.UpdateHeldObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AALSCharacter::UpdateHeldObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacter", "UpdateHeldObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALSV4_CPP.ALSCharacter.ClearHeldObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AALSCharacter::ClearHeldObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacter", "ClearHeldObject");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacter.AttachToHand
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 NewStaticMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               NewSkeletalMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      NewAnimClass                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLeftHand                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSCharacter::AttachToHand(class UStaticMesh* NewStaticMesh, class USkeletalMesh* NewSkeletalMesh, class UClass* NewAnimClass, bool bLeftHand, const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacter", "AttachToHand");

	Params::AALSCharacter_AttachToHand_Params Parms{};

	Parms.NewStaticMesh = NewStaticMesh;
	Parms.NewSkeletalMesh = NewSkeletalMesh;
	Parms.NewAnimClass = NewAnimClass;
	Parms.bLeftHand = bLeftHand;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ALSV4_CPP.ALSCharacterAnimInstance
// (None)

class UClass* UALSCharacterAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSCharacterAnimInstance");

	return Clss;
}


// ALSCharacterAnimInstance ALSV4_CPP.Default__ALSCharacterAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSCharacterAnimInstance* UALSCharacterAnimInstance::GetDefaultObj()
{
	static class UALSCharacterAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSCharacterAnimInstance*>(UALSCharacterAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSCharacterAnimInstance.ShouldMoveCheck
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSCharacterAnimInstance::ShouldMoveCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "ShouldMoveCheck");

	Params::UALSCharacterAnimInstance_ShouldMoveCheck_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.SetTrackedHipsDirection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EALSHipsDirection       HipsDirection                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSCharacterAnimInstance::SetTrackedHipsDirection(enum class EALSHipsDirection HipsDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "SetTrackedHipsDirection");

	Params::UALSCharacterAnimInstance_SetTrackedHipsDirection_Params Parms{};

	Parms.HipsDirection = HipsDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.SetGroundedEntryState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EALSGroundedEntryState  NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSCharacterAnimInstance::SetGroundedEntryState(enum class EALSGroundedEntryState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "SetGroundedEntryState");

	Params::UALSCharacterAnimInstance_SetGroundedEntryState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.PlayTransitionChecked
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FALSDynamicMontageParams    Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UALSCharacterAnimInstance::PlayTransitionChecked(struct FALSDynamicMontageParams& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "PlayTransitionChecked");

	Params::UALSCharacterAnimInstance_PlayTransitionChecked_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.PlayTransition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FALSDynamicMontageParams    Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UALSCharacterAnimInstance::PlayTransition(struct FALSDynamicMontageParams& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "PlayTransition");

	Params::UALSCharacterAnimInstance_PlayTransition_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.PlayDynamicTransition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReTriggerDelay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FALSDynamicMontageParams    Parameters                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UALSCharacterAnimInstance::PlayDynamicTransition(float ReTriggerDelay, const struct FALSDynamicMontageParams& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "PlayDynamicTransition");

	Params::UALSCharacterAnimInstance_PlayDynamicTransition_Params Parms{};

	Parms.ReTriggerDelay = ReTriggerDelay;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.OnPivot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSCharacterAnimInstance::OnPivot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "OnPivot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.OnJumped
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSCharacterAnimInstance::OnJumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "OnJumped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.CanTurnInPlace
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSCharacterAnimInstance::CanTurnInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "CanTurnInPlace");

	Params::UALSCharacterAnimInstance_CanTurnInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.CanRotateInPlace
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSCharacterAnimInstance::CanRotateInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "CanRotateInPlace");

	Params::UALSCharacterAnimInstance_CanRotateInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSCharacterAnimInstance.CanDynamicTransition
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSCharacterAnimInstance::CanDynamicTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterAnimInstance", "CanDynamicTransition");

	Params::UALSCharacterAnimInstance_CanDynamicTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ALSV4_CPP.ALSCharacterMovementComponent
// (None)

class UClass* UALSCharacterMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSCharacterMovementComponent");

	return Clss;
}


// ALSCharacterMovementComponent ALSV4_CPP.Default__ALSCharacterMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSCharacterMovementComponent* UALSCharacterMovementComponent::GetDefaultObj()
{
	static class UALSCharacterMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSCharacterMovementComponent*>(UALSCharacterMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSCharacterMovementComponent.SetMovementSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FALSMovementSettings        NewMovementSettings                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UALSCharacterMovementComponent::SetMovementSettings(const struct FALSMovementSettings& NewMovementSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterMovementComponent", "SetMovementSettings");

	Params::UALSCharacterMovementComponent_SetMovementSettings_Params Parms{};

	Parms.NewMovementSettings = NewMovementSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterMovementComponent.SetAllowedGait
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EALSGait                NewAllowedGait                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSCharacterMovementComponent::SetAllowedGait(enum class EALSGait NewAllowedGait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterMovementComponent", "SetAllowedGait");

	Params::UALSCharacterMovementComponent_SetAllowedGait_Params Parms{};

	Parms.NewAllowedGait = NewAllowedGait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSCharacterMovementComponent.Server_SetAllowedGait
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// enum class EALSGait                NewAllowedGait                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSCharacterMovementComponent::Server_SetAllowedGait(enum class EALSGait NewAllowedGait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSCharacterMovementComponent", "Server_SetAllowedGait");

	Params::UALSCharacterMovementComponent_Server_SetAllowedGait_Params Parms{};

	Parms.NewAllowedGait = NewAllowedGait;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ALSV4_CPP.ALSDebugComponent
// (None)

class UClass* UALSDebugComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSDebugComponent");

	return Clss;
}


// ALSDebugComponent ALSV4_CPP.Default__ALSDebugComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSDebugComponent* UALSDebugComponent::GetDefaultObj()
{
	static class UALSDebugComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSDebugComponent*>(UALSDebugComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSDebugComponent.UpdateColoringSystem
// (Event, Public, BlueprintEvent)
// Parameters:

void UALSDebugComponent::UpdateColoringSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "UpdateColoringSystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleTraces
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleTraces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleTraces");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleSlomo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleSlomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleSlomo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleLayerColors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleLayerColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleLayerColors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleHud
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleHud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleHud");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleGlobalTimeDilationLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeDilation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSDebugComponent::ToggleGlobalTimeDilationLocal(float TimeDilation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleGlobalTimeDilationLocal");

	Params::UALSDebugComponent_ToggleGlobalTimeDilationLocal_Params Parms{};

	Parms.TimeDilation = TimeDilation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleDebugView
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleDebugView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleDebugView");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleDebugShapes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleDebugShapes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleDebugShapes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleDebugMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleDebugMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleDebugMesh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.ToggleCharacterInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSDebugComponent::ToggleCharacterInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "ToggleCharacterInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.SetResetColors
// (Event, Public, BlueprintEvent)
// Parameters:

void UALSDebugComponent::SetResetColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "SetResetColors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALSV4_CPP.ALSDebugComponent.SetDynamicMaterials
// (Event, Public, BlueprintEvent)
// Parameters:

void UALSDebugComponent::SetDynamicMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "SetDynamicMaterials");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALSV4_CPP.ALSDebugComponent.OverlayMenuCycle
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSDebugComponent::OverlayMenuCycle(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "OverlayMenuCycle");

	Params::UALSDebugComponent_OverlayMenuCycle_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.OpenOverlayMenu
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSDebugComponent::OpenOverlayMenu(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "OpenOverlayMenu");

	Params::UALSDebugComponent_OpenOverlayMenu_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.OnPlayerControllerInitialized
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSDebugComponent::OnPlayerControllerInitialized(class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "OnPlayerControllerInitialized");

	Params::UALSDebugComponent_OnPlayerControllerInitialized_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALSV4_CPP.ALSDebugComponent.GetShowTraces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSDebugComponent::GetShowTraces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "GetShowTraces");

	Params::UALSDebugComponent_GetShowTraces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSDebugComponent.GetShowLayerColors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSDebugComponent::GetShowLayerColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "GetShowLayerColors");

	Params::UALSDebugComponent_GetShowLayerColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSDebugComponent.GetShowDebugShapes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSDebugComponent::GetShowDebugShapes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "GetShowDebugShapes");

	Params::UALSDebugComponent_GetShowDebugShapes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSDebugComponent.GetDebugView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSDebugComponent::GetDebugView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "GetDebugView");

	Params::UALSDebugComponent_GetDebugView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSDebugComponent.FocusedDebugCharacterCycle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSDebugComponent::FocusedDebugCharacterCycle(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "FocusedDebugCharacterCycle");

	Params::UALSDebugComponent_FocusedDebugCharacterCycle_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSDebugComponent.DrawDebugSpheres
// (Event, Public, BlueprintEvent)
// Parameters:

void UALSDebugComponent::DrawDebugSpheres()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSDebugComponent", "DrawDebugSpheres");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ALSV4_CPP.ALSMantleComponent
// (None)

class UClass* UALSMantleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSMantleComponent");

	return Clss;
}


// ALSMantleComponent ALSV4_CPP.Default__ALSMantleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSMantleComponent* UALSMantleComponent::GetDefaultObj()
{
	static class UALSMantleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSMantleComponent*>(UALSMantleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSMantleComponent.Server_MantleStart
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable)
// Parameters:
// float                              MantleHeight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FALSComponentAndTransform   MantleLedgeWS                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EALSMantleType          MantleType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSMantleComponent::Server_MantleStart(float MantleHeight, struct FALSComponentAndTransform& MantleLedgeWS, enum class EALSMantleType MantleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "Server_MantleStart");

	Params::UALSMantleComponent_Server_MantleStart_Params Parms{};

	Parms.MantleHeight = MantleHeight;
	Parms.MantleLedgeWS = MantleLedgeWS;
	Parms.MantleType = MantleType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSMantleComponent.OnOwnerRagdollStateChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRagdollState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSMantleComponent::OnOwnerRagdollStateChanged(bool bRagdollState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "OnOwnerRagdollStateChanged");

	Params::UALSMantleComponent_OnOwnerRagdollStateChanged_Params Parms{};

	Parms.bRagdollState = bRagdollState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSMantleComponent.OnOwnerJumpInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSMantleComponent::OnOwnerJumpInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "OnOwnerJumpInput");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSMantleComponent.Multicast_MantleStart
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// float                              MantleHeight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FALSComponentAndTransform   MantleLedgeWS                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EALSMantleType          MantleType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSMantleComponent::Multicast_MantleStart(float MantleHeight, struct FALSComponentAndTransform& MantleLedgeWS, enum class EALSMantleType MantleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "Multicast_MantleStart");

	Params::UALSMantleComponent_Multicast_MantleStart_Params Parms{};

	Parms.MantleHeight = MantleHeight;
	Parms.MantleLedgeWS = MantleLedgeWS;
	Parms.MantleType = MantleType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSMantleComponent.MantleUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              BlendIn                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSMantleComponent::MantleUpdate(float BlendIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "MantleUpdate");

	Params::UALSMantleComponent_MantleUpdate_Params Parms{};

	Parms.BlendIn = BlendIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSMantleComponent.MantleStart
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              MantleHeight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FALSComponentAndTransform   MantleLedgeWS                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EALSMantleType          MantleType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UALSMantleComponent::MantleStart(float MantleHeight, struct FALSComponentAndTransform& MantleLedgeWS, enum class EALSMantleType MantleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "MantleStart");

	Params::UALSMantleComponent_MantleStart_Params Parms{};

	Parms.MantleHeight = MantleHeight;
	Parms.MantleLedgeWS = MantleLedgeWS;
	Parms.MantleType = MantleType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSMantleComponent.MantleEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UALSMantleComponent::MantleEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "MantleEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSMantleComponent.MantleCheck
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FALSMantleTraceSettings     TraceSettings                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EDrawDebugTrace         DebugType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDoMantle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSMantleComponent::MantleCheck(struct FALSMantleTraceSettings& TraceSettings, enum class EDrawDebugTrace DebugType, bool bDoMantle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "MantleCheck");

	Params::UALSMantleComponent_MantleCheck_Params Parms{};

	Parms.TraceSettings = TraceSettings;
	Parms.DebugType = DebugType;
	Parms.bDoMantle = bDoMantle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMantleComponent.GetMantleAsset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EALSMantleType          MantleType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EALSOverlayState        CurrentOverlayState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FALSMantleAsset             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FALSMantleAsset UALSMantleComponent::GetMantleAsset(enum class EALSMantleType MantleType, enum class EALSOverlayState CurrentOverlayState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMantleComponent", "GetMantleAsset");

	Params::UALSMantleComponent_GetMantleAsset_Params Parms{};

	Parms.MantleType = MantleType;
	Parms.CurrentOverlayState = CurrentOverlayState;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class ALSV4_CPP.ALSMathLibrary
// (None)

class UClass* UALSMathLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSMathLibrary");

	return Clss;
}


// ALSMathLibrary ALSV4_CPP.Default__ALSMathLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSMathLibrary* UALSMathLibrary::GetDefaultObj()
{
	static class UALSMathLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSMathLibrary*>(UALSMathLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSMathLibrary.TransformSub
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  T1                                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  T2                                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UALSMathLibrary::TransformSub(struct FTransform& T1, struct FTransform& T2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "TransformSub");

	Params::UALSMathLibrary_TransformSub_Params Parms{};

	Parms.T1 = T1;
	Parms.T2 = T2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMathLibrary.TransformAdd
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  T1                                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  T2                                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UALSMathLibrary::TransformAdd(struct FTransform& T1, struct FTransform& T2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "TransformAdd");

	Params::UALSMathLibrary_TransformAdd_Params Parms{};

	Parms.T1 = T1;
	Parms.T2 = T2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMathLibrary.MantleComponentLocalToWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FALSComponentAndTransform   CompAndTransform                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UALSMathLibrary::MantleComponentLocalToWorld(struct FALSComponentAndTransform& CompAndTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "MantleComponentLocalToWorld");

	Params::UALSMathLibrary_MantleComponentLocalToWorld_Params Parms{};

	Parms.CompAndTransform = CompAndTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMathLibrary.GetCapsuleLocationFromBase
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BaseLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ZOffset                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCapsuleComponent*           Capsule                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UALSMathLibrary::GetCapsuleLocationFromBase(const struct FVector& BaseLocation, float ZOffset, class UCapsuleComponent* Capsule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "GetCapsuleLocationFromBase");

	Params::UALSMathLibrary_GetCapsuleLocationFromBase_Params Parms{};

	Parms.BaseLocation = BaseLocation;
	Parms.ZOffset = ZOffset;
	Parms.Capsule = Capsule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMathLibrary.GetCapsuleBaseLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              ZOffset                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCapsuleComponent*           Capsule                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UALSMathLibrary::GetCapsuleBaseLocation(float ZOffset, class UCapsuleComponent* Capsule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "GetCapsuleBaseLocation");

	Params::UALSMathLibrary_GetCapsuleBaseLocation_Params Parms{};

	Parms.ZOffset = ZOffset;
	Parms.Capsule = Capsule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMathLibrary.CapsuleHasRoomCheck
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UCapsuleComponent*           Capsule                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HeightOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RadiusOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDrawDebugTrace         DebugType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DrawDebugTrace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSMathLibrary::CapsuleHasRoomCheck(class UCapsuleComponent* Capsule, const struct FVector& TargetLocation, float HeightOffset, float RadiusOffset, enum class EDrawDebugTrace DebugType, bool DrawDebugTrace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "CapsuleHasRoomCheck");

	Params::UALSMathLibrary_CapsuleHasRoomCheck_Params Parms{};

	Parms.Capsule = Capsule;
	Parms.TargetLocation = TargetLocation;
	Parms.HeightOffset = HeightOffset;
	Parms.RadiusOffset = RadiusOffset;
	Parms.DebugType = DebugType;
	Parms.DrawDebugTrace = DrawDebugTrace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMathLibrary.CalculateQuadrant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EALSMovementDirection   Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FRThreshold                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FLThreshold                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BRThreshold                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BLThreshold                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Buffer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EALSMovementDirection   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EALSMovementDirection UALSMathLibrary::CalculateQuadrant(enum class EALSMovementDirection Current, float FRThreshold, float FLThreshold, float BRThreshold, float BLThreshold, float Buffer, float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "CalculateQuadrant");

	Params::UALSMathLibrary_CalculateQuadrant_Params Parms{};

	Parms.Current = Current;
	Parms.FRThreshold = FRThreshold;
	Parms.FLThreshold = FLThreshold;
	Parms.BRThreshold = BRThreshold;
	Parms.BLThreshold = BLThreshold;
	Parms.Buffer = Buffer;
	Parms.Angle = Angle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSMathLibrary.AngleInRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinAngle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxAngle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Buffer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncreaseBuffer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UALSMathLibrary::AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSMathLibrary", "AngleInRange");

	Params::UALSMathLibrary_AngleInRange_Params Parms{};

	Parms.Angle = Angle;
	Parms.MinAngle = MinAngle;
	Parms.MaxAngle = MaxAngle;
	Parms.Buffer = Buffer;
	Parms.IncreaseBuffer = IncreaseBuffer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ALSV4_CPP.ALSNotifyStateEarlyBlendOut
// (None)

class UClass* UALSNotifyStateEarlyBlendOut::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSNotifyStateEarlyBlendOut");

	return Clss;
}


// ALSNotifyStateEarlyBlendOut ALSV4_CPP.Default__ALSNotifyStateEarlyBlendOut
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSNotifyStateEarlyBlendOut* UALSNotifyStateEarlyBlendOut::GetDefaultObj()
{
	static class UALSNotifyStateEarlyBlendOut* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSNotifyStateEarlyBlendOut*>(UALSNotifyStateEarlyBlendOut::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSNotifyStateMovementAction
// (None)

class UClass* UALSNotifyStateMovementAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSNotifyStateMovementAction");

	return Clss;
}


// ALSNotifyStateMovementAction ALSV4_CPP.Default__ALSNotifyStateMovementAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSNotifyStateMovementAction* UALSNotifyStateMovementAction::GetDefaultObj()
{
	static class UALSNotifyStateMovementAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSNotifyStateMovementAction*>(UALSNotifyStateMovementAction::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSNotifyStateOverlayOverride
// (None)

class UClass* UALSNotifyStateOverlayOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSNotifyStateOverlayOverride");

	return Clss;
}


// ALSNotifyStateOverlayOverride ALSV4_CPP.Default__ALSNotifyStateOverlayOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSNotifyStateOverlayOverride* UALSNotifyStateOverlayOverride::GetDefaultObj()
{
	static class UALSNotifyStateOverlayOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSNotifyStateOverlayOverride*>(UALSNotifyStateOverlayOverride::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSPlayerCameraBehavior
// (None)

class UClass* UALSPlayerCameraBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSPlayerCameraBehavior");

	return Clss;
}


// ALSPlayerCameraBehavior ALSV4_CPP.Default__ALSPlayerCameraBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UALSPlayerCameraBehavior* UALSPlayerCameraBehavior::GetDefaultObj()
{
	static class UALSPlayerCameraBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UALSPlayerCameraBehavior*>(UALSPlayerCameraBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALSPlayerCameraManager
// (Actor)

class UClass* AALSPlayerCameraManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSPlayerCameraManager");

	return Clss;
}


// ALSPlayerCameraManager ALSV4_CPP.Default__ALSPlayerCameraManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AALSPlayerCameraManager* AALSPlayerCameraManager::GetDefaultObj()
{
	static class AALSPlayerCameraManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AALSPlayerCameraManager*>(AALSPlayerCameraManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSPlayerCameraManager.OnPossess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AALSBaseCharacter*           NewCharacter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSPlayerCameraManager::OnPossess(class AALSBaseCharacter* NewCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerCameraManager", "OnPossess");

	Params::AALSPlayerCameraManager_OnPossess_Params Parms{};

	Parms.NewCharacter = NewCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerCameraManager.GetCameraBehaviorParam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        CurveName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AALSPlayerCameraManager::GetCameraBehaviorParam(class FName CurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerCameraManager", "GetCameraBehaviorParam");

	Params::AALSPlayerCameraManager_GetCameraBehaviorParam_Params Parms{};

	Parms.CurveName = CurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSPlayerCameraManager.DrawDebugTargets
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PivotTargetLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AALSPlayerCameraManager::DrawDebugTargets(const struct FVector& PivotTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerCameraManager", "DrawDebugTargets");

	Params::AALSPlayerCameraManager_DrawDebugTargets_Params Parms{};

	Parms.PivotTargetLocation = PivotTargetLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALSV4_CPP.ALSPlayerCameraManager.CustomCameraBehavior
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AALSPlayerCameraManager::CustomCameraBehavior(float DeltaTime, struct FVector* Location, struct FRotator* Rotation, float* FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerCameraManager", "CustomCameraBehavior");

	Params::AALSPlayerCameraManager_CustomCameraBehavior_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

	return Parms.ReturnValue;

}


// Function ALSV4_CPP.ALSPlayerCameraManager.CalculateAxisIndependentLag
// (Final, Native, Static, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     CurrentLocation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    CameraRotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     LagSpeeds                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AALSPlayerCameraManager::CalculateAxisIndependentLag(const struct FVector& CurrentLocation, const struct FVector& TargetLocation, const struct FRotator& CameraRotation, const struct FVector& LagSpeeds, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerCameraManager", "CalculateAxisIndependentLag");

	Params::AALSPlayerCameraManager_CalculateAxisIndependentLag_Params Parms{};

	Parms.CurrentLocation = CurrentLocation;
	Parms.TargetLocation = TargetLocation;
	Parms.CameraRotation = CameraRotation;
	Parms.LagSpeeds = LagSpeeds;
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ALSV4_CPP.ALSPlayerController
// (Actor, PlayerController)

class UClass* AALSPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALSPlayerController");

	return Clss;
}


// ALSPlayerController ALSV4_CPP.Default__ALSPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AALSPlayerController* AALSPlayerController::GetDefaultObj()
{
	static class AALSPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AALSPlayerController*>(AALSPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function ALSV4_CPP.ALSPlayerController.WalkAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::WalkAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "WalkAction");

	Params::AALSPlayerController_WalkAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.VelocityDirectionAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::VelocityDirectionAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "VelocityDirectionAction");

	Params::AALSPlayerController_VelocityDirectionAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.StanceAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::StanceAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "StanceAction");

	Params::AALSPlayerController_StanceAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.SprintAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::SprintAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "SprintAction");

	Params::AALSPlayerController_SprintAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.RightMovementAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::RightMovementAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "RightMovementAction");

	Params::AALSPlayerController_RightMovementAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.RagdollAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::RagdollAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "RagdollAction");

	Params::AALSPlayerController_RagdollAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.LookingDirectionAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::LookingDirectionAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "LookingDirectionAction");

	Params::AALSPlayerController_LookingDirectionAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.JumpAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::JumpAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "JumpAction");

	Params::AALSPlayerController_JumpAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.ForwardMovementAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::ForwardMovementAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "ForwardMovementAction");

	Params::AALSPlayerController_ForwardMovementAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleTracesAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleTracesAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleTracesAction");

	Params::AALSPlayerController_DebugToggleTracesAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleSlomoAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleSlomoAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleSlomoAction");

	Params::AALSPlayerController_DebugToggleSlomoAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleShapesAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleShapesAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleShapesAction");

	Params::AALSPlayerController_DebugToggleShapesAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleMeshAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleMeshAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleMeshAction");

	Params::AALSPlayerController_DebugToggleMeshAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleLayerColorsAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleLayerColorsAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleLayerColorsAction");

	Params::AALSPlayerController_DebugToggleLayerColorsAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleHudAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleHudAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleHudAction");

	Params::AALSPlayerController_DebugToggleHudAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleDebugViewAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleDebugViewAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleDebugViewAction");

	Params::AALSPlayerController_DebugToggleDebugViewAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugToggleCharacterInfoAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugToggleCharacterInfoAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugToggleCharacterInfoAction");

	Params::AALSPlayerController_DebugToggleCharacterInfoAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugOverlayMenuCycleAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugOverlayMenuCycleAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugOverlayMenuCycleAction");

	Params::AALSPlayerController_DebugOverlayMenuCycleAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugOpenOverlayMenuAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugOpenOverlayMenuAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugOpenOverlayMenuAction");

	Params::AALSPlayerController_DebugOpenOverlayMenuAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.DebugFocusedCharacterCycleAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::DebugFocusedCharacterCycleAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "DebugFocusedCharacterCycleAction");

	Params::AALSPlayerController_DebugFocusedCharacterCycleAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.CameraUpAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::CameraUpAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "CameraUpAction");

	Params::AALSPlayerController_CameraUpAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.CameraTapAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::CameraTapAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "CameraTapAction");

	Params::AALSPlayerController_CameraTapAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.CameraRightAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::CameraRightAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "CameraRightAction");

	Params::AALSPlayerController_CameraRightAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.CameraHeldAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::CameraHeldAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "CameraHeldAction");

	Params::AALSPlayerController_CameraHeldAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ALSV4_CPP.ALSPlayerController.AimAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FInputActionValue           Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AALSPlayerController::AimAction(struct FInputActionValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALSPlayerController", "AimAction");

	Params::AALSPlayerController_AimAction_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ALSV4_CPP.ALS_BTTask_GetRandomLocation
// (None)

class UClass* UALS_BTTask_GetRandomLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_BTTask_GetRandomLocation");

	return Clss;
}


// ALS_BTTask_GetRandomLocation ALSV4_CPP.Default__ALS_BTTask_GetRandomLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UALS_BTTask_GetRandomLocation* UALS_BTTask_GetRandomLocation::GetDefaultObj()
{
	static class UALS_BTTask_GetRandomLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_BTTask_GetRandomLocation*>(UALS_BTTask_GetRandomLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class ALSV4_CPP.ALS_BTTask_SetFocusToPlayer
// (None)

class UClass* UALS_BTTask_SetFocusToPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_BTTask_SetFocusToPlayer");

	return Clss;
}


// ALS_BTTask_SetFocusToPlayer ALSV4_CPP.Default__ALS_BTTask_SetFocusToPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UALS_BTTask_SetFocusToPlayer* UALS_BTTask_SetFocusToPlayer::GetDefaultObj()
{
	static class UALS_BTTask_SetFocusToPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_BTTask_SetFocusToPlayer*>(UALS_BTTask_SetFocusToPlayer::StaticClass()->DefaultObject);

	return Default;
}

}


