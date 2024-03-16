#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Input_Gamepad.WB_Input_Gamepad_C
// (None)

class UClass* UWB_Input_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Input_Gamepad_C");

	return Clss;
}


// WB_Input_Gamepad_C WB_Input_Gamepad.Default__WB_Input_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Input_Gamepad_C* UWB_Input_Gamepad_C::GetDefaultObj()
{
	static class UWB_Input_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Input_Gamepad_C*>(UWB_Input_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Input_Gamepad.WB_Input_Gamepad_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPaintContext               InContext                                                        (Edit, BlueprintVisible, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DrawElement              CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetLocalTopLeft_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue_1                         (ConstParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetLocalTopLeft_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Input_Gamepad_C::OnPaint(struct FPaintContext& Context, const struct FPaintContext& InContext, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_DrawElement& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalTopLeft_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetLocalTopLeft_ReturnValue_1, TArray<struct FVector2D>& K2Node_MakeArray_Array, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Input_Gamepad_C", "OnPaint");

	Params::UWB_Input_Gamepad_C_OnPaint_Params Parms{};

	Parms.Context = Context;
	Parms.InContext = InContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_GetLocalTopLeft_ReturnValue = CallFunc_GetLocalTopLeft_ReturnValue;
	Parms.CallFunc_GetCachedGeometry_ReturnValue_1 = CallFunc_GetCachedGeometry_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalTopLeft_ReturnValue_1 = CallFunc_GetLocalTopLeft_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Input_Gamepad.WB_Input_Gamepad_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Input_Gamepad_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Input_Gamepad_C", "PreConstruct");

	Params::UWB_Input_Gamepad_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Input_Gamepad.WB_Input_Gamepad_C.ExecuteUbergraph_WB_Input_Gamepad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_1                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_2                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_3                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_4                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_5                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_6                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_7                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_8                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_9                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_10                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_11                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_12                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_DrawElement              K2Node_MakeStruct_S_DrawElement_13                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_DrawElement>      K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWB_Input_Gamepad_C::ExecuteUbergraph_WB_Input_Gamepad(int32 EntryPoint, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement, bool K2Node_Event_IsDesignTime, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_1, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_2, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_3, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_4, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_5, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_6, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_7, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_8, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_9, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_10, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_11, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_12, const struct FS_DrawElement& K2Node_MakeStruct_S_DrawElement_13, TArray<struct FS_DrawElement>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Input_Gamepad_C", "ExecuteUbergraph_WB_Input_Gamepad");

	Params::UWB_Input_Gamepad_C_ExecuteUbergraph_WB_Input_Gamepad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_S_DrawElement = K2Node_MakeStruct_S_DrawElement;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_S_DrawElement_1 = K2Node_MakeStruct_S_DrawElement_1;
	Parms.K2Node_MakeStruct_S_DrawElement_2 = K2Node_MakeStruct_S_DrawElement_2;
	Parms.K2Node_MakeStruct_S_DrawElement_3 = K2Node_MakeStruct_S_DrawElement_3;
	Parms.K2Node_MakeStruct_S_DrawElement_4 = K2Node_MakeStruct_S_DrawElement_4;
	Parms.K2Node_MakeStruct_S_DrawElement_5 = K2Node_MakeStruct_S_DrawElement_5;
	Parms.K2Node_MakeStruct_S_DrawElement_6 = K2Node_MakeStruct_S_DrawElement_6;
	Parms.K2Node_MakeStruct_S_DrawElement_7 = K2Node_MakeStruct_S_DrawElement_7;
	Parms.K2Node_MakeStruct_S_DrawElement_8 = K2Node_MakeStruct_S_DrawElement_8;
	Parms.K2Node_MakeStruct_S_DrawElement_9 = K2Node_MakeStruct_S_DrawElement_9;
	Parms.K2Node_MakeStruct_S_DrawElement_10 = K2Node_MakeStruct_S_DrawElement_10;
	Parms.K2Node_MakeStruct_S_DrawElement_11 = K2Node_MakeStruct_S_DrawElement_11;
	Parms.K2Node_MakeStruct_S_DrawElement_12 = K2Node_MakeStruct_S_DrawElement_12;
	Parms.K2Node_MakeStruct_S_DrawElement_13 = K2Node_MakeStruct_S_DrawElement_13;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


