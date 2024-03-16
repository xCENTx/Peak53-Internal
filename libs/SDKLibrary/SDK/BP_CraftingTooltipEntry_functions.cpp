#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C
// (None)

class UClass* UBP_CraftingTooltipEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CraftingTooltipEntry_C");

	return Clss;
}


// BP_CraftingTooltipEntry_C BP_CraftingTooltipEntry.Default__BP_CraftingTooltipEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CraftingTooltipEntry_C* UBP_CraftingTooltipEntry_C::GetDefaultObj()
{
	static class UBP_CraftingTooltipEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CraftingTooltipEntry_C*>(UBP_CraftingTooltipEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C.EntryCost
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_CraftingCost>     Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_CraftingTooltipEntry_C::EntryCost(TArray<struct FS_CraftingCost>& Array, int32 Index, class FText* Name, int32* Amount, const struct FS_CraftingCost& CallFunc_Array_Get_Item, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingTooltipEntry_C", "EntryCost");

	Params::UBP_CraftingTooltipEntry_C_EntryCost_Params Parms{};

	Parms.Array = Array;
	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C.InitializeEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingRecipe           Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsItemCost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_EntryCost_Name                                          (None)
// int32                              CallFunc_EntryCost_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_EntryCost_Name_1                                        (None)
// int32                              CallFunc_EntryCost_Amount_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UBP_CraftingTooltipEntry_C::InitializeEntry(const struct FS_CraftingRecipe& Recipe, int32 EntryIndex, bool IsItemCost, class FText CallFunc_EntryCost_Name, int32 CallFunc_EntryCost_Amount, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_EntryCost_Name_1, int32 CallFunc_EntryCost_Amount_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingTooltipEntry_C", "InitializeEntry");

	Params::UBP_CraftingTooltipEntry_C_InitializeEntry_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.EntryIndex = EntryIndex;
	Parms.IsItemCost = IsItemCost;
	Parms.CallFunc_EntryCost_Name = CallFunc_EntryCost_Name;
	Parms.CallFunc_EntryCost_Amount = CallFunc_EntryCost_Amount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EntryCost_Name_1 = CallFunc_EntryCost_Name_1;
	Parms.CallFunc_EntryCost_Amount_1 = CallFunc_EntryCost_Amount_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


