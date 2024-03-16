#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Frame.WB_Frame_C
// (None)

class UClass* UWB_Frame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Frame_C");

	return Clss;
}


// WB_Frame_C WB_Frame.Default__WB_Frame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Frame_C* UWB_Frame_C::GetDefaultObj()
{
	static class UWB_Frame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Frame_C*>(UWB_Frame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Frame.WB_Frame_C.SetBorderBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     Border                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UWB_Frame_C::SetBorderBrush(class UBorder* Border, class UObject* Brush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "SetBorderBrush");

	Params::UWB_Frame_C_SetBorderBrush_Params Parms{};

	Parms.Border = Border;
	Parms.Brush = Brush;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Frame.WB_Frame_C.SetAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      InVerticalAlignment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Frame_C::SetAlignment(enum class EHorizontalAlignment InHorizontalAlignment, enum class EVerticalAlignment InVerticalAlignment, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "SetAlignment");

	Params::UWB_Frame_C_SetAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;
	Parms.InVerticalAlignment = InVerticalAlignment;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Frame.WB_Frame_C.SetFrameBrushes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Frame_C::SetFrameBrushes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "SetFrameBrushes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Frame.WB_Frame_C.SetContainerSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Frame_C::SetContainerSize(bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "SetContainerSize");

	Params::UWB_Frame_C_SetContainerSize_Params Parms{};

	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Frame.WB_Frame_C.SetFrameThickness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USizeBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class USizeBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class USizeBox*>            K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class USizeBox*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USizeBox*>            K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Frame_C::SetFrameThickness(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, TArray<class USizeBox*>& K2Node_MakeArray_Array, class USizeBox* CallFunc_Array_Get_Item, TArray<class USizeBox*>& K2Node_MakeArray_Array_1, class USizeBox* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, TArray<class USizeBox*>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue_2, class USizeBox* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "SetFrameThickness");

	Params::UWB_Frame_C_SetFrameThickness_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Frame.WB_Frame_C.SetSizeBoxSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    SizeBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Frame_C::SetSizeBoxSize(class USizeBox* SizeBox, const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "SetSizeBoxSize");

	Params::UWB_Frame_C_SetSizeBoxSize_Params Parms{};

	Parms.SizeBox = SizeBox;
	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Frame.WB_Frame_C.BaseConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Frame_C::BaseConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "BaseConstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Frame.WB_Frame_C.ExecuteUbergraph_WB_Frame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColorByType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USizeBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class USizeBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrameAlignment         Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_13                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_14                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Frame_C::ExecuteUbergraph_WB_Frame(int32 EntryPoint, enum class EFrameAlignment Temp_byte_Variable, double Temp_real_Variable, enum class EFrameAlignment Temp_byte_Variable_1, double Temp_real_Variable_1, enum class EFrameAlignment Temp_byte_Variable_2, double Temp_real_Variable_2, enum class EFrameAlignment Temp_byte_Variable_3, enum class EFrameAlignment Temp_byte_Variable_4, double Temp_real_Variable_3, enum class EFrameAlignment Temp_byte_Variable_5, double Temp_real_Variable_4, enum class EFrameAlignment Temp_byte_Variable_6, enum class EFrameAlignment Temp_byte_Variable_7, double Temp_real_Variable_5, enum class EFrameAlignment Temp_byte_Variable_8, double Temp_real_Variable_6, enum class EFrameAlignment Temp_byte_Variable_9, double Temp_real_Variable_7, enum class EFrameAlignment Temp_byte_Variable_10, double Temp_real_Variable_8, enum class EFrameAlignment Temp_byte_Variable_11, double Temp_real_Variable_9, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, const struct FLinearColor& K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, double Temp_real_Variable_10, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, TArray<class USizeBox*>& K2Node_MakeArray_Array, class USizeBox* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double K2Node_Select_Default_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_Divide_DoubleDouble_ReturnValue_5, double K2Node_Select_Default_5, double K2Node_Select_Default_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double K2Node_Select_Default_7, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_7, double CallFunc_Divide_DoubleDouble_ReturnValue_6, double K2Node_Select_Default_8, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Divide_DoubleDouble_ReturnValue_7, double CallFunc_Divide_DoubleDouble_ReturnValue_8, double K2Node_Select_Default_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double K2Node_Select_Default_10, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_10, double CallFunc_Divide_DoubleDouble_ReturnValue_9, double CallFunc_Divide_DoubleDouble_ReturnValue_10, double K2Node_Select_Default_11, double K2Node_Select_Default_12, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_11, enum class EFrameAlignment Temp_byte_Variable_12, double K2Node_Select_Default_13, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_12, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, bool CallFunc_Less_DoubleDouble_ReturnValue, double K2Node_Select_Default_14, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Frame_C", "ExecuteUbergraph_WB_Frame");

	Params::UWB_Frame_C_ExecuteUbergraph_WB_Frame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGlobalColorByType_ReturnValue = CallFunc_GetGlobalColorByType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_4 = CallFunc_MakeVector2D_ReturnValue_4;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_4 = CallFunc_Divide_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_5 = CallFunc_Divide_DoubleDouble_ReturnValue_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_MakeVector2D_ReturnValue_5 = CallFunc_MakeVector2D_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_MakeVector2D_ReturnValue_6 = CallFunc_MakeVector2D_ReturnValue_6;
	Parms.CallFunc_MakeVector2D_ReturnValue_7 = CallFunc_MakeVector2D_ReturnValue_7;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_6 = CallFunc_Divide_DoubleDouble_ReturnValue_6;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_MakeVector2D_ReturnValue_8 = CallFunc_MakeVector2D_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_MakeVector2D_ReturnValue_9 = CallFunc_MakeVector2D_ReturnValue_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_7 = CallFunc_Divide_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_8 = CallFunc_Divide_DoubleDouble_ReturnValue_8;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_MakeVector2D_ReturnValue_10 = CallFunc_MakeVector2D_ReturnValue_10;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_9 = CallFunc_Divide_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_10 = CallFunc_Divide_DoubleDouble_ReturnValue_10;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_MakeVector2D_ReturnValue_11 = CallFunc_MakeVector2D_ReturnValue_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.CallFunc_MakeVector2D_ReturnValue_12 = CallFunc_MakeVector2D_ReturnValue_12;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


