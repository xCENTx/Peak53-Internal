#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_VendorTooltipEntry.BP_VendorTooltipEntry_C
// (None)

class UClass* UBP_VendorTooltipEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VendorTooltipEntry_C");

	return Clss;
}


// BP_VendorTooltipEntry_C BP_VendorTooltipEntry.Default__BP_VendorTooltipEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VendorTooltipEntry_C* UBP_VendorTooltipEntry_C::GetDefaultObj()
{
	static class UBP_VendorTooltipEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VendorTooltipEntry_C*>(UBP_VendorTooltipEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VendorTooltipEntry.BP_VendorTooltipEntry_C.InitializeEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UBP_VendorTooltipEntry_C::InitializeEntry(class FText ItemName, int32 Amount, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendorTooltipEntry_C", "InitializeEntry");

	Params::UBP_VendorTooltipEntry_C_InitializeEntry_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.Amount = Amount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


