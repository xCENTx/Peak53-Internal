#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKGameInstance.BP_SGKGameInstance_C
// (None)

class UClass* UBP_SGKGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKGameInstance_C");

	return Clss;
}


// BP_SGKGameInstance_C BP_SGKGameInstance.Default__BP_SGKGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SGKGameInstance_C* UBP_SGKGameInstance_C::GetDefaultObj()
{
	static class UBP_SGKGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SGKGameInstance_C*>(UBP_SGKGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK AimedSense
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AimedSense                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_AimedSense(double* AimedSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK AimedSense");

	Params::UBP_SGKGameInstance_C_SGK_AimedSense_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AimedSense != nullptr)
		*AimedSense = Parms.AimedSense;

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK MouseSense
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MouseSense                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_MouseSense(double* MouseSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK MouseSense");

	Params::UBP_SGKGameInstance_C_SGK_MouseSense_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MouseSense != nullptr)
		*MouseSense = Parms.MouseSense;

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK Options Save
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C*   Settings                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_Options_Save(class UBP_SGKSettingsSaveData_C** Settings, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK Options Save");

	Params::UBP_SGKGameInstance_C_SGK_Options_Save_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Settings != nullptr)
		*Settings = Parms.Settings;

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetMenuOpenedLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuOpenedLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_GetMenuOpenedLevel(bool* MenuOpenedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK GetMenuOpenedLevel");

	Params::UBP_SGKGameInstance_C_SGK_GetMenuOpenedLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuOpenedLevel != nullptr)
		*MenuOpenedLevel = Parms.MenuOpenedLevel;

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetSaveGameSlotName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveGameSlotName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_GetSaveGameSlotName(class FString* SaveGameSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK GetSaveGameSlotName");

	Params::UBP_SGKGameInstance_C_SGK_GetSaveGameSlotName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SaveGameSlotName != nullptr)
		*SaveGameSlotName = std::move(Parms.SaveGameSlotName);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetLoadSaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LoadSaveGame                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_GetLoadSaveGame(bool* LoadSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK GetLoadSaveGame");

	Params::UBP_SGKGameInstance_C_SGK_GetLoadSaveGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LoadSaveGame != nullptr)
		*LoadSaveGame = Parms.LoadSaveGame;

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.DeleteOutfit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OutfitName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USg_all_lodout_C*            K2Node_DynamicCast_AsSg_All_Lodout                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::DeleteOutfit(const class FString& OutfitName, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class USg_all_lodout_C* K2Node_DynamicCast_AsSg_All_Lodout, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SaveGameToSlot_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "DeleteOutfit");

	Params::UBP_SGKGameInstance_C_DeleteOutfit_Params Parms{};

	Parms.OutfitName = OutfitName;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsSg_All_Lodout = K2Node_DynamicCast_AsSg_All_Lodout;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetSensitivity_Aimed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Aimed_Sense                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SetSensitivity_Aimed(double Aimed_Sense, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SetSensitivity_Aimed");

	Params::UBP_SGKGameInstance_C_SetSensitivity_Aimed_Params Parms{};

	Parms.Aimed_Sense = Aimed_Sense;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.Set Sensitivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MouseSense                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::Set_Sensitivity(double MouseSense, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "Set Sensitivity");

	Params::UBP_SGKGameInstance_C_Set_Sensitivity_Params Parms{};

	Parms.MouseSense = MouseSense;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemSetCurrentLoadedLoadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USg_lodout_C*                CurrentLoadedLoadout                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ABP_EquipmentCharacter_C*    CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::NewEquipmentSystemSetCurrentLoadedLoadout(class USg_lodout_C* CurrentLoadedLoadout, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ABP_EquipmentCharacter_C* CallFunc_GetActorOfClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "NewEquipmentSystemSetCurrentLoadedLoadout");

	Params::UBP_SGKGameInstance_C_NewEquipmentSystemSetCurrentLoadedLoadout_Params Parms{};

	Parms.CurrentLoadedLoadout = CurrentLoadedLoadout;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemGetAllLodouts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Output_Get                                                       (Parm, OutParm)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USg_all_lodout_C*            K2Node_DynamicCast_AsSg_All_Lodout                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::NewEquipmentSystemGetAllLodouts(TArray<class FString>* Output_Get, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class USg_all_lodout_C* K2Node_DynamicCast_AsSg_All_Lodout, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "NewEquipmentSystemGetAllLodouts");

	Params::UBP_SGKGameInstance_C_NewEquipmentSystemGetAllLodouts_Params Parms{};

	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsSg_All_Lodout = K2Node_DynamicCast_AsSg_All_Lodout;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = std::move(Parms.Output_Get);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemLoadLodout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USg_lodout_C*                K2Node_DynamicCast_AsSg_Lodout                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::NewEquipmentSystemLoadLodout(const class FString& SlotName, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class USg_lodout_C* K2Node_DynamicCast_AsSg_Lodout, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "NewEquipmentSystemLoadLodout");

	Params::UBP_SGKGameInstance_C_NewEquipmentSystemLoadLodout_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsSg_Lodout = K2Node_DynamicCast_AsSg_Lodout;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemSaveLodout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InputPin                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPeak53Teams            Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentEquipment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class USg_lodout_C*                K2Node_DynamicCast_AsSg_Lodout                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// class USg_lodout_C*                CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USg_all_lodout_C*            CallFunc_CreateSaveGameObject_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USg_all_lodout_C*            K2Node_DynamicCast_AsSg_All_Lodout                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::NewEquipmentSystemSaveLodout(const class FString& InputPin, const class FString& Name, enum class EPeak53Teams Team, const class FString& CurrentEquipment, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_SaveGameToSlot_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class USg_lodout_C* K2Node_DynamicCast_AsSg_Lodout, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue_5, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Conv_StringToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class FText CallFunc_Conv_StringToText_ReturnValue_7, class USg_lodout_C* CallFunc_CreateSaveGameObject_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_SaveGameToSlot_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, class USg_all_lodout_C* CallFunc_CreateSaveGameObject_ReturnValue_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue_1, class USg_all_lodout_C* K2Node_DynamicCast_AsSg_All_Lodout, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue_2, bool CallFunc_SaveGameToSlot_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "NewEquipmentSystemSaveLodout");

	Params::UBP_SGKGameInstance_C_NewEquipmentSystemSaveLodout_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.Name = Name;
	Parms.Team = Team;
	Parms.CurrentEquipment = CurrentEquipment;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsSg_Lodout = K2Node_DynamicCast_AsSg_Lodout;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_1 = CallFunc_SaveGameToSlot_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_1 = CallFunc_CreateSaveGameObject_ReturnValue_1;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue_1 = CallFunc_LoadGameFromSlot_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSg_All_Lodout = K2Node_DynamicCast_AsSg_All_Lodout;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_2 = CallFunc_SaveGameToSlot_ReturnValue_2;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_3 = CallFunc_SaveGameToSlot_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.isSteamLoggedIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSteamID_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::IsSteamLoggedIn(bool* NewParam, const class FString& CallFunc_BreakSteamID_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "isSteamLoggedIn");

	Params::UBP_SGKGameInstance_C_IsSteamLoggedIn_Params Parms{};

	Parms.CallFunc_BreakSteamID_ReturnValue = CallFunc_BreakSteamID_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnRep_PlayerTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnRep_PlayerTeam(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnRep_PlayerTeam");

	Params::UBP_SGKGameInstance_C_OnRep_PlayerTeam_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnRep_Loadout
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_CraftingCost>     K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FS_CraftingCost>     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FS_StartingWeaponItem>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<struct FS_StartingWeaponItem>K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnRep_Loadout(TArray<struct FS_CraftingCost>& K2Node_MakeArray_Array, TArray<struct FS_CraftingCost>& K2Node_MakeArray_Array_1, TArray<struct FS_StartingWeaponItem>& K2Node_MakeArray_Array_2, TArray<struct FS_StartingWeaponItem>& K2Node_MakeArray_Array_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnRep_Loadout");

	Params::UBP_SGKGameInstance_C_OnRep_Loadout_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnRep_PlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnRep_PlayerName(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnRep_PlayerName");

	Params::UBP_SGKGameInstance_C_OnRep_PlayerName_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadControls
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UInputMappingContext>NewLocalVar_0                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          SaveL                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                KeyNamesL                                                        (Edit, BlueprintVisible)
// TArray<struct FKey>                KeyMappingsL                                                     (Edit, BlueprintVisible)
// class UInputMappingContext*        MappingContextL                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   KeyL                                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlFunction_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ControlsSave             CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputMappingContext*        K2Node_DynamicCast_AsInput_Mapping_Context                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   CallFunc_MapToKey_NewKey                                         (ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          K2Node_DynamicCast_AsBP_Control_Saves                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::LoadControls(TSoftObjectPtr<class UInputMappingContext> NewLocalVar_0, class UBP_ControlSaves_C* SaveL, const TArray<class FName>& KeyNamesL, const TArray<struct FKey>& KeyMappingsL, class UInputMappingContext* MappingContextL, const struct FEnhancedActionKeyMapping& KeyL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_ControlFunction_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_ControlsSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UInputMappingContext* K2Node_DynamicCast_AsInput_Mapping_Context, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FKey& CallFunc_Array_Get_Item_2, const struct FEnhancedActionKeyMapping& CallFunc_MapToKey_NewKey, int32 CallFunc_Array_Add_ReturnValue, class UBP_ControlSaves_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_ControlSaves_C* K2Node_DynamicCast_AsBP_Control_Saves, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "LoadControls");

	Params::UBP_SGKGameInstance_C_LoadControls_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.SaveL = SaveL;
	Parms.KeyNamesL = KeyNamesL;
	Parms.KeyMappingsL = KeyMappingsL;
	Parms.MappingContextL = MappingContextL;
	Parms.KeyL = KeyL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsInput_Mapping_Context = K2Node_DynamicCast_AsInput_Mapping_Context;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_MapToKey_NewKey = CallFunc_MapToKey_NewKey;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Control_Saves = K2Node_DynamicCast_AsBP_Control_Saves;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_GameSettings             GameSettings                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SetGameSettings(const struct FS_GameSettings& GameSettings, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SetGameSettings");

	Params::UBP_SGKGameInstance_C_SetGameSettings_Params Parms{};

	Parms.GameSettings = GameSettings;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.Save Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::Save_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "Save Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSettingsSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSettingsSaveData_C*   K2Node_DynamicCast_AsBP_SGKSettings_Save_Data                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSettingsSaveData_C*   CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::LoadSettingsSave(class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_SGKSettingsSaveData_C* K2Node_DynamicCast_AsBP_SGKSettings_Save_Data, bool K2Node_DynamicCast_bSuccess, class UBP_SGKSettingsSaveData_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "LoadSettingsSave");

	Params::UBP_SGKGameInstance_C_LoadSettingsSave_Params Parms{};

	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKSettings_Save_Data = K2Node_DynamicCast_AsBP_SGKSettings_Save_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_SoundVolumes          Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewVolumeL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Ambient_8_704CF1174E3EEFAA803B68807EE8E2EF_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Music_9_65C93E784EBDC128CFA34C9A243A0460_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Effects_7_A414E0944D4AD3BF92749497EC954D87_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Master_5_3F5A0A8E436D7E190F8FCAA26EF0C639_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SetVolume(enum class E_SoundVolumes Sound, double Volume, double NewVolumeL, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_SetFieldsInStruct_Ambient_8_704CF1174E3EEFAA803B68807EE8E2EF_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast, float K2Node_SetFieldsInStruct_Music_9_65C93E784EBDC128CFA34C9A243A0460_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1, float K2Node_SetFieldsInStruct_Effects_7_A414E0944D4AD3BF92749497EC954D87_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2, float K2Node_SetFieldsInStruct_Master_5_3F5A0A8E436D7E190F8FCAA26EF0C639_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SetVolume");

	Params::UBP_SGKGameInstance_C_SetVolume_Params Parms{};

	Parms.Sound = Sound;
	Parms.Volume = Volume;
	Parms.NewVolumeL = NewVolumeL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SetFieldsInStruct_Ambient_8_704CF1174E3EEFAA803B68807EE8E2EF_ImplicitCast = K2Node_SetFieldsInStruct_Ambient_8_704CF1174E3EEFAA803B68807EE8E2EF_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Music_9_65C93E784EBDC128CFA34C9A243A0460_ImplicitCast = K2Node_SetFieldsInStruct_Music_9_65C93E784EBDC128CFA34C9A243A0460_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Effects_7_A414E0944D4AD3BF92749497EC954D87_ImplicitCast = K2Node_SetFieldsInStruct_Effects_7_A414E0944D4AD3BF92749497EC954D87_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_Master_5_3F5A0A8E436D7E190F8FCAA26EF0C639_ImplicitCast = K2Node_SetFieldsInStruct_Master_5_3F5A0A8E436D7E190F8FCAA26EF0C639_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSoundVolumes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_SetVolume_Volume_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetVolume_Volume_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetVolume_Volume_ImplicitCast_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetVolume_Volume_ImplicitCast_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::LoadSoundVolumes(double CallFunc_SetVolume_Volume_ImplicitCast, double CallFunc_SetVolume_Volume_ImplicitCast_1, double CallFunc_SetVolume_Volume_ImplicitCast_2, double CallFunc_SetVolume_Volume_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "LoadSoundVolumes");

	Params::UBP_SGKGameInstance_C_LoadSoundVolumes_Params Parms{};

	Parms.CallFunc_SetVolume_Volume_ImplicitCast = CallFunc_SetVolume_Volume_ImplicitCast;
	Parms.CallFunc_SetVolume_Volume_ImplicitCast_1 = CallFunc_SetVolume_Volume_ImplicitCast_1;
	Parms.CallFunc_SetVolume_Volume_ImplicitCast_2 = CallFunc_SetVolume_Volume_ImplicitCast_2;
	Parms.CallFunc_SetVolume_Volume_ImplicitCast_3 = CallFunc_SetVolume_Volume_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_069584F441ED12747510728B8C76FB57
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamInventoryRequestPricesResultData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnCallback_069584F441ED12747510728B8C76FB57(struct FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_069584F441ED12747510728B8C76FB57");

	Params::UBP_SGKGameInstance_C_OnCallback_069584F441ED12747510728B8C76FB57_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_1231C0F74511A59F79CDB49F0BADED12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnCallback_1231C0F74511A59F79CDB49F0BADED12(const class FString& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_1231C0F74511A59F79CDB49F0BADED12");

	Params::UBP_SGKGameInstance_C_OnCallback_1231C0F74511A59F79CDB49F0BADED12_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_90EF9AE24532E3D2476B03B876BA8C19
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnCallback_90EF9AE24532E3D2476B03B876BA8C19(const class FString& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_90EF9AE24532E3D2476B03B876BA8C19");

	Params::UBP_SGKGameInstance_C_OnCallback_90EF9AE24532E3D2476B03B876BA8C19_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_B3258AC540506850B835529655447132
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnCallback_B3258AC540506850B835529655447132(const class FString& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_B3258AC540506850B835529655447132");

	Params::UBP_SGKGameInstance_C_OnCallback_B3258AC540506850B835529655447132_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnFailure_8034962C4E605A797BB8B4949077C243
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnFailure_8034962C4E605A797BB8B4949077C243()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnFailure_8034962C4E605A797BB8B4949077C243");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSuccess_8034962C4E605A797BB8B4949077C243
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnSuccess_8034962C4E605A797BB8B4949077C243()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnSuccess_8034962C4E605A797BB8B4949077C243");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnFailure_E70A373D4A015941F596A2B17B46C470
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnFailure_E70A373D4A015941F596A2B17B46C470()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnFailure_E70A373D4A015941F596A2B17B46C470");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSuccess_E70A373D4A015941F596A2B17B46C470
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnSuccess_E70A373D4A015941F596A2B17B46C470()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnSuccess_E70A373D4A015941F596A2B17B46C470");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnFailure_CED4DFDD4B22C3388B5C6E92B0A26220
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnFailure_CED4DFDD4B22C3388B5C6E92B0A26220()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnFailure_CED4DFDD4B22C3388B5C6E92B0A26220");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSuccess_CED4DFDD4B22C3388B5C6E92B0A26220
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnSuccess_CED4DFDD4B22C3388B5C6E92B0A26220()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnSuccess_CED4DFDD4B22C3388B5C6E92B0A26220");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_0ECF859444EF16DB985F5E907E8F0C73
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnCallback_0ECF859444EF16DB985F5E907E8F0C73()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_0ECF859444EF16DB985F5E907E8F0C73");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_80E552D645B4023AB36CEC8A0F68D1A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnCallback_80E552D645B4023AB36CEC8A0F68D1A9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_80E552D645B4023AB36CEC8A0F68D1A9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_1C364D2C4A93FF1D4F3E77961B248B86
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardFindResult      Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnCallback_1C364D2C4A93FF1D4F3E77961B248B86(struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_1C364D2C4A93FF1D4F3E77961B248B86");

	Params::UBP_SGKGameInstance_C_OnCallback_1C364D2C4A93FF1D4F3E77961B248B86_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_9111D06146DE5B2D17A2FBA5C69C4B88
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloadedForUsersData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnCallback_9111D06146DE5B2D17A2FBA5C69C4B88(struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnCallback_9111D06146DE5B2D17A2FBA5C69C4B88");

	Params::UBP_SGKGameInstance_C_OnCallback_9111D06146DE5B2D17A2FBA5C69C4B88_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSteamInventoryFullUpdate_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::OnSteamInventoryFullUpdate_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnSteamInventoryFullUpdate_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSteamStartPurchaseResult
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamInventoryStartPurchaseResultData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SGKGameInstance_C::OnSteamStartPurchaseResult(struct FSteamInventoryStartPurchaseResult& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnSteamStartPurchaseResult");

	Params::UBP_SGKGameInstance_C_OnSteamStartPurchaseResult_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.RequestSteamItemPrices
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::RequestSteamItemPrices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "RequestSteamItemPrices");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.BuyItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Price                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::BuyItem(int32 Item, const class FString& Price, const class FString& ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "BuyItem");

	Params::UBP_SGKGameInstance_C_BuyItem_Params Parms{};

	Parms.Item = Item;
	Parms.Price = Price;
	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnMicroTxnAuthorizationResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMicroTxnAuthorizationResponseInput                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SGKGameInstance_C::OnMicroTxnAuthorizationResponse(const struct FMicroTxnAuthorizationResponse& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnMicroTxnAuthorizationResponse");

	Params::UBP_SGKGameInstance_C_OnMicroTxnAuthorizationResponse_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetupPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::SetupPlayerName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SetupPlayerName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.CreateHost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LobbyName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              MaxPlayers                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::CreateHost(const class FString& LobbyName, const class FString& Map, int32 MaxPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "CreateHost");

	Params::UBP_SGKGameInstance_C_CreateHost_Params Parms{};

	Parms.LobbyName = LobbyName;
	Parms.Map = Map;
	Parms.MaxPlayers = MaxPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.DestroySession
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::DestroySession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "DestroySession");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.UpdateSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::UpdateSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "UpdateSession");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ServerHearthbeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::ServerHearthbeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "ServerHearthbeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.StartServerHearthbeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::StartServerHearthbeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "StartServerHearthbeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.StopServerHearthbeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::StopServerHearthbeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "StopServerHearthbeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.RefreshSteamInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::RefreshSteamInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "RefreshSteamInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "HandleNetworkError");

	Params::UBP_SGKGameInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetMouseSense
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MouseSense                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetMouseSense(double MouseSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK SetMouseSense");

	Params::UBP_SGKGameInstance_C_SGK_SetMouseSense_Params Parms{};

	Parms.MouseSense = MouseSense;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETravelFailure          FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::HandleTravelError(enum class ETravelFailure FailureType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "HandleTravelError");

	Params::UBP_SGKGameInstance_C_HandleTravelError_Params Parms{};

	Parms.FailureType = FailureType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetAimedSense
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AimedSense                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetAimedSense(double AimedSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK SetAimedSense");

	Params::UBP_SGKGameInstance_C_SGK_SetAimedSense_Params Parms{};

	Parms.AimedSense = AimedSense;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ResetVarsMC
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::ResetVarsMC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "ResetVarsMC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ResetVariablesForNextGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::ResetVariablesForNextGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "ResetVariablesForNextGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.MicroTxnAuthorizationResponse_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMicroTxnAuthorizationResponseData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SGKGameInstance_C::MicroTxnAuthorizationResponse_Event(struct FMicroTxnAuthorizationResponse& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "MicroTxnAuthorizationResponse_Event");

	Params::UBP_SGKGameInstance_C_MicroTxnAuthorizationResponse_Event_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSteamInventoryFullUpdate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamInventoryFullUpdate   Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_SGKGameInstance_C::OnSteamInventoryFullUpdate(struct FSteamInventoryFullUpdate& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnSteamInventoryFullUpdate");

	Params::UBP_SGKGameInstance_C_OnSteamInventoryFullUpdate_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ToggleweaponBench
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::ToggleweaponBench()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "ToggleweaponBench");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetMenuOpenedLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuOpenedLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetMenuOpenedLevel(bool MenuOpenedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK SetMenuOpenedLevel");

	Params::UBP_SGKGameInstance_C_SGK_SetMenuOpenedLevel_Params Parms{};

	Parms.MenuOpenedLevel = MenuOpenedLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetLoadSaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LoadSaveGame                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetLoadSaveGame(bool LoadSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK SetLoadSaveGame");

	Params::UBP_SGKGameInstance_C_SGK_SetLoadSaveGame_Params Parms{};

	Parms.LoadSaveGame = LoadSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetSaveGameSlotName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveGameSlotName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetSaveGameSlotName(const class FString& SaveGameSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK SetSaveGameSlotName");

	Params::UBP_SGKGameInstance_C_SGK_SetSaveGameSlotName_Params Parms{};

	Parms.SaveGameSlotName = SaveGameSlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKGameInstance_C::SGK_SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK SaveSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_SoundVolumes          Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::SGK_SetVolume(enum class E_SoundVolumes Sound, double Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "SGK SetVolume");

	Params::UBP_SGKGameInstance_C_SGK_SetVolume_Params Parms{};

	Parms.Sound = Sound;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ExecuteUbergraph_BP_SGKGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SoundVolumes          K2Node_Event_Sound                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Volume                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_data_5                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_error_window_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_error_window_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUser*                       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardFindResult      K2Node_CustomEvent_data_4                                        (ConstParm, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardFindResult      Temp_struct_Variable                                             (NoDestructor)
// class USteamCoreUserStatsAsyncActionFindLeaderboard*CallFunc_FindLeaderboardAsync_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardScoresDownloadedForUsersK2Node_CustomEvent_data_3                                        (ConstParm, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardScoresDownloadedForUsersTemp_struct_Variable_1                                           (NoDestructor)
// struct FSteamLeaderboardEntry      CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry          (NoDestructor)
// TArray<int32>                      CallFunc_GetDownloadedLeaderboardEntry_outDetails                (ReferenceParm)
// bool                               CallFunc_GetDownloadedLeaderboardEntry_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamInventoryStartPurchaseResultK2Node_CustomEvent_data_2                                        (ConstParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FSteamItemDef>       CallFunc_GetItemsWithPrices_ItemDefs                             (ReferenceParm)
// TArray<int32>                      CallFunc_GetItemsWithPrices_Prices                               (ReferenceParm)
// TArray<int32>                      CallFunc_GetItemsWithPrices_BasePrices                           (ReferenceParm)
// bool                               CallFunc_GetItemsWithPrices_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FindJsonString_Value                                    (ZeroConstructor, HasGetValueTypeHash)
// enum class ESteamJsonResult        CallFunc_FindJsonString_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Price                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ItemName                                      (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FString                      CallFunc_MakeTransactionID_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectKey_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetProjectAppID_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadItemDefinitions_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSteamID_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// struct FMicroTxnAuthorizationResponseK2Node_CustomEvent_Input                                         (None)
// class FString                      CallFunc_GetProjectKey_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class USteamCoreWebAsyncActionFinalizeTxn*CallFunc_FinalizeTxnAsync_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectKey_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetProjectAppID_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USteamCoreWebAsyncActionInitTxn*CallFunc_InitTxnAsync_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_LobbyName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Map                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxPlayers                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSteamID_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class USteamCoreWebAsyncActionAddItem*CallFunc_AddItemAsync_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSteamSessionSetting        CallFunc_MakeString_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersonaName_Pure_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FSteamSessionSetting        CallFunc_MakeBool_ReturnValue                                    (None)
// struct FSteamSessionSearchSetting  CallFunc_MakeSearchString_ReturnValue                            (None)
// TMap<class FString, struct FSteamSessionSetting>K2Node_MakeMap_Map                                               (None)
// class USteamCoreCreateSession*     CallFunc_CreateSteamCoreSession_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSteamSessionSearchSetting  CallFunc_MakeSearchBool_ReturnValue                              (None)
// TMap<class FString, struct FSteamSessionSearchSetting>K2Node_MakeMap_Map_1                                             (None)
// class USteamCoreUpdateSession*     CallFunc_UpdateSteamCoreSession_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamSessionSearchSetting  CallFunc_MakeSearchString_ReturnValue_1                          (None)
// struct FSteamSessionSearchSetting  CallFunc_MakeSearchBool_ReturnValue_1                            (None)
// TMap<class FString, struct FSteamSessionSearchSetting>K2Node_MakeMap_Map_2                                             (None)
// struct FSteamInventoryResult       CallFunc_GetAllItems_Handle                                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAllItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USteamCoreUpdateSession*     CallFunc_UpdateSteamCoreSession_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetworkFailure         K2Node_Event_FailureType_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_Event_MouseSense                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETravelFailure          K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USteamCoreInventoryAsyncActionRequestPricesResult*CallFunc_RequestPricesAsync_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamInventoryRequestPricesResultTemp_struct_Variable_2                                           (None)
// class FString                      K2Node_CustomEvent_data_6                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_AimedSense                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get              (ReferenceParm)
// struct FMicroTxnAuthorizationResponseK2Node_CustomEvent_data_1                                        (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FindJsonString_Value_1                                  (ZeroConstructor, HasGetValueTypeHash)
// enum class ESteamJsonResult        CallFunc_FindJsonString_Result_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamInventoryFullUpdate   K2Node_CustomEvent_data                                          (ConstParm, NoDestructor)
// TArray<struct FSteamItemDetails>   CallFunc_GetResultItems_Items                                    (ReferenceParm)
// bool                               CallFunc_GetResultItems_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamItemDetails           CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemDefinitionProperty_Value                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemDefinitionProperty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSteamID>            K2Node_MakeArray_Array_6                                         (ReferenceParm)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers*CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// struct FSteamInventoryRequestPricesResultK2Node_CustomEvent_data_8                                        (ConstParm)
// bool                               K2Node_CustomEvent_bWasSuccessful_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isSteamLoggedIn_NewParam                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSteamID                    CallFunc_GetSteamID_ReturnValue                                  (NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_data_7                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSteamItemDef               CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_8                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// bool                               K2Node_Event_MenuOpenedLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_LoadSaveGame                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SaveGameSlotName                                    (ZeroConstructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::ExecuteUbergraph_BP_SGKGameInstance(int32 EntryPoint, enum class E_SoundVolumes K2Node_Event_Sound, double K2Node_Event_Volume, const class FString& K2Node_CustomEvent_data_5, bool K2Node_CustomEvent_bWasSuccessful_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UW_error_window_C* CallFunc_Create_ReturnValue, class UW_error_window_C* CallFunc_Create_ReturnValue_1, class UUser* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UInventory* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UInventory* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FLeaderboardFindResult& K2Node_CustomEvent_data_4, bool K2Node_CustomEvent_bWasSuccessful_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Variable_1, const struct FLeaderboardFindResult& Temp_struct_Variable, class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue, const struct FLeaderboardScoresDownloadedForUsers& K2Node_CustomEvent_data_3, bool K2Node_CustomEvent_bWasSuccessful, bool Temp_bool_Variable_2, const struct FLeaderboardScoresDownloadedForUsers& Temp_struct_Variable_1, const struct FSteamLeaderboardEntry& CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry, TArray<int32>& CallFunc_GetDownloadedLeaderboardEntry_outDetails, bool CallFunc_GetDownloadedLeaderboardEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSteamInventoryStartPurchaseResult& K2Node_CustomEvent_data_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, TArray<struct FSteamItemDef>& CallFunc_GetItemsWithPrices_ItemDefs, TArray<int32>& CallFunc_GetItemsWithPrices_Prices, TArray<int32>& CallFunc_GetItemsWithPrices_BasePrices, bool CallFunc_GetItemsWithPrices_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& Temp_string_Variable_1, const class FString& CallFunc_FindJsonString_Value, enum class ESteamJsonResult CallFunc_FindJsonString_Result, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 K2Node_CustomEvent_Item, const class FString& K2Node_CustomEvent_Price, const class FString& K2Node_CustomEvent_ItemName, TArray<class FString>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<int32>& K2Node_MakeArray_Array_2, const class FString& CallFunc_MakeTransactionID_ReturnValue, const class FString& CallFunc_GetProjectKey_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, int32 CallFunc_GetProjectAppID_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LoadItemDefinitions_ReturnValue, const class FString& CallFunc_BreakSteamID_ReturnValue, const struct FMicroTxnAuthorizationResponse& K2Node_CustomEvent_Input, const class FString& CallFunc_GetProjectKey_ReturnValue_1, class USteamCoreWebAsyncActionFinalizeTxn* CallFunc_FinalizeTxnAsync_ReturnValue, const class FString& CallFunc_GetProjectKey_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetProjectAppID_ReturnValue_1, class USteamCoreWebAsyncActionInitTxn* CallFunc_InitTxnAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& K2Node_CustomEvent_LobbyName, const class FString& K2Node_CustomEvent_Map, int32 K2Node_CustomEvent_MaxPlayers, const class FString& CallFunc_BreakSteamID_ReturnValue_1, class USteamCoreWebAsyncActionAddItem* CallFunc_AddItemAsync_ReturnValue, const struct FSteamSessionSetting& CallFunc_MakeString_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable_3, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_GetPersonaName_Pure_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSteamSessionSetting& CallFunc_MakeBool_ReturnValue, const struct FSteamSessionSearchSetting& CallFunc_MakeSearchString_ReturnValue, TMap<class FString, struct FSteamSessionSetting> K2Node_MakeMap_Map, class USteamCoreCreateSession* CallFunc_CreateSteamCoreSession_ReturnValue, const struct FSteamSessionSearchSetting& CallFunc_MakeSearchBool_ReturnValue, TMap<class FString, struct FSteamSessionSearchSetting> K2Node_MakeMap_Map_1, class USteamCoreUpdateSession* CallFunc_UpdateSteamCoreSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, const struct FSteamSessionSearchSetting& CallFunc_MakeSearchString_ReturnValue_1, const struct FSteamSessionSearchSetting& CallFunc_MakeSearchBool_ReturnValue_1, TMap<class FString, struct FSteamSessionSearchSetting> K2Node_MakeMap_Map_2, const struct FSteamInventoryResult& CallFunc_GetAllItems_Handle, bool CallFunc_GetAllItems_ReturnValue, class USteamCoreUpdateSession* CallFunc_UpdateSteamCoreSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, enum class ENetworkFailure K2Node_Event_FailureType_1, bool K2Node_Event_bIsServer, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, double K2Node_Event_MouseSense, enum class ETravelFailure K2Node_Event_FailureType, class USteamCoreInventoryAsyncActionRequestPricesResult* CallFunc_RequestPricesAsync_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_10, const struct FSteamInventoryRequestPricesResult& Temp_struct_Variable_2, const class FString& K2Node_CustomEvent_data_6, bool K2Node_CustomEvent_bWasSuccessful_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, double K2Node_Event_AimedSense, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue_1, TArray<class FString>& CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get, const struct FMicroTxnAuthorizationResponse& K2Node_CustomEvent_data_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const class FString& Temp_string_Variable_2, const class FString& CallFunc_FindJsonString_Value_1, enum class ESteamJsonResult CallFunc_FindJsonString_Result_1, bool Temp_bool_Variable_4, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 Temp_int_Array_Index_Variable, const struct FSteamInventoryFullUpdate& K2Node_CustomEvent_data, TArray<struct FSteamItemDetails>& CallFunc_GetResultItems_Items, bool CallFunc_GetResultItems_ReturnValue, const struct FSteamItemDetails& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetItemDefinitionProperty_Value, bool CallFunc_GetItemDefinitionProperty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_3, bool K2Node_DynamicCast_bSuccess_4, TArray<struct FSteamID>& K2Node_MakeArray_Array_6, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_11, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const struct FSteamInventoryRequestPricesResult& K2Node_CustomEvent_data_8, bool K2Node_CustomEvent_bWasSuccessful_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_isSteamLoggedIn_NewParam, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSteamID& CallFunc_GetSteamID_ReturnValue, const class FString& K2Node_CustomEvent_data_7, bool K2Node_CustomEvent_bWasSuccessful_4, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, const struct FSteamItemDef& CallFunc_Array_Get_Item_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_8, class FText CallFunc_Format_ReturnValue_3, bool K2Node_Event_MenuOpenedLevel, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool K2Node_Event_LoadSaveGame, const class FString& K2Node_Event_SaveGameSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "ExecuteUbergraph_BP_SGKGameInstance");

	Params::UBP_SGKGameInstance_C_ExecuteUbergraph_BP_SGKGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Sound = K2Node_Event_Sound;
	Parms.K2Node_Event_Volume = K2Node_Event_Volume;
	Parms.K2Node_CustomEvent_data_5 = K2Node_CustomEvent_data_5;
	Parms.K2Node_CustomEvent_bWasSuccessful_2 = K2Node_CustomEvent_bWasSuccessful_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CustomEvent_data_4 = K2Node_CustomEvent_data_4;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_FindLeaderboardAsync_ReturnValue = CallFunc_FindLeaderboardAsync_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_data_3 = K2Node_CustomEvent_data_3;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry = CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry;
	Parms.CallFunc_GetDownloadedLeaderboardEntry_outDetails = CallFunc_GetDownloadedLeaderboardEntry_outDetails;
	Parms.CallFunc_GetDownloadedLeaderboardEntry_ReturnValue = CallFunc_GetDownloadedLeaderboardEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_data_2 = K2Node_CustomEvent_data_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetItemsWithPrices_ItemDefs = CallFunc_GetItemsWithPrices_ItemDefs;
	Parms.CallFunc_GetItemsWithPrices_Prices = CallFunc_GetItemsWithPrices_Prices;
	Parms.CallFunc_GetItemsWithPrices_BasePrices = CallFunc_GetItemsWithPrices_BasePrices;
	Parms.CallFunc_GetItemsWithPrices_ReturnValue = CallFunc_GetItemsWithPrices_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_FindJsonString_Value = CallFunc_FindJsonString_Value;
	Parms.CallFunc_FindJsonString_Result = CallFunc_FindJsonString_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Price = K2Node_CustomEvent_Price;
	Parms.K2Node_CustomEvent_ItemName = K2Node_CustomEvent_ItemName;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_MakeTransactionID_ReturnValue = CallFunc_MakeTransactionID_ReturnValue;
	Parms.CallFunc_GetProjectKey_ReturnValue = CallFunc_GetProjectKey_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetProjectAppID_ReturnValue = CallFunc_GetProjectAppID_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LoadItemDefinitions_ReturnValue = CallFunc_LoadItemDefinitions_ReturnValue;
	Parms.CallFunc_BreakSteamID_ReturnValue = CallFunc_BreakSteamID_ReturnValue;
	Parms.K2Node_CustomEvent_Input = K2Node_CustomEvent_Input;
	Parms.CallFunc_GetProjectKey_ReturnValue_1 = CallFunc_GetProjectKey_ReturnValue_1;
	Parms.CallFunc_FinalizeTxnAsync_ReturnValue = CallFunc_FinalizeTxnAsync_ReturnValue;
	Parms.CallFunc_GetProjectKey_ReturnValue_2 = CallFunc_GetProjectKey_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetProjectAppID_ReturnValue_1 = CallFunc_GetProjectAppID_ReturnValue_1;
	Parms.CallFunc_InitTxnAsync_ReturnValue = CallFunc_InitTxnAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_LobbyName = K2Node_CustomEvent_LobbyName;
	Parms.K2Node_CustomEvent_Map = K2Node_CustomEvent_Map;
	Parms.K2Node_CustomEvent_MaxPlayers = K2Node_CustomEvent_MaxPlayers;
	Parms.CallFunc_BreakSteamID_ReturnValue_1 = CallFunc_BreakSteamID_ReturnValue_1;
	Parms.CallFunc_AddItemAsync_ReturnValue = CallFunc_AddItemAsync_ReturnValue;
	Parms.CallFunc_MakeString_ReturnValue = CallFunc_MakeString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_DestroySession_ReturnValue_1 = CallFunc_DestroySession_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetPersonaName_Pure_ReturnValue = CallFunc_GetPersonaName_Pure_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeBool_ReturnValue = CallFunc_MakeBool_ReturnValue;
	Parms.CallFunc_MakeSearchString_ReturnValue = CallFunc_MakeSearchString_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_CreateSteamCoreSession_ReturnValue = CallFunc_CreateSteamCoreSession_ReturnValue;
	Parms.CallFunc_MakeSearchBool_ReturnValue = CallFunc_MakeSearchBool_ReturnValue;
	Parms.K2Node_MakeMap_Map_1 = K2Node_MakeMap_Map_1;
	Parms.CallFunc_UpdateSteamCoreSession_ReturnValue = CallFunc_UpdateSteamCoreSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_MakeSearchString_ReturnValue_1 = CallFunc_MakeSearchString_ReturnValue_1;
	Parms.CallFunc_MakeSearchBool_ReturnValue_1 = CallFunc_MakeSearchBool_ReturnValue_1;
	Parms.K2Node_MakeMap_Map_2 = K2Node_MakeMap_Map_2;
	Parms.CallFunc_GetAllItems_Handle = CallFunc_GetAllItems_Handle;
	Parms.CallFunc_GetAllItems_ReturnValue = CallFunc_GetAllItems_ReturnValue;
	Parms.CallFunc_UpdateSteamCoreSession_ReturnValue_1 = CallFunc_UpdateSteamCoreSession_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_Event_FailureType_1 = K2Node_Event_FailureType_1;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.K2Node_Event_MouseSense = K2Node_Event_MouseSense;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.CallFunc_RequestPricesAsync_ReturnValue = CallFunc_RequestPricesAsync_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_CustomEvent_data_6 = K2Node_CustomEvent_data_6;
	Parms.K2Node_CustomEvent_bWasSuccessful_3 = K2Node_CustomEvent_bWasSuccessful_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_Event_AimedSense = K2Node_Event_AimedSense;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get = CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get;
	Parms.K2Node_CustomEvent_data_1 = K2Node_CustomEvent_data_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_FindJsonString_Value_1 = CallFunc_FindJsonString_Value_1;
	Parms.CallFunc_FindJsonString_Result_1 = CallFunc_FindJsonString_Result_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_data = K2Node_CustomEvent_data;
	Parms.CallFunc_GetResultItems_Items = CallFunc_GetResultItems_Items;
	Parms.CallFunc_GetResultItems_ReturnValue = CallFunc_GetResultItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetItemDefinitionProperty_Value = CallFunc_GetItemDefinitionProperty_Value;
	Parms.CallFunc_GetItemDefinitionProperty_ReturnValue = CallFunc_GetItemDefinitionProperty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_3 = K2Node_DynamicCast_AsBP_SGKGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue = CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.K2Node_CustomEvent_data_8 = K2Node_CustomEvent_data_8;
	Parms.K2Node_CustomEvent_bWasSuccessful_5 = K2Node_CustomEvent_bWasSuccessful_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_4 = K2Node_DynamicCast_AsBP_SGKGame_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_isSteamLoggedIn_NewParam = CallFunc_isSteamLoggedIn_NewParam;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetSteamID_ReturnValue = CallFunc_GetSteamID_ReturnValue;
	Parms.K2Node_CustomEvent_data_7 = K2Node_CustomEvent_data_7;
	Parms.K2Node_CustomEvent_bWasSuccessful_4 = K2Node_CustomEvent_bWasSuccessful_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_3 = CallFunc_Conv_IntToInt64_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_Event_MenuOpenedLevel = K2Node_Event_MenuOpenedLevel;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.K2Node_Event_LoadSaveGame = K2Node_Event_LoadSaveGame;
	Parms.K2Node_Event_SaveGameSlotName = K2Node_Event_SaveGameSlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnLoadLodoutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USg_lodout_C*                Lodout                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::OnLoadLodoutFinished__DelegateSignature(class USg_lodout_C* Lodout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnLoadLodoutFinished__DelegateSignature");

	Params::UBP_SGKGameInstance_C_OnLoadLodoutFinished__DelegateSignature_Params Parms{};

	Parms.Lodout = Lodout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnGetAllLodoutsFinished__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ResultAllLodouts                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SGKGameInstance_C::OnGetAllLodoutsFinished__DelegateSignature(TArray<class FString>& ResultAllLodouts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnGetAllLodoutsFinished__DelegateSignature");

	Params::UBP_SGKGameInstance_C_OnGetAllLodoutsFinished__DelegateSignature_Params Parms{};

	Parms.ResultAllLodouts = ResultAllLodouts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSteamInventoryFullUpdateFinished__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamItemDetails>   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SGKGameInstance_C::OnSteamInventoryFullUpdateFinished__DelegateSignature(TArray<struct FSteamItemDetails>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "OnSteamInventoryFullUpdateFinished__DelegateSignature");

	Params::UBP_SGKGameInstance_C_OnSteamInventoryFullUpdateFinished__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstance.BP_SGKGameInstance_C.GameSettingsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C*   SettingsSave                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SGKGameInstance_C::GameSettingsUpdated__DelegateSignature(class UBP_SGKSettingsSaveData_C* SettingsSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstance_C", "GameSettingsUpdated__DelegateSignature");

	Params::UBP_SGKGameInstance_C_GameSettingsUpdated__DelegateSignature_Params Parms{};

	Parms.SettingsSave = SettingsSave;

	UObject::ProcessEvent(Func, &Parms);

}

}


