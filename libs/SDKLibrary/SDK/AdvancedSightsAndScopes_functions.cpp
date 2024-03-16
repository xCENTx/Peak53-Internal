#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D
// (SceneComponent)

class UClass* USKG_SceneCaptureComponent2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SKG_SceneCaptureComponent2D");

	return Clss;
}


// SKG_SceneCaptureComponent2D AdvancedSightsAndScopes.Default__SKG_SceneCaptureComponent2D
// (Public, ClassDefaultObject, ArchetypeObject)

class USKG_SceneCaptureComponent2D* USKG_SceneCaptureComponent2D::GetDefaultObj()
{
	static class USKG_SceneCaptureComponent2D* Default = nullptr;

	if (!Default)
		Default = static_cast<USKG_SceneCaptureComponent2D*>(USKG_SceneCaptureComponent2D::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.ZoomOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::ZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "ZoomOut");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.ZoomIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::ZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "ZoomIn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::StopCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "StopCapture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.StartCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::StartCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "StartCapture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.SetReticle
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USKG_SceneCaptureComponent2D::SetReticle(uint8 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "SetReticle");

	Params::USKG_SceneCaptureComponent2D_SetReticle_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.SetOwningMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*              Mesh                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USKG_SceneCaptureComponent2D::SetOwningMesh(class UMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "SetOwningMesh");

	Params::USKG_SceneCaptureComponent2D_SetOwningMesh_Params Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.SetNewZeroWindage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::SetNewZeroWindage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "SetNewZeroWindage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.SetNewZeroElevation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::SetNewZeroElevation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "SetNewZeroElevation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.ReturnToZeroWindage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::ReturnToZeroWindage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "ReturnToZeroWindage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.ReturnToZeroElevation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::ReturnToZeroElevation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "ReturnToZeroElevation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactUp
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// uint8                              Clicks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USKG_SceneCaptureComponent2D::PointOfImpactUp(uint8 Clicks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "PointOfImpactUp");

	Params::USKG_SceneCaptureComponent2D_PointOfImpactUp_Params Parms{};

	Parms.Clicks = Clicks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactRight
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// uint8                              Clicks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USKG_SceneCaptureComponent2D::PointOfImpactRight(uint8 Clicks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "PointOfImpactRight");

	Params::USKG_SceneCaptureComponent2D_PointOfImpactRight_Params Parms{};

	Parms.Clicks = Clicks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactLeft
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// uint8                              Clicks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USKG_SceneCaptureComponent2D::PointOfImpactLeft(uint8 Clicks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "PointOfImpactLeft");

	Params::USKG_SceneCaptureComponent2D_PointOfImpactLeft_Params Parms{};

	Parms.Clicks = Clicks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.PointOfImpactDown
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// uint8                              Clicks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USKG_SceneCaptureComponent2D::PointOfImpactDown(uint8 Clicks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "PointOfImpactDown");

	Params::USKG_SceneCaptureComponent2D_PointOfImpactDown_Params Parms{};

	Parms.Clicks = Clicks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.GetSightZero
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSKGSightZero               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSKGSightZero USKG_SceneCaptureComponent2D::GetSightZero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "GetSightZero");

	Params::USKG_SceneCaptureComponent2D_GetSightZero_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.GetMagnificationSensitivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USKG_SceneCaptureComponent2D::GetMagnificationSensitivity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "GetMagnificationSensitivity");

	Params::USKG_SceneCaptureComponent2D_GetMagnificationSensitivity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.GetMagnification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USKG_SceneCaptureComponent2D::GetMagnification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "GetMagnification");

	Params::USKG_SceneCaptureComponent2D_GetMagnification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSightsAndScopes.SKG_SceneCaptureComponent2D.CycleReticle
// (Native, Public, BlueprintCallable)
// Parameters:

void USKG_SceneCaptureComponent2D::CycleReticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKG_SceneCaptureComponent2D", "CycleReticle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


