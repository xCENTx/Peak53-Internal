#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_PlayerCameraManager.ALS_PlayerCameraManager_C
// (Actor)

class UClass* AALS_PlayerCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_PlayerCameraManager_C");

	return Clss;
}


// ALS_PlayerCameraManager_C ALS_PlayerCameraManager.Default__ALS_PlayerCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AALS_PlayerCameraManager_C* AALS_PlayerCameraManager_C::GetDefaultObj()
{
	static class AALS_PlayerCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AALS_PlayerCameraManager_C*>(AALS_PlayerCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.DrawDebugTargets
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PivotTargetLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_PlayerCameraManager_C::DrawDebugTargets(const struct FVector& PivotTargetLocation, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "DrawDebugTargets");

	Params::AALS_PlayerCameraManager_C_DrawDebugTargets_Params Parms{};

	Parms.PivotTargetLocation = PivotTargetLocation;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


