#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C
// (None)

class UClass* UBP_BuildMenuCostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildMenuCostPanel_C");

	return Clss;
}


// BP_BuildMenuCostPanel_C BP_BuildMenuCostPanel.Default__BP_BuildMenuCostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildMenuCostPanel_C* UBP_BuildMenuCostPanel_C::GetDefaultObj()
{
	static class UBP_BuildMenuCostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildMenuCostPanel_C*>(UBP_BuildMenuCostPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.UpdateText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingCost             Cost                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              TotalAmountL                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_PlayerInventoryTotalItemAmount_TotalAmount              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem_1                                    (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UBP_BuildMenuCostPanel_C::UpdateText(struct FS_CraftingCost& Cost, int32 TotalAmountL, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, int32 CallFunc_PlayerInventoryTotalItemAmount_TotalAmount, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuCostPanel_C", "UpdateText");

	Params::UBP_BuildMenuCostPanel_C_UpdateText_Params Parms{};

	Parms.Cost = Cost;
	Parms.TotalAmountL = TotalAmountL;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_PlayerInventoryTotalItemAmount_TotalAmount = CallFunc_PlayerInventoryTotalItemAmount_TotalAmount;
	Parms.K2Node_MakeStruct_S_InvItem_1 = K2Node_MakeStruct_S_InvItem_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.InitializeCostPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingCost             Cost                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_BuildMenuCostPanel_C::InitializeCostPanel(const struct FS_CraftingCost& Cost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuCostPanel_C", "InitializeCostPanel");

	Params::UBP_BuildMenuCostPanel_C_InitializeCostPanel_Params Parms{};

	Parms.Cost = Cost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C.ExecuteUbergraph_BP_BuildMenuCostPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             K2Node_CustomEvent_Cost                                          (NoDestructor, HasGetValueTypeHash)

void UBP_BuildMenuCostPanel_C::ExecuteUbergraph_BP_BuildMenuCostPanel(int32 EntryPoint, const struct FS_CraftingCost& K2Node_CustomEvent_Cost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuCostPanel_C", "ExecuteUbergraph_BP_BuildMenuCostPanel");

	Params::UBP_BuildMenuCostPanel_C_ExecuteUbergraph_BP_BuildMenuCostPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Cost = K2Node_CustomEvent_Cost;

	UObject::ProcessEvent(Func, &Parms);

}

}


