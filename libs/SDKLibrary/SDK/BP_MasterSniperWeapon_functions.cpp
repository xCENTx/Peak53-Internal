#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterSniperWeapon.BP_MasterSniperWeapon_C
// (Actor)

class UClass* ABP_MasterSniperWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterSniperWeapon_C");

	return Clss;
}


// BP_MasterSniperWeapon_C BP_MasterSniperWeapon.Default__BP_MasterSniperWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterSniperWeapon_C* ABP_MasterSniperWeapon_C::GetDefaultObj()
{
	static class ABP_MasterSniperWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterSniperWeapon_C*>(ABP_MasterSniperWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Update Owner Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHideOwner                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue_1                   (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterSniperWeapon_C::Update_Owner_Visibility(bool bHideOwner, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "Update Owner Visibility");

	Params::ABP_MasterSniperWeapon_C_Update_Owner_Visibility_Params Parms{};

	Parms.bHideOwner = bHideOwner;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = CallFunc_K2_GetComponentsByClass_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Get Sighted FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             SightTPFOV                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FOVSetting               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterSniperWeapon_C::Get_Sighted_FOV(double* SightTPFOV, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_FOVSetting& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "Get Sighted FOV");

	Params::ABP_MasterSniperWeapon_C_Get_Sighted_FOV_Params Parms{};

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (SightTPFOV != nullptr)
		*SightTPFOV = Parms.SightTPFOV;

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.GetLookSensitivityMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             Multiplier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FOVSetting               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterSniperWeapon_C::GetLookSensitivityMultiplier(double* Multiplier, const struct FS_FOVSetting& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "GetLookSensitivityMultiplier");

	Params::ABP_MasterSniperWeapon_C_GetLookSensitivityMultiplier_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Select Zoom FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bZoomIn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDoZoom                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FOVSetting               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterSniperWeapon_C::Select_Zoom_FOV(bool bZoomIn, bool* bDoZoom, int32 TargetIndex, bool NewLocalVar, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_FOVSetting& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "Select Zoom FOV");

	Params::ABP_MasterSniperWeapon_C_Select_Zoom_FOV_Params Parms{};

	Parms.bZoomIn = bZoomIn;
	Parms.TargetIndex = TargetIndex;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bDoZoom != nullptr)
		*bDoZoom = Parms.bDoZoom;

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.SGK ClientSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterSniperWeapon_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "SGK ClientSecondaryAction");

	Params::ABP_MasterSniperWeapon_C_SGK_ClientSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.SniperZoomIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::SniperZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "SniperZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.SniperZoomOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::SniperZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "SniperZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.CreateScope
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::CreateScope()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "CreateScope");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.ClientExitAim
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::ClientExitAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "ClientExitAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.ZoomToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::ZoomToggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "ZoomToggle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.HandleZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bZoomIn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterSniperWeapon_C::HandleZoom(bool bZoomIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "HandleZoom");

	Params::ABP_MasterSniperWeapon_C_HandleZoom_Params Parms{};

	Parms.bZoomIn = bZoomIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.EndZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::EndZoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "EndZoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.StopZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterSniperWeapon_C::StopZoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "StopZoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterSniperWeapon.BP_MasterSniperWeapon_C.ExecuteUbergraph_BP_MasterSniperWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MagnifiedScope_C*        K2Node_DynamicCast_AsBP_Magnified_Scope                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_bZoomIn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Select_Zoom_FOV_bDoZoom                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterSniperWeapon_C::ExecuteUbergraph_BP_MasterSniperWeapon(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_KeyDown, bool CallFunc_IsValid_ReturnValue_1, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_1, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_MagnifiedScope_C* K2Node_DynamicCast_AsBP_Magnified_Scope, bool K2Node_DynamicCast_bSuccess_2, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, bool K2Node_CustomEvent_bZoomIn, bool CallFunc_Select_Zoom_FOV_bDoZoom, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess_3, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSniperWeapon_C", "ExecuteUbergraph_BP_MasterSniperWeapon");

	Params::ABP_MasterSniperWeapon_C_ExecuteUbergraph_BP_MasterSniperWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_KeyDown = K2Node_Event_KeyDown;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character_1 = K2Node_DynamicCast_AsBP_SGKMaster_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Magnified_Scope = K2Node_DynamicCast_AsBP_Magnified_Scope;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.K2Node_CustomEvent_bZoomIn = K2Node_CustomEvent_bZoomIn;
	Parms.CallFunc_Select_Zoom_FOV_bDoZoom = CallFunc_Select_Zoom_FOV_bDoZoom;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface = K2Node_DynamicCast_AsBP_SGKCharacter_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera = CallFunc_SGK_CharacterCamera_CurrentCamera;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm = CallFunc_SGK_CharacterCamera_CurrentSpringArm;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


