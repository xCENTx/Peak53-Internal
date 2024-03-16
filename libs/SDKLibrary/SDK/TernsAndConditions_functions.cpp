#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TernsAndConditions.TernsAndConditions_C
// (None)

class UClass* UTernsAndConditions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TernsAndConditions_C");

	return Clss;
}


// TernsAndConditions_C TernsAndConditions.Default__TernsAndConditions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTernsAndConditions_C* UTernsAndConditions_C::GetDefaultObj()
{
	static class UTernsAndConditions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTernsAndConditions_C*>(UTernsAndConditions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TernsAndConditions.TernsAndConditions_C.SaveUserAcceptedTerms
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTermsAndConditions_C*       TermsSave                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformUserName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTermsAndConditions_C*       K2Node_DynamicCast_AsTerms_and_Conditions                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTermsAndConditions_C*       CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTernsAndConditions_C::SaveUserAcceptedTerms(class UTermsAndConditions_C* TermsSave, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_GetPlatformUserName_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UTermsAndConditions_C* K2Node_DynamicCast_AsTerms_and_Conditions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UTermsAndConditions_C* CallFunc_CreateSaveGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TernsAndConditions_C", "SaveUserAcceptedTerms");

	Params::UTernsAndConditions_C_SaveUserAcceptedTerms_Params Parms{};

	Parms.TermsSave = TermsSave;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetPlatformUserName_ReturnValue = CallFunc_GetPlatformUserName_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsTerms_and_Conditions = K2Node_DynamicCast_AsTerms_and_Conditions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TernsAndConditions.TernsAndConditions_C.BndEvt__TernsAndConditions_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTernsAndConditions_C::BndEvt__TernsAndConditions_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TernsAndConditions_C", "BndEvt__TernsAndConditions_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TernsAndConditions.TernsAndConditions_C.BndEvt__TernsAndConditions_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTernsAndConditions_C::BndEvt__TernsAndConditions_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TernsAndConditions_C", "BndEvt__TernsAndConditions_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TernsAndConditions.TernsAndConditions_C.ExecuteUbergraph_TernsAndConditions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTernsAndConditions_C::ExecuteUbergraph_TernsAndConditions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TernsAndConditions_C", "ExecuteUbergraph_TernsAndConditions");

	Params::UTernsAndConditions_C_ExecuteUbergraph_TernsAndConditions_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TernsAndConditions.TernsAndConditions_C.OnUserAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTernsAndConditions_C::OnUserAccepted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TernsAndConditions_C", "OnUserAccepted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TernsAndConditions.TernsAndConditions_C.OnBackRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTernsAndConditions_C::OnBackRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TernsAndConditions_C", "OnBackRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


