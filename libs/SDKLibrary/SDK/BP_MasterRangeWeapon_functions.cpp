#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterRangeWeapon.BP_MasterRangeWeapon_C
// (Actor)

class UClass* ABP_MasterRangeWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterRangeWeapon_C");

	return Clss;
}


// BP_MasterRangeWeapon_C BP_MasterRangeWeapon.Default__BP_MasterRangeWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterRangeWeapon_C* ABP_MasterRangeWeapon_C::GetDefaultObj()
{
	static class ABP_MasterRangeWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterRangeWeapon_C*>(ABP_MasterRangeWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnRep_bFlashlight?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::OnRep_bFlashlight_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnRep_bFlashlight?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.Get Sighted FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             SightTPFOV                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::Get_Sighted_FOV(double* SightTPFOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "Get Sighted FOV");

	Params::ABP_MasterRangeWeapon_C_Get_Sighted_FOV_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SightTPFOV != nullptr)
		*SightTPFOV = Parms.SightTPFOV;

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CanShoot?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               TURR                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKMasterCharacter_C*    K2Node_DynamicCast_AsBP_SGKMaster_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentCharacter_C*    K2Node_DynamicCast_AsBP_Equipment_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::CanShoot_(bool* TURR, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, class ABP_EquipmentCharacter_C* K2Node_DynamicCast_AsBP_Equipment_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "CanShoot?");

	Params::ABP_MasterRangeWeapon_C_CanShoot__Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_SGKMaster_Character = K2Node_DynamicCast_AsBP_SGKMaster_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Character = K2Node_DynamicCast_AsBP_Equipment_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TURR != nullptr)
		*TURR = Parms.TURR;

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnRep_Reload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::OnRep_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnRep_Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CheckPlanting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               PlantingBomb                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::CheckPlanting(bool* PlantingBomb, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "CheckPlanting");

	Params::ABP_MasterRangeWeapon_C_CheckPlanting_Params Parms{};

	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlantingBomb != nullptr)
		*PlantingBomb = Parms.PlantingBomb;

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.UpdateBulletSpawnLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::UpdateBulletSpawnLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "UpdateBulletSpawnLocation");

	Params::ABP_MasterRangeWeapon_C_UpdateBulletSpawnLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK Aimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Aimed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_Aimed(bool* Aimed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK Aimed");

	Params::ABP_MasterRangeWeapon_C_SGK_Aimed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Aimed != nullptr)
		*Aimed = Parms.Aimed;

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK HoldableMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK HoldableMesh");

	Params::ABP_MasterRangeWeapon_C_SGK_HoldableMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ApplyRangeWeaponAttachmentStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ApplyRangeWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_5, double CallFunc_Add_DoubleDouble_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast_3, float K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast, float K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast, float K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast, float K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ApplyRangeWeaponAttachmentStats");

	Params::ABP_MasterRangeWeapon_C_ApplyRangeWeaponAttachmentStats_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_6 = CallFunc_Add_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_3 = CallFunc_Add_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_2 = CallFunc_Add_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_3 = CallFunc_Add_DoubleDouble_B_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast = K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast = K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast = K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast = K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveRangeWeaponAttachmentStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::RemoveRangeWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_6, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_3, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3, float K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast, float K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast, float K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast, float K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "RemoveRangeWeaponAttachmentStats");

	Params::ABP_MasterRangeWeapon_C_RemoveRangeWeaponAttachmentStats_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4 = CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_5 = CallFunc_Subtract_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_6 = CallFunc_Subtract_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_3 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_3;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast = K2Node_SetFieldsInStruct_PitchMax_8_F3408BD849A29585C06B7794AF33ADAA_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast = K2Node_SetFieldsInStruct_PitchMin_7_EA2DF96547EAD19F771CD7A30274339B_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast = K2Node_SetFieldsInStruct_YawMax_6_82A1804348DAD0D83E650C8A35DD3EC5_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast = K2Node_SetFieldsInStruct_YawMin_5_DFB6BD3240049CF09E9C679C8047D8C6_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CalculateWeaponSway
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::CalculateWeaponSway(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double K2Node_Select_Default_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool Temp_bool_Variable_3, double K2Node_Select_Default_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default_3, double CallFunc_FClamp_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "CalculateWeaponSway");

	Params::ABP_MasterRangeWeapon_C_CalculateWeaponSway_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast = CallFunc_RInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast = CallFunc_RInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveMagazineChecks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  NewMagSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddAttachmentFromSlot_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_2                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_AttachmentSlotID         K2Node_MakeStruct_S_AttachmentSlotID                             (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SearchEquipmentForEmptySlots_SpaceFound                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchEquipmentForEmptySlots_Rotation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SearchEquipmentForEmptySlots_FoundSlots                 (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_3                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::RemoveMagazineChecks(const struct FS_InvSlot& NewMagSlot, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, bool CallFunc_AddAttachmentFromSlot_ReturnValue, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_2, const struct FS_AttachmentSlotID& K2Node_MakeStruct_S_AttachmentSlotID, bool CallFunc_SearchEquipmentForEmptySlots_SpaceFound, bool CallFunc_SearchEquipmentForEmptySlots_Rotation, TArray<struct FS_InvSlot>& CallFunc_SearchEquipmentForEmptySlots_FoundSlots, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FS_InvSlot& CallFunc_Array_Get_Item, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "RemoveMagazineChecks");

	Params::ABP_MasterRangeWeapon_C_RemoveMagazineChecks_Params Parms{};

	Parms.NewMagSlot = NewMagSlot;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.K2Node_MakeStruct_S_InvSlotID_1 = K2Node_MakeStruct_S_InvSlotID_1;
	Parms.CallFunc_AddAttachmentFromSlot_ReturnValue = CallFunc_AddAttachmentFromSlot_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSlotID_2 = K2Node_MakeStruct_S_InvSlotID_2;
	Parms.K2Node_MakeStruct_S_AttachmentSlotID = K2Node_MakeStruct_S_AttachmentSlotID;
	Parms.CallFunc_SearchEquipmentForEmptySlots_SpaceFound = CallFunc_SearchEquipmentForEmptySlots_SpaceFound;
	Parms.CallFunc_SearchEquipmentForEmptySlots_Rotation = CallFunc_SearchEquipmentForEmptySlots_Rotation;
	Parms.CallFunc_SearchEquipmentForEmptySlots_FoundSlots = CallFunc_SearchEquipmentForEmptySlots_FoundSlots;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_S_InvSlotID_3 = K2Node_MakeStruct_S_InvSlotID_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ChamberAmmoCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AmmoFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchPlayerInventoryForItem_ItemsFound                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchPlayerInventoryForItem_InvSlots                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SearchPlayerInventoryForItem_AllInvSlots                (ReferenceParm, ContainsInstancedReference)

void ABP_MasterRangeWeapon_C::ChamberAmmoCheck(bool* AmmoFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SearchPlayerInventoryForItem_ItemsFound, const struct FS_InvSlot& CallFunc_SearchPlayerInventoryForItem_InvSlots, TArray<struct FS_InvSlot>& CallFunc_SearchPlayerInventoryForItem_AllInvSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ChamberAmmoCheck");

	Params::ABP_MasterRangeWeapon_C_ChamberAmmoCheck_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SearchPlayerInventoryForItem_ItemsFound = CallFunc_SearchPlayerInventoryForItem_ItemsFound;
	Parms.CallFunc_SearchPlayerInventoryForItem_InvSlots = CallFunc_SearchPlayerInventoryForItem_InvSlots;
	Parms.CallFunc_SearchPlayerInventoryForItem_AllInvSlots = CallFunc_SearchPlayerInventoryForItem_AllInvSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoFound != nullptr)
		*AmmoFound = Parms.AmmoFound;

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.IncreaseSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IncreaseAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::IncreaseSpread(double IncreaseAmount, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "IncreaseSpread");

	Params::ABP_MasterRangeWeapon_C_IncreaseSpread_Params Parms{};

	Parms.IncreaseAmount = IncreaseAmount;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.UpdateMinSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CharacterState        CharacterState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::UpdateMinSpread(enum class E_CharacterState CharacterState, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "UpdateMinSpread");

	Params::ABP_MasterRangeWeapon_C_UpdateMinSpread_Params Parms{};

	Parms.CharacterState = CharacterState;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.DecreaseSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::DecreaseSpread(double Amount, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "DecreaseSpread");

	Params::ABP_MasterRangeWeapon_C_DecreaseSpread_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.HitscanTraces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     MultiStartL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResultL                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FName                        HitBoneL                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActorL                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndLocationL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance_L                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CameraTraceEndL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CameraLocationL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CameraTraceResultL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Damage>           K2Node_Select_Default                                            (ReferenceParm)
// TArray<struct FS_Damage>           K2Node_Select_Default_1                                          (ReferenceParm)
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
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CameraType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_3                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_2                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_3                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_4                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_4                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_5                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_5                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::HitscanTraces(const struct FVector& MultiStartL, const struct FHitResult& HitResultL, class FName HitBoneL, class AActor* HitActorL, const struct FVector& EndLocationL, double Distance_L, const struct FVector& CameraTraceEndL, const struct FVector& CameraLocationL, const struct FHitResult& CameraTraceResultL, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool Temp_bool_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_3, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_FClamp_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_RandomFloatInRange_ReturnValue_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<class AActor*>& K2Node_MakeArray_Array_2, TArray<class AActor*>& K2Node_MakeArray_Array_3, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FS_Damage>& K2Node_Select_Default, TArray<struct FS_Damage>& K2Node_Select_Default_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, enum class E_CameraType Temp_byte_Variable, const struct FVector& K2Node_Select_Default_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, class FName CallFunc_BreakHitResult_BoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_ElementIndex_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_2, bool CallFunc_LineTraceSingle_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_3, bool CallFunc_LineTraceSingle_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit_4, bool CallFunc_BreakHitResult_bInitialOverlap_4, float CallFunc_BreakHitResult_Time_4, float CallFunc_BreakHitResult_Distance_4, const struct FVector& CallFunc_BreakHitResult_Location_4, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_4, const struct FVector& CallFunc_BreakHitResult_Normal_4, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_4, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_4, class AActor* CallFunc_BreakHitResult_HitActor_4, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_4, class FName CallFunc_BreakHitResult_HitBoneName_4, class FName CallFunc_BreakHitResult_BoneName_4, int32 CallFunc_BreakHitResult_HitItem_4, int32 CallFunc_BreakHitResult_ElementIndex_4, int32 CallFunc_BreakHitResult_FaceIndex_4, const struct FVector& CallFunc_BreakHitResult_TraceStart_4, const struct FVector& CallFunc_BreakHitResult_TraceEnd_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_5, bool CallFunc_BreakHitResult_bInitialOverlap_5, float CallFunc_BreakHitResult_Time_5, float CallFunc_BreakHitResult_Distance_5, const struct FVector& CallFunc_BreakHitResult_Location_5, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_5, const struct FVector& CallFunc_BreakHitResult_Normal_5, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_5, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_5, class AActor* CallFunc_BreakHitResult_HitActor_5, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_5, class FName CallFunc_BreakHitResult_HitBoneName_5, class FName CallFunc_BreakHitResult_BoneName_5, int32 CallFunc_BreakHitResult_HitItem_5, int32 CallFunc_BreakHitResult_ElementIndex_5, int32 CallFunc_BreakHitResult_FaceIndex_5, const struct FVector& CallFunc_BreakHitResult_TraceStart_5, const struct FVector& CallFunc_BreakHitResult_TraceEnd_5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_VSize_ReturnValue, double CallFunc_VSize_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_3, const struct FVector& K2Node_Select_Default_4, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "HitscanTraces");

	Params::ABP_MasterRangeWeapon_C_HitscanTraces_Params Parms{};

	Parms.MultiStartL = MultiStartL;
	Parms.HitResultL = HitResultL;
	Parms.HitBoneL = HitBoneL;
	Parms.HitActorL = HitActorL;
	Parms.EndLocationL = EndLocationL;
	Parms.Distance_L = Distance_L;
	Parms.CameraTraceEndL = CameraTraceEndL;
	Parms.CameraLocationL = CameraLocationL;
	Parms.CameraTraceResultL = CameraTraceResultL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue = CallFunc_GetBaseAimRotation_ReturnValue;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue_1 = CallFunc_GetBaseAimRotation_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_2 = CallFunc_Conv_RotatorToVector_ReturnValue_2;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_3 = CallFunc_Conv_RotatorToVector_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface = K2Node_DynamicCast_AsBP_SGKCharacter_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_CharacterSockets_Component = CallFunc_SGK_CharacterSockets_Component;
	Parms.CallFunc_SGK_CharacterSockets_Component_1 = CallFunc_SGK_CharacterSockets_Component_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
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
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_BoneName_2 = CallFunc_BreakHitResult_BoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_ElementIndex_2 = CallFunc_BreakHitResult_ElementIndex_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_3 = CallFunc_BreakHitResult_bBlockingHit_3;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_3 = CallFunc_BreakHitResult_bInitialOverlap_3;
	Parms.CallFunc_BreakHitResult_Time_3 = CallFunc_BreakHitResult_Time_3;
	Parms.CallFunc_BreakHitResult_Distance_3 = CallFunc_BreakHitResult_Distance_3;
	Parms.CallFunc_BreakHitResult_Location_3 = CallFunc_BreakHitResult_Location_3;
	Parms.CallFunc_BreakHitResult_ImpactPoint_3 = CallFunc_BreakHitResult_ImpactPoint_3;
	Parms.CallFunc_BreakHitResult_Normal_3 = CallFunc_BreakHitResult_Normal_3;
	Parms.CallFunc_BreakHitResult_ImpactNormal_3 = CallFunc_BreakHitResult_ImpactNormal_3;
	Parms.CallFunc_BreakHitResult_PhysMat_3 = CallFunc_BreakHitResult_PhysMat_3;
	Parms.CallFunc_BreakHitResult_HitActor_3 = CallFunc_BreakHitResult_HitActor_3;
	Parms.CallFunc_BreakHitResult_HitComponent_3 = CallFunc_BreakHitResult_HitComponent_3;
	Parms.CallFunc_BreakHitResult_HitBoneName_3 = CallFunc_BreakHitResult_HitBoneName_3;
	Parms.CallFunc_BreakHitResult_BoneName_3 = CallFunc_BreakHitResult_BoneName_3;
	Parms.CallFunc_BreakHitResult_HitItem_3 = CallFunc_BreakHitResult_HitItem_3;
	Parms.CallFunc_BreakHitResult_ElementIndex_3 = CallFunc_BreakHitResult_ElementIndex_3;
	Parms.CallFunc_BreakHitResult_FaceIndex_3 = CallFunc_BreakHitResult_FaceIndex_3;
	Parms.CallFunc_BreakHitResult_TraceStart_3 = CallFunc_BreakHitResult_TraceStart_3;
	Parms.CallFunc_BreakHitResult_TraceEnd_3 = CallFunc_BreakHitResult_TraceEnd_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit_2 = CallFunc_LineTraceSingle_OutHit_2;
	Parms.CallFunc_LineTraceSingle_ReturnValue_2 = CallFunc_LineTraceSingle_ReturnValue_2;
	Parms.CallFunc_LineTraceSingle_OutHit_3 = CallFunc_LineTraceSingle_OutHit_3;
	Parms.CallFunc_LineTraceSingle_ReturnValue_3 = CallFunc_LineTraceSingle_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_4 = CallFunc_BreakHitResult_bBlockingHit_4;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_4 = CallFunc_BreakHitResult_bInitialOverlap_4;
	Parms.CallFunc_BreakHitResult_Time_4 = CallFunc_BreakHitResult_Time_4;
	Parms.CallFunc_BreakHitResult_Distance_4 = CallFunc_BreakHitResult_Distance_4;
	Parms.CallFunc_BreakHitResult_Location_4 = CallFunc_BreakHitResult_Location_4;
	Parms.CallFunc_BreakHitResult_ImpactPoint_4 = CallFunc_BreakHitResult_ImpactPoint_4;
	Parms.CallFunc_BreakHitResult_Normal_4 = CallFunc_BreakHitResult_Normal_4;
	Parms.CallFunc_BreakHitResult_ImpactNormal_4 = CallFunc_BreakHitResult_ImpactNormal_4;
	Parms.CallFunc_BreakHitResult_PhysMat_4 = CallFunc_BreakHitResult_PhysMat_4;
	Parms.CallFunc_BreakHitResult_HitActor_4 = CallFunc_BreakHitResult_HitActor_4;
	Parms.CallFunc_BreakHitResult_HitComponent_4 = CallFunc_BreakHitResult_HitComponent_4;
	Parms.CallFunc_BreakHitResult_HitBoneName_4 = CallFunc_BreakHitResult_HitBoneName_4;
	Parms.CallFunc_BreakHitResult_BoneName_4 = CallFunc_BreakHitResult_BoneName_4;
	Parms.CallFunc_BreakHitResult_HitItem_4 = CallFunc_BreakHitResult_HitItem_4;
	Parms.CallFunc_BreakHitResult_ElementIndex_4 = CallFunc_BreakHitResult_ElementIndex_4;
	Parms.CallFunc_BreakHitResult_FaceIndex_4 = CallFunc_BreakHitResult_FaceIndex_4;
	Parms.CallFunc_BreakHitResult_TraceStart_4 = CallFunc_BreakHitResult_TraceStart_4;
	Parms.CallFunc_BreakHitResult_TraceEnd_4 = CallFunc_BreakHitResult_TraceEnd_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_5 = CallFunc_BreakHitResult_bBlockingHit_5;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_5 = CallFunc_BreakHitResult_bInitialOverlap_5;
	Parms.CallFunc_BreakHitResult_Time_5 = CallFunc_BreakHitResult_Time_5;
	Parms.CallFunc_BreakHitResult_Distance_5 = CallFunc_BreakHitResult_Distance_5;
	Parms.CallFunc_BreakHitResult_Location_5 = CallFunc_BreakHitResult_Location_5;
	Parms.CallFunc_BreakHitResult_ImpactPoint_5 = CallFunc_BreakHitResult_ImpactPoint_5;
	Parms.CallFunc_BreakHitResult_Normal_5 = CallFunc_BreakHitResult_Normal_5;
	Parms.CallFunc_BreakHitResult_ImpactNormal_5 = CallFunc_BreakHitResult_ImpactNormal_5;
	Parms.CallFunc_BreakHitResult_PhysMat_5 = CallFunc_BreakHitResult_PhysMat_5;
	Parms.CallFunc_BreakHitResult_HitActor_5 = CallFunc_BreakHitResult_HitActor_5;
	Parms.CallFunc_BreakHitResult_HitComponent_5 = CallFunc_BreakHitResult_HitComponent_5;
	Parms.CallFunc_BreakHitResult_HitBoneName_5 = CallFunc_BreakHitResult_HitBoneName_5;
	Parms.CallFunc_BreakHitResult_BoneName_5 = CallFunc_BreakHitResult_BoneName_5;
	Parms.CallFunc_BreakHitResult_HitItem_5 = CallFunc_BreakHitResult_HitItem_5;
	Parms.CallFunc_BreakHitResult_ElementIndex_5 = CallFunc_BreakHitResult_ElementIndex_5;
	Parms.CallFunc_BreakHitResult_FaceIndex_5 = CallFunc_BreakHitResult_FaceIndex_5;
	Parms.CallFunc_BreakHitResult_TraceStart_5 = CallFunc_BreakHitResult_TraceStart_5;
	Parms.CallFunc_BreakHitResult_TraceEnd_5 = CallFunc_BreakHitResult_TraceEnd_5;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_3 = CallFunc_Add_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast_1 = CallFunc_MakeRotator_Yaw_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast_1 = CallFunc_MakeRotator_Pitch_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ProjectileCalculation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoBleed                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MultiL                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        HitBoneL                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActorL                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndLocationL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance_L                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CameraTraceEndL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CameraLocationL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CameraTraceResultL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class E_CameraType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemAmmoDetails_ItemFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AmmoDetails              CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails                     (HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterProjectile_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemAmmoDetails_ItemFound_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AmmoDetails              CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails_1                   (HasGetValueTypeHash)
// enum class E_DamageType            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Damage>           K2Node_Select_Default_1                                          (ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class ABP_MasterProjectile_C*      CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Damage>           K2Node_Select_Default_2                                          (ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DamageType            K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_2                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomBoolWithWeight_Weight_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ProjectileCalculation(bool DoBleed, const struct FVector& MultiL, class FName HitBoneL, class AActor* HitActorL, const struct FVector& EndLocationL, double Distance_L, const struct FVector& CameraTraceEndL, const struct FVector& CameraLocationL, const struct FHitResult& CameraTraceResultL, enum class E_CameraType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool Temp_bool_Variable_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, int32 Temp_int_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_FClamp_ReturnValue_2, double CallFunc_FClamp_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_SGK_ItemAmmoDetails_ItemFound, const struct FS_AmmoDetails& CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class ABP_MasterProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_SGK_ItemAmmoDetails_ItemFound_1, const struct FS_AmmoDetails& CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails_1, enum class E_DamageType K2Node_Select_Default, TArray<struct FS_Damage>& K2Node_Select_Default_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, class ABP_MasterProjectile_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool Temp_bool_Variable_4, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, TArray<struct FS_Damage>& K2Node_Select_Default_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_6, const struct FVector& K2Node_Select_Default_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_8, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<class AActor*>& K2Node_MakeArray_Array_2, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue_1, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_3, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_5, bool Temp_bool_Variable_5, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class E_DamageType K2Node_Select_Default_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_2, bool CallFunc_LineTraceSingle_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_VSize_ReturnValue, double CallFunc_VSize_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, double K2Node_Select_Default_5, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, const struct FVector& K2Node_Select_Default_6, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, float CallFunc_RandomBoolWithWeight_Weight_ImplicitCast, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ProjectileCalculation");

	Params::ABP_MasterRangeWeapon_C_ProjectileCalculation_Params Parms{};

	Parms.DoBleed = DoBleed;
	Parms.MultiL = MultiL;
	Parms.HitBoneL = HitBoneL;
	Parms.HitActorL = HitActorL;
	Parms.EndLocationL = EndLocationL;
	Parms.Distance_L = Distance_L;
	Parms.CameraTraceEndL = CameraTraceEndL;
	Parms.CameraLocationL = CameraLocationL;
	Parms.CameraTraceResultL = CameraTraceResultL;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_6 = CallFunc_Add_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_7 = CallFunc_Add_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_2 = CallFunc_FindLookAtRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_3 = CallFunc_FindLookAtRotation_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_4 = CallFunc_FindLookAtRotation_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SGK_ItemAmmoDetails_ItemFound = CallFunc_SGK_ItemAmmoDetails_ItemFound;
	Parms.CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails = CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_SGK_ItemAmmoDetails_ItemFound_1 = CallFunc_SGK_ItemAmmoDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails_1 = CallFunc_SGK_ItemAmmoDetails_ItemAmmoDetails_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue = CallFunc_GetBaseAimRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_2 = CallFunc_Conv_RotatorToVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
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
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface = K2Node_DynamicCast_AsBP_SGKCharacter_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_CharacterSockets_Component = CallFunc_SGK_CharacterSockets_Component;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_5 = CallFunc_K2_GetComponentLocation_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SGK_CharacterSockets_Component_1 = CallFunc_SGK_CharacterSockets_Component_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_6 = CallFunc_K2_GetComponentLocation_ReturnValue_6;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_7 = CallFunc_K2_GetComponentLocation_ReturnValue_7;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_8 = CallFunc_K2_GetComponentLocation_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue_1 = CallFunc_GetBaseAimRotation_ReturnValue_1;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue_2 = CallFunc_GetBaseAimRotation_ReturnValue_2;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_3 = CallFunc_Conv_RotatorToVector_ReturnValue_3;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_4 = CallFunc_Conv_RotatorToVector_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_5 = CallFunc_FindLookAtRotation_ReturnValue_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit_2 = CallFunc_LineTraceSingle_OutHit_2;
	Parms.CallFunc_LineTraceSingle_ReturnValue_2 = CallFunc_LineTraceSingle_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_BoneName_2 = CallFunc_BreakHitResult_BoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_ElementIndex_2 = CallFunc_BreakHitResult_ElementIndex_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_3 = CallFunc_Add_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast_1 = CallFunc_MakeRotator_Yaw_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast_1 = CallFunc_MakeRotator_Pitch_ImplicitCast_1;
	Parms.CallFunc_RandomBoolWithWeight_Weight_ImplicitCast = CallFunc_RandomBoolWithWeight_Weight_ImplicitCast;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast = CallFunc_SetDoublePropertyByName_Value_ImplicitCast;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1 = CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimeLine__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ADSCameraTimeLine__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ADSCameraTimeLine__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimeLine__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ADSCameraTimeLine__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ADSCameraTimeLine__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D");

	Params::ABP_MasterRangeWeapon_C_OnNotifyEnd_50B07BB945ECC720DEA04E837F2E618D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D");

	Params::ABP_MasterRangeWeapon_C_OnNotifyBegin_50B07BB945ECC720DEA04E837F2E618D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnInterrupted_50B07BB945ECC720DEA04E837F2E618D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnInterrupted_50B07BB945ECC720DEA04E837F2E618D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnInterrupted_50B07BB945ECC720DEA04E837F2E618D");

	Params::ABP_MasterRangeWeapon_C_OnInterrupted_50B07BB945ECC720DEA04E837F2E618D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnBlendOut_50B07BB945ECC720DEA04E837F2E618D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnBlendOut_50B07BB945ECC720DEA04E837F2E618D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnBlendOut_50B07BB945ECC720DEA04E837F2E618D");

	Params::ABP_MasterRangeWeapon_C_OnBlendOut_50B07BB945ECC720DEA04E837F2E618D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnCompleted_50B07BB945ECC720DEA04E837F2E618D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnCompleted_50B07BB945ECC720DEA04E837F2E618D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnCompleted_50B07BB945ECC720DEA04E837F2E618D");

	Params::ABP_MasterRangeWeapon_C_OnCompleted_50B07BB945ECC720DEA04E837F2E618D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB");

	Params::ABP_MasterRangeWeapon_C_OnNotifyEnd_917101B3417C952AA8CFB6B82351D5EB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB");

	Params::ABP_MasterRangeWeapon_C_OnNotifyBegin_917101B3417C952AA8CFB6B82351D5EB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnInterrupted_917101B3417C952AA8CFB6B82351D5EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnInterrupted_917101B3417C952AA8CFB6B82351D5EB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnInterrupted_917101B3417C952AA8CFB6B82351D5EB");

	Params::ABP_MasterRangeWeapon_C_OnInterrupted_917101B3417C952AA8CFB6B82351D5EB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnBlendOut_917101B3417C952AA8CFB6B82351D5EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnBlendOut_917101B3417C952AA8CFB6B82351D5EB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnBlendOut_917101B3417C952AA8CFB6B82351D5EB");

	Params::ABP_MasterRangeWeapon_C_OnBlendOut_917101B3417C952AA8CFB6B82351D5EB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.OnCompleted_917101B3417C952AA8CFB6B82351D5EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::OnCompleted_917101B3417C952AA8CFB6B82351D5EB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "OnCompleted_917101B3417C952AA8CFB6B82351D5EB");

	Params::ABP_MasterRangeWeapon_C_OnCompleted_917101B3417C952AA8CFB6B82351D5EB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientSetReload
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reload                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ClientSetReload(bool Reload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ClientSetReload");

	Params::ABP_MasterRangeWeapon_C_ClientSetReload_Params Parms{};

	Parms.Reload = Reload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerPartReloadChecks
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ServerPartReloadChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ServerPartReloadChecks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ChamberWeaponAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::SGK_ChamberWeaponAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ChamberWeaponAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerReloadChecks
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ServerReloadChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ServerReloadChecks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientReloadChecks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::SGK_ClientReloadChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ClientReloadChecks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerChamberCheckes
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ServerChamberCheckes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ServerChamberCheckes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ToggleFireMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::SGK_ToggleFireMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ToggleFireMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ResetReloadJamSv
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ResetReloadJamSv()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ResetReloadJamSv");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ResetReloadJamClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ResetReloadJamClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ResetReloadJamClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_ClientPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ClientPrimaryAction");

	Params::ABP_MasterRangeWeapon_C_SGK_ClientPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ServerPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ServerPrimaryAction");

	Params::ABP_MasterRangeWeapon_C_SGK_ServerPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerExitAim
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClientExit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ServerExitAim(bool ClientExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ServerExitAim");

	Params::ABP_MasterRangeWeapon_C_ServerExitAim_Params Parms{};

	Parms.ClientExit = ClientExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SetFlashlightMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFlashlight_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SetFlashlightMulticast(bool bFlashlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SetFlashlightMulticast");

	Params::ABP_MasterRangeWeapon_C_SetFlashlightMulticast_Params Parms{};

	Parms.bFlashlight_ = bFlashlight_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SetFlashlightServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFlashlight_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SetFlashlightServer(bool bFlashlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SetFlashlightServer");

	Params::ABP_MasterRangeWeapon_C_SetFlashlightServer_Params Parms{};

	Parms.bFlashlight_ = bFlashlight_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ADSCameraTimelineReverse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ADSCameraTimelineReverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ADSCameraTimelineReverse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientExitAim
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ClientExitAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ClientExitAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ClientSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ClientSecondaryAction");

	Params::ABP_MasterRangeWeapon_C_SGK_ClientSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ServerSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_ServerSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ServerSecondaryAction");

	Params::ABP_MasterRangeWeapon_C_SGK_ServerSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK ResetHoldable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::SGK_ResetHoldable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK ResetHoldable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ReceiveTick");

	Params::ABP_MasterRangeWeapon_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.RemoveWeaponAttchmentStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::RemoveWeaponAttchmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "RemoveWeaponAttchmentStats");

	Params::ABP_MasterRangeWeapon_C_RemoveWeaponAttchmentStats_Params Parms{};

	Parms.Attachment = Attachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ApplyWeaponAttachmentStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterAttachment_C*      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ApplyWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ApplyWeaponAttachmentStats");

	Params::ABP_MasterRangeWeapon_C_ApplyWeaponAttachmentStats_Params Parms{};

	Parms.Attachment = Attachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerUpdateBulletLocation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ServerUpdateBulletLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ServerUpdateBulletLocation");

	Params::ABP_MasterRangeWeapon_C_ServerUpdateBulletLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientOwnerFireEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ClientOwnerFireEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ClientOwnerFireEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastFireEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::MulticastFireEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "MulticastFireEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientFireWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ClientFireWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ClientFireWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastProjectileSpawn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        AmmoID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::MulticastProjectileSpawn(const struct FVector& Location, const struct FRotator& Rotation, class FName AmmoID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "MulticastProjectileSpawn");

	Params::ABP_MasterRangeWeapon_C_MulticastProjectileSpawn_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.AmmoID = AmmoID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerFireWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ServerFireWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ServerFireWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CharacterSprinting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sprinting                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::CharacterSprinting(bool Sprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "CharacterSprinting");

	Params::ABP_MasterRangeWeapon_C_CharacterSprinting_Params Parms{};

	Parms.Sprinting = Sprinting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CharacterFalling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::CharacterFalling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "CharacterFalling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ServerUpdateTraceStart
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Relative                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ServerUpdateTraceStart(const struct FVector& Location, bool Relative)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ServerUpdateTraceStart");

	Params::ABP_MasterRangeWeapon_C_ServerUpdateTraceStart_Params Parms{};

	Parms.Location = Location;
	Parms.Relative = Relative;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.CalculateHoldableSway
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::CalculateHoldableSway()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "CalculateHoldableSway");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastDebugSphere
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::MulticastDebugSphere(const struct FVector& Center)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "MulticastDebugSphere");

	Params::ABP_MasterRangeWeapon_C_MulticastDebugSphere_Params Parms{};

	Parms.Center = Center;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastDebugLine
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LineStart                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LineEnd                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::MulticastDebugLine(const struct FVector& LineStart, const struct FVector& LineEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "MulticastDebugLine");

	Params::ABP_MasterRangeWeapon_C_MulticastDebugLine_Params Parms{};

	Parms.LineStart = LineStart;
	Parms.LineEnd = LineEnd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ClientOwnerNoAmmoSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ClientOwnerNoAmmoSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ClientOwnerNoAmmoSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.MulticastNoAmmoSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::MulticastNoAmmoSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "MulticastNoAmmoSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.SGK NewHeld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Held                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::SGK_NewHeld(bool Held)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "SGK NewHeld");

	Params::ABP_MasterRangeWeapon_C_SGK_NewHeld_Params Parms{};

	Parms.Held = Held;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MasterRangeWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterRangeWeapon.BP_MasterRangeWeapon_C.ExecuteUbergraph_BP_MasterRangeWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FireModes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FireModes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FireModes             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FireModes             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Reload                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>K2Node_DynamicCast_AsBP_SGKInventory_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_SelfItem_SelfItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>K2Node_DynamicCast_AsBP_SGKInventory_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_SelfItem_SelfItem_1                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetItemRangeClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SGK_GetItemRangeClass_RangeWeapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchForWeaponMag_MagFound                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchForWeaponMag_ItemSlot                             (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetItemRangeClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SGK_GetItemRangeClass_RangeWeapon_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchForWeaponMag_MagFound_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchForWeaponMag_ItemSlot_1                           (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchPlayerInventoryForMultiItems_ItemFound            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchPlayerInventoryForMultiItems_InvSlots             (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_FireModes>     CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// TArray<enum class E_FireModes>     CallFunc_Set_ToArray_Result_1                                    (ReferenceParm)
// TArray<enum class E_FireModes>     CallFunc_Set_ToArray_Result_2                                    (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItemAmount_ItemRemoved                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_1           (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_RemainingItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_AddItem_RemainingInvItem                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                CallFunc_AddItem_NewItemSlot                                     (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFlying_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFlying_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DurabilityCheck_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DurabilityCheck_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NextRound_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_NextRound_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NextRound_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_NextRound_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// double                             CallFunc_Get_Sighted_FOV_SightTPFOV                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm_2                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ClientExit                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFlashlight__1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFlashlight_                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera_3                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm_3                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera_4                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm_4                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_2           (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsFlying_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFlying_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera_5                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm_5                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera_6                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm_6                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_SGK_CharacterCamera_CurrentCamera_7                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         CallFunc_SGK_CharacterCamera_CurrentSpringArm_7                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterAttachment_C*      K2Node_Event_Attachment_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterAttachment_C*      K2Node_Event_Attachment                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShoot__True                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShoot__True_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShoot__True_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShoot__True_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlanting_PlantingBomb                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlanting_PlantingBomb_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_AnimationState        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_SGK_GetMesh_Mesh                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AnimationState        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AnimationState        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_4                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_AmmoID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DamageType            K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Damage>           K2Node_Select_Default_8                                          (ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterProjectile_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue_1                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsFlying_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DurabilityCheck_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NextRound_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_NextRound_Item_2                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DurabilityCheck_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFlying_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NextRound_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_NextRound_Item_3                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue_2                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Sprinting                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKCharacterInterface_C>K2Node_DynamicCast_AsBP_SGKCharacter_Interface_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_SGK_CharacterSockets_Component_2                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Relative                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     K2Node_CustomEvent_Center                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LineStart                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LineEnd                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetReloadMontage_Montage                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReloadMontage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Held                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ADSCameraAlpha_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ADSCameraAlpha_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_FPStartFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_TPStartFeildOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_FPStartFieldOfView_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_TPStartFeildOfView_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterRangeWeapon_C::ExecuteUbergraph_BP_MasterRangeWeapon(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, enum class E_FireModes Temp_byte_Variable, double Temp_real_Variable, enum class E_FireModes Temp_byte_Variable_1, double Temp_real_Variable_1, enum class E_FireModes Temp_byte_Variable_2, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, bool Temp_bool_Variable, double Temp_real_Variable_5, enum class E_FireModes Temp_byte_Variable_3, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool K2Node_CustomEvent_Reload, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_2, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface, bool K2Node_DynamicCast_bSuccess, const struct FS_InvItem& CallFunc_SGK_SelfItem_SelfItem, TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FS_InvItem& CallFunc_SGK_SelfItem_SelfItem_1, bool CallFunc_SGK_GetItemRangeClass_ReturnValue, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon, bool CallFunc_SearchForWeaponMag_MagFound, const struct FS_InvSlot& CallFunc_SearchForWeaponMag_ItemSlot, bool CallFunc_SGK_GetItemRangeClass_ReturnValue_1, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon_1, bool CallFunc_SearchForWeaponMag_MagFound_1, const struct FS_InvSlot& CallFunc_SearchForWeaponMag_ItemSlot_1, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SearchPlayerInventoryForMultiItems_ItemFound, const struct FS_InvSlot& CallFunc_SearchPlayerInventoryForMultiItems_InvSlots, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<enum class E_FireModes>& CallFunc_Set_ToArray_Result, TArray<enum class E_FireModes>& CallFunc_Set_ToArray_Result_1, TArray<enum class E_FireModes>& CallFunc_Set_ToArray_Result_2, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FName K2Node_CustomEvent_NotifyName_3, bool CallFunc_RemoveItemAmount_ItemRemoved, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_1, const struct FS_InvSlot& CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_AddItem_RemainingItem, const struct FS_InvItem& CallFunc_AddItem_RemainingInvItem, const struct FS_InvSlotID& CallFunc_AddItem_NewItemSlot, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, bool CallFunc_IsFlying_ReturnValue, bool CallFunc_IsFlying_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_4, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_DurabilityCheck_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_DurabilityCheck_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_NextRound_ReturnValue, const struct FS_InvSlot& CallFunc_NextRound_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_KeyDown_3, bool K2Node_Event_KeyDown_2, bool CallFunc_NextRound_ReturnValue_1, const struct FS_InvSlot& CallFunc_NextRound_Item_1, double CallFunc_Get_Sighted_FOV_SightTPFOV, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_2, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_3, bool K2Node_DynamicCast_bSuccess_5, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera_1, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm_1, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera_2, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm_2, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_ClientExit, bool K2Node_CustomEvent_bFlashlight__1, bool K2Node_CustomEvent_bFlashlight_, bool Temp_bool_Variable_1, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_4, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_5, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera_3, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm_3, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_6, class FName Temp_name_Variable_1, bool CallFunc_IsPlaying_ReturnValue, class FName K2Node_CustomEvent_NotifyName_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Less_DoubleDouble_ReturnValue_1, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_5, bool K2Node_DynamicCast_bSuccess_7, double CallFunc_Lerp_ReturnValue, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera_4, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm_4, double CallFunc_Lerp_ReturnValue_1, bool CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_2, const struct FS_InvSlot& CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_2, bool CallFunc_IsFlying_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_IsFlying_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_6, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool Temp_bool_Variable_2, bool CallFunc_BooleanOR_ReturnValue_12, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Lerp_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_13, bool K2Node_Event_KeyDown_1, bool K2Node_Event_KeyDown, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_6, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_7, bool K2Node_DynamicCast_bSuccess_9, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera_5, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm_5, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera_6, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_7, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_8, bool K2Node_DynamicCast_bSuccess_10, int32 Temp_int_Loop_Counter_Variable_1, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_7, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_9, bool K2Node_DynamicCast_bSuccess_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera_7, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm_7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_HasAuthority_ReturnValue, class ABP_MasterAttachment_C* K2Node_Event_Attachment_1, class ABP_MasterAttachment_C* K2Node_Event_Attachment, class FName K2Node_CustomEvent_NotifyName_8, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue_10, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_CanShoot__True, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_CanShoot__True_1, bool CallFunc_CanShoot__True_2, bool CallFunc_CanShoot__True_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_CheckPlanting_PlantingBomb, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_CheckPlanting_PlantingBomb_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, const struct FVector& K2Node_CustomEvent_Location_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class E_AnimationState Temp_byte_Variable_4, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_10, bool K2Node_DynamicCast_bSuccess_13, class UPrimitiveComponent* CallFunc_SGK_GetMesh_Mesh, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_IsStandalone_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class E_AnimationState Temp_byte_Variable_5, class AActor* CallFunc_GetOwner_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_14, bool Temp_bool_Variable_5, enum class E_AnimationState K2Node_Select_Default_2, bool CallFunc_IsStandalone_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_6, double K2Node_Select_Default_3, class UAnimMontage* K2Node_Select_Default_4, bool Temp_bool_Variable_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, double K2Node_Select_Default_5, bool CallFunc_IsValid_ReturnValue_15, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_16, bool Temp_bool_Variable_8, double K2Node_Select_Default_6, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsStandalone_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Location_1, const struct FRotator& K2Node_CustomEvent_Rotation, class FName K2Node_CustomEvent_AmmoID, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, enum class E_DamageType K2Node_Select_Default_7, TArray<struct FS_Damage>& K2Node_Select_Default_8, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MasterProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, int32 Temp_int_Variable, double K2Node_Select_Default_9, int32 CallFunc_Add_IntInt_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_SelectAttachmentItem_IsValid_1, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue_1, bool CallFunc_IsFlying_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_DurabilityCheck_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_NextRound_ReturnValue_2, const struct FS_InvSlot& CallFunc_NextRound_Item_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_Select_Default_10, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_1, bool K2Node_DynamicCast_bSuccess_15, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_2, bool K2Node_DynamicCast_bSuccess_16, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController_3, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_DurabilityCheck_ReturnValue_3, bool CallFunc_IsFlying_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_NextRound_ReturnValue_3, const struct FS_InvSlot& CallFunc_NextRound_Item_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_11, bool CallFunc_IsValid_ReturnValue_23, double K2Node_Select_Default_12, bool CallFunc_SelectAttachmentItem_IsValid_2, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_24, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_Event_Sprinting, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_11, bool K2Node_DynamicCast_bSuccess_18, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_2, const struct FVector& K2Node_CustomEvent_Location, bool K2Node_CustomEvent_Relative, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FVector& K2Node_CustomEvent_Center, const struct FVector& K2Node_CustomEvent_LineStart, const struct FVector& K2Node_CustomEvent_LineEnd, bool CallFunc_IsStandalone_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_26, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_IsLocallyControlled_ReturnValue_2, class UAnimMontage* CallFunc_GetReloadMontage_Montage, bool CallFunc_GetReloadMontage_ReturnValue, bool K2Node_Event_Held, bool Temp_bool_IsClosed_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, double K2Node_VariableSet_ADSCameraAlpha_ImplicitCast, double K2Node_VariableSet_ADSCameraAlpha_ImplicitCast_1, double K2Node_VariableSet_FPStartFieldOfView_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, double K2Node_VariableSet_TPStartFeildOfView_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_2, double K2Node_VariableSet_FPStartFieldOfView_ImplicitCast_1, double K2Node_VariableSet_TPStartFeildOfView_ImplicitCast_1, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2, float CallFunc_Delay_Duration_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterRangeWeapon_C", "ExecuteUbergraph_BP_MasterRangeWeapon");

	Params::ABP_MasterRangeWeapon_C_ExecuteUbergraph_BP_MasterRangeWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CustomEvent_Reload = K2Node_CustomEvent_Reload;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKInventory_Interface = K2Node_DynamicCast_AsBP_SGKInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_SelfItem_SelfItem = CallFunc_SGK_SelfItem_SelfItem;
	Parms.K2Node_DynamicCast_AsBP_SGKInventory_Interface_1 = K2Node_DynamicCast_AsBP_SGKInventory_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_SelfItem_SelfItem_1 = CallFunc_SGK_SelfItem_SelfItem_1;
	Parms.CallFunc_SGK_GetItemRangeClass_ReturnValue = CallFunc_SGK_GetItemRangeClass_ReturnValue;
	Parms.CallFunc_SGK_GetItemRangeClass_RangeWeapon = CallFunc_SGK_GetItemRangeClass_RangeWeapon;
	Parms.CallFunc_SearchForWeaponMag_MagFound = CallFunc_SearchForWeaponMag_MagFound;
	Parms.CallFunc_SearchForWeaponMag_ItemSlot = CallFunc_SearchForWeaponMag_ItemSlot;
	Parms.CallFunc_SGK_GetItemRangeClass_ReturnValue_1 = CallFunc_SGK_GetItemRangeClass_ReturnValue_1;
	Parms.CallFunc_SGK_GetItemRangeClass_RangeWeapon_1 = CallFunc_SGK_GetItemRangeClass_RangeWeapon_1;
	Parms.CallFunc_SearchForWeaponMag_MagFound_1 = CallFunc_SearchForWeaponMag_MagFound_1;
	Parms.CallFunc_SearchForWeaponMag_ItemSlot_1 = CallFunc_SearchForWeaponMag_ItemSlot_1;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SearchPlayerInventoryForMultiItems_ItemFound = CallFunc_SearchPlayerInventoryForMultiItems_ItemFound;
	Parms.CallFunc_SearchPlayerInventoryForMultiItems_InvSlots = CallFunc_SearchPlayerInventoryForMultiItems_InvSlots;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Set_ToArray_Result_1 = CallFunc_Set_ToArray_Result_1;
	Parms.CallFunc_Set_ToArray_Result_2 = CallFunc_Set_ToArray_Result_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Set_Length_ReturnValue = CallFunc_Set_Length_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.CallFunc_RemoveItemAmount_ItemRemoved = CallFunc_RemoveItemAmount_ItemRemoved;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_1 = CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_1;
	Parms.CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_1 = CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_AddItem_RemainingItem = CallFunc_AddItem_RemainingItem;
	Parms.CallFunc_AddItem_RemainingInvItem = CallFunc_AddItem_RemainingInvItem;
	Parms.CallFunc_AddItem_NewItemSlot = CallFunc_AddItem_NewItemSlot;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue_1 = CallFunc_GetMovementComponent_ReturnValue_1;
	Parms.CallFunc_IsFlying_ReturnValue = CallFunc_IsFlying_ReturnValue;
	Parms.CallFunc_IsFlying_ReturnValue_1 = CallFunc_IsFlying_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_DurabilityCheck_ReturnValue = CallFunc_DurabilityCheck_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_DurabilityCheck_ReturnValue_1 = CallFunc_DurabilityCheck_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_NextRound_ReturnValue = CallFunc_NextRound_ReturnValue;
	Parms.CallFunc_NextRound_Item = CallFunc_NextRound_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_KeyDown_3 = K2Node_Event_KeyDown_3;
	Parms.K2Node_Event_KeyDown_2 = K2Node_Event_KeyDown_2;
	Parms.CallFunc_NextRound_ReturnValue_1 = CallFunc_NextRound_ReturnValue_1;
	Parms.CallFunc_NextRound_Item_1 = CallFunc_NextRound_Item_1;
	Parms.CallFunc_Get_Sighted_FOV_SightTPFOV = CallFunc_Get_Sighted_FOV_SightTPFOV;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface = K2Node_DynamicCast_AsBP_SGKCharacter_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SGK_CharacterSockets_Component = CallFunc_SGK_CharacterSockets_Component;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera = CallFunc_SGK_CharacterCamera_CurrentCamera;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm = CallFunc_SGK_CharacterCamera_CurrentSpringArm;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_2 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_3 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera_1 = CallFunc_SGK_CharacterCamera_CurrentCamera_1;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm_1 = CallFunc_SGK_CharacterCamera_CurrentSpringArm_1;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera_2 = CallFunc_SGK_CharacterCamera_CurrentCamera_2;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm_2 = CallFunc_SGK_CharacterCamera_CurrentSpringArm_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_ClientExit = K2Node_CustomEvent_ClientExit;
	Parms.K2Node_CustomEvent_bFlashlight__1 = K2Node_CustomEvent_bFlashlight__1;
	Parms.K2Node_CustomEvent_bFlashlight_ = K2Node_CustomEvent_bFlashlight_;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_4 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera_3 = CallFunc_SGK_CharacterCamera_CurrentCamera_3;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm_3 = CallFunc_SGK_CharacterCamera_CurrentSpringArm_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_5 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera_4 = CallFunc_SGK_CharacterCamera_CurrentCamera_4;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm_4 = CallFunc_SGK_CharacterCamera_CurrentSpringArm_4;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_2 = CallFunc_SearchPlayerInventoryForMultiItems_ItemFound_2;
	Parms.CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_2 = CallFunc_SearchPlayerInventoryForMultiItems_InvSlots_2;
	Parms.CallFunc_IsFlying_ReturnValue_2 = CallFunc_IsFlying_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_IsFlying_ReturnValue_3 = CallFunc_IsFlying_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.K2Node_Event_KeyDown_1 = K2Node_Event_KeyDown_1;
	Parms.K2Node_Event_KeyDown = K2Node_Event_KeyDown;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_6 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_7 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera_5 = CallFunc_SGK_CharacterCamera_CurrentCamera_5;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm_5 = CallFunc_SGK_CharacterCamera_CurrentSpringArm_5;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera_6 = CallFunc_SGK_CharacterCamera_CurrentCamera_6;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm_6 = CallFunc_SGK_CharacterCamera_CurrentSpringArm_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_8 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_SGK_CharacterSockets_Component_1 = CallFunc_SGK_CharacterSockets_Component_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_9 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_9;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_SGK_CharacterCamera_CurrentCamera_7 = CallFunc_SGK_CharacterCamera_CurrentCamera_7;
	Parms.CallFunc_SGK_CharacterCamera_CurrentSpringArm_7 = CallFunc_SGK_CharacterCamera_CurrentSpringArm_7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_Attachment_1 = K2Node_Event_Attachment_1;
	Parms.K2Node_Event_Attachment = K2Node_Event_Attachment;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.CallFunc_SelectAttachmentItem_IsValid = CallFunc_SelectAttachmentItem_IsValid;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue = CallFunc_SelectAttachmentItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_CanShoot__True = CallFunc_CanShoot__True;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_CanShoot__True_1 = CallFunc_CanShoot__True_1;
	Parms.CallFunc_CanShoot__True_2 = CallFunc_CanShoot__True_2;
	Parms.CallFunc_CanShoot__True_3 = CallFunc_CanShoot__True_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_CheckPlanting_PlantingBomb = CallFunc_CheckPlanting_PlantingBomb;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_CheckPlanting_PlantingBomb_1 = CallFunc_CheckPlanting_PlantingBomb_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CustomEvent_Location_2 = K2Node_CustomEvent_Location_2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_10 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_10;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_SGK_GetMesh_Mesh = CallFunc_SGK_GetMesh_Mesh;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_IsStandalone_ReturnValue_1 = CallFunc_IsStandalone_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsStandalone_ReturnValue_2 = CallFunc_IsStandalone_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsStandalone_ReturnValue_3 = CallFunc_IsStandalone_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CustomEvent_Rotation = K2Node_CustomEvent_Rotation;
	Parms.K2Node_CustomEvent_AmmoID = K2Node_CustomEvent_AmmoID;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_SelectAttachmentItem_IsValid_1 = CallFunc_SelectAttachmentItem_IsValid_1;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue_1 = CallFunc_SelectAttachmentItem_ReturnValue_1;
	Parms.CallFunc_IsFlying_ReturnValue_4 = CallFunc_IsFlying_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_DurabilityCheck_ReturnValue_2 = CallFunc_DurabilityCheck_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_NextRound_ReturnValue_2 = CallFunc_NextRound_ReturnValue_2;
	Parms.CallFunc_NextRound_Item_2 = CallFunc_NextRound_Item_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKController_1 = K2Node_DynamicCast_AsBP_SGKController_1;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKController_2 = K2Node_DynamicCast_AsBP_SGKController_2;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKController_3 = K2Node_DynamicCast_AsBP_SGKController_3;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_DurabilityCheck_ReturnValue_3 = CallFunc_DurabilityCheck_ReturnValue_3;
	Parms.CallFunc_IsFlying_ReturnValue_5 = CallFunc_IsFlying_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_4 = CallFunc_NotEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_5 = CallFunc_NotEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_NextRound_ReturnValue_3 = CallFunc_NextRound_ReturnValue_3;
	Parms.CallFunc_NextRound_Item_3 = CallFunc_NextRound_Item_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.CallFunc_SelectAttachmentItem_IsValid_2 = CallFunc_SelectAttachmentItem_IsValid_2;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue_2 = CallFunc_SelectAttachmentItem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_Sprinting = K2Node_Event_Sprinting;
	Parms.K2Node_DynamicCast_AsBP_SGKCharacter_Interface_11 = K2Node_DynamicCast_AsBP_SGKCharacter_Interface_11;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_SGK_CharacterSockets_Component_2 = CallFunc_SGK_CharacterSockets_Component_2;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Relative = K2Node_CustomEvent_Relative;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	Parms.K2Node_CustomEvent_Center = K2Node_CustomEvent_Center;
	Parms.K2Node_CustomEvent_LineStart = K2Node_CustomEvent_LineStart;
	Parms.K2Node_CustomEvent_LineEnd = K2Node_CustomEvent_LineEnd;
	Parms.CallFunc_IsStandalone_ReturnValue_4 = CallFunc_IsStandalone_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_GetReloadMontage_Montage = CallFunc_GetReloadMontage_Montage;
	Parms.CallFunc_GetReloadMontage_ReturnValue = CallFunc_GetReloadMontage_ReturnValue;
	Parms.K2Node_Event_Held = K2Node_Event_Held;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_VariableSet_ADSCameraAlpha_ImplicitCast = K2Node_VariableSet_ADSCameraAlpha_ImplicitCast;
	Parms.K2Node_VariableSet_ADSCameraAlpha_ImplicitCast_1 = K2Node_VariableSet_ADSCameraAlpha_ImplicitCast_1;
	Parms.K2Node_VariableSet_FPStartFieldOfView_ImplicitCast = K2Node_VariableSet_FPStartFieldOfView_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;
	Parms.K2Node_VariableSet_TPStartFeildOfView_ImplicitCast = K2Node_VariableSet_TPStartFeildOfView_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1 = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_2 = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_2;
	Parms.K2Node_VariableSet_FPStartFieldOfView_ImplicitCast_1 = K2Node_VariableSet_FPStartFieldOfView_ImplicitCast_1;
	Parms.K2Node_VariableSet_TPStartFeildOfView_ImplicitCast_1 = K2Node_VariableSet_TPStartFeildOfView_ImplicitCast_1;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast = CallFunc_SetDoublePropertyByName_Value_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast_2 = CallFunc_Delay_Duration_ImplicitCast_2;
	Parms.CallFunc_Delay_Duration_ImplicitCast_3 = CallFunc_Delay_Duration_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


