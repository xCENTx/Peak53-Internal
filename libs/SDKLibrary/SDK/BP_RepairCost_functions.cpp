#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_RepairCost.BP_RepairCost_C
// (None)

class UClass* UBP_RepairCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RepairCost_C");

	return Clss;
}


// BP_RepairCost_C BP_RepairCost.Default__BP_RepairCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RepairCost_C* UBP_RepairCost_C::GetDefaultObj()
{
	static class UBP_RepairCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RepairCost_C*>(UBP_RepairCost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RepairCost.BP_RepairCost_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  K2Node_MakeStruct_S_InvItem                                      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_RepairCost_C::Initialize(const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RepairCost_C", "Initialize");

	Params::UBP_RepairCost_C_Initialize_Params Parms{};

	Parms.K2Node_MakeStruct_S_InvItem = K2Node_MakeStruct_S_InvItem;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


