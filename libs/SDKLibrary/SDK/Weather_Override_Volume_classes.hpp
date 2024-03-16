#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x490 - 0x290)
// BlueprintGeneratedClass Weather_Override_Volume.Weather_Override_Volume_C
class AWeather_Override_Volume_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URandom_Weather_Variation_C*           Random_Weather_Variation;                          // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EUDS_Weather_Override_Mode        Mode;                                              // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5641[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Transition_Width;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUDS_WeatherTypes                 Weather_Type;                                      // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5642[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Weather_Intensity;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cloud_Coverage;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Wind_Intensity;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _Snow;                                             // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Override_Material_Effects;                         // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_5643[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Material_Snow;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Material_Wetness;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Scaled_Transition_Width;                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Weather_C*              UDW;                                               // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Spring_;               // 0x310(0x50)(Edit, BlueprintVisible)
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Summer_;               // 0x360(0x50)(Edit, BlueprintVisible)
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Autumn_;               // 0x3B0(0x50)(Edit, BlueprintVisible)
	TMap<enum class EUDS_WeatherTypes, double>   Weather_Type_Probabilities__Winter_;               // 0x400(0x50)(Edit, BlueprintVisible)
	double                                       Total_Sphere_Bounds;                               // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Spline_Bounds_Center;                              // 0x458(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Weather_Label_in_Editor;                      // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_5644[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Key;                                               // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                       Temperature_Offset;                                // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AWeather_Override_Volume_C* GetDefaultObj();

	void Calculate_Spline_Bounds(double Bounds, int32 Temp_int_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast);
	void UserConstructionScript(class UTextRenderComponent* Text_Component, const TArray<struct FVector>& Spline_Points, const class FString& Label, const class FString& Temp_string_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, enum class EUDS_Weather_Override_Mode Temp_byte_Variable, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 Temp_int_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue, enum class EUDS_Weather_Override_Mode Temp_byte_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const class FString& K2Node_Select_Default, float CallFunc_GetSplineLength_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_IntFloat_ReturnValue_2, const struct FTransform& CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Add_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, enum class EUDS_Weather_Override_Mode Temp_byte_Variable_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UTextRenderComponent* CallFunc_AddComponent_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, double CallFunc_Divide_DoubleDouble_ReturnValue_4, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetWorldSize_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_HSVToRGB_H_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetClosedLoopAtPosition_Key_ImplicitCast);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_Weather_Override_Volume(int32 EntryPoint, class AUltra_Dynamic_Weather_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Get_Weather_Preset_Weather_Intensity, double CallFunc_Get_Weather_Preset_Cloud_Coverage, double CallFunc_Get_Weather_Preset_Rain___Snow, double CallFunc_Get_Weather_Preset_Wind_Intensity, double CallFunc_Get_Weather_Preset_Material_Wetness, double CallFunc_Get_Weather_Preset_Material_Snow, float K2Node_Event_DeltaSeconds, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Current_Lightning_Period_and_Status_Period, bool CallFunc_Current_Lightning_Period_and_Status_Enabled, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}


