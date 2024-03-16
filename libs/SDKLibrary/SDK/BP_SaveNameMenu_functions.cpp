#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_SaveNameMenu.BP_SaveNameMenu_C
// (None)

class UClass* UBP_SaveNameMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SaveNameMenu_C");

	return Clss;
}


// BP_SaveNameMenu_C BP_SaveNameMenu.Default__BP_SaveNameMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SaveNameMenu_C* UBP_SaveNameMenu_C::GetDefaultObj()
{
	static class UBP_SaveNameMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SaveNameMenu_C*>(UBP_SaveNameMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.ClearAreYouSureMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SaveNameMenu_C::ClearAreYouSureMenu(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "ClearAreYouSureMenu");

	Params::UBP_SaveNameMenu_C_ClearAreYouSureMenu_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.FindExistingSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   SaveMetaDataL                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SaveMetaData             CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveNameMenu_C::FindExistingSave(const class FString& SlotName, bool* SaveFound, class UBP_SGKSaveGameMetaData_C* SaveMetaDataL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "FindExistingSave");

	Params::UBP_SaveNameMenu_C_FindExistingSave_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.SaveMetaDataL = SaveMetaDataL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data = K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_SaveNameMenu_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "BndEvt__YesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.YesSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SaveNameMenu_C::YesSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "YesSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.NoSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SaveNameMenu_C::NoSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "NoSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_SaveNameMenu_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveNameMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "PreConstruct");

	Params::UBP_SaveNameMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.ExecuteUbergraph_BP_SaveNameMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FindExistingSave_SaveFound                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveNameMenu_C::ExecuteUbergraph_BP_SaveNameMenu(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_FindExistingSave_SaveFound, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "ExecuteUbergraph_BP_SaveNameMenu");

	Params::UBP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_FindExistingSave_SaveFound = CallFunc_FindExistingSave_SaveFound;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.CancelSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SaveNameMenu_C::CancelSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "CancelSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveNameMenu.BP_SaveNameMenu_C.SaveSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SaveNameMenu_C::SaveSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveNameMenu_C", "SaveSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


