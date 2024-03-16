#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagnifiedScope.BP_MagnifiedScope_C
// (Actor)

class UClass* ABP_MagnifiedScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagnifiedScope_C");

	return Clss;
}


// BP_MagnifiedScope_C BP_MagnifiedScope.Default__BP_MagnifiedScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagnifiedScope_C* ABP_MagnifiedScope_C::GetDefaultObj()
{
	static class ABP_MagnifiedScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagnifiedScope_C*>(ABP_MagnifiedScope_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MagnifiedScope.BP_MagnifiedScope_C.GetSceneCapture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USKG_SceneCaptureComponent2D*SceneCapture                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MagnifiedScope_C::GetSceneCapture(class USKG_SceneCaptureComponent2D** SceneCapture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MagnifiedScope_C", "GetSceneCapture");

	Params::ABP_MagnifiedScope_C_GetSceneCapture_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SceneCapture != nullptr)
		*SceneCapture = Parms.SceneCapture;

}


// Function BP_MagnifiedScope.BP_MagnifiedScope_C.OnElevationChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldAdjustment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewAdjustment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MagnifiedScope_C::OnElevationChanged(float OldAdjustment, float NewAdjustment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MagnifiedScope_C", "OnElevationChanged");

	Params::ABP_MagnifiedScope_C_OnElevationChanged_Params Parms{};

	Parms.OldAdjustment = OldAdjustment;
	Parms.NewAdjustment = NewAdjustment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MagnifiedScope.BP_MagnifiedScope_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MagnifiedScope_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MagnifiedScope_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MagnifiedScope.BP_MagnifiedScope_C.OnWindageChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldAdjustment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewAdjustment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MagnifiedScope_C::OnWindageChanged(float OldAdjustment, float NewAdjustment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MagnifiedScope_C", "OnWindageChanged");

	Params::ABP_MagnifiedScope_C_OnWindageChanged_Params Parms{};

	Parms.OldAdjustment = OldAdjustment;
	Parms.NewAdjustment = NewAdjustment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MagnifiedScope.BP_MagnifiedScope_C.ExecuteUbergraph_BP_MagnifiedScope
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_OldAdjustment_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewAdjustment_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldAdjustment                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewAdjustment                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult_2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult_3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MagnifiedScope_C::ExecuteUbergraph_BP_MagnifiedScope(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float K2Node_CustomEvent_OldAdjustment_1, float K2Node_CustomEvent_NewAdjustment_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_CustomEvent_OldAdjustment, float K2Node_CustomEvent_NewAdjustment, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MagnifiedScope_C", "ExecuteUbergraph_BP_MagnifiedScope");

	Params::ABP_MagnifiedScope_C_ExecuteUbergraph_BP_MagnifiedScope_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.K2Node_CustomEvent_OldAdjustment_1 = K2Node_CustomEvent_OldAdjustment_1;
	Parms.K2Node_CustomEvent_NewAdjustment_1 = K2Node_CustomEvent_NewAdjustment_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_OldAdjustment = K2Node_CustomEvent_OldAdjustment;
	Parms.K2Node_CustomEvent_NewAdjustment = K2Node_CustomEvent_NewAdjustment;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult_1 = CallFunc_K2_AddLocalRotation_SweepHitResult_1;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult_2 = CallFunc_K2_AddLocalRotation_SweepHitResult_2;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult_3 = CallFunc_K2_AddLocalRotation_SweepHitResult_3;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


