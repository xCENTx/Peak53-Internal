#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DebugComponent.DebugComponent_C
// (None)

class UClass* UDebugComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DebugComponent_C");

	return Clss;
}


// DebugComponent_C DebugComponent.Default__DebugComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDebugComponent_C* UDebugComponent_C::GetDefaultObj()
{
	static class UDebugComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDebugComponent_C*>(UDebugComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DebugComponent.DebugComponent_C.IsMaterialValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Valid_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::IsMaterialValid(bool* Valid_, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "IsMaterialValid");

	Params::UDebugComponent_C_IsMaterialValid_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid_ != nullptr)
		*Valid_ = Parms.Valid_;

}


// Function DebugComponent.DebugComponent_C.IsMeshValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMesh*               SkeletalMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Valid_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::IsMeshValid(class USkeletalMesh* SkeletalMesh, bool* Valid_, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "IsMeshValid");

	Params::UDebugComponent_C_IsMeshValid_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid_ != nullptr)
		*Valid_ = Parms.Valid_;

}


// Function DebugComponent.DebugComponent_C.OnSetDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMeshValid_Valid_                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_6             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_7             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_8             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_9             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_10            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_11            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_12            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_13            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::OnSetDynamicMaterials(bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue, bool CallFunc_IsMeshValid_Valid_, int32 CallFunc_GetMaterialIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_GetMaterialIndex_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_GetMaterialIndex_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_GetMaterialIndex_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, int32 CallFunc_GetMaterialIndex_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, int32 CallFunc_GetMaterialIndex_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, int32 CallFunc_GetMaterialIndex_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, int32 CallFunc_GetMaterialIndex_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_7, int32 CallFunc_GetMaterialIndex_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_8, int32 CallFunc_GetMaterialIndex_ReturnValue_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_9, int32 CallFunc_GetMaterialIndex_ReturnValue_10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_10, int32 CallFunc_GetMaterialIndex_ReturnValue_11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_11, int32 CallFunc_GetMaterialIndex_ReturnValue_12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_12, int32 CallFunc_GetMaterialIndex_ReturnValue_13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "OnSetDynamicMaterials");

	Params::UDebugComponent_C_OnSetDynamicMaterials_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue = CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;
	Parms.CallFunc_IsMeshValid_Valid_ = CallFunc_IsMeshValid_Valid_;
	Parms.CallFunc_GetMaterialIndex_ReturnValue = CallFunc_GetMaterialIndex_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_1 = CallFunc_GetMaterialIndex_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_2 = CallFunc_GetMaterialIndex_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_3 = CallFunc_GetMaterialIndex_ReturnValue_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_4 = CallFunc_GetMaterialIndex_ReturnValue_4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_5 = CallFunc_GetMaterialIndex_ReturnValue_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_6 = CallFunc_GetMaterialIndex_ReturnValue_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_6;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_7 = CallFunc_GetMaterialIndex_ReturnValue_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_7;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_8 = CallFunc_GetMaterialIndex_ReturnValue_8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_8;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_9 = CallFunc_GetMaterialIndex_ReturnValue_9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_9;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_10 = CallFunc_GetMaterialIndex_ReturnValue_10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_10;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_11 = CallFunc_GetMaterialIndex_ReturnValue_11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_11;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_12 = CallFunc_GetMaterialIndex_ReturnValue_12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_12;
	Parms.CallFunc_GetMaterialIndex_ReturnValue_13 = CallFunc_GetMaterialIndex_ReturnValue_13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugComponent.DebugComponent_C.OnSetResetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsMaterialValid_Valid_                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::OnSetResetColors(bool CallFunc_IsMaterialValid_Valid_, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "OnSetResetColors");

	Params::UDebugComponent_C_OnSetResetColors_Params Parms{};

	Parms.CallFunc_IsMaterialValid_Valid_ = CallFunc_IsMaterialValid_Valid_;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugComponent.DebugComponent_C.OnUpdateColoringSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetAnimCurveValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimCurveValue_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMaterialValid_Valid_                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::OnUpdateColoringSystem(float CallFunc_GetAnimCurveValue_ReturnValue, float CallFunc_GetAnimCurveValue_ReturnValue_1, float CallFunc_GetAnimCurveValue_ReturnValue_2, float CallFunc_GetAnimCurveValue_ReturnValue_3, float CallFunc_GetAnimCurveValue_ReturnValue_4, float CallFunc_GetAnimCurveValue_ReturnValue_5, float CallFunc_GetAnimCurveValue_ReturnValue_6, float CallFunc_GetAnimCurveValue_ReturnValue_7, float CallFunc_GetAnimCurveValue_ReturnValue_8, float CallFunc_GetAnimCurveValue_ReturnValue_9, float CallFunc_GetAnimCurveValue_ReturnValue_10, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, float CallFunc_GetAnimCurveValue_ReturnValue_11, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, float CallFunc_GetAnimCurveValue_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_6, float CallFunc_GetAnimCurveValue_ReturnValue_13, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_7, bool CallFunc_IsMaterialValid_Valid_, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_8, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_9, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_10, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_11, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "OnUpdateColoringSystem");

	Params::UDebugComponent_C_OnUpdateColoringSystem_Params Parms{};

	Parms.CallFunc_GetAnimCurveValue_ReturnValue = CallFunc_GetAnimCurveValue_ReturnValue;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_1 = CallFunc_GetAnimCurveValue_ReturnValue_1;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_2 = CallFunc_GetAnimCurveValue_ReturnValue_2;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_3 = CallFunc_GetAnimCurveValue_ReturnValue_3;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_4 = CallFunc_GetAnimCurveValue_ReturnValue_4;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_5 = CallFunc_GetAnimCurveValue_ReturnValue_5;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_6 = CallFunc_GetAnimCurveValue_ReturnValue_6;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_7 = CallFunc_GetAnimCurveValue_ReturnValue_7;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_8 = CallFunc_GetAnimCurveValue_ReturnValue_8;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_9 = CallFunc_GetAnimCurveValue_ReturnValue_9;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_10 = CallFunc_GetAnimCurveValue_ReturnValue_10;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue_1 = CallFunc_K2_GetVectorParameterValue_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_11 = CallFunc_GetAnimCurveValue_ReturnValue_11;
	Parms.CallFunc_LinearColorLerp_ReturnValue_3 = CallFunc_LinearColorLerp_ReturnValue_3;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_12 = CallFunc_GetAnimCurveValue_ReturnValue_12;
	Parms.CallFunc_LinearColorLerp_ReturnValue_4 = CallFunc_LinearColorLerp_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue_5 = CallFunc_LinearColorLerp_ReturnValue_5;
	Parms.CallFunc_LinearColorLerp_ReturnValue_6 = CallFunc_LinearColorLerp_ReturnValue_6;
	Parms.CallFunc_GetAnimCurveValue_ReturnValue_13 = CallFunc_GetAnimCurveValue_ReturnValue_13;
	Parms.CallFunc_LinearColorLerp_ReturnValue_7 = CallFunc_LinearColorLerp_ReturnValue_7;
	Parms.CallFunc_IsMaterialValid_Valid_ = CallFunc_IsMaterialValid_Valid_;
	Parms.CallFunc_LinearColorLerp_ReturnValue_8 = CallFunc_LinearColorLerp_ReturnValue_8;
	Parms.CallFunc_LinearColorLerp_ReturnValue_9 = CallFunc_LinearColorLerp_ReturnValue_9;
	Parms.CallFunc_LinearColorLerp_ReturnValue_10 = CallFunc_LinearColorLerp_ReturnValue_10;
	Parms.CallFunc_LinearColorLerp_ReturnValue_11 = CallFunc_LinearColorLerp_ReturnValue_11;
	Parms.CallFunc_LinearColorLerp_ReturnValue_12 = CallFunc_LinearColorLerp_ReturnValue_12;
	Parms.CallFunc_LinearColorLerp_ReturnValue_13 = CallFunc_LinearColorLerp_ReturnValue_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugComponent.DebugComponent_C.OnDrawDebugSpheres
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Vector_NormalUnsafe_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxAcceleration_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_NormalUnsafe_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCurrentAcceleration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_NormalUnsafe_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_NormalUnsafe_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::OnDrawDebugSpheres(const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Vector_NormalUnsafe_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, float CallFunc_GetMaxAcceleration_ReturnValue, const struct FVector& CallFunc_Vector_NormalUnsafe_ReturnValue_1, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1, const struct FVector& CallFunc_Vector_NormalUnsafe_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, double CallFunc_VSize_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue_1, const struct FVector& CallFunc_Vector_NormalUnsafe_ReturnValue_3, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "OnDrawDebugSpheres");

	Params::UDebugComponent_C_OnDrawDebugSpheres_Params Parms{};

	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Vector_NormalUnsafe_ReturnValue = CallFunc_Vector_NormalUnsafe_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_GetMaxAcceleration_ReturnValue = CallFunc_GetMaxAcceleration_ReturnValue;
	Parms.CallFunc_Vector_NormalUnsafe_ReturnValue_1 = CallFunc_Vector_NormalUnsafe_ReturnValue_1;
	Parms.CallFunc_GetCurrentAcceleration_ReturnValue = CallFunc_GetCurrentAcceleration_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_2 = CallFunc_Conv_RotatorToVector_ReturnValue_2;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1 = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1;
	Parms.CallFunc_Vector_NormalUnsafe_ReturnValue_2 = CallFunc_Vector_NormalUnsafe_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2 = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_3 = CallFunc_Conv_RotatorToVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue_1 = CallFunc_EqualEqual_VectorVector_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;
	Parms.CallFunc_Vector_NormalUnsafe_ReturnValue_3 = CallFunc_Vector_NormalUnsafe_ReturnValue_3;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_3 = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast = CallFunc_MapRangeClamped_InRangeB_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugComponent.DebugComponent_C.DrawDebugSpheres
// (Event, Public, BlueprintEvent)
// Parameters:

void UDebugComponent_C::DrawDebugSpheres()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "DrawDebugSpheres");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DebugComponent.DebugComponent_C.UpdateColoringSystem
// (Event, Public, BlueprintEvent)
// Parameters:

void UDebugComponent_C::UpdateColoringSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "UpdateColoringSystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DebugComponent.DebugComponent_C.SetDynamicMaterials
// (Event, Public, BlueprintEvent)
// Parameters:

void UDebugComponent_C::SetDynamicMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "SetDynamicMaterials");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DebugComponent.DebugComponent_C.SetResetColors
// (Event, Public, BlueprintEvent)
// Parameters:

void UDebugComponent_C::SetResetColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "SetResetColors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DebugComponent.DebugComponent_C.OpenOverlayMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::OpenOverlayMenu(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "OpenOverlayMenu");

	Params::UDebugComponent_C_OpenOverlayMenu_Params Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugComponent.DebugComponent_C.OverlayMenuCycle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::OverlayMenuCycle(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "OverlayMenuCycle");

	Params::UDebugComponent_C_OverlayMenuCycle_Params Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugComponent.DebugComponent_C.OnPlayerControllerInitialized
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::OnPlayerControllerInitialized(class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "OnPlayerControllerInitialized");

	Params::UDebugComponent_C_OnPlayerControllerInitialized_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugComponent.DebugComponent_C.ExecuteUbergraph_DebugComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UALS_HUD_C*                  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bValue_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bValue                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AALS_Player_Controller_C*    K2Node_DynamicCast_AsALS_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlayStateSwitcher_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UDebugComponent_C::ExecuteUbergraph_DebugComponent(int32 EntryPoint, class APlayerController* K2Node_Event_Controller, class UALS_HUD_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocalController_ReturnValue, bool K2Node_Event_bValue_1, bool K2Node_Event_bValue, class AController* CallFunc_GetController_ReturnValue, class AALS_Player_Controller_C* K2Node_DynamicCast_AsALS_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UOverlayStateSwitcher_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugComponent_C", "ExecuteUbergraph_DebugComponent");

	Params::UDebugComponent_C_ExecuteUbergraph_DebugComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.K2Node_Event_bValue_1 = K2Node_Event_bValue_1;
	Parms.K2Node_Event_bValue = K2Node_Event_bValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Player_Controller = K2Node_DynamicCast_AsALS_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


