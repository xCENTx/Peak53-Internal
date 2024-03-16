#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ExtCookingMenu.BP_ExtCookingMenu_C
// (None)

class UClass* UBP_ExtCookingMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExtCookingMenu_C");

	return Clss;
}


// BP_ExtCookingMenu_C BP_ExtCookingMenu.Default__BP_ExtCookingMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ExtCookingMenu_C* UBP_ExtCookingMenu_C::GetDefaultObj()
{
	static class UBP_ExtCookingMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ExtCookingMenu_C*>(UBP_ExtCookingMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK InvItemSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryItemIcon_C*>ItemInvWidgets                                                   (Parm, OutParm, ContainsInstancedReference)

void UBP_ExtCookingMenu_C::SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "SGK InvItemSlots");

	Params::UBP_ExtCookingMenu_C_SGK_InvItemSlots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemInvWidgets != nullptr)
		*ItemInvWidgets = std::move(Parms.ItemInvWidgets);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK CellSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_InventoryCell_C*> Cells                                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UBP_InventoryCell_C*> AllCellsL                                                        (Edit, BlueprintVisible, ContainsInstancedReference)

void UBP_ExtCookingMenu_C::SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells, const TArray<class UBP_InventoryCell_C*>& AllCellsL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "SGK CellSlots");

	Params::UBP_ExtCookingMenu_C_SGK_CellSlots_Params Parms{};

	Parms.AllCellsL = AllCellsL;

	UObject::ProcessEvent(Func, &Parms);

	if (Cells != nullptr)
		*Cells = std::move(Parms.Cells);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.UnPauseSingleSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Pause                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::UnPauseSingleSlot(int32 Index, bool Pause, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBP_CookingSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "UnPauseSingleSlot");

	Params::UBP_ExtCookingMenu_C_UnPauseSingleSlot_Params Parms{};

	Parms.Index = Index;
	Parms.Pause = Pause;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.UpdateWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        K2Node_Select_Default                                            (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::UpdateWeight(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "UpdateWeight");

	Params::UBP_ExtCookingMenu_C_UpdateWeight_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.UpdateCookingSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  CookingSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CookingSlotL                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::UpdateCookingSlot(const struct FS_InvSlot& CookingSlot, class UBP_CookingSlot_C* CookingSlotL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UBP_CookingSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "UpdateCookingSlot");

	Params::UBP_ExtCookingMenu_C_UpdateCookingSlot_Params Parms{};

	Parms.CookingSlot = CookingSlot;
	Parms.CookingSlotL = CookingSlotL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PauseCookingSlotTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CookingSlot              ConvertSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCookingSlot_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_FindCookingSlot_CookingSlot                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::PauseCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot, bool CallFunc_FindCookingSlot_ReturnValue, class UBP_CookingSlot_C* CallFunc_FindCookingSlot_CookingSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "PauseCookingSlotTimer");

	Params::UBP_ExtCookingMenu_C_PauseCookingSlotTimer_Params Parms{};

	Parms.ConvertSlot = ConvertSlot;
	Parms.CallFunc_FindCookingSlot_ReturnValue = CallFunc_FindCookingSlot_ReturnValue;
	Parms.CallFunc_FindCookingSlot_CookingSlot = CallFunc_FindCookingSlot_CookingSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ResumeCookingSlotTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CookingSlot              ConvertSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCookingSlot_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_FindCookingSlot_CookingSlot                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ResumeCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot, bool CallFunc_FindCookingSlot_ReturnValue, class UBP_CookingSlot_C* CallFunc_FindCookingSlot_CookingSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "ResumeCookingSlotTimer");

	Params::UBP_ExtCookingMenu_C_ResumeCookingSlotTimer_Params Parms{};

	Parms.ConvertSlot = ConvertSlot;
	Parms.CallFunc_FindCookingSlot_ReturnValue = CallFunc_FindCookingSlot_ReturnValue;
	Parms.CallFunc_FindCookingSlot_CookingSlot = CallFunc_FindCookingSlot_CookingSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.RestartCookingSlotTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CookingSlot              ConvertSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCookingSlot_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_FindCookingSlot_CookingSlot                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::RestartCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot, bool CallFunc_FindCookingSlot_ReturnValue, class UBP_CookingSlot_C* CallFunc_FindCookingSlot_CookingSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "RestartCookingSlotTimer");

	Params::UBP_ExtCookingMenu_C_RestartCookingSlotTimer_Params Parms{};

	Parms.ConvertSlot = ConvertSlot;
	Parms.CallFunc_FindCookingSlot_ReturnValue = CallFunc_FindCookingSlot_ReturnValue;
	Parms.CallFunc_FindCookingSlot_CookingSlot = CallFunc_FindCookingSlot_CookingSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PauseAllCookingSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::PauseAllCookingSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBP_CookingSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "PauseAllCookingSlots");

	Params::UBP_ExtCookingMenu_C_PauseAllCookingSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ResumeAllCookingSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ResumeAllCookingSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBP_CookingSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "ResumeAllCookingSlots");

	Params::UBP_ExtCookingMenu_C_ResumeAllCookingSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.StartCookingSlotTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CookingSlot              ConvertSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCookingSlot_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_FindCookingSlot_CookingSlot                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_StartTimer_Time_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::StartCookingSlotTimer(const struct FS_CookingSlot& ConvertSlot, bool CallFunc_FindCookingSlot_ReturnValue, class UBP_CookingSlot_C* CallFunc_FindCookingSlot_CookingSlot, double CallFunc_StartTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "StartCookingSlotTimer");

	Params::UBP_ExtCookingMenu_C_StartCookingSlotTimer_Params Parms{};

	Parms.ConvertSlot = ConvertSlot;
	Parms.CallFunc_FindCookingSlot_ReturnValue = CallFunc_FindCookingSlot_ReturnValue;
	Parms.CallFunc_FindCookingSlot_CookingSlot = CallFunc_FindCookingSlot_CookingSlot;
	Parms.CallFunc_StartTimer_Time_ImplicitCast = CallFunc_StartTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.FindCookingSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CookingSlot              ConvertSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CookingSlot                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           ArrayElementL                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ExtCookingMenu_C::FindCookingSlot(const struct FS_CookingSlot& ConvertSlot, class UBP_CookingSlot_C** CookingSlot, class UBP_CookingSlot_C* ArrayElementL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UBP_CookingSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "FindCookingSlot");

	Params::UBP_ExtCookingMenu_C_FindCookingSlot_Params Parms{};

	Parms.ConvertSlot = ConvertSlot;
	Parms.ArrayElementL = ArrayElementL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CookingSlot != nullptr)
		*CookingSlot = Parms.CookingSlot;

	return Parms.ReturnValue;

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ClearCurrentSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ClearCurrentSlots(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_CookingSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "ClearCurrentSlots");

	Params::UBP_ExtCookingMenu_C_ClearCurrentSlots_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.Get_OnButtonText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FButtonStyle                K2Node_Select_Default                                            (ConstParm)
// class FText                        K2Node_Select_Default_1                                          (None)

class FText UBP_ExtCookingMenu_C::Get_OnButtonText_Text_0(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, const struct FButtonStyle& K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "Get_OnButtonText_Text_0");

	Params::UBP_ExtCookingMenu_C_Get_OnButtonText_Text_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.InitizlizeCookingInvGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::InitizlizeCookingInvGrids(bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "InitizlizeCookingInvGrids");

	Params::UBP_ExtCookingMenu_C_InitizlizeCookingInvGrids_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructCookingSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LastIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartIndexL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UIIndexL                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           NewCookingSlotL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ArrayIndexL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CookingSlot              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemCookingRecipe_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CookingRecipe            CallFunc_SGK_ItemCookingRecipe_CookingRecipe                     (HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_2                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_4                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingSlot_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ConstructCookingSlots(int32 LastIndexL, int32 StartIndexL, int32 UIIndexL, class UBP_CookingSlot_C* NewCookingSlotL, int32 ArrayIndexL, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_CookingSlot& CallFunc_Array_Get_Item, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemCookingRecipe_ReturnValue, const struct FS_CookingRecipe& CallFunc_SGK_ItemCookingRecipe_CookingRecipe, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FS_InvSlot& CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue, class UBP_CookingSlot_C* CallFunc_Array_Get_Item_3, const struct FS_InvSlot& CallFunc_Array_Get_Item_4, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_CookingSlot_C* CallFunc_Create_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "ConstructCookingSlots");

	Params::UBP_ExtCookingMenu_C_ConstructCookingSlots_Params Parms{};

	Parms.LastIndexL = LastIndexL;
	Parms.StartIndexL = StartIndexL;
	Parms.UIIndexL = UIIndexL;
	Parms.NewCookingSlotL = NewCookingSlotL;
	Parms.ArrayIndexL = ArrayIndexL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemCookingRecipe_ReturnValue = CallFunc_SGK_ItemCookingRecipe_ReturnValue;
	Parms.CallFunc_SGK_ItemCookingRecipe_CookingRecipe = CallFunc_SGK_ItemCookingRecipe_CookingRecipe;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructFuelInvSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexL                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryItemIcon_C*     NewItemIconL                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryCell_C*         NewCellL                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              LoopIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryCell_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryItemIcon_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryItemIcon_C*     CallFunc_GetItemIconFromPool_ItemIcon                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryCell_C*         CallFunc_GetCellFromPool_Cell                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ConstructFuelInvSlots(int32 IndexL, class UBP_InventoryItemIcon_C* NewItemIconL, class UBP_InventoryCell_C* NewCellL, int32 LoopIndexL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_5, class UBP_InventoryCell_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UBP_InventoryItemIcon_C* CallFunc_GetItemIconFromPool_ItemIcon, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UBP_InventoryCell_C* CallFunc_GetCellFromPool_Cell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "ConstructFuelInvSlots");

	Params::UBP_ExtCookingMenu_C_ConstructFuelInvSlots_Params Parms{};

	Parms.IndexL = IndexL;
	Parms.NewItemIconL = NewItemIconL;
	Parms.NewCellL = NewCellL;
	Parms.LoopIndexL = LoopIndexL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_7 = CallFunc_Subtract_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.CallFunc_GetItemIconFromPool_ItemIcon = CallFunc_GetItemIconFromPool_ItemIcon;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_GetCellFromPool_Cell = CallFunc_GetCellFromPool_Cell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ConstructStorageInvSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InventoryItemIcon_C*     NewItemIconL                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryCell_C*         NewCellL                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              LoopIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryCell_C*         CallFunc_GetCellFromPool_Cell                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryCell_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryItemIcon_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryItemIcon_C*     CallFunc_GetItemIconFromPool_ItemIcon                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ConstructStorageInvSlots(class UBP_InventoryItemIcon_C* NewItemIconL, class UBP_InventoryCell_C* NewCellL, int32 LoopIndexL, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UBP_InventoryCell_C* CallFunc_GetCellFromPool_Cell, class UBP_InventoryCell_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, class UBP_InventoryItemIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UBP_InventoryItemIcon_C* CallFunc_GetItemIconFromPool_ItemIcon, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_6, int32 K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "ConstructStorageInvSlots");

	Params::UBP_ExtCookingMenu_C_ConstructStorageInvSlots_Params Parms{};

	Parms.NewItemIconL = NewItemIconL;
	Parms.NewCellL = NewCellL;
	Parms.LoopIndexL = LoopIndexL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCellFromPool_Cell = CallFunc_GetCellFromPool_Cell;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.CallFunc_GetItemIconFromPool_ItemIcon = CallFunc_GetItemIconFromPool_ItemIcon;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.SGK ConstructGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       GridInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "SGK ConstructGrid");

	Params::UBP_ExtCookingMenu_C_SGK_ConstructGrid_Params Parms{};

	Parms.GridInventory = GridInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "PreConstruct");

	Params::UBP_ExtCookingMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.InitializeExtCookingMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       CraftingInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::InitializeExtCookingMenu(class UBP_MasterInventory_C* CraftingInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "InitializeExtCookingMenu");

	Params::UBP_ExtCookingMenu_C_InitializeExtCookingMenu_Params Parms{};

	Parms.CraftingInventory = CraftingInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ExtCookingMenu_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExtCookingMenu.BP_ExtCookingMenu_C.ExecuteUbergraph_BP_ExtCookingMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       K2Node_Event_GridInventory                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       K2Node_CustomEvent_CraftingInventory                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingComponent_C*      K2Node_DynamicCast_AsBP_Cooking_Component                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ExtCookingMenu_C::ExecuteUbergraph_BP_ExtCookingMenu(int32 EntryPoint, class UBP_MasterInventory_C* K2Node_Event_GridInventory, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_MasterInventory_C* K2Node_CustomEvent_CraftingInventory, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_CookingComponent_C* K2Node_DynamicCast_AsBP_Cooking_Component, bool K2Node_DynamicCast_bSuccess, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExtCookingMenu_C", "ExecuteUbergraph_BP_ExtCookingMenu");

	Params::UBP_ExtCookingMenu_C_ExecuteUbergraph_BP_ExtCookingMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_GridInventory = K2Node_Event_GridInventory;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_CraftingInventory = K2Node_CustomEvent_CraftingInventory;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Cooking_Component = K2Node_DynamicCast_AsBP_Cooking_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


