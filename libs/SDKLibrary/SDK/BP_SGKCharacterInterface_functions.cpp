#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKCharacterInterface.BP_SGKCharacterInterface_C
// (None)

class UClass* IBP_SGKCharacterInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKCharacterInterface_C");

	return Clss;
}


// BP_SGKCharacterInterface_C BP_SGKCharacterInterface.Default__BP_SGKCharacterInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKCharacterInterface_C* IBP_SGKCharacterInterface_C::GetDefaultObj()
{
	static class IBP_SGKCharacterInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKCharacterInterface_C*>(IBP_SGKCharacterInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.Peak_GetTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPeak53Teams            CharacterTeam                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::Peak_GetTeam(enum class EPeak53Teams* CharacterTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "Peak_GetTeam");

	Params::IBP_SGKCharacterInterface_C_Peak_GetTeam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterTeam != nullptr)
		*CharacterTeam = Parms.CharacterTeam;

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Lean_Alpha                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TargetCamera                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::SGK_LeanValues(double* Lean_Alpha, double* TargetCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK LeanValues");

	Params::IBP_SGKCharacterInterface_C_SGK_LeanValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Lean_Alpha != nullptr)
		*Lean_Alpha = Parms.Lean_Alpha;

	if (TargetCamera != nullptr)
		*TargetCamera = Parms.TargetCamera;

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lean                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CameraLean                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ThirdPersonCameraOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::SGK_LeanRight(bool Lean, double CameraLean, double ThirdPersonCameraOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK LeanRight");

	Params::IBP_SGKCharacterInterface_C_SGK_LeanRight_Params Parms{};

	Parms.Lean = Lean;
	Parms.CameraLean = CameraLean;
	Parms.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LeanLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lean                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CameraLean                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ThirdPersonCameraOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::SGK_LeanLeft(bool Lean, double CameraLean, double ThirdPersonCameraOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK LeanLeft");

	Params::IBP_SGKCharacterInterface_C_SGK_LeanLeft_Params Parms{};

	Parms.Lean = Lean;
	Parms.CameraLean = CameraLean;
	Parms.ThirdPersonCameraOffset = ThirdPersonCameraOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK LookAtRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   LookAtRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::SGK_LookAtRotation(struct FVector2D* LookAtRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK LookAtRotation");

	Params::IBP_SGKCharacterInterface_C_SGK_LookAtRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LookAtRotation != nullptr)
		*LookAtRotation = std::move(Parms.LookAtRotation);

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterSockets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Sockets               Sockets                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Component                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::SGK_CharacterSockets(enum class E_Sockets Sockets, class USceneComponent** Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK CharacterSockets");

	Params::IBP_SGKCharacterInterface_C_SGK_CharacterSockets_Params Parms{};

	Parms.Sockets = Sockets;

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK CharacterCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CameraType            CameraType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CurrentCamera                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CurrentSpringArm                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::SGK_CharacterCamera(enum class E_CameraType CameraType, class UCameraComponent** CurrentCamera, class USpringArmComponent** CurrentSpringArm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK CharacterCamera");

	Params::IBP_SGKCharacterInterface_C_SGK_CharacterCamera_Params Parms{};

	Parms.CameraType = CameraType;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentCamera != nullptr)
		*CurrentCamera = Parms.CurrentCamera;

	if (CurrentSpringArm != nullptr)
		*CurrentSpringArm = Parms.CurrentSpringArm;

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK HideComponents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Components                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void IBP_SGKCharacterInterface_C::SGK_HideComponents(TArray<class UPrimitiveComponent*>& Components)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK HideComponents");

	Params::IBP_SGKCharacterInterface_C_SGK_HideComponents_Params Parms{};

	Parms.Components = Components;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKCharacterInterface.BP_SGKCharacterInterface_C.SGK GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BodyMesh              MeshType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKCharacterInterface_C::SGK_GetMesh(enum class E_BodyMesh MeshType, class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKCharacterInterface_C", "SGK GetMesh");

	Params::IBP_SGKCharacterInterface_C_SGK_GetMesh_Params Parms{};

	Parms.MeshType = MeshType;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}

}


