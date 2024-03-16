#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DragonIKPlugin.DragonIKFootStepsComponent
// (None)

class UClass* UDragonIKFootStepsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonIKFootStepsComponent");

	return Clss;
}


// DragonIKFootStepsComponent DragonIKPlugin.Default__DragonIKFootStepsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragonIKFootStepsComponent* UDragonIKFootStepsComponent::GetDefaultObj()
{
	static class UDragonIKFootStepsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonIKFootStepsComponent*>(UDragonIKFootStepsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DragonIKPlugin.DragonIKFootStepsComponent.CallFootSteps
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class FName                        bone_name                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Foot_transform                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height_difference                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit_info                                                         (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UDragonIKFootStepsComponent::CallFootSteps(class FName bone_name, const struct FTransform& Foot_transform, float Height_difference, const struct FHitResult& Hit_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKFootStepsComponent", "CallFootSteps");

	Params::UDragonIKFootStepsComponent_CallFootSteps_Params Parms{};

	Parms.bone_name = bone_name;
	Parms.Foot_transform = Foot_transform;
	Parms.Height_difference = Height_difference;
	Parms.Hit_info = Hit_info;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DragonIKPlugin.DragonIKPhysicsComponent
// (None)

class UClass* UDragonIKPhysicsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonIKPhysicsComponent");

	return Clss;
}


// DragonIKPhysicsComponent DragonIKPlugin.Default__DragonIKPhysicsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragonIKPhysicsComponent* UDragonIKPhysicsComponent::GetDefaultObj()
{
	static class UDragonIKPhysicsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonIKPhysicsComponent*>(UDragonIKPhysicsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DragonIKPlugin.DragonIKPhysicsComponent.UpdatePhysanimData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LinearStrength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AngularStrength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LinearDamp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AngularDamp                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "UpdatePhysanimData");

	Params::UDragonIKPhysicsComponent_UpdatePhysanimData_Params Parms{};

	Parms.LinearStrength = LinearStrength;
	Parms.AngularStrength = AngularStrength;
	Parms.LinearDamp = LinearDamp;
	Parms.AngularDamp = AngularDamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.SetInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Inter_value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::SetInterpolation(int32 Inter_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "SetInterpolation");

	Params::UDragonIKPhysicsComponent_SetInterpolation_Params Parms{};

	Parms.Inter_value = Inter_value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.ReleaseAllHandles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Go_ragdoll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::ReleaseAllHandles(bool Go_ragdoll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "ReleaseAllHandles");

	Params::UDragonIKPhysicsComponent_ReleaseAllHandles_Params Parms{};

	Parms.Go_ragdoll = Go_ragdoll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.ReGrabAllHandles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Exit_ragdoll                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::ReGrabAllHandles(bool Exit_ragdoll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "ReGrabAllHandles");

	Params::UDragonIKPhysicsComponent_ReGrabAllHandles_Params Parms{};

	Parms.Exit_ragdoll = Exit_ragdoll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.PerformActiveRagdoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pelvis_mass_override                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::PerformActiveRagdoll(float Pelvis_mass_override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "PerformActiveRagdoll");

	Params::UDragonIKPhysicsComponent_PerformActiveRagdoll_Params Parms{};

	Parms.Pelvis_mass_override = Pelvis_mass_override;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.OnHitCallback
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FName                        Optional_Override_Hit_Bone_Name                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Hit_location                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Hit_impulse_direction                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Hit_bone_name                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::OnHitCallback(struct FHitResult& Hit, class FName Optional_Override_Hit_Bone_Name, struct FVector* Hit_location, struct FVector* Hit_impulse_direction, class FName* Hit_bone_name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "OnHitCallback");

	Params::UDragonIKPhysicsComponent_OnHitCallback_Params Parms{};

	Parms.Hit = Hit;
	Parms.Optional_Override_Hit_Bone_Name = Optional_Override_Hit_Bone_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Hit_location != nullptr)
		*Hit_location = std::move(Parms.Hit_location);

	if (Hit_impulse_direction != nullptr)
		*Hit_impulse_direction = std::move(Parms.Hit_impulse_direction);

	if (Hit_bone_name != nullptr)
		*Hit_bone_name = Parms.Hit_bone_name;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.Modify_Reset_Bone_Info
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                bone_list                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::Modify_Reset_Bone_Info(const TArray<class FName>& bone_list)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "Modify_Reset_Bone_Info");

	Params::UDragonIKPhysicsComponent_Modify_Reset_Bone_Info_Params Parms{};

	Parms.bone_list = bone_list;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.FirstTimeInitialization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      Skeleton_input                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::FirstTimeInitialization(class USkeletalMeshComponent* Skeleton_input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "FirstTimeInitialization");

	Params::UDragonIKPhysicsComponent_FirstTimeInitialization_Params Parms{};

	Parms.Skeleton_input = Skeleton_input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.Control_Bone_Handle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        bone_name                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Override_transform                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKPhysicsComponent::Control_Bone_Handle(class FName bone_name, const struct FTransform& Override_transform, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "Control_Bone_Handle");

	Params::UDragonIKPhysicsComponent_Control_Bone_Handle_Params Parms{};

	Parms.bone_name = bone_name;
	Parms.Override_transform = Override_transform;
	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKPhysicsComponent.CacheSimulationStates
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDragonIKPhysicsComponent::CacheSimulationStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKPhysicsComponent", "CacheSimulationStates");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class DragonIKPlugin.DragonIKPhysicsHolder
// (Actor)

class UClass* ADragonIKPhysicsHolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonIKPhysicsHolder");

	return Clss;
}


// DragonIKPhysicsHolder DragonIKPlugin.Default__DragonIKPhysicsHolder
// (Public, ClassDefaultObject, ArchetypeObject)

class ADragonIKPhysicsHolder* ADragonIKPhysicsHolder::GetDefaultObj()
{
	static class ADragonIKPhysicsHolder* Default = nullptr;

	if (!Default)
		Default = static_cast<ADragonIKPhysicsHolder*>(ADragonIKPhysicsHolder::StaticClass()->DefaultObject);

	return Default;
}


// Class DragonIKPlugin.DragonIKWeaponPhysicsComponent
// (None)

class UClass* UDragonIKWeaponPhysicsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonIKWeaponPhysicsComponent");

	return Clss;
}


// DragonIKWeaponPhysicsComponent DragonIKPlugin.Default__DragonIKWeaponPhysicsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragonIKWeaponPhysicsComponent* UDragonIKWeaponPhysicsComponent::GetDefaultObj()
{
	static class UDragonIKWeaponPhysicsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonIKWeaponPhysicsComponent*>(UDragonIKWeaponPhysicsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Weapon_Transform_Override
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Weapon_Transform                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShould_Override_Weapon_Transform                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Weapon_Transform_Override(const struct FTransform& Weapon_Transform, bool bShould_Override_Weapon_Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Weapon_Transform_Override");

	Params::UDragonIKWeaponPhysicsComponent_Weapon_Transform_Override_Params Parms{};

	Parms.Weapon_Transform = Weapon_Transform;
	Parms.bShould_Override_Weapon_Transform = bShould_Override_Weapon_Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Unfreeze_Elbows_Function
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Hand_bone                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Unfreeze_Elbows_Function(class FName Hand_bone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Unfreeze_Elbows_Function");

	Params::UDragonIKWeaponPhysicsComponent_Unfreeze_Elbows_Function_Params Parms{};

	Parms.Hand_bone = Hand_bone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Release_Weapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Should_simulatephysics                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Use_gravity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKeep_Attachment                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Release_Weapon(bool Should_simulatephysics, bool Use_gravity, bool bKeep_Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Release_Weapon");

	Params::UDragonIKWeaponPhysicsComponent_Release_Weapon_Params Parms{};

	Parms.Should_simulatephysics = Should_simulatephysics;
	Parms.Use_gravity = Use_gravity;
	Parms.bKeep_Attachment = bKeep_Attachment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Release_Hand_Plus_Override
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        Hand_bone                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Hand_transform                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Override_hand_location                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Override_Hand_Rotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Release_Hand_Plus_Override(class FName Hand_bone, const struct FTransform& Hand_transform, bool Override_hand_location, bool Override_Hand_Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Release_Hand_Plus_Override");

	Params::UDragonIKWeaponPhysicsComponent_Release_Hand_Plus_Override_Params Parms{};

	Parms.Hand_bone = Hand_bone;
	Parms.Hand_transform = Hand_transform;
	Parms.Override_hand_location = Override_hand_location;
	Parms.Override_Hand_Rotation = Override_Hand_Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Release_Hand_Only
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Hand_bone                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Release_Hand_Only(class FName Hand_bone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Release_Hand_Only");

	Params::UDragonIKWeaponPhysicsComponent_Release_Hand_Only_Params Parms{};

	Parms.Hand_bone = Hand_bone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Grab_Weapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Weapon_mesh_input                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Grabbed_bone                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Simulate_physics                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Use_gravity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Grab_Weapon(class UPrimitiveComponent* Weapon_mesh_input, class FName Grabbed_bone, bool Simulate_physics, bool Use_gravity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Grab_Weapon");

	Params::UDragonIKWeaponPhysicsComponent_Grab_Weapon_Params Parms{};

	Parms.Weapon_mesh_input = Weapon_mesh_input;
	Parms.Grabbed_bone = Grabbed_bone;
	Parms.Simulate_physics = Simulate_physics;
	Parms.Use_gravity = Use_gravity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Freeze_Elbows_Function
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Hand_bone                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Freeze_Elbows_Function(class FName Hand_bone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Freeze_Elbows_Function");

	Params::UDragonIKWeaponPhysicsComponent_Freeze_Elbows_Function_Params Parms{};

	Parms.Hand_bone = Hand_bone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.FirstTimeInitialization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      Skeleton_input                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::FirstTimeInitialization(class USkeletalMeshComponent* Skeleton_input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "FirstTimeInitialization");

	Params::UDragonIKWeaponPhysicsComponent_FirstTimeInitialization_Params Parms{};

	Parms.Skeleton_input = Skeleton_input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DragonIKPlugin.DragonIKWeaponPhysicsComponent.Attach_Hand_Only
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Hand_bone                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Arm_position_recalibrate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDragonIKWeaponPhysicsComponent::Attach_Hand_Only(class FName Hand_bone, bool Arm_position_recalibrate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIKWeaponPhysicsComponent", "Attach_Hand_Only");

	Params::UDragonIKWeaponPhysicsComponent_Attach_Hand_Only_Params Parms{};

	Parms.Hand_bone = Hand_bone;
	Parms.Arm_position_recalibrate = Arm_position_recalibrate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DragonIKPlugin.DragonIK_Library
// (None)

class UClass* UDragonIK_Library::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonIK_Library");

	return Clss;
}


// DragonIK_Library DragonIKPlugin.Default__DragonIK_Library
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragonIK_Library* UDragonIK_Library::GetDefaultObj()
{
	static class UDragonIK_Library* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonIK_Library*>(UDragonIK_Library::StaticClass()->DefaultObject);

	return Default;
}


// Function DragonIKPlugin.DragonIK_Library.QuatLookXatLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  LookAtFromTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LookAtTarget                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UDragonIK_Library::QuatLookXatLocation(struct FTransform& LookAtFromTransform, struct FVector& LookAtTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "QuatLookXatLocation");

	Params::UDragonIK_Library_QuatLookXatLocation_Params Parms{};

	Parms.LookAtFromTransform = LookAtFromTransform;
	Parms.LookAtTarget = LookAtTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DragonIKPlugin.DragonIK_Library.LookAtVector_V2
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Source_Location                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LookAt                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpDirection                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UDragonIK_Library::LookAtVector_V2(const struct FVector& Source_Location, const struct FVector& LookAt, const struct FVector& UpDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "LookAtVector_V2");

	Params::UDragonIK_Library_LookAtVector_V2_Params Parms{};

	Parms.Source_Location = Source_Location;
	Parms.LookAt = LookAt;
	Parms.UpDirection = UpDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DragonIKPlugin.DragonIK_Library.LookAtRotation_V3
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpVector                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UDragonIK_Library::LookAtRotation_V3(const struct FVector& Source, const struct FVector& Target, const struct FVector& UpVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "LookAtRotation_V3");

	Params::UDragonIK_Library_LookAtRotation_V3_Params Parms{};

	Parms.Source = Source;
	Parms.Target = Target;
	Parms.UpVector = UpVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DragonIKPlugin.DragonIK_Library.CustomLookRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     LookAt                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpDirection                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UDragonIK_Library::CustomLookRotation(const struct FVector& LookAt, const struct FVector& UpDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonIK_Library", "CustomLookRotation");

	Params::UDragonIK_Library_CustomLookRotation_Params Parms{};

	Parms.LookAt = LookAt;
	Parms.UpDirection = UpDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


