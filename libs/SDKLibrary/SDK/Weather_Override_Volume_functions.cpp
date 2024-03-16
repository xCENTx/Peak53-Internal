#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Weather_Override_Volume.Weather_Override_Volume_C
// (Actor)

class UClass* AWeather_Override_Volume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Weather_Override_Volume_C");

	return Clss;
}


// Weather_Override_Volume_C Weather_Override_Volume.Default__Weather_Override_Volume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeather_Override_Volume_C* AWeather_Override_Volume_C::GetDefaultObj()
{
	static class AWeather_Override_Volume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeather_Override_Volume_C*>(AWeather_Override_Volume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Calculate Spline Bounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Bounds                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Calculate_Spline_Bounds(double Bounds, int32 Temp_int_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Calculate Spline Bounds");

	Params::AWeather_Override_Volume_C_Calculate_Spline_Bounds_Params Parms{};

	Parms.Bounds = Bounds;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast = CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weather_Override_Volume.Weather_Override_Volume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextRenderComponent*        Text_Component                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             Spline_Points                                                    (Edit, BlueprintVisible)
// class FString                      Label                                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Weather_Override_ModeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorArrayAverage_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDS_Weather_Override_ModeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUDS_Weather_Override_ModeTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextRenderComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWorldSize_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HSVToRGB_H_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetClosedLoopAtPosition_Key_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::UserConstructionScript(class UTextRenderComponent* Text_Component, const TArray<struct FVector>& Spline_Points, const class FString& Label, const class FString& Temp_string_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, enum class EUDS_Weather_Override_Mode Temp_byte_Variable, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 Temp_int_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue, enum class EUDS_Weather_Override_Mode Temp_byte_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const class FString& K2Node_Select_Default, float CallFunc_GetSplineLength_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_IntFloat_ReturnValue_2, const struct FTransform& CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Add_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, enum class EUDS_Weather_Override_Mode Temp_byte_Variable_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UTextRenderComponent* CallFunc_AddComponent_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, double CallFunc_Divide_DoubleDouble_ReturnValue_4, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetWorldSize_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_HSVToRGB_H_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetClosedLoopAtPosition_Key_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Override_Volume_C", "UserConstructionScript");

	Params::AWeather_Override_Volume_C_UserConstructionScript_Params Parms{};

	Parms.Text_Component = Text_Component;
	Parms.Spline_Points = Spline_Points;
	Parms.Label = Label;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActorScale3D_ReturnValue = CallFunc_GetActorScale3D_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetVectorArrayAverage_ReturnValue = CallFunc_GetVectorArrayAverage_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetActorScale3D_ReturnValue_1 = CallFunc_GetActorScale3D_ReturnValue_1;
	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue_1 = CallFunc_HSVToRGB_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue = CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_4 = CallFunc_Divide_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;
	Parms.CallFunc_SetWorldSize_Value_ImplicitCast = CallFunc_SetWorldSize_Value_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast_1 = CallFunc_HSVToRGB_H_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast = CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetClosedLoopAtPosition_Key_ImplicitCast = CallFunc_SetClosedLoopAtPosition_Key_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWeather_Override_Volume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ReceiveTick");

	Params::AWeather_Override_Volume_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AWeather_Override_Volume_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ExecuteUbergraph_Weather_Override_Volume
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Weather_C*    CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Weather_Intensity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Cloud_Coverage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Rain___Snow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Wind_Intensity                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Material_Wetness                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Weather_Preset_Material_Snow                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Lightning_Period_and_Status_Period              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Current_Lightning_Period_and_Status_Enabled             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::ExecuteUbergraph_Weather_Override_Volume(int32 EntryPoint, class AUltra_Dynamic_Weather_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Get_Weather_Preset_Weather_Intensity, double CallFunc_Get_Weather_Preset_Cloud_Coverage, double CallFunc_Get_Weather_Preset_Rain___Snow, double CallFunc_Get_Weather_Preset_Wind_Intensity, double CallFunc_Get_Weather_Preset_Material_Wetness, double CallFunc_Get_Weather_Preset_Material_Snow, float K2Node_Event_DeltaSeconds, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Current_Lightning_Period_and_Status_Period, bool CallFunc_Current_Lightning_Period_and_Status_Enabled, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ExecuteUbergraph_Weather_Override_Volume");

	Params::AWeather_Override_Volume_C_ExecuteUbergraph_Weather_Override_Volume_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Weather_Preset_Weather_Intensity = CallFunc_Get_Weather_Preset_Weather_Intensity;
	Parms.CallFunc_Get_Weather_Preset_Cloud_Coverage = CallFunc_Get_Weather_Preset_Cloud_Coverage;
	Parms.CallFunc_Get_Weather_Preset_Rain___Snow = CallFunc_Get_Weather_Preset_Rain___Snow;
	Parms.CallFunc_Get_Weather_Preset_Wind_Intensity = CallFunc_Get_Weather_Preset_Wind_Intensity;
	Parms.CallFunc_Get_Weather_Preset_Material_Wetness = CallFunc_Get_Weather_Preset_Material_Wetness;
	Parms.CallFunc_Get_Weather_Preset_Material_Snow = CallFunc_Get_Weather_Preset_Material_Snow;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Current_Lightning_Period_and_Status_Period = CallFunc_Current_Lightning_Period_and_Status_Period;
	Parms.CallFunc_Current_Lightning_Period_and_Status_Enabled = CallFunc_Current_Lightning_Period_and_Status_Enabled;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


