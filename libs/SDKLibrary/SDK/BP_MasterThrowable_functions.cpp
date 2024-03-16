#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterThrowable.BP_MasterThrowable_C
// (Actor)

class UClass* ABP_MasterThrowable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterThrowable_C");

	return Clss;
}


// BP_MasterThrowable_C BP_MasterThrowable.Default__BP_MasterThrowable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterThrowable_C* ABP_MasterThrowable_C::GetDefaultObj()
{
	static class ABP_MasterThrowable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterThrowable_C*>(ABP_MasterThrowable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ClearPreviousArc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::ClearPreviousArc(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "ClearPreviousArc");

	Params::ABP_MasterThrowable_C_ClearPreviousArc_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK HoldableMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "SGK HoldableMesh");

	Params::ABP_MasterThrowable_C_SGK_HoldableMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.InitializeThrowProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::InitializeThrowProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "InitializeThrowProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ThrowBlockCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowThrow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BlockedL                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              IgnoreActorsL                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::ThrowBlockCheck(bool* AllowThrow, bool BlockedL, const TArray<class AActor*>& IgnoreActorsL, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "ThrowBlockCheck");

	Params::ABP_MasterThrowable_C_ThrowBlockCheck_Params Parms{};

	Parms.BlockedL = BlockedL;
	Parms.IgnoreActorsL = IgnoreActorsL;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface = K2Node_DynamicCast_AsBP_SGKCharacter_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_CharacterSockets_Component = CallFunc_SGK_CharacterSockets_Component;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowThrow != nullptr)
		*AllowThrow = Parms.AllowThrow;

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.TL_GrenadeCharge__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::TL_GrenadeCharge__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "TL_GrenadeCharge__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.TL_GrenadeCharge__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::TL_GrenadeCharge__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "TL_GrenadeCharge__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.TL_DrawTrajectory__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::TL_DrawTrajectory__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "TL_DrawTrajectory__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.TL_DrawTrajectory__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::TL_DrawTrajectory__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "TL_DrawTrajectory__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.TL_DrawTrajectory__RefreshLine__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::TL_DrawTrajectory__RefreshLine__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "TL_DrawTrajectory__RefreshLine__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.CharacterSprinting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sprinting                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::CharacterSprinting(bool Sprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "CharacterSprinting");

	Params::ABP_MasterThrowable_C_CharacterSprinting_Params Parms{};

	Parms.Sprinting = Sprinting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.CharacterFalling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::CharacterFalling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "CharacterFalling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.CancelThrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::CancelThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "CancelThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK NewHeld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Held                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::SGK_NewHeld(bool Held)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "SGK NewHeld");

	Params::ABP_MasterThrowable_C_SGK_NewHeld_Params Parms{};

	Parms.Held = Held;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK ServerSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::SGK_ServerSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "SGK ServerSecondaryAction");

	Params::ABP_MasterThrowable_C_SGK_ServerSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK ServerPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "SGK ServerPrimaryAction");

	Params::ABP_MasterThrowable_C_SGK_ServerPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "ReceiveTick");

	Params::ABP_MasterThrowable_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.StopThrowArc
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::StopThrowArc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "StopThrowArc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.StopGrenadeCharging
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::StopGrenadeCharging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "StopGrenadeCharging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.StartGrenadeCharging
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::StartGrenadeCharging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "StartGrenadeCharging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.StartThrowArc
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::StartThrowArc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "StartThrowArc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SGK ClientSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "SGK ClientSecondaryAction");

	Params::ABP_MasterThrowable_C_SGK_ClientSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.AnimNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Notify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::AnimNotify(class FName Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "AnimNotify");

	Params::ABP_MasterThrowable_C_AnimNotify_Params Parms{};

	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ExecuteUbergraph_BP_MasterThrowable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Sprinting                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Held                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ClampAngle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAxis_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFlying_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutHit   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FVector>             CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions(ReferenceParm)
// struct FVector                     CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTangentAtSplinePoint_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTangentAtSplinePoint_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       K2Node_DynamicCast_AsBP_Player_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID_1                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItemAmount_ItemRemoved                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// bool                               CallFunc_ThrowBlockCheck_AllowThrow                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterThrowableProjectile_C*K2Node_DynamicCast_AsBP_Master_Throwable_Projectile              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Notify                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ClampAngle_AngleDegrees_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAxis_Angle_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::ExecuteUbergraph_BP_MasterThrowable(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_Sprinting, bool K2Node_Event_Held, bool K2Node_Event_KeyDown_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool K2Node_Event_KeyDown_1, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& Temp_struct_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_ClampAngle_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_ClampAxis_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_IsFlying_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_KeyDown, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutHit, TArray<struct FVector>& CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions, const struct FVector& CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination, bool CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UBP_PlayerInventory_C* K2Node_DynamicCast_AsBP_Player_Inventory, bool K2Node_DynamicCast_bSuccess_1, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_RemoveItemAmount_ItemRemoved, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, bool CallFunc_ThrowBlockCheck_AllowThrow, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Array_Get_Item, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_MasterThrowableProjectile_C* K2Node_DynamicCast_AsBP_Master_Throwable_Projectile, bool K2Node_DynamicCast_bSuccess_3, class FName K2Node_CustomEvent_Notify, bool K2Node_SwitchName_CmpSuccess, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, float CallFunc_ClampAxis_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "ExecuteUbergraph_BP_MasterThrowable");

	Params::ABP_MasterThrowable_C_ExecuteUbergraph_BP_MasterThrowable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Sprinting = K2Node_Event_Sprinting;
	Parms.K2Node_Event_Held = K2Node_Event_Held;
	Parms.K2Node_Event_KeyDown_2 = K2Node_Event_KeyDown_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.K2Node_Event_KeyDown_1 = K2Node_Event_KeyDown_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface = K2Node_DynamicCast_AsBP_SGKCharacter_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_CharacterSockets_Component = CallFunc_SGK_CharacterSockets_Component;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue = CallFunc_GetBaseAimRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_ClampAngle_ReturnValue = CallFunc_ClampAngle_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_ClampAxis_ReturnValue = CallFunc_ClampAxis_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_IsFlying_ReturnValue = CallFunc_IsFlying_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_KeyDown = K2Node_Event_KeyDown;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutHit = CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutHit;
	Parms.CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions = CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions;
	Parms.CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination = CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination;
	Parms.CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue = CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetTangentAtSplinePoint_ReturnValue = CallFunc_GetTangentAtSplinePoint_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetTangentAtSplinePoint_ReturnValue_1 = CallFunc_GetTangentAtSplinePoint_ReturnValue_1;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue_1 = CallFunc_GetLocationAtSplinePoint_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Player_Inventory = K2Node_DynamicCast_AsBP_Player_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_S_WeaponSlotID = K2Node_MakeStruct_S_WeaponSlotID;
	Parms.K2Node_MakeStruct_S_WeaponSlotID_1 = K2Node_MakeStruct_S_WeaponSlotID_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RemoveItemAmount_ItemRemoved = CallFunc_RemoveItemAmount_ItemRemoved;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.CallFunc_ThrowBlockCheck_AllowThrow = CallFunc_ThrowBlockCheck_AllowThrow;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SGK_CharacterSockets_Component_1 = CallFunc_SGK_CharacterSockets_Component_1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Master_Throwable_Projectile = K2Node_DynamicCast_AsBP_Master_Throwable_Projectile;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_Notify = K2Node_CustomEvent_Notify;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_ClampAngle_AngleDegrees_ImplicitCast = CallFunc_ClampAngle_AngleDegrees_ImplicitCast;
	Parms.CallFunc_ClampAxis_Angle_ImplicitCast = CallFunc_ClampAxis_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


